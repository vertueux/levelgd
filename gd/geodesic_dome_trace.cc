// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_trace.h"
#include "gd/geodesic_dome_logger.h"
#include "gd/geodesic_dome_manager.h"
#include "gd/geodesic_dome_icosahedron.h"

namespace levelgd {

std::istream& operator>>( std::istream& is, GeodesicDomeType& i ) {
  int tmp ;
  if ( is >> tmp )
    i = static_cast<GeodesicDomeType>( tmp ) ;
  return is ;
}

std::istream& operator>>( std::istream& is, GeodesicDomeStages& i ) {
  int tmp ;
  if ( is >> tmp )
    i = static_cast<GeodesicDomeStages>( tmp ) ;
  return is ;
}

std::istream& operator>>( std::istream& is, GeodesicDomeSubdivisionMode& i ) {
  int tmp ;
  if ( is >> tmp )
    i = static_cast<GeodesicDomeSubdivisionMode>( tmp ) ;
  return is ;
}

void GeodesicDomeTrace::ask_for_dome_type() {
  config::actual_stage = GEODESIC_DOME_STAGE_ONE;
  GeodesicDomeLogger::print("Please choose the method you're gonna use to create your geodesic home:", P_LINE);
  GeodesicDomeLogger::print("    |- [0] Exit", P_LINE);
  GeodesicDomeLogger::print("    |- [1] Icosahedron Geodesic Dome", P_LINE);
  GeodesicDomeLogger::print("    |- [1] Icosahedron Geodesic Dome but x2", P_LINE);
  std::cin >> config::actual_type;

  switch (config::actual_type) {
    case UNKNOWN_GEODESIC_DOME:
      GeodesicDomeLogger::print("Exiting...", P_INFO);
      exit(1);
      break;
    case ICOSAHEDRON_GEODESIC_DOME: 
      GeodesicDomeLogger::print("Succesfully choose the Icosahedron Geodesic Dome method.", P_INFO);
      break;
    default: 
      GeodesicDomeLogger::print_error("Sorry, invalid number, please choose between 0 and 1.", ERR_ERROR);
      ask_for_dome_type();
      break;
  }
}

void GeodesicDomeTrace::ask_for_dome_subdivision() {
  config::actual_stage = GEODESIC_DOME_STAGE_TWO;
  GeodesicDomeLogger::print("Okay, now choose the surface subdivision:", P_LINE);
  GeodesicDomeLogger::print("    |- [1] 1V", P_LINE);
  GeodesicDomeLogger::print("    |- [2] 2V", P_LINE);
  GeodesicDomeLogger::print("    |- [3] 3V", P_LINE);
  GeodesicDomeLogger::print("    |- [4] 4V", P_LINE);
  GeodesicDomeLogger::print("    |- [5] 5V", P_LINE);
  GeodesicDomeLogger::print("    |- [6] 6V", P_LINE);
  std::cin >> config::actual_subdivision;

  switch (config::actual_subdivision) {
    case GEODESIC_DOME_1V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    case GEODESIC_DOME_2V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    case GEODESIC_DOME_3V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    case GEODESIC_DOME_4V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    case GEODESIC_DOME_5V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    case GEODESIC_DOME_6V:
      std::cout << "[INFO] " << "Successfully choosed " << config::actual_subdivision << "V subdivision. \n";
      break;
    default:
      GeodesicDomeLogger::print_error("Sorry, invalid number, please choose from 1 to 6.", ERR_ERROR);
      ask_for_dome_subdivision();
      break; // for safety.
  }
}

void GeodesicDomeTrace::ask_for_dome_surface() {
  config::actual_stage = GEODESIC_DOME_STAGE_THREE;
  GeodesicDomeLogger::print("What is the surface of your geodesic dome? ", P_LINE);
  std::cin >> config::actual_surface;
  config::actual_radius = sqrt(config::actual_surface / 3.14159265359);
  std::cout << "Your radius is:" << config::actual_radius << ".\n";
  GeodesicDomeIcosahedron::calculate_struts(config::actual_subdivision, config::actual_radius);
}
  
} // namespace levelgd