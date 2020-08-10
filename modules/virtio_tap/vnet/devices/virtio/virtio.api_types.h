#ifndef included_virtio_api_types_h
#define included_virtio_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vlib/pci/pci_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_virtio_pci_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_pci_address_t pci_addr;
    bool use_random_mac;
    vl_api_mac_address_t mac_address;
    bool gso_enabled;
    bool checksum_offload_enabled;
    u64 features;
} vl_api_virtio_pci_create_t;
typedef struct __attribute__ ((packed)) _vl_api_virtio_pci_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_virtio_pci_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_virtio_pci_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_virtio_pci_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_virtio_pci_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_virtio_pci_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_virtio_pci_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sw_interface_virtio_pci_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_virtio_pci_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_pci_address_t pci_addr;
    vl_api_mac_address_t mac_addr;
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    u64 features;
} vl_api_sw_interface_virtio_pci_details_t;
#define VL_API_VIRTIO_PCI_CREATE_CRC "virtio_pci_create_a9f1370c"
#define VL_API_VIRTIO_PCI_CREATE_REPLY_CRC "virtio_pci_create_reply_5383d31f"
#define VL_API_VIRTIO_PCI_DELETE_CRC "virtio_pci_delete_f9e6675e"
#define VL_API_VIRTIO_PCI_DELETE_REPLY_CRC "virtio_pci_delete_reply_e8d4e804"
#define VL_API_SW_INTERFACE_VIRTIO_PCI_DUMP_CRC "sw_interface_virtio_pci_dump_51077d14"
#define VL_API_SW_INTERFACE_VIRTIO_PCI_DETAILS_CRC "sw_interface_virtio_pci_details_16187f3a"

#endif
