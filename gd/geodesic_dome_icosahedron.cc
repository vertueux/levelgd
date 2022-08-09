// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_icosahedron.h"
#include "gd/geodesic_dome_logger.h"

namespace levelgd {
  
void GeodesicDomeIcosahedron::calculate_struts(GeodesicDomeSubdivisionMode subdivision, double radius) {
  switch (subdivision) {
    case GEODESIC_DOME_1V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get1V().at('A'));
      break;
    case GEODESIC_DOME_2V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get2V().at('A'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get2V().at('B'));
      break;
    case GEODESIC_DOME_3V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get3V().at('A'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get3V().at('B'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get3V().at('C'));
      break;
    case GEODESIC_DOME_4V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('A'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('B'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('C'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('D'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('E'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get4V().at('F'));
    case GEODESIC_DOME_5V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('A'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('B'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('C'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('D'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('E'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('F'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('G'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('H'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get5V().at('I'));
    case GEODESIC_DOME_6V:
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('A'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('B'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('C'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('D'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('E'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('F'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('G'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('H'));
      config::data.push_back(radius * GeodesicDomeSubdivision::get6V().at('I'));
      break;
    default:
      GeodesicDomeLogger::print_error("Sorry, invalid subdivision calculation", ERR_ERROR);
      break;
  }

  char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
  for (int i = 0; i < config::data.size(); i++) {
    std::cout << alphabet[i] << ": " << config::data.at(i) << "\n";
  }
  config::data.clear();
}

} // namespace levelgd