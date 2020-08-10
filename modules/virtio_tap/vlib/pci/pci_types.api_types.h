#ifndef included_pci_types_api_types_h
#define included_pci_types_api_types_h
typedef struct __attribute__ ((packed)) _vl_api_pci_address {
    u16 domain;
    u8 bus;
    u8 slot;
    u8 function;
} vl_api_pci_address_t;

#endif
