
void FUN_100559e80(undefined8 param_1,undefined8 *param_2,QKeySequence *param_3)

{
  QKeySequence *this;
  
  this = operator_new(0x18);
  QKeySequence::QKeySequence(this,param_3);
  QKeySequence::QKeySequence(this + 8,param_3 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *param_2 = this;
  return;
}

