
void FUN_100041520(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *param_1 = &PTR_FUN_100ba7a30;
  FUN_10000c730(param_1 + 8);
  pDVar6 = (Data *)param_1[7];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1000415d1;
      pDVar6 = (Data *)param_1[7];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar4 == 0) {
LAB_1000415b0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 == 0) {
            pQVar4 = *(QArrayData **)pDVar2;
            goto LAB_1000415b0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1000415d1:
  FUN_10049d580(param_1 + 2);
  pQVar3 = (QMapNodeBase *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QMapNodeBase *)param_1[1];
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_10000c9a0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return;
}

