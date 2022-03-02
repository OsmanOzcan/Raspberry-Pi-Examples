
## Requirements:
'''
sudo apt-get update
git clone https://github.com/OsmanOzcan/Raspberry-Pi-Examples.git
'''

## Compile:
'''
cd /OsmanOzcan/Raspberry-Pi-Examples/Sensors/ina219
gcc ina219test.c raspberrypi4b_driver_ina219_interface.c iic.c driver_ina219_basic.c driver_ina219.c -lm  -o ina219test
./ina219test
'''
