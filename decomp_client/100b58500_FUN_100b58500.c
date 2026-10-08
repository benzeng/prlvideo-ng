
void FUN_100b58500(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  long lVar4;
  
  pQVar2 = (QArrayData *)param_1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b58542;
      pQVar2 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b58542:
  pQVar2 = (QArrayData *)*param_1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)*param_1;
    }
    lVar4 = (long)*(int *)(pQVar2 + 4) << 4;
    if (lVar4 != 0) {
      pQVar1 = pQVar2 + *(long *)(pQVar2 + 0x10);
      do {
        pQVar3 = *(QArrayData **)(pQVar1 + 8);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100b585b0;
            pQVar3 = *(QArrayData **)(pQVar1 + 8);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100b585b0:
        pQVar3 = *(QArrayData **)pQVar1;
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100b585de;
            pQVar3 = *(QArrayData **)pQVar1;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100b585de:
        pQVar1 = pQVar1 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    QArrayData::deallocate(pQVar2,0x10,8);
  }
  return;
}

