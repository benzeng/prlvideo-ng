
void FUN_10045b270(undefined4 *param_1)

{
  long lVar1;
  
  if (0 < (int)param_1[0x10]) {
    lVar1 = 0;
    do {
      param_1[0x22] = param_1[lVar1 + 0x23];
      (**(code **)(param_1 + 0xc))(param_1 + 0x10,*(long *)(param_1 + 4) + lVar1,*param_1);
      param_1[lVar1 + 0x23] = param_1[0x22];
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0x10]);
  }
  return;
}

