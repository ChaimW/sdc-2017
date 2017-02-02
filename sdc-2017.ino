/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  ###################################################*/

unsigned long lastCommandTime = 0; // allows us to pause briefly between commands to allow time for action without using delay()
const int delayLength = 100; // length of delay in milliseconds
byte param1, param2; // these are used for reading from the serial buffer
void setup() { // this runs once at the beginning to set up
  Serial.begin(9600); // open the serial channel (to comunicate over usb or bluetooth) at 9600 baud (bits per second). This matches the default for the bluetooth component
}
void loop() { // main part of the program, loops indefinitely
  if (Serial.available() >= 2 && millis() > lastCommandTime + delayLength) {
    param1 = Serial.read();
    param2 = Serial.read();
    lastCommand = millis();
    run(param1, param2);
  }
}
void run(byte command, byte value) { // this recieves a number between 0 and 93 for the command, and between 7 and 100 for the value
  switch (command) { // uses the first letter
    case 0:
      driveForward(value);
      break;
    case 1:
      driveBackward(value);
      break;
    case 2:
      liftRaise(value);
      break;
    default:
      Serial.print("Invalid Command");
  }
}
void liftRaise(byte n) { // activate linear accelerator at n% power/speed upward
  // need code here
}
void liftLower() { // lower lift to zero at fixed speed
  // need code here
}
void liftStop() { // stop all lift movement
  // need code here
}
