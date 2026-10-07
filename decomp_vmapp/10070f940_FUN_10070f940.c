
void FUN_10070f940(undefined8 *param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = 0x4000000007;
  lVar1 = _sysconf(0x1d);
  *(int *)((long)param_1 + 0xc) = (int)lVar1;
  lVar1 = _sysconf(0x3a);
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}

