#define PIN_LED 13
unsigned int count;
bool toggle;


void setup() {
  
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
  count = 0;
  toggle = 0;
  Serial.println("Hello World!");
}

bool toggle_state(bool toggle) {
  return !toggle;
}

void loop() {
  toggle = toggle_state(toggle);
  Serial.println(++count);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  
}
