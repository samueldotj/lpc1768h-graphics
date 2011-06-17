EESchema Schematic File Version 2  date 6/17/2011 10:41:03 PM
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 43  0
EELAYER END
$Descr A4 11700 8267
encoding utf-8
Sheet 1 1
Title ""
Date "17 jun 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	6450 2800 6450 1950
Wire Wire Line
	6450 1950 2500 1950
Wire Wire Line
	2500 1950 2500 3000
Wire Wire Line
	2500 3000 3200 3000
Wire Wire Line
	6450 3000 6150 3000
Wire Wire Line
	6150 3000 6150 2250
Wire Wire Line
	6150 2250 2900 2250
Wire Wire Line
	2900 2250 2900 2800
Wire Wire Line
	2900 2800 3200 2800
Wire Wire Line
	7550 4000 7550 3900
Wire Wire Line
	7550 3900 4750 3900
Wire Wire Line
	4750 3900 4750 3300
Wire Wire Line
	4750 3300 4250 3300
Wire Wire Line
	7550 3800 7550 3700
Wire Wire Line
	7550 3700 4950 3700
Wire Wire Line
	4950 3700 4950 3100
Wire Wire Line
	4950 3100 4500 3100
Wire Wire Line
	7550 3600 7550 3500
Wire Wire Line
	7550 3500 5150 3500
Wire Wire Line
	5150 3500 5150 2900
Wire Wire Line
	5150 2900 4500 2900
Wire Wire Line
	7550 3400 7550 3300
Wire Wire Line
	7550 3300 5450 3300
Wire Wire Line
	5450 3300 5450 2700
Wire Wire Line
	5450 2700 4500 2700
Connection ~ 6450 3200
Connection ~ 6000 5100
Connection ~ 5700 4900
Wire Wire Line
	5700 4900 5700 2050
Wire Wire Line
	5700 2050 7550 2050
Wire Wire Line
	7550 2050 7550 2600
Wire Wire Line
	7550 4200 7550 5100
Wire Wire Line
	7550 5100 3000 5100
Wire Wire Line
	3000 5100 3000 4050
Wire Wire Line
	3000 4050 3200 4050
Wire Wire Line
	6450 4200 6450 4900
Wire Wire Line
	6450 4900 3200 4900
Wire Wire Line
	3200 4900 3200 4350
Wire Wire Line
	6000 5100 6000 2600
Wire Wire Line
	6000 2600 6450 2600
Connection ~ 6000 5100
Wire Wire Line
	4500 2600 5550 2600
Wire Wire Line
	5550 2600 5550 3200
Wire Wire Line
	5550 3200 6450 3200
Wire Wire Line
	4500 2800 5300 2800
Wire Wire Line
	5300 2800 5300 3400
Wire Wire Line
	5300 3400 6450 3400
Wire Wire Line
	4500 3000 5050 3000
Wire Wire Line
	5050 3000 5050 3600
Wire Wire Line
	5050 3600 6450 3600
Wire Wire Line
	4500 3200 4850 3200
Wire Wire Line
	4850 3200 4850 3800
Wire Wire Line
	4850 3800 6450 3800
Wire Wire Line
	3200 2700 3200 1850
Wire Wire Line
	3200 1850 7800 1850
Wire Wire Line
	7800 1850 7800 3200
Wire Wire Line
	7800 3200 7550 3200
Wire Wire Line
	3200 2900 2750 2900
Wire Wire Line
	2750 2900 2750 1700
Wire Wire Line
	2750 1700 7900 1700
Wire Wire Line
	7900 1700 7900 3000
Wire Wire Line
	7900 3000 7550 3000
$Comp
L LPC1768H U1
U 1 1 4DFB869A
P 3900 3600
F 0 "U1" H 3900 3600 60  0000 C CNN
F 1 "LPC1768H" H 3900 3600 60  0000 C CNN
	1    3900 3600
	1    0    0    -1  
$EndComp
$Comp
L TM12864H6CCOWA U2
U 1 1 4DFB868A
P 7850 3450
F 0 "U2" H 8350 4450 60  0000 C CNN
F 1 "TM12864H6CCOWA" H 8350 4450 60  0000 C CNN
	1    7850 3450
	1    0    0    -1  
$EndComp
$EndSCHEMATC
