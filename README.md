# Raspberry Pi Examples with C programing

## Requirements:
```
sudo apt-get update
cd ~
git clone https://github.com/OsmanOzcan/Raspberry-Pi-Examples.git
```
## 1. Sensors
## 1.1 Adafruit Ultimate GPS
### 1.1.1 Installation
```
cd /usr/include
git clone https://github.com/wdalmut/libgps.git
```
### 1.1.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Sensors
gcc adafruitUltimateGPS.c -l gps -lm -o adafruitUltimateGPS
./adafruitUltimateGPS
```

## 1.2 BNO055
### 1.2.1 Installation
```
cd /usr/include
git clone https://github.com/fm4dd/pi-bno055.git
```
### 1.2.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Sensors
gcc bno055.c /usr/include/pi-bno055/i2c_bno055.c -o bno055
./bno055
```

## 1.3 MS5611
### 1.3.1 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Sensors
gcc gcc ms5611.c -lm -o ms5611
./ms5611
```

## 1.4 INA219
### 1.4.1 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Sensors/ina219
gcc ina219test.c raspberrypi4b_driver_ina219_interface.c iic.c driver_ina219_basic.c driver_ina219.c -lm  -o ina219test
./ina219test
```

## 2. Analog Inputs for Raspberry Pi
   Since raspberry pi does not have an analog pin, analog reading cannot be made. Using rc circuit is one of the ways to make analog reading. This measurement can be made by calculating the charging and discharging time of the capacitor. Also, filter algorithms should be used to block out noises.
### 2.1 wiring
![image](https://user-images.githubusercontent.com/73670053/156428355-bfac4810-db92-459f-b870-594e43e716ee.png)

*Example wiring (be used LDR as analog sensor)*
### 2.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/
gcc readAnalog.c -lwiringPi -o readAnalog
./readAnalog
```

