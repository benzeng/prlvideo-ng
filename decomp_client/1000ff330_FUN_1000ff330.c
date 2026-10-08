
void FUN_1000ff330(undefined8 param_1,long param_2,long param_3,long param_4)

{
  QKeySequence *pQVar1;
  QKeySequence *this;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      this = operator_new(0x18);
      pQVar1 = *(QKeySequence **)(param_4 + lVar2);
      QKeySequence::QKeySequence(this,pQVar1);
      QKeySequence::QKeySequence(this + 8,pQVar1 + 8);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(pQVar1 + 0x10);
      *(QKeySequence **)(param_2 + lVar2) = this;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

