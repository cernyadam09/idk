

const byte ledcervena = 10, ledzelena = 8, ledzluta = 12;

int zpozdeni = 400;


int cteni, cteniOld=0,  pocetpolozek, metr=0;
unsigned long casMic, casMicOld, casRozdil;


void setup() 
{
 pinMode(A0, INPUT);
 pinMode(ledcervena,OUTPUT);
 pinMode(ledzelena,OUTPUT);
 pinMode(ledzluta,OUTPUT);
 Serial.begin(9600);
 
 
}

void loop() 
{
  

metr= analogRead(A0);
 

if(metr < 3333)
  {

    digitalWrite(ledcervena, LOW);
    digitalWrite(ledzelena, HIGH);
    digitalWrite(ledzluta, LOW);
  }
  
if(metr > 3333  && metr < 6666)
  {

    digitalWrite(ledcervena, LOW);
    digitalWrite(ledzelena, LOW);
    digitalWrite(ledzluta, HIGH);
  }


if(metr > 6666)
  {

    digitalWrite(ledcervena, HIGH);
    digitalWrite(ledzelena, LOW);
    digitalWrite(ledzluta, LOW);
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

//int cteni;
//int led = 13;
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



















