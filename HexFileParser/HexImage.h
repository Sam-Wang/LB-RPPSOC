/*****************************************************************************
* File Name: HexImage.h
**
Version: 3.0
**
Description:
* 1.) This is the header file of HexImage.c
* 2.) It provides access to the Hex file data organized as an array of constants.
* 3.) This header file is generated by the C# application "HexFileParser_Psoc3_5lp"
      with the actual hex file to be programmed as input to C# application.
**
Note:
**
Owner:
* VVSK
**
**
Related Document:
* Refer to the application note document for details on the application
**
IDE Info:
* 1. Microsoft Visual C# 2010 Express used to develop the C# application
*****************************************************************************/

#ifndef __HEXIMAGE_H 
#define __HEXIMAGE_H 

/*****************************************************************************
* MACRO Definitions 
******************************************************************************/ 

#define HEX_FILE_UNDEFINED_DEVICE_FAMILY            0u
#define HEX_FILE_PSOC3_DEVICE_FAMILY                1u
#define HEX_FILE_PSOC5LP_DEVICE_FAMILY              2u

#define HEX_FILE_DEVICE_FAMILY      HEX_FILE_PSOC5LP_DEVICE_FAMILY

#define FLASH_CFG_DATA_PRESENT_HEX_FILE       1u

#define EEPROM_DATA_PRESENT_HEX_FILE       0u

#define NUMBER_OF_EEPROM_ROWS_HEX_FILE      0u
#define NUMBER_OF_EEPROM_SECTORS_HEX_FILE      0u
#define EEPROM_ROW_BYTE_SIZE_HEX_FILE      16u
#define NUMBER_OF_FLASH_ARRAYS_HEX_FILE      2u
#define NUMBER_OF_FLASH_ROWS_HEX_FILE        512u
#define FLASH_ROW_BYTE_SIZE_HEX_FILE         288u
#define FLASH_PROTECTION_BYTE_SIZE_HEX_FILE  128u
#define DEVICE_CFG_NVL_BYTE_SIZE_HEX_FILE    4u
#define WO_NVL_BYTE_SIZE_HEX_FILE            4u
#define CHECKSUM_BYTE_SIZE_HEX_FILE          2u
#define SILICON_ID_BYTE_SIZE_HEX_FILE        4u

 /***************************************************************************** 
 * Global Constant Declarations 
  ******************************************************************************/ 
 
extern unsigned char const deviceRevisionId_hexFile; 
extern unsigned char const deviceSiliconId_hexFile[SILICON_ID_BYTE_SIZE_HEX_FILE]; 
extern unsigned char const deviceConfigNvl_hexFile[DEVICE_CFG_NVL_BYTE_SIZE_HEX_FILE]; 
extern unsigned char const writeOnceNvl_hexFile[WO_NVL_BYTE_SIZE_HEX_FILE]; 
extern unsigned char const checksumData_hexFile[CHECKSUM_BYTE_SIZE_HEX_FILE]; 
extern unsigned char const flashData_hexFile[NUMBER_OF_FLASH_ROWS_HEX_FILE][FLASH_ROW_BYTE_SIZE_HEX_FILE]; 
extern unsigned char const flashProtectionData_hexFile[FLASH_PROTECTION_BYTE_SIZE_HEX_FILE]; 
 
#endif /* __HEXIMAGE_H */ 
 
/* [] END OF FILE */ 
