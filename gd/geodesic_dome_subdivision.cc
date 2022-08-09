// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_subdivision.h"

namespace levelgd {
// I know I could just have put a double on that function, but i prefered to put
// a map instead for consistency and similarity with the other subdivision functions.
const std::map<char, double> GeodesicDomeSubdivision::get1V() {
  return {{'A', 1.05146}};
}
const std::map<char, double> GeodesicDomeSubdivision::get2V() {
  return {{'A', 0.61803}, {'B', 0.54653}};
}

const std::map<char, double> GeodesicDomeSubdivision::get3V() {
  return {{'A', 0.34862},{'B', 0.40355}, {'C', 0.41241}};
}

const std::map<char, double> GeodesicDomeSubdivision::get4V() {
  return {{'A', 0.25318}, {'B', 0.29524}, {'C', 0.29453},
         {'D', 0.31287}, {'E', 0.32492}, {'F', 0.29859}};
}

const std::map<char, double> GeodesicDomeSubdivision::get5V() {
  return {{'A', 0.19814743}, {'B', 0.23179025}, {'C', 0.22568578}, 
         {'D', 0.24724291}, {'E', 0.25516701}, {'F', 0.24508578},
         {'G', 0.26159810}, {'H', 0.23159760}, {'I', 0.24534642}};
}

const std::map<char, double> GeodesicDomeSubdivision::get6V() {
  return {{'A', 0.1625672}, {'B', 0.1904769}, {'C', 0.1819083}, 
         {'D', 0.2028197}, {'E', 0.1873834}, {'F', 0.1980126},
         {'G', 0.2059077}, {'H', 0.2153537}, {'I', 0.2166282}};
}

  
} // namespace levelgd