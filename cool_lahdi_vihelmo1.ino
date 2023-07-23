int enable12=10;
int enable34=9;
int input1=4;
int input2=5 ;
int input3=6;
int input4=7 ;
int order;
void setup()
{
    pinMode(enable12, OUTPUT);
    pinMode(enable34, OUTPUT);
    pinMode(input1, OUTPUT);
    pinMode(input2, OUTPUT);
    pinMode(input3, OUTPUT);
    pinMode(input4, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
  analogWrite(enable12,255);
  analogWrite(enable34,255);
  
  if(Serial.available()>0){
  order=Serial.read();
  } 
  switch(order){
  case'f':  digitalWrite(input1,HIGH);
            digitalWrite(input2,LOW);
            digitalWrite(input3,HIGH);
            digitalWrite(input4,LOW);           
            break;            
   case'b': digitalWrite(input1,LOW);
            digitalWrite(input2,HIGH);
            digitalWrite(input3,LOW);
            digitalWrite(input4,HIGH);                      
             break;            
   case'r': digitalWrite(input1,LOW);
            digitalWrite(input2,LOW);
            digitalWrite(input3,HIGH);
            digitalWrite(input4,LOW);
              break;
   case'l': digitalWrite(input1,HIGH);
            digitalWrite(input2,LOW);
            digitalWrite(input3,LOW);
            digitalWrite(input4,LOW); 
              break;
   case's': digitalWrite(input1,LOW);
            digitalWrite(input2,LOW);
            digitalWrite(input3,LOW);
            digitalWrite(input4,LOW); 
               break;
  
  
  
  }
  
}