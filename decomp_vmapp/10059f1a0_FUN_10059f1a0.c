
void FUN_10059f1a0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    plVar2 = *(long **)(param_1 + 0x38);
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = lVar3;
    *(undefined8 *)(param_1 + 0x40) = 0;
    while (plVar2 != (long *)(param_1 + 0x30)) {
      plVar4 = (long *)plVar2[1];
      FUN_10059f1a0(plVar2 + 2);
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x28));
  pDVar7 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar7 != -1) {
    if (*(int *)pDVar7 != 0) {
      LOCK();
      *(int *)pDVar7 = *(int *)pDVar7 + -1;
      UNLOCK();
      if (*(int *)pDVar7 != 0) {
        return;
      }
      pDVar7 = *(Data **)(param_1 + 0x10);
    }
    iVar1 = *(int *)(pDVar7 + 0xc);
    if (iVar1 != *(int *)(pDVar7 + 8)) {
      lVar8 = (long)*(int *)(pDVar7 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar7 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10059f280:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          UNLOCK();
          if (*(int *)pQVar6 == 0) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10059f280;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar7);
  }
  return;
}

