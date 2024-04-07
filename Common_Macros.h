 /******************************************************************************
 *
 * Module: Common - Macros
 *
 * File Name: Common_Macros.h
 *
 * Description: Commonly used Macros
 *
 * Author: Ebrahim Mostafa
 *
 *******************************************************************************/

#ifndef COMMON_MACROS
#define COMMON_MACROS

/* Id for the company in the AUTOSAR
 * for example Ebrahim Benzema's ID = 1000 :) */
#define COMMON_MACROS_VENDOR_ID                                  (1000U)

/*
 * Module Version 1.0.0
 */
#define COMMON_MACROS_SW_MAJOR_VERSION                           (1U)
#define COMMON_MACROS_SW_MINOR_VERSION                           (0U)
#define COMMON_MACROS_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define COMMON_MACROS_AR_RELEASE_MAJOR_VERSION                   (4U)
#define COMMON_MACROS_AR_RELEASE_MINOR_VERSION                   (0U)
#define COMMON_MACROS_AR_RELEASE_PATCH_VERSION                   (3U)

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG = (REG>>num) | (REG << ((sizeof(REG) * 8)-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG = (REG<<num) | (REG >> ((sizeof(REG) * 8)-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

/* Macro to get value of a specific bit */
#define GET_BIT(REG,BIT) ( ( REG & (1<<BIT) ) >> BIT )

#endif
