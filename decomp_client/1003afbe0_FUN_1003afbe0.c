
void FUN_1003afbe0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_2 < 0) {
    lVar2 = (long)param_2 + -1;
    do {
      uVar1 = QMapNodeBase::previousNode();
      *param_1 = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < -1);
  }
  else if (0 < param_2) {
    lVar2 = (long)param_2 + 1;
    do {
      uVar1 = QMapNodeBase::nextNode();
      *param_1 = uVar1;
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  return;
}

