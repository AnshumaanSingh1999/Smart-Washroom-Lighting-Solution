const int PHOTOpin = A0;
const int PIRpin1 = 2;
const int PIRpin2 = 3;  
const int PIRpin3 = 4; 
const int PIRpin4 = 5; 
const int LEDpin1 = 8;  
const int LEDpin2 = 9;  
const int LEDpin3 = 10;
const int LEDpin4 = 11;  
void setup() {  
  Serial.begin(9600);  
  pinMode(PIRpin1, INPUT); 
  pinMode(PIRpin2, INPUT);  
  pinMode(PIRpin3, INPUT);
  pinMode(PIRpin4, INPUT);  
  pinMode(PHOTOpin, INPUT);  
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);  
  pinMode(LEDpin3, OUTPUT);  
  pinMode(LEDpin4, OUTPUT);  
}  
void loop() {  
  int sensorStatusphoto = analogRead(PHOTOpin); 
  int sensorStatuspir1 = digitalRead(PIRpin1);
  int sensorStatuspir2 = digitalRead(PIRpin2);
  int sensorStatuspir3 = digitalRead(PIRpin3);
  int sensorStatuspir4 = digitalRead(PIRpin4);
  if (sensorStatusphoto <200){
    digitalWrite(LEDpin1, HIGH); 
  }  
  else{
    if(sensorStatuspir4 == HIGH){
      digitalWrite(LEDpin1, HIGH);
    }
    else{
      digitalWrite(LEDpin1, LOW); 
    } 
  }
  if(sensorStatuspir1 == HIGH){
    digitalWrite(LEDpin3, HIGH);
  }
  else{
    digitalWrite(LEDpin3, LOW); 
  }
  if(sensorStatuspir2 == HIGH){
    digitalWrite(LEDpin2, HIGH);
  }
  else{
    digitalWrite(LEDpin2, LOW); 
  }
  if(sensorStatuspir3 == HIGH){
    digitalWrite(LEDpin4, HIGH);
  }
  else{
    digitalWrite(LEDpin4, LOW); 
  } 
}
