
undefined8 FUN_100403220(long param_1,long *param_2,long *param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  
  param_3[0xe] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *param_3 = param_1;
  param_3[2] = (long)FUN_1004034e0;
  param_3[1] = (long)FUN_100403540;
  param_3[5] = (long)param_3;
  param_3[7] = (long)(param_2 + 1);
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 6) = param_4;
  lVar1 = *(long *)(param_1 + 0x48);
  param_3[3] = (ulong)*(uint *)(param_2 + 2) * lVar1;
  param_3[4] = lVar1 * *param_2;
  if (param_5 != 0x7fffffffffffffff) {
    FUN_1004035a0(param_1,param_3,param_5,8000000);
    *(byte *)((long)param_3 + 0x31) = *(byte *)((long)param_3 + 0x31) | 0x10;
  }
  FUN_100402390(param_1,param_3);
  FUN_100402710(param_1,param_3,*(undefined8 *)param_3[7],param_3[3]);
  FUN_100402b80(param_1,param_3);
  FUN_100402d70(param_1);
  FUN_100402c70(param_1,0);
  return 0;
}

