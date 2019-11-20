// DavidE 2/4/15
// This is my first Keypad sketch.  I am using a 12 key 13 pin common terminal
// keypad from SeeedStudio.

void setup(){
  Serial.begin(9600);
  /*
  Set pins 2-13 as inputs and enable the internal pull-up resistor 
  with the INPUT_PULLUP constant.  Wire each of these pins directly 
  to a unique pin on the keypad thus addressing each key.  
  The common terminal is connected to ground. 
  */
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP); 
  
}

void loop(){
  // The variable names correspond to the keys on the keypad:
  int star = digitalRead(2);  // keypad pin 2
  int seven = digitalRead(3);  // keypad pin 3
  int four = digitalRead(4);  // keypad pin 4
  int one = digitalRead(5);  // keypad pin 5
  int zero = digitalRead(6);  // keypad pin 6
  int eight = digitalRead(7);  // keypad pin 7
  int five = digitalRead(8);  // keypad pin 8
  int two = digitalRead(9);  // keypad pin 9
  int pound = digitalRead(10);  // keypad pin 10
  int nine = digitalRead(11);  // keypad pin 11
  int six = digitalRead(12);  // keypad pin 12
  int three = digitalRead(13);  // keypad pin 13
  
  // When the digitalRead() of a pin returns 0 the corresponding 
  // key label is printed via Serial.
  if(!star){ Serial.println("*"); }
  if(!seven){Serial.println(7);}
  if(!four){ Serial.println(4); }
  if(!one){ Serial.println(1); }
  if(!zero){ Serial.println(0); }
  if(!eight){ Serial.println(8); }
  if(!five){ Serial.println(5); }
  if(!two){ Serial.println(2); }
  if(!pound){ Serial.println("#"); }
  if(!nine){ Serial.println(9); }
  if(!six){ Serial.println(6); }
  if(!three){ Serial.println(3); }
  
}
