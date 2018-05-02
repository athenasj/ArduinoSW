
//AND

const int buttonPin1 = 2;
const int buttonPin2= 3;
int buttonState1 = LOW;
int buttonState2 = LOW;
boolean checkbut1foron= true;
boolean checkbut1foroff= true;
boolean checkbut2foron= true;
boolean checkbut2foroff= true;
boolean outputon=true;
boolean outputoff=true;

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(13, OUTPUT);
  
}

void loop() {
  
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if(checkbut1foron==true && buttonState1==HIGH){
    delay(50);
    Serial.println("Button 1 is ON.");
    checkbut1foron=false;
    checkbut1foroff=true;    
    }
  if(checkbut1foroff==true && buttonState1==LOW){
    delay(50);
    Serial.println("Button 1 is OFF.");
    checkbut1foroff=false;
    checkbut1foron=true;
    outputoff=true;
    }
  if(checkbut2foron==true && buttonState2==HIGH){
    delay(50);
    Serial.println("Button 2 is ON.");
    checkbut2foron=false;
    checkbut2foroff=true;
    }
  if(checkbut2foroff==true && buttonState2==LOW){
    delay(50);
    Serial.println("Button 2 is OFF.");
    checkbut2foroff=false;
    checkbut2foron=true;
    outputoff=true;
    }  
  

  if ((buttonState1 == HIGH) && (buttonState2 == HIGH))
  {
    digitalWrite(13, HIGH);
    if(outputon==true){
    Serial.println("LED ON");    
    outputon=false;
    outputoff=true;
    
  }}
  else 
  {
    digitalWrite(13, LOW);
    outputon==true;
    if(outputoff==true){
      Serial.println("LED OFF");
    outputon =true;
    outputoff=false;
    }
  }
  }
