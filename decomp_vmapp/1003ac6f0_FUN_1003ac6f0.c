
byte FUN_1003ac6f0(long param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  
  lVar2 = **(long **)(param_1 + 0x108);
  bVar1 = 0;
  if (lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    do {
      pbVar4 = (byte *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pbVar4 = (byte *)(lVar2 + 0x7c);
      }
      bVar1 = bVar1 | *pbVar4;
      bVar3 = 0xf;
    } while ((bVar1 != 0xf) && (lVar2 = **(long **)(lVar2 + 8), bVar3 = bVar1, lVar2 != 0));
  }
  return bVar3;
}

