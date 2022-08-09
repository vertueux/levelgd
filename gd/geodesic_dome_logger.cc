// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_logger.h"

// Not using std::endl for optimization.
#define LOG(x) std::cout << x << "\n"; 

namespace levelgd {

void GeodesicDomeLogger::set_priority(PrintType new_priority) {
  config::priority = new_priority;
}

void GeodesicDomeLogger::print(const char* print_format, PrintType print_type, ...) {
  if (config::priority > print_type)
    return;

  const char* print_string_type = "";
    switch (print_type) {
      case P_LINE: print_string_type = ""; break;
      case P_DEBUG: print_string_type = "[DEBUG] "; break;
      case P_INFO: print_string_type = "[INFO] "; break;
      default: print_string_type = "[ERROR] Please define a valid priority."; break;
    }

    std::cout << print_string_type;

    if (print_type == P_LINE || print_type == P_DEBUG || print_type == P_INFO) {
      LOG(print_format);
    }
}

void GeodesicDomeLogger::set_error_priority(ErrorType new_priority) {
  config::error_priority = new_priority;
}

void GeodesicDomeLogger::print_error(const char* print_error_format, ErrorType error_type, ...) {
  if (config::error_priority > error_type) 
    return;

  const char* print_string_error_type = "[ERROR] ";
  switch (error_type) {
    case ERR_ERROR: print_string_error_type = "[ERROR] "; break;
    case ERR_WARNING: print_string_error_type = "[WARNING] "; break;
    case ERR_SCRIPT: print_string_error_type = "[ERROR/SCRIPT] "; break;
    case ERR_CRITICAL: print_string_error_type = "[CRITICAL] "; break;
    default: print_string_error_type = "[ERROR] Please define a valid error priority."; break;
  }

  std::cout <<print_string_error_type;

  if (error_type == ERR_ERROR || error_type == ERR_WARNING || error_type == ERR_SCRIPT || error_type == ERR_CRITICAL) {
    LOG(print_error_format);
  }
}
} // namespace levelgd