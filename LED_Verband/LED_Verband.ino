/*
   Ersteller: C.Wiencken
   Letzte Änderung 15.09.2020
   Hardware: Arduino UNO, grüne LED´s, passender Vorwiderstand
   Programmbeschreibung:
   Ein Verband von 4 Led´s werden zum Blinken gebracht. Sie bleiben jeweils 1 sec an und erlöschen wieder.
*/

#define LED_1   13      // grüne LED auf Pin 13
#define LED_2   12      // grüne LED auf Pin 12
#define LED_3   11      // grüne LED auf Pin 11
#define LED_4   10      // grüne LED auf Pin 10
#define takt    1000    // Taktzeit zwischen High & Low Zustand

void setup() 
{
  pinMode (LED_1, OUTPUT);
  pinMode (LED_2, OUTPUT);
  pinMode (LED_3, OUTPUT);
  pinMode (LED_4, OUTPUT);
  Serial.begin (9600);

}

void loop() 
{
  digitalWrite (LED_1, HIGH);       // LED_1 wird angeschaltet
  Serial.println ("LED_1 an");      // LED_1 wird im seriellen Monitor angezeigt
  delay (takt);                     
  digitalWrite (LED_1, LOW);
  Serial.println ("LED_1 aus");
  delay (takt);

  digitalWrite (LED_2, HIGH);       // LED_2 wird angeschaltet
  Serial.println ("LED_2 an");      // LED_2 wird im seriellen Monitor angezeigt
  delay (takt);
  digitalWrite (LED_2, LOW);
  Serial.println ("LED_2 aus");
  delay (takt);

  digitalWrite (LED_3, HIGH);       // LED_3 wird angeschaltet
  Serial.println ("LED_3 an");      // LED_3 wird im seriellen Monitor angezeigt
  delay (takt);
  digitalWrite (LED_3, LOW);
  Serial.println ("LED_3 aus");
  delay (takt);

  digitalWrite (LED_4, HIGH);      // LED_4 wird angeschaltet
  Serial.println ("LED_4 an");     // LED_4 wird im seriellen Monitor angezeigt
  delay (takt);
  digitalWrite (LED_4, LOW);
  Serial.println ("LED_4 aus");
  delay (takt);
}
