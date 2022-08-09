// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#ifndef GEODESIC_DOME_ICOSAHEDRON_H_
#define GEODESIC_DOME_ICOSAHEDRON_H_

#include "gd/geodesic_dome_manager.h"
#include "gd/geodesic_dome_subdivision.h"

namespace levelgd {
  class GeodesicDomeIcosahedron {
   public:
    static void calculate_struts(GeodesicDomeSubdivisionMode subdivision, double radius);
  };
} // namespace levelgd

#endif // GEODESIC_DOME_ICOSAHEDRON_H_f