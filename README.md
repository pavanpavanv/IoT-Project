# IoT-Project

Abstract: 
 
The Smart Home Energy Monitoring System collects energy data from household appliances in real time 
using CT sensors. An LCD displays the data after it has been amplified and processed by an ESP32 
microcontroller. The system uses machine learning methods, such as Support Vector Machines (SVM), to 
categorize energy use into three levels: low, medium, and high. By properly monitoring and optimizing 
energy use, this technology helps homeowners cut down on waste and enhance sustainability.

Methodology :
• Connection: Before being transmitted to the microcontroller, the feeble signals from the CT sensors must 
be amplified. The Smart Home Energy Monitoring System implementation process is described in this section. The system divides appliance energy usage into low, medium, and high categories using CT sensors, an amplifier module, an ESP32 microcontroller, and SVM (Support Vector Machine), the main machine learning method. We'll go over the main elements of the suggested system and their functions. 

Components in the Methodology: 

1. CT Sensors (Current Transformers):
   
• Function: Real-time measurement of the current passing through the appliances. 
• Justification: CT sensors are installed on various appliances' electrical cables to continuously measure the amount of current being used. The linked device's power usage is directly proportional to this current.

3. Amplifier Module:
   
• Function: Enhances the signal obtained from the CT sensors for accurate interpretation by the ESP32. 
• Justification: The ESP32 microcontroller cannot directly read the signals from the CT sensors because 
they are too faint. In order for the ESP32 to analyze the current readings, the amplifier module makes sure 
that these signals are amplified to a readable voltage range. 
• Connection: The amplifier module receives the output of the CT sensors and sends amplified signals to 
the analog pins of the ESP32. 

5. ESP32 Microcontroller:
   
• Function: Serves as the system's central processing unit, classifying energy use, managing outputs, and 
receiving data from the amplifier module. 
• Explanation: The SVM machine learning method is used by the ESP32 to process the current data that 
has been amplified from the sensors. It establishes whether the energy consumption is low, medium, or 
high based on the classification results. After that, the LCD display and LED indicators receive the 
corresponding result from the ESP32. 
• Connection: The ESP32 transmits digital signals to the LCD and LEDs after receiving analog signals from 
the amplifier module. If appliance control is necessary, it can also be connected to relay modules. 

7. LCD:
   
• Connection: The CT sensor is positioned on the line to measure the current flowing through the load 
(appliance), which is linked to the power source. 
• Function: Shows the results of the classification (low, medium, and high consumption) along with the 
current values. 
• Explanation: Each appliance's current energy consumption is shown visibly on the LCD. For the user's 
reference, it displays current figures in addition to the energy usage classification. 
• Connection: Using the I2C interface, the ESP32 exchanges information with the LCD on the appliance's 
classification and current usage. 

9. LED:
    
• Function: Show the three degrees of energy usage (low, medium, and high) visually. 
• To explain, the ESP32 is linked to three LEDs: red for high, yellow for medium, and green for low. To 
provide a rapid visual indicator of power usage, the correct LED illuminates based on the energy 
consumption classification. 
• Connection: The ESP32 uses GPIO to control the LEDs. 

11. Load/Appliance:
    
• Function: Serves as a representation of the monitored device (such as bulbs). 
• Justification: The appliance whose energy usage is being monitored is this one. This appliance's electrical line has a CT sensor installed to monitor its current consumption. 
 
 
 
 Data Flow and Interaction Between Components: 
 
1. Data Acquisition: The current passing through the appliances is continuously monitored by the CT 
sensors. 
2. Signal Amplification: The amplifier module receives the signals from the CT sensors and amplifies them 
to a level that the ESP32 can understand. 
3. Processing and Classification: Using training data, the ESP32 classifies the current into low, medium 
and high energy consumption levels after reading the amplified signals and processing them using the 
SVM algorithm. 
4. Display and Indication: To display usage in real time, the ESP32 uses I2C to deliver the classified energy consumption statistics to the LCD display. Depending on the classification result, it simultaneously turns on the red, yellow, or green LED. 
