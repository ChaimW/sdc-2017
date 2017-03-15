/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #     Sprint & Climb Functions - "The Wheels"     #
  ###################################################*/

const byte CLIMB_ARM_POSITIVE = COMMAND_PIN[6];
const byte CLIMB_ARM_NEGATIVE = COMMAND_PIN[7];
const byte MOTORS[4][3] = {
  {2,3,4},
  {7,6,5},
  {8,9,10},
  {13,12,11}
};

const byte MAX_POWER = (DRIVE_SPEED_RANGE - 1) / 2;
const byte MAX_TURN = (DRIVE_TURN_RANGE - 1) / 2;

void driveInit(){
  ;
}
void drive(byte value) {
  byte power = (value % DRIVE_SPEED_RANGE) - MAX_POWER;
  byte turn = (value / DRIVE_SPEED_RANGE) - MAX_TURN;
  drive(power, turn);
}
void drive(byte power, byte direct) {
  power = constrain(power, -MAX_POWER, MAX_POWER);
  direct = constrain(direct, -MAX_TURN, MAX_TURN);
  // need code here
}
void driveStop() {
  // need code here
}
void climbArmExtend(){
  
}
void climbArmRetract(){
  
}
void climbArmStop(){
  
}
