//Source => https://github.com/hepingood/ina219.git
//Compile => gcc ina219test.c raspberrypi4b_driver_ina219_interface.c iic.c driver_ina219_basic.c driver_ina219.c -lm  -o ina219test


#include "driver_ina219_basic.h"
#include "iic.h"
#include <stdio.h>

int main(){
	
	ina219_basic_init(INA219_ADDRESS_0, 0.1);
        
	float mA;
                      
     	while(1){
         	ina219_basic_read(&mA);
              	printf("%f\n", mA);
     	}
                        
    	ina219_basic_deinit();

	return 0;
}
