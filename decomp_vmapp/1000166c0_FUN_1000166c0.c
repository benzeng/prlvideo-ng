
void FUN_1000166c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      QRegExp::QRegExp((QRegExp *)(param_2 + lVar1),(QRegExp *)(param_4 + lVar1));
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

