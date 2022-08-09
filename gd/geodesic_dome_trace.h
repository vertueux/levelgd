// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#ifndef GEODESIC_DOME_TRACE_H_
#define GEODESIC_DOME_TRACE_H_

#include "gd/geodesic_dome_manager.h"

namespace levelgd {
  // Class containing functions that use the internal logger
  // to ask some inputs from the user and giving an output.
  class GeodesicDomeTrace {
   public:
    static void ask_for_dome_type();
    static void ask_for_dome_subdivision();
    static void ask_for_dome_surface();
  };
} // namespace levelgd

#endif // GEODESIC_DOME_TRACE_H_