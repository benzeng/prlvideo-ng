
void FUN_100560890(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      QKeySequence::QKeySequence
                ((QKeySequence *)(param_2 + lVar1),(QKeySequence *)(param_4 + lVar1));
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

