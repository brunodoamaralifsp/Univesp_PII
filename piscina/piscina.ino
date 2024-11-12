#define rele 12
#define led 13
#define ldr A0

int estadoldr=0;
int estadorele=0;

void setup()
{
  Serial.begin(9600);
  
pinMode (rele,OUTPUT);
pinMode (led,OUTPUT);

}

void loop()
{
  estadoldr=analogRead(ldr);
Serial.println(estadoldr);
Serial.println(estadorele);
  
  if (estadoldr <511){
    estadorele=HIGH;
    digitalWrite(rele,estadorele);
  //delay(1000);
  }
  
  if (estadoldr >=511){
    
   digitalWrite(rele,LOW);
  //delay(1000);
  }

}