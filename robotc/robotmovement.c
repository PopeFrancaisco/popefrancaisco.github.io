task main{
  //All the robot code
  setMotor(leftMotor,63);
  setMotor(rightMotor,63);
  wait(3,seconds);
  setMotor(leftMotor,-63);
  setMotor(rightMotor,-63);
  wait(3,seconds);
  //Make the robot spin
  setMotor(leftMotor,127);
  setMotor(rightMotor,0);
  wait(1,seconds);
}