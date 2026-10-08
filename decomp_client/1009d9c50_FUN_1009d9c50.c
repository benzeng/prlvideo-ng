
void FUN_1009d9c50(uint *param_1,uint param_2)

{
  uint uVar1;
  
  param_1[6] = param_2;
  uVar1 = *param_1 | 0x80000000;
  if ((int)param_2 < 1) {
    uVar1 = *param_1 & 0x7fffffff;
  }
  *param_1 = uVar1;
  return;
}

