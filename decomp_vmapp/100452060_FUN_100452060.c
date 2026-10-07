
void FUN_100452060(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
    if ((param_3 & 3) != 0) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        uVar2 = param_2[lVar3 * 4];
        *param_1 = uVar2;
        param_1[1] = uVar2;
        param_1[2] = uVar2;
        param_1 = param_1 + 3;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + -4;
      } while ((param_3 & 3) != (uint)lVar3);
      param_2 = param_2 + -lVar4;
      param_3 = param_3 - (uint)lVar3;
    }
    if (2 < uVar1) {
      do {
        uVar2 = *param_2;
        *param_1 = uVar2;
        param_1[1] = uVar2;
        param_1[2] = uVar2;
        uVar2 = param_2[4];
        param_1[3] = uVar2;
        param_1[4] = uVar2;
        param_1[5] = uVar2;
        uVar2 = param_2[8];
        param_1[6] = uVar2;
        param_1[7] = uVar2;
        param_1[8] = uVar2;
        uVar2 = param_2[0xc];
        param_1[9] = uVar2;
        param_1[10] = uVar2;
        param_1[0xb] = uVar2;
        param_2 = param_2 + 0x10;
        param_1 = param_1 + 0xc;
        param_3 = param_3 - 4;
      } while (param_3 != 0);
    }
  }
  return;
}

