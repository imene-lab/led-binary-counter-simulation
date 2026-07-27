
int led0 = 2;   // Bit 0 
int led1 = 4;   // Bit 1
int led2 = 6;   // Bit 2
int led3 = 11;  // Bit 3 



void setup() {
  
 pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  for (int i = 0; i < 16; i++) {
    digitalWrite(led0, bitRead(i, 0));
    digitalWrite(led1, bitRead(i, 1));
    digitalWrite(led2, bitRead(i, 2));
    digitalWrite(led3, bitRead(i, 3));

    delay(1000);
   }

}
