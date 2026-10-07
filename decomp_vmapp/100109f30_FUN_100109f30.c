
void FUN_100109f30(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[2] = *param_1 * 2;
  lVar2 = *param_1 * 2 * param_1[1];
  param_1[3] = lVar2;
  param_1[4] = 0x118;
  param_1[5] = lVar2 + 0x118;
  lVar1 = lVar2 * 2 + 0x118;
  param_1[6] = lVar1;
  param_1[7] = lVar2 + lVar1;
  return;
}

