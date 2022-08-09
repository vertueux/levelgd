// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_manager.h"

namespace levelgd {

GeodesicDomeManager *GeodesicDomeManager::get() {
  if (!config::singleton) 
    config::singleton = new GeodesicDomeManager;
  return config::singleton;
}

} // namespace levelgd