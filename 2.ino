void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char num;
  if(Serial.available()>0)
  {
    num = Serial.read();
    switch(num)
      {
        case '0': zero();break;
        case '1':  one();break;
        case '2':  two();break;
        case '3':three();break;
        case '4': four();break;
        case '5': five();break;
        case '6':  six();break;
        case '7':seven();break;
        case '8':eight();break;
        case '9': nine();break;
      }
  }
}

void one()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void two()
{
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void three()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void four()
{
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void five()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void six()
{
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void seven()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void eight()
{
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}

void nine()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}


void zero()
{
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
