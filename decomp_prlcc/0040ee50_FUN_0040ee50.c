
void FUN_0040ee50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdpmc((int)param_1[2]);
  *param_1 = CONCAT44((int)((ulong)*param_1 >> 0x20),(int)uVar1);
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = CONCAT44((int)((ulong)param_1[3] >> 0x20),(int)((ulong)uVar1 >> 0x20));
  param_1[4] = param_1[4];
  param_1[5] = param_1[5];
  return;
}

