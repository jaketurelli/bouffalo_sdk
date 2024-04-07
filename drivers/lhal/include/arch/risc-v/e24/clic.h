// See LICENSE for license details.

#ifndef _SIFIVE_CLIC_H
#define _SIFIVE_CLIC_H

#define CLIC_CTRL_BASE  0x02000000UL
#define CLIC_HART0_BASE 0x02800000UL

#define CLIC_MSIP_OFFSET     0x0000
#define CLIC_MTIMECMP_OFFSET 0x4000
#define CLIC_MTIME_OFFSET    0xBFF8
#define CLIC_INTIP_OFFSET    0x000
#define CLIC_INTIE_OFFSET    0x400
#define CLIC_INTCFG_OFFSET   0x800
#define CLIC_CFG_OFFSET      0xc00

#endif /* _SIFIVE_CLIC_H */
