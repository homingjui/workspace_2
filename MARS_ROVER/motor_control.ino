
float wheel_r = 122;

float d1 = 271; // distance in mm
float d2 = -278;
float d3 = 301;
float d4 = 304;

int offset0 = 5;
int offset1 = -10;
int offset2 = 0;
int offset3 = 0;

void set_motor(float ang, float myspeed ,bool o) {
  // ang : 0~90 deg
  // speed : 0~100 %
  // ang = w4 ang  / w2 ang

  ang = (ang / 180) * M_PI ;
  float r = d1 + ( d3 / tan(abs(ang)));
  if (o) r = 0;

  float ang1 = atan( d3 / ( r + d1) );
  float ang3 = atan( d2 / ( r + d1) );
  float ang4 = atan( d3 / ( r - d1) );
  float ang6 = atan( d2 / ( r - d1) );

  if (ang < 0) {
    ang1 = -atan( d3 / ( r - d1) );
    ang3 = -atan( d2 / ( r - d1) );
    ang4 = -atan( d3 / ( r + d1) );
    ang6 = -atan( d2 / ( r + d1) );
  }

  ang1 = (ang1 / M_PI) * 180;
  ang3 = (ang3 / M_PI) * 180;
  ang4 = (ang4 / M_PI) * 180;
  ang6 = (ang6 / M_PI) * 180;

  // from -90~90
  // to 0 ~360
  ang1 = ang1 * 2 + 180;
  ang3 = ang3 * 2 + 180;
  ang4 = ang4 * 2 + 180;
  ang6 = ang6 * 2 + 180;

  HCPCA9685.Servo(0, ang1 + offset0);
  HCPCA9685.Servo(1, ang3 + offset1);
  HCPCA9685.Servo(2, ang4 + offset2);
  HCPCA9685.Servo(3, ang6 + offset3);
}
