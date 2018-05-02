int Y = 0;
void setup() {
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
 
}
void loop(){
   display_digit(Y);
  if(digitalRead(10) == HIGH){
    Y++;
    if(Y == 10){
      Y = 0;
    }
  }
  }

void display_digit(int Y)
{
  {
    for(int i = 2; i < 9; i++)
    digitalWrite(i, HIGH);
    switch(Y)
    {
      case 0: 
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(8, LOW);
        break;
      case 1: 
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break;
      case 2:
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(7, LOW);
        break;
      case 3:
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        break;
      case 4:
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
      case 5:
        digitalWrite(8, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
      case 6:
        digitalWrite(8, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
      case 7:
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break;
      case 8:
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
      case 9:
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
     default:
        digitalWrite(2, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        break;
    } 
    }
  }
}

  



