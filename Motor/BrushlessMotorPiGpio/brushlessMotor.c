// Source => https://github.com/dharo/Motors
// Compile => gcc brushlessMotor.c -lwiringPi -lpigpio -o brushlessMotor

#include "pigpio.h"
#include <wiringPi.h>
#include <stdio.h>

int main(){
	gpioInitialise();
	gpioSetMode(23, PI_OUTPUT);
	
	gpioServo(23, 1000);
	delay(7000);
	
	gpioServo(23, 1200);
	delay(5000);
	
	gpioTerminate();
	
	return 0;
}
