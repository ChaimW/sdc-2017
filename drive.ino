/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #     Sprint & Climb Functions - "The Wheels"     #
  ###################################################*/

const byte MAX_POWER = (DRIVE_SPEED_RANGE - 1) / 2;
const byte MAX_TURN = (DRIVE_TURN_RANGE - 1) / 2;

void driveStop() {
  // need code here
}
void drive(byte power, byte direct) {
  power = constrain(power, -MAX_POWER, MAX_POWER);
  direct = constrain(direct, -MAX_TURN, MAX_TURN);
  sPrint((String)("P" + power) + (String)("T" + direct)); // debug
  // need code here
}
void drive(byte value) {
  byte power = (value % DRIVE_SPEED_RANGE) - MAX_POWER;
  byte turn = (value / DRIVE_SPEED_RANGE) - MAX_TURN;
  drive(power, turn);
}

