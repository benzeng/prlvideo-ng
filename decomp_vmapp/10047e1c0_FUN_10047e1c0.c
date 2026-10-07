
long * FUN_10047e1c0(long param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar11 = *(uint **)(param_1 + 0x18);
  plVar9 = (long *)(param_1 + 0x18);
  if (1 < *puVar11) {
    uVar1 = puVar11[2];
    pDVar5 = (Data *)QListData::detach((int)plVar9);
    lVar2 = *plVar9;
    lVar6 = (long)*(int *)(lVar2 + 8);
    if ((puVar11 + (long)(int)uVar1 * 2 != (uint *)(lVar2 + lVar6 * 8)) &&
       (lVar7 = *(int *)(lVar2 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar2 + 0xc))) {
      _memcpy((void *)(lVar2 + 0x10 + lVar6 * 8),puVar11 + (long)(int)uVar1 * 2 + 4,lVar7 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        if (*(int *)pDVar5 != 0) goto LAB_10047e24c;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_10047e24c:
  puVar10 = (uint *)*plVar9;
  puVar11 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
  do {
    if (1 < *puVar10) {
      uVar1 = puVar10[2];
      pDVar5 = (Data *)QListData::detach((int)plVar9);
      lVar2 = *plVar9;
      lVar6 = (long)*(int *)(lVar2 + 8);
      if ((puVar10 + (long)(int)uVar1 * 2 != (uint *)(lVar2 + lVar6 * 8)) &&
         (lVar7 = *(int *)(lVar2 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar6 * 8),puVar10 + (long)(int)uVar1 * 2 + 4,lVar7 * 8);
      }
      if (*(int *)pDVar5 != -1) {
        if (*(int *)pDVar5 != 0) {
          LOCK();
          *(int *)pDVar5 = *(int *)pDVar5 + -1;
          UNLOCK();
          if (*(int *)pDVar5 != 0) goto LAB_10047e2f0;
        }
        QListData::dispose(pDVar5);
      }
    }
LAB_10047e2f0:
    puVar10 = (uint *)*plVar9;
    if (puVar11 == puVar10 + (long)(int)puVar10[3] * 2 + 4) {
      return (long *)0x0;
    }
    plVar3 = *(long **)puVar11;
    lVar2 = *plVar3;
    if (lVar2 != DAT_1011ccb98) {
      pvVar8 = (void *)0x0;
      if (lVar2 != 0) {
        pvVar8 = *(void **)(lVar2 + 0x10);
      }
      iVar4 = _memcmp(pvVar8,param_2,0x10);
      if (iVar4 == 0) {
        return plVar3;
      }
    }
    puVar11 = puVar11 + 2;
  } while( true );
}

