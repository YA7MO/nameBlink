int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
int delayTime;
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {


  pinMode(led2, OUTPUT);

 

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // To blink the LED, first we'll turn it on...
  longBlink(500);
  shortBlink(500);
  longBlink(500);
  longBlink(500);
  
  delay(2000);// between the letter 
  
  shortBlink(500);
  longBlink(500);
  
  delay(2000);// between the letter

  shortBlink(500);
  shortBlink(500);
  shortBlink(500);
  shortBlink(500);
  
  longBlink(500);
  shortBlink(500);
  longBlink(500);
  longBlink(500);
  
  delay(2000);// between the letter 
  
  shortBlink(500);
  longBlink(500);
  
  delay(5000);// delay after the sequence is done
  
}

void longBlink(int delayTime){

    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(delayTime);
  }
  
  void shortBlink(int delayTime){

    digitalWrite(led2, HIGH);
    delay(300);
    digitalWrite(led2, LOW);
    delay(delayTime);
  }
