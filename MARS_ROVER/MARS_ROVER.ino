#include "HCPCA9685.h"
#include <IBusBM.h>

//#include "ppm.h"
//#include <sbus.h>
//SBUS sbus;

#define  I2CAdd 0x40

IBusBM IBus; 
HCPCA9685 HCPCA9685(I2CAdd);

int mystick[10];
bool controller_on = false;

int pwm_L = 2;
int in1_L = 24;
int in2_L = 22;
int pwm_R = 3;
int in1_R = 25;
int in2_R = 27;

void setup() {
  Serial.begin(115200);

  HCPCA9685.Init(SERVO_MODE);
  HCPCA9685.Sleep(false);

  //  sbus.begin(A1, sbusNonBlocking);
  //  ppm.begin(A1, false);
  //  while (true) {
  //    int flag = 0;
  //    get_t8s_ppm();
  //    for ( int i = 0; i < 8 ; i++) {
  //      if (mystick[i] <= 1000 and mystick[i] >= 0) flag++;
  //    }
  //    if (flag == 8) break;
  //    delay(10);
  //  }

  IBus.begin(Serial1);

  pinMode(A3, INPUT);
  pinMode(A2, INPUT);
  pinMode(pwm_L, OUTPUT);
  pinMode(in1_L, OUTPUT);
  pinMode(in2_L, OUTPUT);
  pinMode(pwm_R, OUTPUT);
  pinMode(in1_R, OUTPUT);
  pinMode(in2_R, OUTPUT);

  digitalWrite(in1_L, LOW);
  digitalWrite(in2_L, HIGH);
  digitalWrite(in1_R, LOW);
  digitalWrite(in2_R, HIGH);

}

void loop() {
  get_sbus();

  //  controller_on = true;
  //  for ( int i = 0; i < 4 ; i++) {
  //    if (mystick[i] < -10) {
  //      for ( int j = 0; j < 8 ; j++)
  //        mystick[j] = 500;
  //      controller_on = false;
  //    }
  //  }

  //  get_t8s();
  for (int i = 0; i < 10; i++) {
    Serial.print(mystick[i]);
    Serial.print(",");
  }
  Serial.println("");

  //  if (mystick[4] > 500 - 10 and mystick[4] < 500 + 10 and controller_on) {
  if (mystick[4] > 500 ) {
    int myspeed = map(mystick[2], 0, 1000, -255, 255);
    analogWrite(pwm_L, abs(myspeed));
    analogWrite(pwm_R, abs(myspeed));
    if (myspeed > 0) {
      digitalWrite(in1_L, LOW);
      digitalWrite(in2_L, HIGH);
      digitalWrite(in1_R, LOW);
      digitalWrite(in2_R, HIGH);
    }
    else if (myspeed < 0) {
      digitalWrite(in1_L, HIGH);
      digitalWrite(in2_L, LOW);
      digitalWrite(in1_R, HIGH);
      digitalWrite(in2_R, LOW);
    }

    //    int myservoa = map(mystick[0], 0, 1000, 0, 360);
    //    int myservob = map(mystick[0], 0, 1000, 360, 0);
    //    //    Serial.print(myservoa);
    //    //    Serial.print(",");
    //    HCPCA9685.Servo(0, myservob);
    //    HCPCA9685.Servo(1, myservoa);
    //    HCPCA9685.Servo(2, myservob);
    //    HCPCA9685.Servo(3, myservoa);

    int turning = map(mystick[0], -5, 1005, -90, 90);


    if (mystick[7] < 500) set_motor((float)turning, 0, false);
    else {
      int myspeed = map(mystick[2], 0, 1000, -255, 255);
      analogWrite(pwm_L, abs(myspeed));
      analogWrite(pwm_R, abs(myspeed));
      if (myspeed > 0) {
        digitalWrite(in1_L, LOW);
        digitalWrite(in2_L, HIGH);
        digitalWrite(in1_R, HIGH);
        digitalWrite(in2_R, LOW);
      }
      else if (myspeed < 0) {
        digitalWrite(in1_L, HIGH);
        digitalWrite(in2_L, LOW);
        digitalWrite(in1_R, LOW);
        digitalWrite(in2_R, HIGH);
      }
      set_motor((float)turning, 0, true);
    }
  }
  else {
    digitalWrite(in1_L, HIGH);
    digitalWrite(in2_L, HIGH);
    digitalWrite(in1_R, HIGH);
    digitalWrite(in2_R, HIGH);
    analogWrite(pwm_L, 0);
    analogWrite(pwm_R, 0);
    HCPCA9685.Servo(0, 180);
    HCPCA9685.Servo(1, 180);
    HCPCA9685.Servo(2, 180);
    HCPCA9685.Servo(3, 180);
  }


  //  Serial.println();
}
