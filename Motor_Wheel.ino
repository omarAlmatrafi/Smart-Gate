/*
 * Arduino code change the direction of rotation 
 * of a DC motor with 2 relays.
 * 
 * This is basic code. I have advanced code which can be used in both 
 * for Low-level trigger and High-lever trigger relay with clean code
 * 
 * Written by Ahmad Shamshiri for Robojax.com on 
 * Sunday August 18, 2019 
 * at 20:22 in Ajax, Ontario, Canada
 * Watch video instruction for this code: https://youtu.be/JMBgGO07YLM
 * 
 * 
 * 
 Get this code and other Arduino codes from Robojax.com
Learn Arduino step by step in structured course with all material, wiring diagram and library
all in once place. Purchase My course on Udemy.com http://robojax.com/L/?id=62

If you found this tutorial helpful, please support me so I can continue creating 
content like this. You can support me on Patreon http://robojax.com/L/?id=63

or make donation using PayPal http://robojax.com/L/?id=64
* 
 * This code is "AS IS" without warranty or liability. Free to be used as long as you keep this note intact.* 
 * This code has been download from Robojax.com
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */


int relay1 = 8;
int relay2 = 11;


void setup() {

    pinMode(relay1, OUTPUT);// set pin as output for relay 1
    pinMode(relay2, OUTPUT);// set pin as output for relay 2


    // keep the motor off by keeping both HIGH
    digitalWrite(relay1, HIGH); 
    digitalWrite(relay2, HIGH); 

 
  
  Serial.begin(9600);// initialize serial monitor with 9600 baud
  Serial.println("Robojax Motor Direction of Rotation");
  Serial.println("Using 2 Relays");  
  delay(2000);
}

void loop() {

 // Rotate in CCW direction
  digitalWrite(relay1, LOW);// turn relay 1 ON
  digitalWrite(relay2, HIGH);// turn relay 2 OFF  
  Serial.println("Rotating in CCW");  
  delay(3000);// wait for 3 seconds

 // stop the motor
  digitalWrite(relay1, HIGH);// turn relay 1 OFF
  digitalWrite(relay2, HIGH);// turn relay 2 OFF
  Serial.println("Stopped");  
  delay(2000);// stop for 2 seconds
  
 // Rotate in CW direction
  digitalWrite(relay1, HIGH);// turn relay 1 OFF
  digitalWrite(relay2, LOW);// turn relay 2 ON 
  Serial.println("Rotating in CW");  
  delay(3000);// wait for 3 seconds

 // stop the motor
  digitalWrite(relay1, HIGH);// turn relay 1 OFF
  digitalWrite(relay2, HIGH);// turn relay 2 OFF
  Serial.println("Stopped");  
  delay(2000);// stop for 2 seconds 
  
 Serial.println("===============");

          
}// loop end 
