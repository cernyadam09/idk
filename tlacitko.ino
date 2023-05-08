

const byte led = 13, led1 = 12, tlacitko = 11;

int zpozdeni = 400;


int cteni, cteniOld=0,  pocetpolozek;
unsigned long casMic, casMicOld, casRozdil;

void setup() 
{
 pinMode(tlacitko, INPUT);
 pinMode(led,OUTPUT);
 pinMode(led1,OUTPUT);
 Serial.begin(9600);
 
 
}

void loop() 
{
  
  cteniOld = cteni;
  cteni= digitalRead(tlacitko);
  casMic = millis();
  
  if(cteni!=cteniOld)
  {
    casRozdil= casMic - casMicOld;
    
    
    
    if (casRozdil>80) {

      tisk();
      casMicOld = casMic;

    }

    
  }

led();


  
}










void tisk() 
{
if(pocetpolozek++>20) 
    {

      Serial.println();pocetpolozek = 0;
   
 
    }
     Serial.print(cteni); Serial.print("-"); Serial.print(casRozdil); Serial.print(",");
  



}

void led()
{


  if(cteni == HIGH)
  {

    digitalWrite(led1, HIGH);
    digitalWrite(led, HIGH);
  }
  else
  {

    digitalWrite(led1,LOW);
    digitalWrite(led,LOW);
  }


}








