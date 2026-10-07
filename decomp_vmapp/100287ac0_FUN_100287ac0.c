
void FUN_100287ac0(long param_1,long param_2)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  *(int *)(param_1 + 0x3a100) = *(int *)(param_1 + 0x3a100) + 1;
  lVar6 = *(long *)(param_2 + 0x98);
  plVar7 = *(long **)(param_2 + 0xa0);
  *(long **)(lVar6 + 8) = plVar7;
  *plVar7 = lVar6;
  lVar6 = *(long *)(param_1 + 0x3a0f0);
  *(long *)(lVar6 + 8) = param_2 + 0x98;
  *(long *)(param_2 + 0x98) = lVar6;
  *(long *)(param_2 + 0xa0) = param_1 + 0x3a0f0;
  *(long *)(param_1 + 0x3a0f0) = param_2 + 0x98;
  lVar6 = *(long *)(param_1 + 0x98);
  bVar4 = *(byte *)(param_1 + 0x90);
  uVar9 = *(ulong *)(lVar6 + 0x11b0);
  do {
    puVar1 = (ulong *)(lVar6 + 0x11b0);
    LOCK();
    uVar10 = *puVar1;
    bVar11 = uVar9 == uVar10;
    if (bVar11) {
      *puVar1 = 1L << (bVar4 & 0x3f) | uVar9;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar11);
  if (*(long *)(param_1 + 0x3a0c0) == param_1 + 0x3a0c0) {
    lVar6 = *(long *)(param_1 + 0x98);
    uVar5 = *(uint *)(param_1 + 0x90);
    uVar9 = (ulong)(uVar5 >> 5);
    uVar8 = *(uint *)(lVar6 + 0x1080 + uVar9 * 4);
    do {
      puVar2 = (uint *)(lVar6 + 0x1080 + uVar9 * 4);
      LOCK();
      uVar3 = *puVar2;
      bVar11 = uVar8 == uVar3;
      if (bVar11) {
        *puVar2 = 1 << ((byte)uVar5 & 0x1f) | uVar8;
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
      UNLOCK();
    } while (!bVar11);
    if ((uVar8 >> ((ulong)*(byte *)(param_1 + 0x90) & 0x3f) & 1) == 0) {
      FUN_1002effe0(DAT_1011c3ca8);
      return;
    }
  }
  return;
}

