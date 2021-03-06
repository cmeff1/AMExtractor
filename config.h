#ifndef _KMEM_CONFIG_H
#define _KMEM_CONFIG_H


#define CONFIG_NEXUS5
#define DEVICE "CONFIG_NEXUS5"

//#define CONFIG_NEXUS5
//#define DEVICE "NEXUS5"



#ifdef CONFIG_GALAXY_NEXUS
    #define FLAT_MEM
    #define STRUCT_PAGE_SIZE 32
    #define USE_SEEK_ZERO
#endif

#ifdef CONFIG_NEXUS4
    #define SPARSE_MEM
    #define STRUCT_PAGE_SIZE 32
    #define USE_SYNC_PTMX
#endif

#ifdef CONFIG_NEXUS5
    #define FLAT_MEM
    #define STRUCT_PAGE_SIZE 32
    #define USE_SYNC_PTMX
#endif

#ifdef CONFIG_I9500
    #define FLAT_MEM
    #define STRUCT_PAGE_SIZE 36
    #define USE_SYNC_PTMX
#endif

#ifdef CONFIG_SM_G3508I
    #define FLAT_MEM
    #define CONFIG_IOMEM 0xC4C04668
    #define CONFIG_MEMMAP 0xC4D6C9E0
    #define STRUCT_PAGE_SIZE 32
    #define USE_SEEK_ZERO
#endif

#ifndef DEVICE
    #error "NO device config defined, please check README"
#endif


#if !defined(FLAT_MEM) && !defined(SPARSE_MEM)
    #error "Unsupported Memory Module!"
#endif


#endif
