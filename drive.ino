/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #     Sprint & Climb Functions - "The Wheels"     #
  ###################################################*/

const byte MAX_SPEED = 63;
const byte MIN_SPEED = -MAX_SPEED;
const byte MAX_TURN = 7;
const byte MIN_TURN = -MAX_TURN;

void driveStop() {
  // need code here
}
void drive(byte speed, byte direction){
  speed = constrain(speed, MIN_SPEED, MAX_SPEED);
  direction = constrain(direction, MIN_TURN, MAX_TURN);
  // need code here
}
void drive(byte speed){
  drive(speed, 0);
}
void driveForward(byte speed){
  drive(speed);
}
void driveBackward(byte speed){
  drive(-speed);
}

