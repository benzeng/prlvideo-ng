
int FUN_10038eb50(ushort *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    if ((ushort)(uVar1 - 0x41) < 0x1a) {
      uVar3 = uVar1 >> 1 & 0x20 | (uint)uVar1;
    }
    if (uVar3 - 0x61 < 0x1a) {
      iVar2 = -0xd;
      if (uVar3 < 0x6e) {
        iVar2 = 0xd;
      }
      uVar3 = iVar2 + uVar3;
    }
    if (uVar3 - (int)*param_2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (uVar1 == 0 && uVar3 == 0) {
      return 0;
    }
  }
  return uVar3 - (int)*param_2;
}

