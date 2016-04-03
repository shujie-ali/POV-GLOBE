# POV-GLOBE
Abstract:
The main objective of this project was to learn how we can play with nature (vision power of living things) through science. In this project we are converting a 1 dimensional Arc object into 2 dimensional spherical surface that in real never exist but it is only a persistence of vision. This is done by pixelating an image into 2 dimensional array and then displaying its each column by a high speed rotating arc of LEDs at fixed RPMs where each LED turns on at those particular places where we want to show the visible part of image and this process loop back resulting a static display on spherical surface. 

Project Objectives:
•	The first design objective was to decide the total number of LEDs that will correspond to image resolution of our display and then according to that decide the diameter of the rim whose half portion was to be use to mount LEDs.
•	The 2nd design objective was to make a stable and controlled mechanical structure where an arc is rotating along the diameter by a high speed motor.
•	 The 3rd design objective was to first optimize our circuit and then simulate it on ISIS and then design it on AERIES as to have minimum number of jumper on it.
•	The last objective was to calculate the rotations speed as corresponding to that decide the timing of timing circuit.

Learning Objectives: 
The main objective was to learn persistence of vision, and to learn high frequency circuits. We learnt how we can synchronize different electronic component and utilize them in good manner. Power management was also a very good learning for us where our circuit was having 62 independent component and each component was high power consumer and we was only powering up from a single source at fixed potential of 5 volts making our current variable. We also learnt function implementation using ROMs and pulse modeling. We also learnt pulse modeling and their duty cycles.
Design and Concept:
We simplified our circuit and only used components permitted in DLC to keep it in pure DLC. Block diagram is given below. 



There are three components of the Circuit that controls the working of our circuit are
•	The Timer Circuit 
•	Counters
•	ROMs
The Timer Circuit
This circuit was powered up through fix power supply of 5 volts. We modeled 555 timer in astable configuration. Its output pulse was 6826.66689 Hz or more accurate as 0.00014648437 sec pulse of 51.2 % duty cycle.   .The capacitances and resistances were calculated from only 555 timer counter portals available. Were Capacitance C1 was 0.0047 µF and C2 was 0.01 µF, resistances were r1 as 1 KΩ and r2 as 22 KΩ

Counter
We used 74LS193 4 bit counter and cascade them to form a 8 bit counter. Load, count down were kept high, while all other inputs were grounded. Carry out of 1st counter were given as a count up for 2nd counter, while 1st counter was given count up through 555 timer. 



ROMs
we used 24C512 Memory chip (ROMs) to store our image matrix. All the 1st eight input were joined and all remaining inputs were grounded.
Components: 
0.0047 µF and C2 was 0.01 µF, resistances were r1 as 1 KΩ and r2 as 22 KΩ

•	LEDs 				48
•	ROMs (24C512)		6
•	1 KΩ  Resistor			1
•	22 KΩ	Resistor		1
•	Capacitors (0.01, 0.0047) uF	1
•	7805 IC 			1
•	74LS193 counters		2
•	
Methodology:
The initial design of circuit consisted of reset sensors, 16 bits counters for addressing, and input sensors to load initial addresses to show multiple images. But keeping in mind the unstable mechanical structure and possibility of error in our sensor we limited our design to only 8 bit address lines and hardcoding the total address to be 256 so our 8 bit counter reset at 256 so we don’t need to use any catch and reset things.
Limitations and Applications:

Applications:

We can use as a decoration material in our homes where we can use rgb lights and display any beautiful image while protecting it in glass globe. It can also use to take this idea next to hologram display where we can introduce a 3rd dimension. 
Limitations:
	It’s the persistence of vision and is only displayed at high rotation frequency. We were using ultra bright LEDs still we were facing visibility issues in daylight.

Conclusion:
So in conclusion, we were successfully able to design and implement persistence of vision using basic components.
•	Components- ROMs, counters, timer
•	Ideas- Storing an image as function of address and accessing it at appropriate position.
. 
