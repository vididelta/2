void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}
int a;
void loop()
{
  
  if (Serial.available()>0)
  {
    a=Serial.read();
    switch(a)
    {
      case 'f':
      go();
        break;
      case 'b':
    back();
        break;
      case 'r':
        right();
        break;
      case 'l':
        left();
        break;
      default:
        stop();
        break;
        
    }
  }
}
void  go()          
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
 
}
void right()            
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void left()         
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
 
}
void back()         
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void stop()             
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  if (1==1)             
  {
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(500);
  }
}
