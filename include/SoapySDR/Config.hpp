///
/// \file SoapySDR/Config.hpp
///
/// Common macro definitions for Soapy SDR library API export.
///
/// \copyright
/// Copyright (c) 2014-2014 Josh Blum
/// SPDX-License-Identifier: BSL-1.0
///

#pragma once
#include <SoapySDR/Config.h>

#if (defined(_MSVC_LANG) || __cplusplus < 201703L)
  // For old or nonconforming compilers,
  // using the alternative operator representations may require including this header.
  #include <ciso646>
#endif
