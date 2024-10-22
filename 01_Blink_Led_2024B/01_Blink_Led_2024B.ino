//Code by: Julio A. García-Rodríguez.

int LED_PRUEBA = 2;

void setup() {
  pinMode(LED_PRUEBA, OUTPUT);     //configuration through pinMode function.
  digitalWrite(LED_PRUEBA, LOW);   //initial state. 
}

void loop() {
  delay(8000);
  digitalWrite(LED_PRUEBA, HIGH);
  delay(35);
  digitalWrite(LED_PRUEBA, LOW);
  delay(35);
}
