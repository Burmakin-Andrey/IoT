#define btn_pin 2
#define led_pin 13
bool state = LOW;

void setup() {
  pinMode(btn_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  int int_number = digitalPinToInterrupt(btn_pin);
  attachInterrupt(int_number, _blink,  RISING);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led_pin, state);
}

void _blink(){
  state=!state;
}
