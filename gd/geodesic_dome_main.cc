// Copyright (c) 2022 Virtuous. All rights reserved.
// Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

#include "gd/geodesic_dome_application.h"

int main(int argc, char *argv[]) {
  levelgd::GeodesicDomeApplication app;
  app.execute(argc, argv);
  return 0;
}