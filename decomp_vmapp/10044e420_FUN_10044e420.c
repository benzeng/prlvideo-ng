
void FUN_10044e420(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = param_3;
    if ((param_3 & 1) != 0) {
      *param_1 = (uint)param_2[2] << 0x10 | (uint)*param_2 | (uint)param_2[1] << 8;
      param_1 = param_1 + 1;
      param_2 = param_2 + 3;
      uVar1 = param_3 - 1;
    }
    if (param_3 - 1 != 0) {
      param_2 = param_2 + 5;
      do {
        *param_1 = (uint)param_2[-3] << 0x10 | (uint)param_2[-5] | (uint)param_2[-4] << 8;
        param_1[1] = (uint)*param_2 << 0x10 | (uint)param_2[-2] | (uint)param_2[-1] << 8;
        param_2 = param_2 + 6;
        param_1 = param_1 + 2;
        uVar1 = uVar1 - 2;
      } while (uVar1 != 0);
    }
  }
  return;
}

