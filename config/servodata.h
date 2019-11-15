#pragma once

#include <Arduino.h>
#include "servoports.h"

// pinNumber, maxAngularVel degree/sec, calibMin, calibMax, angleDegMin, angleDegMax, home position
// minAngle must be less than maxAngle. To flip the direction of rotation do:
// {minFreq <-> maxFreq, minAngle * -1 <-> maxAngle * -1}
const float servoConfig[6][7] = {
  { pin_servo_0,  150*DEG_TO_RAD, 575.00, 2360.00, -90.57*DEG_TO_RAD, 86.57*DEG_TO_RAD, 0 },
  { pin_servo_1,  150*DEG_TO_RAD, 1152.00, 2300.00, -68.22*DEG_TO_RAD, 71.57*DEG_TO_RAD, 0 },
  { pin_servo_2,  150*DEG_TO_RAD, 900.00, 1810.00, -59.57*DEG_TO_RAD, 23.41*DEG_TO_RAD, 0 },
  { pin_servo_3,  150*DEG_TO_RAD, 580.00, 2370.00, -111.57*DEG_TO_RAD, 102.31*DEG_TO_RAD, 0 },
  { pin_servo_4,  150*DEG_TO_RAD, 570.00, 2370.00, -69.22*DEG_TO_RAD, 84.24*DEG_TO_RAD, 0 },
  { pin_servo_5,  150*DEG_TO_RAD, 590.00, 2400.00, -122.31*DEG_TO_RAD, 37.50*DEG_TO_RAD, 0 }
};
