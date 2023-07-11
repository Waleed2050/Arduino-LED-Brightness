/*int led = 6 ;
int increase = 5;

void setup()
{ 
  pinMode(led, OUTPUT);
}

void loop()
{ for (int i=0;i<256;i+=increase){
 if (i==255){increase= -increase;}
 if (i<0){i=0;increase= -increase;}
  analogWrite(led,i);
delay(100);}
}*/
int led = 6 ;
int increase = 5;
int i = 5 ;

void setup()
{ 
  pinMode(led, OUTPUT);
}

void loop()
{ for (i;i<256;i+=increase){
 if (i==255 || i==0){increase= -increase;}
  analogWrite(led,i);
delay(100);}
}