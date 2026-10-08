
void FUN_1001091d0(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  
  pQVar3 = (QArrayData *)param_1[7];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100109214;
      pQVar3 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100109214:
  pQVar3 = (QArrayData *)param_1[6];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100109246;
      pQVar3 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100109246:
  pQVar3 = (QArrayData *)param_1[5];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100109278;
      pQVar3 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100109278:
  pQVar3 = (QArrayData *)param_1[4];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1001092aa;
      pQVar3 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001092aa:
  pQVar3 = (QArrayData *)param_1[3];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1001092dc;
      pQVar3 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001092dc:
  pQVar3 = (QArrayData *)param_1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10010930e;
      pQVar3 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10010930e:
  pQVar3 = (QArrayData *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100109340;
      pQVar3 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100109340:
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
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar5 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_1001093b0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_1001093b0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

