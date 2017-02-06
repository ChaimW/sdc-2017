/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################*/

byte cmnd; // this is used for reading from the serial buffer
void setup() { // this runs once at the beginning to set up
  Serial1.begin(9600); // open serial channel 1 to comunicate over bluetooth at 9600 baud (bits per second). This matches the setting for the bluetooth component
}
void loop() { // main part of the program, loops indefinitely
  if (Serial1.available() > 0) { // check if there is data in the serial buffer
    cmnd = Serial1.read(); // read first byte of buffer
    run(cmnd);
  }
}
void run(byte command) {
  switch (command) {
    case 0:
      stopAll();
      break;
    case 1:

      break;
    case 2:

      break;
    default:
      Serial.print("Invalid Command");
  }
}
void stopAll() {
  driveStop();
  hitStop();
  liftStop();
  throwStop();
}
