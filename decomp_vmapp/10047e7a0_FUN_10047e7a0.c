
long FUN_10047e7a0(long param_1,int param_2)

{
  uint uVar1;
  Data *pDVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_1 + 0x18);
  plVar7 = (long *)(param_1 + 0x18);
  if (1 < *puVar8) {
    uVar1 = puVar8[2];
    pDVar2 = (Data *)QListData::detach((int)plVar7);
    lVar3 = *plVar7;
    lVar4 = (long)*(int *)(lVar3 + 8);
    if ((puVar8 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar4 * 8)) &&
       (lVar5 = *(int *)(lVar3 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar4 * 8),puVar8 + (long)(int)uVar1 * 2 + 4,lVar5 * 8);
    }
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        UNLOCK();
        if (*(int *)pDVar2 != 0) goto LAB_10047e836;
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_10047e836:
  puVar6 = (uint *)*plVar7;
  puVar8 = puVar6 + (long)(int)puVar6[2] * 2 + 4;
  do {
    if (1 < *puVar6) {
      uVar1 = puVar6[2];
      pDVar2 = (Data *)QListData::detach((int)plVar7);
      lVar3 = *plVar7;
      lVar4 = (long)*(int *)(lVar3 + 8);
      if ((puVar6 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar4 * 8)) &&
         (lVar5 = *(int *)(lVar3 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar4 * 8),puVar6 + (long)(int)uVar1 * 2 + 4,lVar5 * 8);
      }
      if (*(int *)pDVar2 != -1) {
        if (*(int *)pDVar2 != 0) {
          LOCK();
          *(int *)pDVar2 = *(int *)pDVar2 + -1;
          UNLOCK();
          if (*(int *)pDVar2 != 0) goto LAB_10047e8e0;
        }
        QListData::dispose(pDVar2);
      }
    }
LAB_10047e8e0:
    puVar6 = (uint *)*plVar7;
    lVar3 = 0;
    if ((puVar8 == puVar6 + (long)(int)puVar6[3] * 2 + 4) ||
       (lVar3 = *(long *)puVar8, *(int *)(lVar3 + 0x10) == param_2)) {
      return lVar3;
    }
    puVar8 = puVar8 + 2;
  } while( true );
}

