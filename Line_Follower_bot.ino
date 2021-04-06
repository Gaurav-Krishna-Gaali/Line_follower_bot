//aurdino line follower bot with ir sensors//

//defining pins and variables
#define LS A0  //left sensor
#define RS A1  //right sensor
#define MS A2  //middle sensor

//declaring the motors to the board
#define LM 5  //left motor
#define RM 7  //right motor

void setup() {// put your setup code here, to run once:
pinMode(LS,INPUT);
pinMode(RS,INPUT);
pinMode(MS,INPUT);
pinMode(LM,OUTPUT);
pinMode(RM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if((digitalRead(LS)==1)&&(digitalRead(RS)==1)&&(digitalRead(MS)==0))
//move forward
{
  digitalWrite(LM,HIGH);
  digitalWrite(RM,HIGH);
  
}
if((digitalRead(LS)==1)&&(digitalRead(RS)==0)&&(digitalRead(MS)==0))
//turn LEFT
{
  digitalWrite(LM,LOW);
  digitalWrite(RM,HIGH);
  
}
if((digitalRead(LS)==1)&&(digitalRead(RS)==0)&&(digitalRead(MS)==1))
//turn LEFT
{
  digitalWrite(LM,LOW);
  digitalWrite(RM,HIGH);
  
}
if((digitalRead(LS)==0)&&(digitalRead(RS)==1)&&(digitalRead(MS)==0))
//turn right
{
  digitalWrite(LM,HIGH);
  digitalWrite(RM,LOW);
  
}
if((digitalRead(LS)==0)&&(digitalRead(RS)==1)&&(digitalRead(MS)==1))
//turn right
{
  digitalWrite(LM,HIGH);
  digitalWrite(RM,LOW);
  
}
if((digitalRead(LS)==1)&&(digitalRead(RS)==1)&&(digitalRead(MS)==1))
//stop
{
  digitalWrite(LM,LOW);
  digitalWrite(RM,LOW);
  
}
}
