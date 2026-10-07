
void FUN_100296980(long param_1,long *param_2,long param_3,int param_4)

{
  long lVar1;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  *param_2 = param_1;
  param_2[2] = 0;
  param_2[1] = (long)FUN_100296a10;
  lVar1 = *(long *)(param_1 + 0x13800);
  param_2[3] = *(int *)(param_3 + 0x90c) * lVar1;
  param_2[4] = lVar1 * *(long *)(param_3 + 0x900);
  param_2[5] = param_3;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 0x908);
  param_2[7] = param_3;
  if (param_4 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_1004035a0(param_1 + 0x137b8,param_2,*(undefined8 *)(param_1 + 0x1008),8000000);
    *(byte *)((long)param_2 + 0x31) = *(byte *)((long)param_2 + 0x31) | 0x10;
  }
  return;
}

