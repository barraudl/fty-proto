/*  =========================================================================
    fty-proto - generated layer of public API

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

#ifndef FTY_PROTO_LIBRARY_H_INCLUDED
#define FTY_PROTO_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>

//  FTY_PROTO version macros for compile-time API detection
#define FTY_PROTO_VERSION_MAJOR 1
#define FTY_PROTO_VERSION_MINOR 0
#define FTY_PROTO_VERSION_PATCH 0

#define FTY_PROTO_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_PROTO_VERSION \
    FTY_PROTO_MAKE_VERSION(FTY_PROTO_VERSION_MAJOR, FTY_PROTO_VERSION_MINOR, FTY_PROTO_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_PROTO_STATIC
#       define FTY_PROTO_EXPORT
#   elif defined FTY_PROTO_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_PROTO_EXPORT __declspec(dllexport)
#       else
#           define FTY_PROTO_EXPORT
#       endif
#   elif defined FTY_PROTO_EXPORTS
#       define FTY_PROTO_EXPORT __declspec(dllexport)
#   else
#       define FTY_PROTO_EXPORT __declspec(dllimport)
#   endif
#   define FTY_PROTO_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_PROTO_EXPORT
#   define FTY_PROTO_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_PROTO_PRIVATE __attribute__ ((visibility ("hidden")))
#       define FTY_PROTO_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define FTY_PROTO_PRIVATE
#       define FTY_PROTO_EXPORT
#   endif
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _fty_proto_t fty_proto_t;
#define FTY_PROTO_T_DEFINED


//  Public classes, each with its own header file
#include "fty_proto.h"

#ifdef FTY_PROTO_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
FTY_PROTO_EXPORT void
    fty_proto_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // FTY_PROTO_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
