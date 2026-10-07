
void FUN_100287ba0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    pvVar4 = *(void **)(param_2 + 0x90);
    if (pvVar4 != (void *)0x0) {
      FUN_10008d3f0(pvVar4);
      operator_delete(pvVar4);
    }
    lVar5 = *(long *)(param_2 + 0x98);
    plVar6 = *(long **)(param_2 + 0xa0);
    *(long **)(lVar5 + 8) = plVar6;
    *plVar6 = lVar5;
    lVar5 = *(long *)(param_1 + 0x3a0b0);
    *(long *)(lVar5 + 8) = param_2 + 0x98;
    *(long *)(param_2 + 0x98) = lVar5;
    *(long *)(param_2 + 0xa0) = param_1 + 0x3a0b0;
    *(long *)(param_1 + 0x3a0b0) = param_2 + 0x98;
  }
  if (*(long *)(param_1 + 0x3a0c0) == param_1 + 0x3a0c0) {
    lVar5 = *(long *)(param_1 + 0x98);
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar8 = (ulong)(uVar3 >> 5);
    uVar7 = *(uint *)(lVar5 + 0x1080 + uVar8 * 4);
    do {
      puVar1 = (uint *)(lVar5 + 0x1080 + uVar8 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar9 = uVar7 == uVar2;
      if (bVar9) {
        *puVar1 = 1 << ((byte)uVar3 & 0x1f) | uVar7;
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
      UNLOCK();
    } while (!bVar9);
    if ((uVar7 >> ((ulong)*(byte *)(param_1 + 0x90) & 0x3f) & 1) == 0) {
      FUN_1002effe0(DAT_1011c3ca8);
      return;
    }
  }
  return;
}

