# Raspberry Pi Examples with C programing
This repository provides various examples on Raspberry Pi single board computers written in C programming language.


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
   
   Raspberry pi'nin analog pini olmadığı için analog okuma yapılamaz. Analog okuma yapmanın yollarından biri de rc devresi kullanmaktır. Bu ölçüm, kondansatörün şarj ve deşarj süresi hesaplanarak yapılabilir. Ayrıca, gürültüleri engellemek için filtre algoritmaları kullanılmalıdır.
### 2.1 Wiring
![image](https://user-images.githubusercontent.com/73670053/156428355-bfac4810-db92-459f-b870-594e43e716ee.png)

*Example wiring (be used LDR as analog sensor)*

*Örnek devre (analog sensör olarak LDR kullanılmış)*
### 2.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/
gcc readAnalog.c -lwiringPi -o readAnalog
./readAnalog
```


## 3. Motors
### 3.1 Servo motor
### 3.1.1 Installation
```
cd ~
git clone https://github.com/richardghirst/PiBits
```
### 3.1.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Motors
gcc servoMotor.c -lwiringPi -o servoMotor
./servoMotor
```

### 3.2 Brushless Motor
There are two alternative ways.
### 3.2.1 Using PiGpio Library
### 3.2.1.1 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Motors/BrushlessMotorPiGpio
gcc brushlessMotorPG.c -lwiringPi -lpigpio -o brushlessMotorPG
./brushlessMotorPG
```
### 3.2.2 Using ServoBlaster Library
### 3.2.2.1 Installation
```
cd ~
git clone https://github.com/richardghirst/PiBits
```
### 3.2.2.2 Compile and Run
```
cd ~/OsmanOzcan/Raspberry-Pi-Examples/Motors/BrushlessMotorServoBlaster
gcc brushlessMotorSB.c -lwiringPi -o brushlessMotorSB
./brushlessMotorSB
```


