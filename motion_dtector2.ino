#define pingTrig 6 
#define pingEcho 7 

int cameratrigger = 2 ;
int led = 3 ;

int sign = 8;
int sign2 = 4;
void setup()
{Serial.begin(9600);
  pinMode(pingTrig, OUTPUT);
  pinMode(pingEcho, INPUT);
delay(200);
  pinMode(led, OUTPUT);
pinMode(cameratrigger, OUTPUT);

pinMode(sign,OUTPUT);
pinMode(sign2,OUTPUT);

}

void loop()
{
  long duration, inches, cm;
  
  digitalWrite(sign,HIGH);
  delay(1000);
  digitalWrite(sign,LOW);
  digitalWrite(sign2,HIGH);
  delay(1000);  
  digitalWrite(sign2, LOW);

  
  
  if(sign2 = HIGH){
    
  
  digitalWrite(pingTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pingTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingTrig, LOW);
  
  duration = pulseIn(pingEcho, HIGH);
  
  cm = duration / 29 / 2;
  
  Serial.print("-->");Serial.println(cm);
  if(cm < 30 ){
digitalWrite(cameratrigger,HIGH);
digitalWrite(led,HIGH);    
    delay(200);
    digitalWrite(cameratrigger,LOW);
digitalWrite(led,LOW);    
delay(200);}

  }
  
  if(sign = HIGH){
  
    
  
  }
  
 


}

//int sign = 4;
//int sign2 = 8
//
//void setup(){
//pinMode(sign,OUTPUT);
//pinMode(sign2,OUTPUT);
//}
//void loop(){
//
//  digitalWrite(sign,HIGH);
//  delay(5000);
//  digitalWrite(sign,LOW);
//  digitalWrite(sign2,HIGH);
// delay(5000);  
//  digitalWrite(sign2, LOW);
// digitalWrite(sign, HIGH); 
// delay(5000);
//
//
//}

