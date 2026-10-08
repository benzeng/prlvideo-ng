
void FUN_1009d9020(int *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  *param_1 = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar1 = _open(param_2,0);
  *param_1 = iVar1;
  return;
}

