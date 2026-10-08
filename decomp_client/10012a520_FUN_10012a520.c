
void FUN_10012a520(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *param_1 = PTR_vtable_1021e1810 + 0x10;
  pQVar3 = (QMapNodeBase *)param_1[0x11];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10012a58d;
      pQVar3 = (QMapNodeBase *)param_1[0x11];
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_10012abf0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_10012a58d:
  QDomDocument::~QDomDocument((QDomDocument *)(param_1 + 0x10));
  pDVar6 = (Data *)param_1[0xf];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_10012a621;
      pDVar6 = (Data *)param_1[0xf];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar4 == 0) {
LAB_10012a600:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 == 0) {
            pQVar4 = *(QArrayData **)pDVar2;
            goto LAB_10012a600;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10012a621:
  pQVar4 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10012a651;
      pQVar4 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012a651:
  pQVar3 = (QMapNodeBase *)param_1[0xc];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10012a699;
      pQVar3 = (QMapNodeBase *)param_1[0xc];
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1000be500();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_10012a699:
  pQVar3 = (QMapNodeBase *)param_1[10];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10012a6e1;
      pQVar3 = (QMapNodeBase *)param_1[10];
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_10012a6e1:
  pQVar4 = (QArrayData *)param_1[9];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10012a711;
      pQVar4 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012a711:
  pQVar4 = (QArrayData *)param_1[8];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10012a741;
      pQVar4 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012a741:
  pDVar6 = (Data *)param_1[7];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_10012a7d1;
      pDVar6 = (Data *)param_1[7];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar4 == 0) {
LAB_10012a7b0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 == 0) {
            pQVar4 = *(QArrayData **)pDVar2;
            goto LAB_10012a7b0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10012a7d1:
  pQVar4 = (QArrayData *)param_1[6];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10012a801;
      pQVar4 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012a801:
  pQVar4 = (QArrayData *)param_1[5];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10012a831;
      pQVar4 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012a831:
  pQVar4 = (QArrayData *)param_1[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

