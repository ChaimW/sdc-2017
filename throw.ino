/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #          Throw Function - "The Cannon"          #
  ###################################################*/

const byte THROW_PIN_POSITIVE = commandPin[2];
const byte THROW_PIN_NEGATIVE = commandPin[3];

void throwInit(){
  ;
}
void throwExtend() {
  digitalWrite(THROW_PIN_NEGATIVE, LOW);
  digitalWrite(THROW_PIN_POSITIVE, HIGH);
}
void throwRetract() {
  digitalWrite(THROW_PIN_POSITIVE, LOW);
  digitalWrite(THROW_PIN_NEGATIVE, HIGH);
}
void throwStop() {
  digitalWrite(THROW_PIN_POSITIVE, LOW);
  digitalWrite(THROW_PIN_NEGATIVE, LOW);
}
