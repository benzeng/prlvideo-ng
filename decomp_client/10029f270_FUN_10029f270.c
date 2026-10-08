
void FUN_10029f270(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      QSslError::QSslError((QSslError *)(param_2 + lVar1),(QSslError *)(param_4 + lVar1));
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

