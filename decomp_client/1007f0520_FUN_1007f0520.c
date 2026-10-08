
QKeySequence * FUN_1007f0520(QKeySequence *param_1,long param_2,int param_3)

{
  QKeySequence *pQVar1;
  
  if (param_3 == 1) {
    pQVar1 = (QKeySequence *)(param_2 + 0x18);
  }
  else {
    if (param_3 != 0) {
      QKeySequence::QKeySequence(param_1);
      return param_1;
    }
    pQVar1 = (QKeySequence *)(param_2 + 0x10);
  }
  QKeySequence::QKeySequence(param_1,pQVar1);
  return param_1;
}

