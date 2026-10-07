
void FUN_100451670(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
    if ((param_3 & 1) != 0) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = (char)uVar1;
      param_1[1] = (char)((uint)uVar1 >> 8);
      param_1[2] = (char)((uint)uVar1 >> 0x10);
      param_1 = param_1 + 3;
      param_3 = uVar2;
    }
    while (uVar2 != 0) {
      uVar1 = *param_2;
      *param_1 = (char)uVar1;
      param_1[1] = (char)((uint)uVar1 >> 8);
      param_1[2] = (char)((uint)uVar1 >> 0x10);
      uVar1 = param_2[1];
      param_1[3] = (char)uVar1;
      param_1[4] = (char)((uint)uVar1 >> 8);
      param_1[5] = (char)((uint)uVar1 >> 0x10);
      param_2 = param_2 + 2;
      param_1 = param_1 + 6;
      uVar2 = param_3 - 2;
      param_3 = uVar2;
    }
  }
  return;
}

