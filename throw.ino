/*###################################################
  #    ASME Student Design Competition 2016-2017    #
  # California State University, Northridge Chapter #
  #               CODENAME: PENTAKILL               #
  ###################################################
  #          Throw Function - "The Cannon"          #
  ###################################################*/

const byte THROW_POSITIVE = COMMAND_PIN[2];
const byte THROW_NEGATIVE = COMMAND_PIN[3];

void throwInit(){
  ;
}
void throwExtend() {
  digitalWrite(THROW_NEGATIVE, LOW);
  digitalWrite(THROW_POSITIVE, HIGH);
}
void throwRetract() {
  digitalWrite(THROW_POSITIVE, LOW);
  digitalWrite(THROW_NEGATIVE, HIGH);
}
void throwStop() {
  digitalWrite(THROW_POSITIVE, LOW);
  digitalWrite(THROW_NEGATIVE, LOW);
}
