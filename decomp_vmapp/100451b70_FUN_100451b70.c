
void FUN_100451b70(char *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = param_3 - 1;
    if ((param_3 & 1) != 0) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      cVar2 = (char)((uint)uVar1 >> 8);
      *param_1 = cVar2 + (char)uVar1;
      param_1[1] = cVar2;
      param_1[2] = (char)((uint)uVar1 >> 0x10) + cVar2;
      param_1 = param_1 + 3;
      param_3 = uVar3;
    }
    while (uVar3 != 0) {
      uVar1 = *param_2;
      cVar2 = (char)((uint)uVar1 >> 8);
      *param_1 = cVar2 + (char)uVar1;
      param_1[1] = cVar2;
      param_1[2] = (char)((uint)uVar1 >> 0x10) + cVar2;
      uVar1 = param_2[1];
      cVar2 = (char)((uint)uVar1 >> 8);
      param_1[3] = cVar2 + (char)uVar1;
      param_1[4] = cVar2;
      param_1[5] = (char)((uint)uVar1 >> 0x10) + cVar2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 6;
      uVar3 = param_3 - 2;
      param_3 = uVar3;
    }
  }
  return;
}

