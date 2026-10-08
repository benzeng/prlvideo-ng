
void FUN_100b3bf80(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  pQVar1 = (QMapNodeBase *)param_1[0x10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b3bfdb;
      pQVar1 = (QMapNodeBase *)param_1[0x10];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100b3c100();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b3bfdb:
  FUN_100b2e680(param_1 + 0xb);
  FUN_100b2e760(param_1 + 3);
  pQVar2 = (QArrayData *)param_1[2];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b3c01d;
      pQVar2 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b3c01d:
  QRegExp::~QRegExp((QRegExp *)(param_1 + 1));
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
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

