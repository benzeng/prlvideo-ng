
byte FUN_1003ac750(long param_1)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  plVar2 = *(long **)(param_1 + 0x10);
  bVar3 = 0;
  if (plVar2 == (long *)0x0) {
    bVar4 = 0;
  }
  else {
    do {
      lVar1 = plVar2[1];
      bVar4 = 8;
      if (lVar1 != 0) {
        pbVar5 = (byte *)(*(long *)(lVar1 + 0x80) + 0x48);
        if (*(long *)(lVar1 + 0x80) == 0) {
          pbVar5 = (byte *)(lVar1 + 0x7c);
        }
        bVar4 = *pbVar5;
      }
      bVar3 = bVar3 | bVar4;
      bVar4 = 0xf;
    } while ((bVar3 != 0xf) && (plVar2 = (long *)*plVar2, bVar4 = bVar3, plVar2 != (long *)0x0));
  }
  return bVar4;
}

