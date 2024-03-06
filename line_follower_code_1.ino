//defining of the snsor pins 
#define leftsensorpin 2
#define rightsensorpin 3
#define motorspeed 200
//Defininf of the motor pins 

//int enablerightmotor=6;
//int rightmotorpin1=7;
int rightmotorpin=8;
//leftmotorpin 

//int enableleftmotor=5;
//int leftmotorpin1=9;
int leftmotorpin=10;
//


void setup() {

  // put your setup code here, to run once:
  //pinMode(enablerightmotor, OUTPUT);
  //pinMode(rightmotorpin1, OUTPUT);
  pinMode(rightmotorpin, OUTPUT);

  //pinMode(enablerleftmotor, OUTPUT);
  //pinMode(leftmotorpin1, OUTPUT);
  pinMode(leftmotorpin, OUTPUT);

  pinMode(leftsensorpin, INPUT);
  pinMode(rightsensorpin, INPUT);
  motorrotation(0,0)
}

void loop() {
int leftsensorpinv= digitalRead(leftsensorpin);
int rightsensorpinv= digitalRead(rightsenorpin);

  if(leftsensorpinv==LOW,rightsensorpinv==LOW){
    motorrotation(motorspeed, motorspeed);}
  else if(leftsensorpinv=LOW, rightsensorpinv==HIGH){
    mottorrotation(-motorspeed, motorspeed);}
  else if(leftsensorpinv==HIGH, rightsensorpinv==LOW){
    mottorrotation(motorspeed, -motorspeed);
  }
  else{
    mottorrotation(0,0);
  }
  // put your main code here, to run repeatedly:

}
void motorrotation(leftspeed, rightspeed){
  if (leftspeed>0){
    digitalWrite(leftmotorpin1=HIGH);
    digitalWrite(rightmotorpin1=LOW);
  }
  else if(rightspeed>0){
    
    digitalWrite(leftmotorpin=LOW);
    digitalWrite(rightmotorpin=HIGH);
  }
  else{
    digitalWrite(leftmotorpin=LOW);
    digitalWrite(rightmotorpin=LOW);
    
  }
  
}