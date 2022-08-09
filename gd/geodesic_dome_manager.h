// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#ifndef GEODESIC_DOME_MANAGER_H_
#define GEODESIC_DOME_MANAGER_H_

#include "gd/precompiled_headers.h"

namespace levelgd {

enum GeodesicDomeStages {
  GEODESIC_DOME_STAGE_ZERO, 
  GEODESIC_DOME_STAGE_ONE,
  GEODESIC_DOME_STAGE_TWO,
  GEODESIC_DOME_STAGE_THREE,
};

enum GeodesicDomeType {
  UNKNOWN_GEODESIC_DOME,
  ICOSAHEDRON_GEODESIC_DOME
};

enum GeodesicDomeSubdivisionMode {
  INVALID, 
  GEODESIC_DOME_1V,
  GEODESIC_DOME_2V,
  GEODESIC_DOME_3V,
  GEODESIC_DOME_4V,
  GEODESIC_DOME_5V,
  GEODESIC_DOME_6V,
};



class GeodesicDomeManager {
 private:
  GeodesicDomeManager() {   }
 public:
  GeodesicDomeManager(const GeodesicDomeManager&) = delete;
  GeodesicDomeManager& operator=(const GeodesicDomeManager&) = delete;

  static GeodesicDomeManager *get();
  static void push_to_new_stage();
};

// Grouping of constants. We may want to make some of these
// parameters to be changed explicitly.
namespace config {
static GeodesicDomeManager *singleton = nullptr;
static GeodesicDomeType actual_type = UNKNOWN_GEODESIC_DOME;
static GeodesicDomeStages actual_stage = GEODESIC_DOME_STAGE_ZERO;
static GeodesicDomeSubdivisionMode actual_subdivision = INVALID;
static std::vector<double> data;
static double actual_radius = 0;
static double actual_surface = 0;
}

} // namespace levelgd

#endif // GEODESIC_DOME_MANAGER_H_