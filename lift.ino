/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #           Lift Functions - "Going Up"           #
  ###################################################*/

const byte LIFT_PIN_POSITIVE = commandPin[0];
const byte LIFT_PIN_NEGATIVE = commandPin[1];

void liftInit(){
  ;
}
void liftRaise() { // activate linear accelerator upward at fixed power
  digitalWrite(LIFT_PIN_NEGATIVE, LOW);
  digitalWrite(LIFT_PIN_POSITIVE, HIGH);
}
void liftLower() { // lower lift to zero at fixed power
  digitalWrite(LIFT_PIN_POSITIVE, LOW);
  digitalWrite(LIFT_PIN_NEGATIVE, HIGH);
}
void liftStop() { // stop all lift movement
  digitalWrite(LIFT_PIN_POSITIVE, LOW);
  digitalWrite(LIFT_PIN_NEGATIVE, LOW);
}
