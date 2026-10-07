
byte FUN_1003abcf0(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    bVar5 = 0;
  }
  else {
    uVar6 = 1;
    uVar7 = 0;
    bVar5 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + uVar7 * 8);
      lVar2 = *(long *)(lVar1 + 0x80);
      pbVar3 = (byte *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        pbVar3 = (byte *)(lVar1 + 0x7c);
      }
      bVar5 = bVar5 | *pbVar3;
      uVar7 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar7 < (ulong)(lVar4 >> 3));
  }
  return bVar5;
}

