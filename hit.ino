/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #          Hit Functions - "Hole in One"          #
  ###################################################*/

const byte HIT_PIN_POSITIVE = commandPin[4];
const byte HIT_PIN_NEGATIVE = commandPin[5];

void hitInit(){
  ;
}
void hitArm() {
  digitalWrite(HIT_PIN_NEGATIVE, LOW);
  digitalWrite(HIT_PIN_POSITIVE, HIGH);
  delay(100); // see if we can drop this delay
  digitalWrite(HIT_PIN_NEGATIVE, HIGH);
}
void hitFire() {
  digitalWrite(HIT_PIN_NEGATIVE, LOW);
  digitalWrite(HIT_PIN_POSITIVE, HIGH);
}
void hitStop() {
  digitalWrite(HIT_PIN_NEGATIVE, LOW);
  digitalWrite(HIT_PIN_POSITIVE, LOW);
}
