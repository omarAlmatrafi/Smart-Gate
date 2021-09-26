   //////////////////////////////////////////////
  //        HALL EFFECT SENSOR DEMO           //
 //                                          //
//           http://www.educ8s.tv           //
/////////////////////////////////////////////

int hallSensorPin = 2;     
int ledPin =  3;    
int state = 0;          

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(hallSensorPin, INPUT);     
}

void loop(){
  
  state = digitalRead(hallSensorPin);

  if (state == LOW) {        
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}
