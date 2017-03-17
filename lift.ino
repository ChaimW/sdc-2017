/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #           Lift Functions - "Going Up"           #
  ###################################################*/

const byte LIFT_POSITIVE = COMMAND_PIN[4];
const byte LIFT_NEGATIVE = COMMAND_PIN[5];

void liftInit() {
  ;
}
void liftRaise() { // activate linear accelerator upward at fixed power
  digitalWrite(LIFT_NEGATIVE, LOW);
  digitalWrite(LIFT_POSITIVE, HIGH);
}
void liftLower() { // lower lift to zero at fixed power
  digitalWrite(LIFT_POSITIVE, LOW);
  digitalWrite(LIFT_NEGATIVE, HIGH);
}
void liftStop() { // stop all lift movement
  digitalWrite(LIFT_POSITIVE, LOW);
  digitalWrite(LIFT_NEGATIVE, LOW);
}

