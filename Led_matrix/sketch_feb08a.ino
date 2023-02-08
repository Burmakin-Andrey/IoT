#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6
int a = 0;

void setup() {
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);
  
}
void off(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, LOW);
}
void onn(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);
}

void l1(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void l2(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void l3(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}
void l4(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}

void l12(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void l34(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}
void l13(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);
}
void l24(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);
}
void l14(){
  l1();
  delay(5);
  l4();
  delay(5); 
}
void l23(){
  l2();
  delay(5);
  l3();
  delay(5); 
}
void l124(){
  l12();
  delay(5);
  l4();
  delay(5); 
}
void l123(){
  l12();
  delay(5);
  l3();
  delay(5); 
}
void l134(){
  l1();
  delay(5);
  l34();
  delay(5); 
}
void l234(){
  l2();
  delay(5);
  l34();
  delay(5); 
}
void loop() {
  onn();
  delay(2000);
  off();
  delay(2000);
  l12();
  delay(2000);
  l34();
  delay(2000);
  l13();
  delay(2000);
  l24();
  delay(2000);
  
  while (a != 1000){
    l14();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);
  
  while (a != 1000){
    l23();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);
  
  while (a != 1000){
    l124();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);
  
  while (a != 1000){
    l123();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);

  while (a != 1000){
    l134();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);

  while (a != 1000){
    l234();
    a = a + 1;
  }
  a = 0;
  off();
  delay(1000);
}
