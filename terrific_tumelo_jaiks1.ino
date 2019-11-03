int value=0;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  value=analogRead(A0);
  
  if(value<500)
  {
    digitalWrite(7,HIGH);
  
  }
  else
  {
    digitalWrite(7,LOW);
    
  }}