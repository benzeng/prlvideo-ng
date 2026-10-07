
void FUN_1004956b0(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  void *pvVar6;
  char cVar7;
  Data *pDVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  QArrayData *pQVar13;
  
  *(undefined4 *)(param_3 + 4) = 5;
  FUN_10047d9d0();
  plVar9 = (long *)*param_2;
  puVar2 = (uint *)*plVar9;
  if (1 < *puVar2) {
    uVar1 = puVar2[2];
    pDVar8 = (Data *)QListData::detach((int)plVar9);
    lVar11 = *plVar9;
    lVar10 = (long)*(int *)(lVar11 + 8);
    if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
       (lVar12 = *(int *)(lVar11 + 0xc) - lVar10, lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc)))
    {
      _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar12 * 8);
    }
    if (*(int *)pDVar8 != -1) {
      if (*(int *)pDVar8 != 0) {
        LOCK();
        *(int *)pDVar8 = *(int *)pDVar8 + -1;
        UNLOCK();
        if (*(int *)pDVar8 != 0) goto LAB_100495751;
      }
      QListData::dispose(pDVar8);
    }
  }
LAB_100495751:
  plVar9 = (long *)(*plVar9 + 0x10 + (long)*(int *)(*plVar9 + 8) * 8);
LAB_100495774:
  do {
    plVar3 = (long *)*param_2;
    puVar2 = (uint *)*plVar3;
    if (1 < *puVar2) {
      uVar1 = puVar2[2];
      pDVar8 = (Data *)QListData::detach((int)plVar3);
      lVar11 = *plVar3;
      lVar10 = (long)*(int *)(lVar11 + 8);
      if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
         (lVar12 = *(int *)(lVar11 + 0xc) - lVar10, lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc))
         ) {
        _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar12 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_1004957f0;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_1004957f0:
    if (plVar9 == (long *)(*plVar3 + 0x10 + (long)*(int *)(*plVar3 + 0xc) * 8)) {
      FUN_1007d6bf0((QString *)(param_1 + 0x10),param_3 + 0x14);
      return;
    }
    cVar7 = operator==((QString *)(param_1 + 0x10),(QString *)(*plVar9 + 8));
    if (cVar7 == '\0') {
      plVar9 = plVar9 + 1;
      goto LAB_100495774;
    }
    puVar4 = (undefined8 *)*plVar9;
    if (puVar4 != (undefined8 *)0x0) {
      pQVar13 = (QArrayData *)puVar4[1];
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          UNLOCK();
          if (*(int *)pQVar13 != 0) goto LAB_100495855;
          pQVar13 = (QArrayData *)puVar4[1];
        }
        QArrayData::deallocate(pQVar13,2,8);
      }
LAB_100495855:
      pQVar13 = (QArrayData *)*puVar4;
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          UNLOCK();
          if (*(int *)pQVar13 != 0) goto LAB_100495885;
          pQVar13 = (QArrayData *)*puVar4;
        }
        QArrayData::deallocate(pQVar13,1,8);
      }
LAB_100495885:
      operator_delete(puVar4);
    }
    ppvVar5 = (void **)*param_2;
    puVar2 = *ppvVar5;
    if (1 < *puVar2) {
      uVar1 = puVar2[2];
      pDVar8 = (Data *)QListData::detach((int)ppvVar5);
      pvVar6 = *ppvVar5;
      lVar11 = (long)*(int *)((long)pvVar6 + 8);
      if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar6 + lVar11 * 8)) &&
         (lVar10 = *(int *)((long)pvVar6 + 0xc) - lVar11,
         lVar10 != 0 && lVar11 <= *(int *)((long)pvVar6 + 0xc))) {
        _memcpy((void *)((long)pvVar6 + lVar11 * 8 + 0x10),puVar2 + (long)(int)uVar1 * 2 + 4,
                lVar10 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_100495927;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_100495927:
    plVar9 = (long *)QListData::erase(ppvVar5);
  } while( true );
}

