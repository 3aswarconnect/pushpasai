int led=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()){
   int a=Serial.parseInt();
   Serial.println(a);
   
   if(a==5)
   {
    digitalWrite(led,HIGH);
   }
   if (a==3)
   {
    digitalWrite(led,LOW);
   }



    
  }

}
