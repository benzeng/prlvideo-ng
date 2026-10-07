
void FUN_1002885c0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x3a138) + 0xf0);
  *plVar1 = *plVar1 + 1;
  lVar5 = *(long *)(param_1 + 0x98);
  uVar4 = *(uint *)(param_1 + 0x90);
  uVar7 = (ulong)(uVar4 >> 5);
  uVar6 = *(uint *)(lVar5 + 0x1080 + uVar7 * 4);
  do {
    puVar2 = (uint *)(lVar5 + 0x1080 + uVar7 * 4);
    LOCK();
    uVar3 = *puVar2;
    bVar8 = uVar6 == uVar3;
    if (bVar8) {
      *puVar2 = 1 << ((byte)uVar4 & 0x1f) | uVar6;
      uVar3 = uVar6;
    }
    uVar6 = uVar3;
    UNLOCK();
  } while (!bVar8);
  if ((uVar6 >> ((ulong)*(byte *)(param_1 + 0x90) & 0x3f) & 1) == 0) {
    FUN_1002effe0(DAT_1011c3ca8);
    return;
  }
  return;
}

