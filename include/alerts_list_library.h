/*  =========================================================================
    alerts_list - ALERTS_LIST wrapper

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef ALERTS_LIST_LIBRARY_H_INCLUDED
#define ALERTS_LIST_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <malamute.h>
#include <biosproto.h>

//  ALERTS_LIST version macros for compile-time API detection

#define ALERTS_LIST_VERSION_MAJOR 0
#define ALERTS_LIST_VERSION_MINOR 5
#define ALERTS_LIST_VERSION_PATCH 0

#define ALERTS_LIST_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ALERTS_LIST_VERSION \
    ALERTS_LIST_MAKE_VERSION(ALERTS_LIST_VERSION_MAJOR, ALERTS_LIST_VERSION_MINOR, ALERTS_LIST_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBALERTS_LIST_STATIC
#       define ALERTS_LIST_EXPORT
#   elif defined LIBALERTS_LIST_EXPORTS
#       define ALERTS_LIST_EXPORT __declspec(dllexport)
#   else
#       define ALERTS_LIST_EXPORT __declspec(dllimport)
#   endif
#else
#   define ALERTS_LIST_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _alerts_list_server_t alerts_list_server_t;
#define ALERTS_LIST_SERVER_T_DEFINED


//  Public API classes
#include "alerts_list_server.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/