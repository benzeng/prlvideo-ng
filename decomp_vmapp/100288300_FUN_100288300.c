
void FUN_100288300(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  
  if (*(long *)(param_1 + 0x3a0c0) == param_1 + 0x3a0c0) {
    lVar4 = *(long *)(param_1 + 0x98);
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar6 = (ulong)(uVar3 >> 5);
    uVar5 = *(uint *)(lVar4 + 0x1080 + uVar6 * 4);
    do {
      puVar1 = (uint *)(lVar4 + 0x1080 + uVar6 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar7 = uVar5 == uVar2;
      if (bVar7) {
        *puVar1 = 1 << ((byte)uVar3 & 0x1f) | uVar5;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      UNLOCK();
    } while (!bVar7);
    if ((uVar5 >> ((ulong)*(byte *)(param_1 + 0x90) & 0x3f) & 1) == 0) {
      FUN_1002effe0(DAT_1011c3ca8);
      return;
    }
  }
  return;
}

