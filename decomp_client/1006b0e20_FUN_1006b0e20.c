
undefined8 FUN_1006b0e20(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = QKeySequence::operator==((QKeySequence *)(param_1 + 8),(QKeySequence *)(param_2 + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

