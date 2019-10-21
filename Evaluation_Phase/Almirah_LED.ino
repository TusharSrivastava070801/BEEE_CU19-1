void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  int SW = digitalRead(2);
  if(SW == LOW)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
      
  }
}