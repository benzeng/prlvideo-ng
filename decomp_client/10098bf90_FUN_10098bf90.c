
void FUN_10098bf90(long *param_1)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  lVar1 = _IOPSCopyPowerSourcesInfo();
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = _IOPSCopyPowerSourcesList(lVar1);
    param_1[1] = lVar1;
  }
  return;
}

