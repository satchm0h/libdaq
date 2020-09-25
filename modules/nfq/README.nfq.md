NFQ Module
==========

A DAQ module built on top of the Linux netfilter packet filtering framework.
Specifically, the module operates on packets queued by the kernel packet filter
for userspace consumption via the NFQUEUE mechanism, usually controlled by
iptables rules.  The input specification given to the DAQ module should be the
integer value of the queue number to receive and process packets on.  You can optionally provide a network namespace path to be able to receive and process packets from a different network namespace, such as from a docker or kubernetes container.

Packets will come up to the application with a datalink type of "RAW", which
means the packet data begins with the IP header.

The maximum netfilter queue length defaults to 1024 and can be overridden with
the 'queue_maxlen' variable.

The normal behavior for netfilter queues is to drop any packets that cannot fit
in the target queue, usually due to the userspace application being overwhelmed.
This behavior can be modified to instead bypass the queue if the 'fail_open'
variable is given to the DAQ module.

The NFQ module uses the modern minimalistic abstraction layer library for
netfilter called libmnl.  It is available in the package repositories of most
modern Linux distributions.

Note: Packets will come up from the kernel defragmented, so a snaplen
approaching 64k is suggested.

Example Setup
-------------

The following steps set up a Linux system with two data interfaces (eth1 and
eth2) and configures them as two forwarding (routing) interfaces with both IPv4
and IPv6 addresses.  All traffic will be queued for inspection on queue number
42 prior to being forwarded by the routing subsystem.

1. Give the interfaces both an IPv4 and IPv6 address.

        ip addr add 172.16.1.1/24 dev eth1
        ip -6 addr add 2011:11:11:11::1/64 dev eth1
        ip addr add 172.16.2.1/24 dev eth2
        ip -6 addr add 2011:22:22:22::1/64 dev eth2

2. Enable forwarding for the interfaces in the kernel.

        sysctl -w net.ipv4.conf.eth1.forwarding=1
        sysctl -w net.ipv4.conf.eth2.forwarding=1
        sysctl -w net.ipv6.conf.all.forwarding=1

3. Add iptables/ip6tables rules to queue all packets that would be forwarded by
the kernel for inspection on queue number 42.  The --queue-bypass option will
allow all packets to bypass the queue while there is no userspace process
attached to the queue.  The default behavior is to drop packets in such cases.
(This is useful for those that value connectivity over security.)

        iptables -A FORWARD -j NFQUEUE --queue-num 42 --queue-bypass
        ip6tables -A FORWARD -j NFQUEUE --queue-num 42 --queue-bypass

At this point, queue 42 is available to attach the DAQ module to and will the
kernel will start queueing packets for it once it has registered.

Limitations
-----------

* Multiple instantiation is technically supported, but there is currently no
way to handle the same queue in multiple instances.  For now, the best way to
use multiple instances is to have each listen on its own queue.
* True mutiple instantion support.  The ability to load balance with netfilter nfqueue is needed to properly support.  It can be configured with netfilter using the "--queue-balance --queue-num x:y" options.  However, my Web searches indicate this option may not work with many Kernel versions.  Also, these options may not be available in all implementations and kernel versions, and may require custom nfqueue netfilter package to be added.

        iptables -A FORWARD -j NFQUEUE --queue-balance --queue-num 0:5

* Changes in my fork of nfq libdaq.  This implementation of nfqueue (unlike the non-forked nfq libdaq) has the following enhancements:
	*  Uses seperate rx, packet processing, and tx threads to increase performance.  When true support for multiple instantiation is addressed, the rx and tx threads should be removed.
	*  Adds support for specifying a network namespace (using netns_path option) to provide the ability to open nfq socket inside a different docker or kubernetes container than the one where libdaq and its apllication are running.  This should be re-done to add it to the interface config instead (see virtio libdaq in this fork as an example) Example syntax.
	
	  `
	  	snort3 -Q -v -z 1 -i 42 --daq nfq --daq-var netns_path "/var/run/netns/pod2" ...
	  `
* Last I checked, the process cannot operate in unprivileged mode.  This needs
to be revalidated, but the module is marked as such in the meantime.

Requirements
------------
* libmnl

Additional Resources
--------------------

* The netfilter project homepage: <https://www.netfilter.org/>
* The libmnl project homepage: <https://www.netfilter.org/projects/libmnl/index.html>
