/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #          Hit Functions - "Hole in One"          #
  ###################################################*/

const byte HIT_POSITIVE = COMMAND_PIN[4];
const byte HIT_NEGATIVE = COMMAND_PIN[5];

void hitInit(){
  ;
}
void hitArm() {
  digitalWrite(HIT_NEGATIVE, LOW);
  digitalWrite(HIT_POSITIVE, HIGH);
  delay(100); // see if we can drop this delay
  digitalWrite(HIT_NEGATIVE, HIGH);
}
void hitFire() {
  digitalWrite(HIT_NEGATIVE, LOW);
  digitalWrite(HIT_POSITIVE, HIGH);
}
void hitStop() {
  digitalWrite(HIT_NEGATIVE, LOW);
  digitalWrite(HIT_POSITIVE, LOW);
}
