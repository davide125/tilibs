/* Hey EMACS -*- linux-c -*- */
/*  ti_link - link program for TI calculators
 *  Copyright (C) 1999-2003  Romain Lievin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/*
  This file is for internal library use only.
*/

#ifndef __CABLE_EXTERN__
#define __CABLE_EXTERN__

#include "cabl_def.h"

#ifdef __cplusplus
extern "C" {
#endif

  extern int time_out;
  extern int delay;
  extern int baud_rate;
  extern int hfc;
  extern int port;
  extern int resources;
  extern int method;

  extern unsigned int io_address;
  extern char io_device[1024];

  extern char *os;
  extern TicablePortInfo pi;

  extern const char *err_msg;

  extern TicableDataRate tdr;

#ifdef __cplusplus
}
#endif
#endif
