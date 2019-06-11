/*  =========================================================================
    fty_alert_engine_classes - private header file

    Copyright (C) 2014 - 2018 Eaton

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
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_ALERT_ENGINE_CLASSES_H_INCLUDED
#define FTY_ALERT_ENGINE_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_alert_engine.h"

//  Opaque class structures to allow forward references
#ifndef METRICLIST_T_DEFINED
typedef struct _metriclist_t metriclist_t;
#define METRICLIST_T_DEFINED
#endif
#ifndef ALERTCONFIGURATION_T_DEFINED
typedef struct _alertconfiguration_t alertconfiguration_t;
#define ALERTCONFIGURATION_T_DEFINED
#endif
#ifndef LUARULE_T_DEFINED
typedef struct _luarule_t luarule_t;
#define LUARULE_T_DEFINED
#endif
#ifndef PUREALERT_T_DEFINED
typedef struct _purealert_t purealert_t;
#define PUREALERT_T_DEFINED
#endif
#ifndef RULE_T_DEFINED
typedef struct _rule_t rule_t;
#define RULE_T_DEFINED
#endif
#ifndef THRESHOLDRULECOMPLEX_T_DEFINED
typedef struct _thresholdrulecomplex_t thresholdrulecomplex_t;
#define THRESHOLDRULECOMPLEX_T_DEFINED
#endif
#ifndef RULECONFIGURATOR_T_DEFINED
typedef struct _ruleconfigurator_t ruleconfigurator_t;
#define RULECONFIGURATOR_T_DEFINED
#endif
#ifndef TEMPLATERULECONFIGURATOR_T_DEFINED
typedef struct _templateruleconfigurator_t templateruleconfigurator_t;
#define TEMPLATERULECONFIGURATOR_T_DEFINED
#endif

//  Extra headers
#include "normalrule.h"
#include "thresholdrulesimple.h"
#include "thresholdruledevice.h"
#include "regexrule.h"

//  Internal API

#include "metriclist.h"
#include "alertconfiguration.h"
#include "luarule.h"
#include "purealert.h"
#include "rule.h"
#include "thresholdrulecomplex.h"
#include "ruleconfigurator.h"
#include "templateruleconfigurator.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_ALERT_ENGINE_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_ALERT_ENGINE_PRIVATE void
    alertconfiguration_test (bool verbose);

//  Self test for private classes
FTY_ALERT_ENGINE_PRIVATE void
    fty_alert_engine_private_selftest (bool verbose, const char *subtest);

#endif // FTY_ALERT_ENGINE_BUILD_DRAFT_API

#endif
