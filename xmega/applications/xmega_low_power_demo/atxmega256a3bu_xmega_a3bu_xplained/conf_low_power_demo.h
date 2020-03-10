/**
 * \file
 *
 * \brief Board-specific example configuration
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef CONF_LOW_POWER_DEMO_H
#define CONF_LOW_POWER_DEMO_H

/** Interrupt vector switchport 0 */
#define SWITCH0_INT_VECT         PORTE_INT0_vect
/** Interrupt vector switchport 1 */
#define SWITCH1_INT_VECT         PORTF_INT0_vect

/** Interrupt level medium */
#define SWITCHPORT_INT_LEVEL     PORT_INT0LVL_MED_gc
/** Location of switch 0 */
#define SWITCHPORT0              PORTE
/** Location of switches 6-7 */
#define SWITCHPORT1              PORTF

/** Pin mask for switch 0 */
#define SWITCHMASK0              0x20
/** Pin mask for switches 1-2 */
#define SWITCHMASK1              0x06

/* #define NO_JTAG */ /* Optional disable JTAG define */

#endif  /* CONF_LOW_POWER_DEMO_H */
