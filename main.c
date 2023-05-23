/*
 * main.c
 *
 *  Created on: May 14, 2021
 *      Author: osboxes
 */
#include <wiringPi.h>
#include <stdio.h>
#include <softPwm.h>

#define ledPin    1

int main(void)
{
        int i;

        printf("froga ... \n");

        wiringPiSetup();        //Initialize wiringPi.

        softPwmCreate(ledPin,  0, 100);//Creat SoftPWM pin

        while(1){
                for(i=0;i<100;i++){  //make the led brighter
                        softPwmWrite(ledPin, i);
                        delay(20);
                }
                delay(300);
                for(i=100;i>=0;i--){  //make the led darker
                        softPwmWrite(ledPin, i);
                        delay(20);
                }
                delay(300);
        }
}



