
undefined8 FUN_100287660(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  bool bVar12;
  
  if (*(long **)(param_1 + 0x3a0f0) != (long *)(param_1 + 0x3a0f0)) {
    plVar1 = (long *)(param_1 + 0x3a0b0);
    plVar11 = *(long **)(param_1 + 0x3a0f0);
    do {
      plVar4 = (long *)*plVar11;
      cVar8 = FUN_1002878f0(param_1,plVar11 + -0x13);
      if (cVar8 == '\0') {
        return 0;
      }
      *(int *)(param_1 + 0x3a100) = *(int *)(param_1 + 0x3a100) + -1;
      pvVar5 = (void *)plVar11[-1];
      if (pvVar5 != (void *)0x0) {
        FUN_10008d3f0(pvVar5);
        operator_delete(pvVar5);
      }
      lVar6 = *plVar11;
      plVar7 = (long *)plVar11[1];
      *(long **)(lVar6 + 8) = plVar7;
      *plVar7 = lVar6;
      lVar6 = *plVar1;
      *(long **)(lVar6 + 8) = plVar11;
      *plVar11 = lVar6;
      plVar11[1] = (long)plVar1;
      *plVar1 = (long)plVar11;
      plVar11 = plVar4;
    } while (plVar4 != (long *)(param_1 + 0x3a0f0));
  }
  lVar6 = *(long *)(param_1 + 0x98);
  bVar3 = *(byte *)(param_1 + 0x90);
  uVar9 = *(ulong *)(lVar6 + 0x11b0);
  do {
    puVar2 = (ulong *)(lVar6 + 0x11b0);
    LOCK();
    uVar10 = *puVar2;
    bVar12 = uVar9 == uVar10;
    if (bVar12) {
      *puVar2 = ~(1L << (bVar3 & 0x3f)) & uVar9;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar12);
  return CONCAT71((int7)(uVar10 >> 8),1);
}

