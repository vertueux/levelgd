// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_application.h"
#include "gd/geodesic_dome_trace.h"
#include "gd/geodesic_dome_icosahedron.h"
#include <iostream>

namespace levelgd {

void GeodesicDomeApplication::execute(int argc, char *argv[]) {
  GeodesicDomeTrace::ask_for_dome_type();
  GeodesicDomeTrace::ask_for_dome_subdivision();
  GeodesicDomeTrace::ask_for_dome_surface();
}

} // namespace levelgd