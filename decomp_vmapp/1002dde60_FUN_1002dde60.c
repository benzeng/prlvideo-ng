
long FUN_1002dde60(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  
  bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4);
  uVar5 = 0;
  if (bVar1 != 0) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x10);
      if (((lVar4 != 0) &&
          (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8 + (ulong)uVar5 * 0x10), lVar3 != 0)) &&
         (bVar2 = *(byte *)(lVar4 + 4), bVar2 != 0)) {
        plVar6 = (long *)(lVar3 + 8);
        lVar4 = 0;
        do {
          if (*(byte *)(*plVar6 + 2) == param_2) {
            return lVar3 + lVar4 * 0x28;
          }
          lVar4 = lVar4 + 1;
          plVar6 = plVar6 + 5;
        } while ((uint)lVar4 < (uint)bVar2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < bVar1);
  }
  return 0;
}

