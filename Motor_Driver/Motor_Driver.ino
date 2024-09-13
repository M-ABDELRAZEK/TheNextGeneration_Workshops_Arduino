#define motor_pin1 9
#define motor_pin2 10
void setup() {
Serial.begin(9600);

pinMode(motor_pin1 ,OUTPUT);
pinMode(motor_pin2 ,OUTPUT);
}

void loop() {
  for(int r=0;r<=255;r++){
    setspeed(0,r);
    delay(100);
   }
setspeed(0,0);
 for(int r=255;r<=0;r--){
    setspeed(r,0);
    delay(100);
   }
   setspeed(0,0);
}
void setspeed(int x,int y)
{
  analogWrite(motor_pin1,x);
  analogWrite(motor_pin2,y);
}