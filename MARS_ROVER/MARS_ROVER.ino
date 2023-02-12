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

int pwm_Lm = 4;
int in1_Lm = 28;
int in2_Lm = 26;
int pwm_Rm = 5;
int in1_Rm = 29;
int in2_Rm = 31;

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
  pinMode(pwm_Lm, OUTPUT);
  pinMode(in1_Lm, OUTPUT);
  pinMode(in2_Lm, OUTPUT);
  pinMode(pwm_Rm, OUTPUT);
  pinMode(in1_Rm, OUTPUT);
  pinMode(in2_Rm, OUTPUT);

  stop_motor();


}

void loop() {
  get_sbus();

  //  controller_on = true;

//  for (int i = 0; i < 10; i++) {
//    Serial.print(mystick[i]);
//    Serial.print(",");
//  }
//  Serial.println("");

  if (mystick[4] > 500 ) {
    int turning = map(mystick[0], -5, 1005, -90, 90);
    float myspeed = map(mystick[2], 0, 1000, -100, 100);
    set_motor((float)turning, myspeed, mystick[7] > 500);
  }
  else stop_motor();
}
