
uint FUN_100740260(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 0;
    if (0 < param_3) {
      iVar2 = param_3 + -1;
      uVar1 = 0;
      iVar3 = *param_2;
      do {
        uVar4 = 1 << ((byte)iVar2 & 0x1f);
        if ((*(byte *)(param_1 + (iVar3 >> 3)) >> (~(byte)iVar3 & 7) & 1) == 0) {
          uVar1 = uVar1 & ~uVar4;
        }
        else {
          uVar1 = uVar1 | uVar4;
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar2 != -1);
    }
    *param_2 = *param_2 + param_3;
  }
  return uVar1;
}

