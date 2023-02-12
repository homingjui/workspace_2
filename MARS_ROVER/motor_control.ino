
float wheel_r = 122;

float d1 = 271; // distance in mm
float d2 = -278;
float d3 = 301;
float d4 = 304;
float d23 = (-d2 + d3) / 2;

int offset0 = -15;
int offset1 = -7;
int offset2 = -15;
int offset3 = -10;

float max_r = d1 + ( d3 / tan(M_PI / 2));
float max_v = sqrt(square(d23) + square(d1 + max_r)) / max_r;
float norm_v = 255 / max_v;

void stop_motor() {
  digitalWrite(in1_L, HIGH);
  digitalWrite(in2_L, HIGH);
  digitalWrite(in1_R, HIGH);
  digitalWrite(in2_R, HIGH);
  digitalWrite(in1_Lm, HIGH);
  digitalWrite(in2_Lm, HIGH);
  digitalWrite(in1_Rm, HIGH);
  digitalWrite(in2_Rm, HIGH);
  analogWrite(pwm_L, 0);
  analogWrite(pwm_R, 0);
  analogWrite(pwm_Lm, 0);
  analogWrite(pwm_Rm, 0);
  HCPCA9685.Servo(0, 180);
  HCPCA9685.Servo(1, 180);
  HCPCA9685.Servo(2, 180);
  HCPCA9685.Servo(3, 180);
}

float check_inf_div(float a, float b) {
  if ( a == INFINITY && b == INFINITY) return 1;
  if ( a == INFINITY && b != INFINITY) return INFINITY;
  if ( a != INFINITY && b == INFINITY) return 0;
  else return a / b;
}

void set_motor(float ang, float myspeed , bool o) {
  // ang : 0~90 deg
  // speed : 0~100 %
  // ang = w4 ang  / w2 ang

  myspeed = myspeed / 100;
  ang = (ang / 180) * M_PI ;
  float r = d1 + ( d3 / tan(fabs(ang)));
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

  float V13 = check_inf_div( sqrt(square(d23) + square(d1 + r)) , r ) ;
  float V2  = check_inf_div( r + d4 , r );
  float V46 = check_inf_div( sqrt(square(d23) + square(r - d1)) , r ) ;
  float V5  = check_inf_div( r - d4 , r );

  //  Serial.println(ang);
  //  Serial.println(r);
  //  Serial.println(myspeed);
  //  Serial.println(V13);
  //  Serial.println(V2);
  //  Serial.println(V46);
  //  Serial.println(V5);
  //  Serial.println( myspeed * norm_v * V13);
  //  Serial.println( myspeed * norm_v * V2);
  //  Serial.println( myspeed * norm_v * V46);
  //  Serial.println( myspeed * norm_v * V5);
  //  Serial.println();

  if (o) {
    analogWrite(pwm_L , 255 * fabs(myspeed));
    analogWrite(pwm_R , 255 * fabs(myspeed));
    analogWrite(pwm_Lm, 255 * fabs(myspeed));
    analogWrite(pwm_Rm, 255 * fabs(myspeed));

  } else {
    if (ang >= 0) {
      analogWrite(pwm_L , max( 0, fabs(myspeed) * norm_v * V13));
      analogWrite(pwm_R , max( 0, fabs(myspeed) * norm_v * V2) );
      analogWrite(pwm_Lm, max( 0, fabs(myspeed) * norm_v * V46));
      analogWrite(pwm_Rm, max( 0, fabs(myspeed) * norm_v * V5) );
    } else {
      analogWrite(pwm_R , max( 0, fabs(myspeed) * norm_v * V13));
      analogWrite(pwm_L , max( 0, fabs(myspeed) * norm_v * V2) );
      analogWrite(pwm_Rm, max( 0, fabs(myspeed) * norm_v * V46));
      analogWrite(pwm_Lm, max( 0, fabs(myspeed) * norm_v * V5) );
    }
  }

  if (myspeed < 0) {
    digitalWrite(in1_L, HIGH);
    digitalWrite(in2_L, LOW);
    digitalWrite(in1_R, HIGH);
    digitalWrite(in2_R, LOW);
    digitalWrite(in1_Lm, HIGH);
    digitalWrite(in2_Lm, LOW);
    digitalWrite(in1_Rm, HIGH);
    digitalWrite(in2_Rm, LOW);
  } else {
    digitalWrite(in1_L, LOW);
    digitalWrite(in2_L, HIGH);
    digitalWrite(in1_R, LOW);
    digitalWrite(in2_R, HIGH);
    digitalWrite(in1_Lm, LOW);
    digitalWrite(in2_Lm, HIGH);
    digitalWrite(in1_Rm, LOW);
    digitalWrite(in2_Rm, HIGH);
  }

}
