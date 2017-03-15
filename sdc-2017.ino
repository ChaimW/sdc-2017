/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #            Main Sketch - "The Brain"            #
  ###################################################*/

const byte commandPin[] = {37, 35, 33, 31, 29, 27, 25, 23}; // keep in mind that these are zero-indexed, but the relay board is labeled with a 1-index
const byte DRIVE_COMMAND_SHIFT = 16;
const byte DRIVE_SPEED_RANGE = 33; // goes from -16 to 16
const byte DRIVE_TURN_RANGE = 7; // goes from -3 to 3
byte cmnd; // this is used for reading from the serial buffer

void setup() { // this runs once at the beginning to set up
  Serial1.begin(9600); // open serial channel 1 to comunicate over bluetooth at 9600 baud (bits per second). This matches the setting for the bluetooth component
  Serial.begin(9600); // open serial channel 0 to comunicate over usb for debuging
  for (int i = 0; i < 8; i++) { // set command pins...
    pinMode(commandPin[i], OUTPUT); // to output mode
  }
  driveInit(); //call init for each module
  hitInit();
  liftInit();
  throwInit();
  stopAll(); // set everything to zero
}
void loop() { // main part of the program, loops indefinitely
  if (Serial1.available() > 0) { // check if there is data in the serial buffer
    cmnd = Serial1.read(); // read first byte of buffer
    run(cmnd); // call run() with that 1 byte number
  }
}
void run(byte command) { // processes a 1 byte number to call matching function
  Serial.println("run: " + command);
  switch (command) {
    case 0:
      stopAll();
      break;
    case 1:
      hitArm();
      break;
    case 2:
      hitFire();
      break; // case 3-5 reserved for hit
    case 6:
      liftRaise();
      break;
    case 7:
      liftLower();
      break; // case 8-10 reserved for lift
    case 11:
      throwExtend();
      break;
    case 12:
      throwRetract();
      break; // case 13-15 reserved for throw
    default:
      if (command >= DRIVE_COMMAND_SHIFT && command < DRIVE_SPEED_RANGE * DRIVE_TURN_RANGE + DRIVE_COMMAND_SHIFT) {
        drive(command - DRIVE_COMMAND_SHIFT);
      }
  }
}
void stopAll() {
  driveStop();
  hitStop();
  liftStop();
  throwStop();
}
