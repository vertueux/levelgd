// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/precompiled_headers.h"

#ifndef GEODESIC_DOME_SUBDIVISION_H_
#define GEODESIC_DOME_SUBDIVISION_H_

namespace levelgd {
  // Note: I used maps and not arrays simply to make my code
  // more understandable to anyone creating a geodesic dome.
  class GeodesicDomeSubdivision {
   public:
    // I know I could just have put a double on that function, but i prefered to put
    // a map instead for consistency and similarity with the other subdivision functions.
    static const std::map<char, double> get1V();
    static const std::map<char, double> get2V();
    static const std::map<char, double> get3V();
    static const std::map<char, double> get4V();
    static const std::map<char, double> get5V();
    static const std::map<char, double> get6V();
  };
} // namespace levelgd

#endif // GEODESIC_DOME_SUBDIVISION_H_