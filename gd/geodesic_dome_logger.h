// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#ifndef GEODESIC_DOME_LOGGER_H_
#define GEODESIC_DOME_LOGGER_H_

#include "gd/precompiled_headers.h"

namespace levelgd {

enum PrintType { P_LINE, P_DEBUG, P_INFO };
enum ErrorType { ERR_ERROR, ERR_WARNING, ERR_SCRIPT, ERR_CRITICAL };

// Grouping of constants. We may want to make some of these
// parameters to be changed explicitly.
namespace config {
static PrintType priority;
static ErrorType error_priority;
};

class GeodesicDomeLogger {
 public:
  GeodesicDomeLogger() {   }
  static void set_priority(PrintType new_priority);
  static void set_error_priority(ErrorType new_priority);

  static void print(const char* print_format, PrintType print_type, ...);
  static void print_error(const char* print_error_format, ErrorType error_type, ...);

  static void log(const char* print_format);
};

} // namespace levelgd

#endif // GEODESIC_DOME_LOGGER_H_