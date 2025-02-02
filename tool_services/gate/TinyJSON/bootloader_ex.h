/******************************************************************************
 * @file Bootloader extension
 * @brief Bootloader functionnalities for luos framework
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef BOOTLOADER_EX_H
#define BOOTLOADER_EX_H

#include "robus_struct.h"
#include "luos_engine.h"
#include "tiny-json.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Function
 ******************************************************************************/
void Bootloader_LuosToJson(service_t *, msg_t *);
void Bootloader_JsonToLuos(service_t *, char *, json_t const *);

#endif /* BOOTLOADER_H */