//Herhangi bir dijital pinden analog değerler okumak için c kodu.
//Gürültüleri engellemek için filtreler kullanılmalı.
//Devre => https://pic-microcontroller.com/read-analog-values-without-an-adc-using-pic12f675-microcontroller/

//Compile => gcc readAnalog.c -lwiringPi -o readAnalog

#include <wiringPi.h>
#include <stdio.h>

int main(){

	wiringPiSetup();
	
	int lastTime = 0, count = 0;
	
	while (1){
		
		int reading = 0;
    
		pinMode(1, OUTPUT);
    
		digitalWrite(1, LOW);
		delay(10);

		pinMode(1, INPUT);
		
		while(digitalRead(1) == LOW){
			reading++;
		}
		
		
		if(millis() > lastTime + 1000 ){
			
			lastTime = millis();

			
			printf("%.2f\n", reading);
			
		}
	}
}
