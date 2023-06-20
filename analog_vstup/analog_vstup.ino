

const byte ledcervena = 10, ledzelena = 8, ledzluta = 12;

int zpozdeni = 400;


int cteni, cteniOld=0,  pocetpolozek, metr=0;
unsigned long casMic, casMicOld, casRozdil;
int analog=0;

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
  

metr= analogRead(analog);
 

if(metr < 682)
  {

    digitalWrite(ledcervena, LOW);
    digitalWrite(ledzelena, HIGH);
    digitalWrite(ledzluta, LOW); 
  }
  
if(metr > 682  && metr < 852)
  {

    digitalWrite(ledcervena, LOW);
    digitalWrite(ledzelena, LOW);
    digitalWrite(ledzluta, HIGH);
  }


if (metr>852)
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






















