
byte FUN_1003ac810(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar6 = 0;
  bVar3 = 0;
  lVar4 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
  if (lVar4 == 0) {
    bVar3 = 0;
  }
  else {
    uVar5 = 1;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x158) + uVar6 * 8);
      lVar2 = *(long *)(lVar1 + 0x80);
      pbVar7 = (byte *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        pbVar7 = (byte *)(lVar1 + 0x7c);
      }
      bVar3 = bVar3 | *pbVar7;
      if (bVar3 == 0xf) {
        return 0xf;
      }
      uVar6 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar6 < (ulong)(lVar4 >> 3));
  }
  return bVar3;
}

