
long FUN_100a471c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = 0;
  if (lVar3 != param_1) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
        uVar5 = (ulong)(*(byte *)(lVar1 + 0x10) >> 1);
      }
      else {
        uVar5 = *(ulong *)(lVar1 + 0x18);
      }
      if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
        uVar4 = (ulong)(*(byte *)(lVar1 + 0x28) >> 1);
      }
      else {
        uVar4 = *(ulong *)(lVar1 + 0x30);
      }
      lVar2 = (*(long *)(lVar1 + 0x58) + 0x38 + lVar2 + (uVar4 + uVar5) * 2) -
              *(long *)(lVar1 + 0x50);
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1);
  }
  return lVar2;
}

