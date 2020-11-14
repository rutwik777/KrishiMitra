#define A 5 //wheels  clock wise D1
#define B 4//wheels  anti clock wise D2
#define C 0//seeder D3
#define D 2//slider clock wise D4 
#define E 14//slider anti clock wise D5
#define F 12//injecting D6
#define G 13//WATERING

void setup(){
   pin Mode(A,OUTPUT);
  pin Mode(B,OUTPUT);
  pin Mode(C,OUTPUT);
  pin Mode(D,OUTPUT);
  pin Mode(E,OUTPUT);
  pin Mode(F,OUTPUT);
  pin Mode(G,OUTPUT);
  }
 

void loop(){
  for(int k=0;k<3;k++)
  {
         for(int i=0;i<3;i++)
  {
      digital Write(A,HIGH);
    digital Write(C,LOW); 
      delay(1000); 
    
      digital Write(A,LOW);
      digital Write(F,HIGH);
      delay(1000);
      digital Write(F,LOW);
      digital Write(C,HIGH);
      digital Write(G,HIGH);
      delay(500);
      digital Write(G,LOW);
      delay(3000);
  }
  
  {
    digital Write(C,LOW); 
    digital Write(D,HIGH);
    delay(5500);
    digital Write(D,LOW);
    digital Write(C,HIGH);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     delay(500);
  }  
  for(int j=0;j<3;j++)
  {
    digital Write(B,HIGH);   
    digital Write(C,LOW); 
    delay(1000);
    
    digital Write(B,LOW);
    digital Write(F,HIGH);
    delay(1000);
    digital Write(F,LOW);
    digital Write(C,HIGH);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     delay(500);
    delay(3000);
  }
   digital Write(C,LOW); 
   digital Write(D,HIGH);
    delay(5500);
     digital Write(C,HIGH);
    digital Write(D,LOW);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     delay(500);
  }
int i, j, k=0;
   for(int k=0;k<3;k++)
  {
     for(int i=0;i<3;i++)
  {
    digital Write(A,HIGH);
    digital Write(C,LOW); 
    delay(1000); 
     
    digital Write(A,LOW);
    digital Write(F,HIGH);
    delay(1000);
    digital Write(F,LOW);
    digital Write(C,HIGH);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     delay(500);
    delay(3000);
  }
  
  {
    digital Write(C,LOW); 
    digital Write(E,HIGH);
    delay(5500);
    digital Write(E,LOW);
    digital Write(C,HIGH);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     delay(500);
  }  
  for(int j=0;j<3;j++)
  {
    digital Write(B,HIGH);   
    digital Write(C,LOW); 
    delay(1000);
    
    digital Write(B,LOW);
    digital Write(F,HIGH);
    delay(1000);
    digital Write(F,LOW);
    digital Write(C,HIGH);
    digital Write(G,HIGH);
     delay(500);
     digital Write(G,LOW);
     
    delay(3000);
    
  }
   digital Write(C,LOW); 
   digital Write(E,HIGH);
    delay(5500);
     digital Write(C,HIGH);
     digital Write(G,HIGH);
     delay(500);
     digital Write(G,HIGH);
     delay(500);
    digital Write(E,LOW);
  
  }
  }
