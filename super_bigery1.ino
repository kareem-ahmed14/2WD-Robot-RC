
byte motor [6]={5,6,7,8,9,10};
byte x[3]={
0b00101011,
0b00000000,
0b0010111,
};
void setup()
{
  for( byte i=0; i<sizeof(motor);i++){
  pinMode(motor[i], OUTPUT);
}
}
void loop()
{
  for( byte j=0;j<3;j++){
  for( int i=0;i<6;i++){
  digitalWrite(motor[i],x[j]&0b00100000>>i);
    // 0b00100000 could be replaced by 32
  }
     if(j==1){delay(500);}
    else{delay(1000);}        
  }
}