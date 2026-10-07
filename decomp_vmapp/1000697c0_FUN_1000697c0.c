
void FUN_1000697c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  pDVar6 = (Data *)param_1[3];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1000698b4;
      pDVar6 = (Data *)param_1[3];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        puVar2 = *(undefined8 **)pDVar3;
        if (puVar2 != (undefined8 *)0x0) {
          pQVar4 = (QArrayData *)puVar2[1];
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              UNLOCK();
              if (*(int *)pQVar4 != 0) goto LAB_10006986a;
              pQVar4 = (QArrayData *)puVar2[1];
            }
            QArrayData::deallocate(pQVar4,1,8);
          }
LAB_10006986a:
          pQVar4 = (QArrayData *)*puVar2;
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              UNLOCK();
              if (*(int *)pQVar4 != 0) goto LAB_10006989a;
              pQVar4 = (QArrayData *)*puVar2;
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
LAB_10006989a:
          operator_delete(puVar2);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1000698b4:
  pQVar4 = (QArrayData *)param_1[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000698e4;
      pQVar4 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_1000698e4:
  pQVar4 = (QArrayData *)param_1[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100069914;
      pQVar4 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_100069914:
  pQVar4 = (QArrayData *)*param_1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

