
void FUN_100022c80(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  Data *pDVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  pDVar5 = (Data *)QListData::detach((int)param_1);
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 != *(int *)(lVar3 + 0xc)) {
    puVar7 = (undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8);
    puVar8 = (undefined8 *)(lVar6 + 0x10 + (long)iVar1 * 8);
    lVar6 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      piVar4 = (int *)*puVar8;
      *puVar7 = piVar4;
      if (1 < *piVar4 + 1U) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar6 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_100022d60:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          UNLOCK();
          if (*(int *)pQVar10 == 0) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_100022d60;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

