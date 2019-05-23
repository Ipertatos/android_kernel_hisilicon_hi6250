#include "mntn_subtype_exception.h"
#include "mntn_public_interface.h"
#include "mntn_subtype_exception.h"
#include "mntn_public_interface.h"
#ifndef __MMC_EXCEPTION_SUBTYPE_MAP
#define __MMC_EXCEPTION_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __AP_PANIC_SUBTYPE_MAP
#define __AP_PANIC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __AP_BL31PANIC_SUBTYPE_MAP
#define __AP_BL31PANIC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __AP_VENDOR_PANIC_SUBTYPE_MAP
#define __AP_VENDOR_PANIC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __APWDT_HWEXC_SUBTYPE_MAP
#define __APWDT_HWEXC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __APWDT_EXC_SUBTYPE_MAP
#define __APWDT_EXC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __LPM3_EXC_SUBTYPE_MAP
#define __LPM3_EXC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __SCHARGER_EXC_SUBTYPE_MAP
#define __SCHARGER_EXC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __PMU_EXC_SUBTYPE_MAP
#define __PMU_EXC_SUBTYPE_MAP(x,y,z) 
#endif
#ifndef __CONN_EXC_SUBTYPE_MAP
#define __CONN_EXC_SUBTYPE_MAP(x,y,z) 
#endif
__MMC_EXCEPTION_SUBTYPE_MAP(MMC_S_EXCEPTION,HARDWARE_FAULT,MMC_EXCEPT_INIT_FAIL)
__MMC_EXCEPTION_SUBTYPE_MAP(MMC_S_EXCEPTION,HARDWARE_FAULT,MMC_EXCEPT_CMD_TIMEOUT)
__MMC_EXCEPTION_SUBTYPE_MAP(MMC_S_EXCEPTION,HARDWARE_FAULT,MMC_EXCEPT_COLDBOOT)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_RESERVED)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_BC_PANIC)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_L3CACHE_ECC1)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_L3CACHE_ECC2)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_SOFTLOCKUP)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_OHARDLOCKUP)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_HARDLOCKUP)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_ISP)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_IVP)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_GPU)
__AP_PANIC_SUBTYPE_MAP(AP_S_PANIC,PANIC,HI_APPANIC_Storage)
__AP_PANIC_SUBTYPE_MAP(AP_S_BL31_PANIC,PANIC,HI_APBL31PANIC_RESERVED)
__AP_PANIC_SUBTYPE_MAP(AP_S_BL31_PANIC,PANIC,HI_APBL31PANIC_ASSERT)
__AP_VENDOR_PANIC_SUBTYPE_MAP(AP_S_VENDOR_PANIC, PANIC, HI_APVNDPANIC_RESERVED)
__AP_VENDOR_PANIC_SUBTYPE_MAP(AP_S_VENDOR_PANIC, PANIC, HI_APVNDPANIC_CFI)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_BL31)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_LPM3)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_APBL31LPM3)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_AP)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_BL31AP)
__APWDT_HWEXC_SUBTYPE_MAP(AP_S_AWDT,HWWATCHDOG,HI_APWDT_BL31LPM3)
__APWDT_EXC_SUBTYPE_MAP(AP_S_AWDT,HARDWARE_FAULT,HI_APWDT_HW)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_RESERVED)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_AP_WDT_LOCAL)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_AP_WDT_REMOTE)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_M3_WDT_LOCAL)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_M3_WDT_REMOTE)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_AP_SYS_PANIC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_M3_SYS_PANIC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_PMUSSI_PANIC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_CLK_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_REGULATOR_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_OCBC_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DMA_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_NOC_TIMEOUT)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_G3D_PWR_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_CPU_PWR_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_TSENSOR_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_CPUDVFS_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_GPUDVFS_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_MEMRP_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_NOC_BUS_IDLE_PEND)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_AHB_TIMEOUT)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_PANIC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_FATAL_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_SREF_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_OSC_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_TMON_LOW)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_TMON_HIGH)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_GATE_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_UCE0_EXC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_UCE1_EXC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_UCE2_EXC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_UCE3_EXC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_AREF_ALARM)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_RDTIMEOUT)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_PLLUNLOCK_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_RETRAIN_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_TMON_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_DFS_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_DVALID_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_DFI_SEL_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_PLLUNLOCK_LP)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DDR_UNKNOWN_ERR)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_UCE_EXC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_DMA_TIMEOUT)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_SUBPMU0_PANIC)
__LPM3_EXC_SUBTYPE_MAP(LPM3_S_EXCEPTION,LPM3EXCEPTION,PSCI_SUBPMU1_PANIC)
__SCHARGER_EXC_SUBTYPE_MAP(AP_S_SCHARGER, HARDWARE_FAULT, PMU_VSYS_OV)
__SCHARGER_EXC_SUBTYPE_MAP(AP_S_SCHARGER, HARDWARE_FAULT, PMU_VSYS_PWROFF_ABS)
__SCHARGER_EXC_SUBTYPE_MAP(AP_S_SCHARGER, HARDWARE_FAULT, PMU_VSYS_PWROFF_DEB)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO3)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO2)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO1)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO0_2)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_BUCK3)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_BUCK2)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_BUCK1)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_BUCK0)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO10)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO8)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO7)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO5)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO4)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO21)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO20)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO19)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO17)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO15)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO14)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO13)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO29)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO28)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO27)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO26)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO25)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO24)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO23)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO22)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_CLASSD)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO34)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO33)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO32)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, OCP_LDO31)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SCP_BUCK3)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SCP_BUCK2)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SCP_BUCK1)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SCP_BUCK0)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SCP_XO_LDO_BUFF)
__PMU_EXC_SUBTYPE_MAP(AP_S_PMU, HARDWARE_FAULT, SYS_NRST_1S)
__CONN_EXC_SUBTYPE_MAP(WIFI_S_EXCEPTION,CONNEXCEPTION,CONN_WIFI_EXEC)
__CONN_EXC_SUBTYPE_MAP(WIFI_S_EXCEPTION,CONNEXCEPTION,CONN_WIFI_CHAN_EXEC)
__CONN_EXC_SUBTYPE_MAP(WIFI_S_EXCEPTION,CONNEXCEPTION,CONN_WIFI_WAKEUP_FAIL)
__CONN_EXC_SUBTYPE_MAP(BFGX_S_EXCEPTION,CONNEXCEPTION,CONN_BFGX_EXEC)
__CONN_EXC_SUBTYPE_MAP(BFGX_S_EXCEPTION,CONNEXCEPTION,CONN_BFGX_BEAT_TIMEOUT)
__CONN_EXC_SUBTYPE_MAP(BFGX_S_EXCEPTION,CONNEXCEPTION,CONN_BFGX_WAKEUP_FAIL)