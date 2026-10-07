
undefined8 FUN_100296ae0(long param_1,long *param_2,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  *param_2 = param_1;
  param_2[2] = 0;
  param_2[1] = (long)FUN_100296a10;
  lVar1 = *(long *)(param_1 + 0x13800);
  param_2[3] = *(int *)((long)param_2 + 0x90c) * lVar1;
  param_2[4] = lVar1 * param_2[0x120];
  param_2[5] = (long)param_2;
  *(int *)(param_2 + 6) = (int)param_2[0x121];
  param_2[7] = (long)param_2;
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_1004035a0(param_1 + 0x137b8,param_2,*(undefined8 *)(param_1 + 0x1008),8000000);
    *(byte *)((long)param_2 + 0x31) = *(byte *)((long)param_2 + 0x31) | 0x10;
  }
  FUN_100296b80(param_1,param_2);
  return 0;
}

