/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #     Sprint & Climb Functions - "The Wheels"     #
  ###################################################*/

const byte CLIMB_ARM_POSITIVE = COMMAND_PIN[6];
const byte CLIMB_ARM_NEGATIVE = COMMAND_PIN[7];
const byte FRONT_ENABLE = 7;
const byte BACK_ENABLE = 0;
const byte NUM_MOTORS = 4;
const byte NUM_PINS = 3
const byte MOTORS[NUM_MOTORS][NUM_PINS] = {
  {8, 9, 10},
  {13, 12, 11},
  {2, 3, 4},
  {7, 6, 5}
};
const byte FR[] = MOTORS[0];
const byte FL[] = MOTORS[1];
const byte BR[] = MOTORS[2];
const byte BL[] = MOTORS[3];
const byte MAX_POWER = (DRIVE_SPEED_RANGE - 1) / 2;
const byte MAX_TURN = (DRIVE_TURN_RANGE - 1) / 2;

void driveInit() {
  pinMode(FRONT_ENABLE, OUTPUT);
  pinMode(BACK_ENABLE, OUTPUT);
  for (int i = 0; i < NUM_MOTORS; i++) {
    for (int j = 0; j < NUM_PINS; j++) {
      pinMode(MOTORS[i][j]);
    }
  }
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
void climbArmExtend() {
  digitalWrite(CLIMB_ARM_POSITIVE, HIGH);
  digitalWrite(CLIMB_ARM_NEGATIVE, LOW);
}
void climbArmRetract() {
  digitalWrite(CLIMB_ARM_POSITIVE, LOW);
  digitalWrite(CLIMB_ARM_NEGATIVE, HIGH);

}
void climbArmStop() {
  digitalWrite(CLIMB_ARM_POSITIVE, LOW);
  digitalWrite(CLIMB_ARM_NEGATIVE, LOW);

}

