/* Hey EMACS -*- linux-c -*- */
/* $Id$ */

/*  libtifiles - Ti File Format library, a part of the TiLP project
 *  Copyright (C) 1999-2004  Romain Lievin
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
  This unit contains the interface of the libtifiles library.
*/

#include <stdio.h>
#include "gettext.h"
#include "tifiles.h"
#include "logging.h"

/****************/
/* Entry points */
/****************/

// not static, must be shared between instances
int tifiles_instance = 0;	// counts # of instances

/**
 * tifiles_library_init:
 *
 * This function must be the first one to call. It inits library internals.
 *
 * Return value: the handle count.
 **/
TIEXPORT int TICALL tifiles_library_init()
{
	char locale_dir[65536];
	
#ifdef __WIN32__
  	HANDLE hDll;
  	int i;
  	
  	hDll = GetModuleHandle("tifiles.dll");
  	GetModuleFileName(hDll, locale_dir, 65535);
  	for (i = strlen(locale_dir); i >= 0; i--) {
    		if (locale_dir[i] == '\\')
      			break;
  	}
  	
  	locale_dir[i] = '\0';
  	strcat(locale_dir, "\\locale");
#else
	strcpy(locale_dir, LOCALEDIR);
#endif

	if (tifiles_instance)
		return (++tifiles_instance);
	tifiles_info( _("tifiles library version %s\n"), LIBTIFILES_VERSION);

#if defined(ENABLE_NLS)
	tifiles_info "setlocale: <%s>\n", setlocale(LC_ALL, ""));
  	tifiles_info "bindtextdomain: <%s>\n", bindtextdomain(PACKAGE, LOCALEDIR));
  	//bind_textdomain_codeset(PACKAGE, "UTF-8"/*"ISO-8859-15"*/);
  	tifiles_info "textdomain: <%s>\n", textdomain(PACKAGE));
#endif

  	return (++tifiles_instance);
}

/**
 * tifiles_library_exit:
 *
 * This function must be the last one to call. Used to release internal resources.
 *
 * Return value: the handle count.
 **/
TIEXPORT int TICALL tifiles_library_exit()
{
  	return (--tifiles_instance);
}

/***********/
/* Methods */
/***********/

/**
 * tifiles_version_get:
 *
 * This function returns the library version like "X.Y.Z".
 *
 * Return value: a string.
 **/
TIEXPORT const char *TICALL tifiles_version_get(void)
{
	return LIBTIFILES_VERSION;
}
