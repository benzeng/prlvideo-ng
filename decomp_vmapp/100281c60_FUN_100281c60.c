
void FUN_100281c60(long param_1,long *param_2,long *param_3)

{
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *param_2 = param_1;
  param_2[2] = (long)FUN_100281d60;
  param_2[1] = (long)FUN_100281d80;
  param_2[5] = (long)param_2;
  param_2[7] = (long)param_3;
  if (*(int *)((long)param_3 + 0x14) != 0) {
    *(undefined4 *)(param_2 + 6) = 1;
  }
  param_2[3] = (ulong)*(uint *)(param_3 + 3);
  param_2[4] = *(long *)(param_1 + 400) * *param_3;
  FUN_1004035a0(param_1 + 0x148,param_2,*(undefined8 *)(param_1 + 0x130),8000000);
  *(byte *)((long)param_2 + 0x31) = *(byte *)((long)param_2 + 0x31) | 0x10;
  return;
}

