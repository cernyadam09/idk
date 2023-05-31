

const byte led1 = 10, led2 = 8, led3 = 12;

int zpozdeni = 400;


int cteni, cteniOld=0,  pocetpolozek;
unsigned long casMic, casMicOld, casRozdil;


void setup() 
{
 pinMode(A0, INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 Serial.begin(9600);
 
 
}

void loop() 
{
  

  analogRead(A0)
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




void tisk() 
{
if(pocetpolozek++>20) 
    {

      Serial.println();pocetpolozek = 0;
   
 
    }
     Serial.print(cteni); Serial.print("-"); Serial.print(casRozdil); Serial.print(",");
  



}

int cteni;
int led = 13;
int led1 = 12;

void led()
	// Předat všechny proměnné jako parametry led( int pin, int sta) - (proměnná ctení název neodpovídá obsahu)
		// a ovládat jen jednu diodu
		// název led - název neodpovídá obsahu např(LedSvitiAnoNe)
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




void tisk() 
{
if(pocetpolozek++>20) 
    {

      Serial.println();pocetpolozek = 0;
   
 
    }
     Serial.print(cteni); Serial.print("-"); Serial.print(casRozdil); Serial.print(",");
  



}

int cteni;
int led = 13;
int led1 = 12;

void led()
	// Předat všechny proměnné jako parametry led( int pin, int sta) - (proměnná ctení název neodpovídá obsahu)
		// a ovládat jen jednu diodu
		// název led - název neodpovídá obsahu např(LedSvitiAnoNe)
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















