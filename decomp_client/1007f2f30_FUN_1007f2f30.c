
void FUN_1007f2f30(QObject *param_1)

{
  int iVar1;
  Data *pDVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f7f20;
  pDVar6 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1007f2fd1;
      pDVar6 = *(Data **)(param_1 + 0x38);
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar4 == 0) {
LAB_1007f2fb0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 == 0) {
            pQVar4 = *(QArrayData **)pDVar2;
            goto LAB_1007f2fb0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1007f2fd1:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007f3010;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar3,(int)*(long *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1007f3010:
  QObject::~QObject(param_1);
  return;
}

