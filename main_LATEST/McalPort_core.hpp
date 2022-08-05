#pragma once
/******************************************************************************/
/* File   : McalPort_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalPort.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PORT_CORE_FUNCTIONALITIES                                              \
              FUNC(void, PORT_CODE) SetPinDirection      (void);               \
              FUNC(void, PORT_CODE) RefreshMcalPortDirection (void);               \
              FUNC(void, PORT_CODE) SetMcalPortMode          (void);               \

#define PORT_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, PORT_CODE) SetPinDirection      (void) = 0;           \
      virtual FUNC(void, PORT_CODE) RefreshMcalPortDirection (void) = 0;           \
      virtual FUNC(void, PORT_CODE) SetMcalPortMode          (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalPort_Functionality{
   public:
      PORT_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
