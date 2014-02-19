nt dataPin = 2;
int latchPin = 3;
int clockPin = 4;
int delayTime = 2000; //time it takes for the LEDs around circle... default 2 seconds between each = 2000


void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
 
//standby...when button is not pressed then...
digitalWrite(13,HIGH); // switch on LED on Pin 13
digitalWrite(7, HIGH); // send a 5v signal to pin 7 (button input)


//if button is pressed...begin couting around the circle
if (digitalRead(10) == 1)
{ 


    //send 7 different values to the shift register
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 2);
    digitalWrite(latchPin, HIGH);


    delay(delayTime); //wait specfied time set at
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 6);
    digitalWrite(latchPin, HIGH);


    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 14);
    digitalWrite(latchPin, HIGH);


    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 30);
    digitalWrite(latchPin, HIGH);


    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 63);
    digitalWrite(latchPin, HIGH);


    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 127);
    digitalWrite(latchPin, HIGH);


    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);
    digitalWrite(latchPin, HIGH);
  
   // finished loop...... flash on and off and then restart
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
    
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);
    digitalWrite(latchPin, HIGH);
    
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
   
    delay(200);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);
    digitalWrite(latchPin, HIGH);
   
    delay(delayTime);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
}
}