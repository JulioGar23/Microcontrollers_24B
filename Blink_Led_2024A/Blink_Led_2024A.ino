//Code by: Julio A. García-Rodríguez.

int test_led1 = 1;
int test_led2 = 2; 

void setup() {
  pinMode(test_led1, OUTPUT);     //configuration through pinMode function.
  pinMode(test_led2, OUTPUT);     //configuration through pinMode function.
  digitalWrite(test_led1, LOW);   //initial state. 
  digitalWrite(test_led2, LOW);
}

void loop() {
  digitalWrite(test_led1, HIGH);
  delay(2000);
  digitalWrite(test_led1, LOW);
  delay(2000);
  digitalWrite(test_led2, HIGH);
  delay(2000);
  digitalWrite(test_led2, LOW);
  delay(2000);
}
