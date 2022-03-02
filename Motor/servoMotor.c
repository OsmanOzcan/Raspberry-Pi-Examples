// Install => git clone https://github.com/richardghirst/PiBits
// Compile => gcc servo.c -lwiringPi -o servo

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wiringPi.h>

int main()
{
   	// run servo program
 	system("sudo /home/pi/Desktop/PiBits/ServoBlaster/user/servod --p1pins=16");
  
  	while(1){
 		system("echo P1-16=50 > /dev/servoblaster"); //0 degree
		delay(2000);

    		system("echo P1-16=150 > /dev/servoblaster"); //90 degree
    		delay(2000);

    		system("echo P1-16=250 > /dev/servoblaster"); //180 degree
    		delay(2000);
  	}
  
  	return 0;
}
