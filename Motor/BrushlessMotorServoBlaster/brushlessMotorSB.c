// Install => git clone https://github.com/richardghirst/PiBits
// Compile => gcc brushlessMotorSB.c -lwiringPi -o brushlessMotorSB

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wiringPi.h>

int main(){
  
 	system("sudo /home/pi/Desktop/PiBits/ServoBlaster/user/servod --p1pins=11,13");
  
	
 	system("echo P1-11=50 > /dev/servoblaster");
	system("echo P1-13=50 > /dev/servoblaster");
	delay(7000);
	
  	while(1){

    		system("echo P1-11=120 > /dev/servoblaster");
		system("echo P1-13=120 > /dev/servoblaster");
  	}
  
  	return 0;
}
