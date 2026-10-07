
int FUN_1008a0b00(ulong *param_1,byte *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar1 = *param_1;
  iVar3 = -1;
  if (uVar1 != *(ulong *)(param_4 + 0x28)) {
    uVar5 = uVar1 ^ (long)uVar1 >> 0x3f;
    uVar2 = FUN_10084b320(uVar5);
    iVar3 = (int)(uVar2 + 7) >> 3;
    if (param_2 != (byte *)0x0) {
      bVar6 = (byte)((long)uVar1 >> 0x3f);
      if ((uVar2 & 7) == 0) {
        *param_2 = bVar6;
        param_2 = param_2 + 1;
      }
      if (0 < iVar3) {
        lVar4 = (long)iVar3 + 1;
        do {
          param_2[lVar4 + -2] = (byte)uVar5 ^ bVar6;
          uVar5 = uVar5 >> 8;
          lVar4 = lVar4 + -1;
        } while (1 < lVar4);
      }
    }
    iVar3 = (uint)((uVar2 & 7) == 0) + iVar3;
  }
  return iVar3;
}

