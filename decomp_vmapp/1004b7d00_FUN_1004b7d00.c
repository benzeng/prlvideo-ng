
void FUN_1004b7d00(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QMapNodeBase *pQVar5;
  long lVar6;
  
  FUN_1004b7fa0();
  if (*(int *)(*param_1 + 8) < *(int *)(*param_1 + 0xc)) {
    iVar2 = 0;
    do {
      lVar6 = param_1[1];
      puVar1 = (undefined8 *)FUN_1004ba430(param_1,iVar2);
      FUN_1002ade20(lVar6,*puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8));
  }
  FUN_1004ba4e0(param_1);
  param_1[2] = 0;
  QMutex::~QMutex((QMutex *)(param_1 + 0x209));
  pDVar4 = (Data *)param_1[0x208];
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1004b7def;
      pDVar4 = (Data *)param_1[0x208];
    }
    iVar2 = *(int *)(pDVar4 + 0xc);
    if (iVar2 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = pDVar4 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1004b7def:
  pQVar5 = (QMapNodeBase *)param_1[0x207];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1004b7e38;
      pQVar5 = (QMapNodeBase *)param_1[0x207];
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar5,(int)*(long *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_1004b7e38:
  FUN_1004bf010(param_1 + 0x206);
  pDVar4 = (Data *)*param_1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
      pDVar4 = (Data *)*param_1;
    }
    QListData::dispose(pDVar4);
  }
  return;
}

