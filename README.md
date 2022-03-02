# Raspberry Pi Examples with C porograming

## Requirements:
```
sudo apt-get update
cd ~
git clone https://github.com/OsmanOzcan/Raspberry-Pi-Examples.git
```

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
