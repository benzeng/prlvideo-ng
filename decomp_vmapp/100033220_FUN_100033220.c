
void FUN_100033220(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  Data *pDVar3;
  
  *param_1 = &PTR_FUN_100ba7de8;
  DAT_100bfb024 = 0;
  DAT_100bfb03d = DAT_100bfb03d | 1;
  QMutex::~QMutex((QMutex *)(param_1 + 0x13));
  pQVar1 = (QMapNodeBase *)param_1[0x12];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000332a7;
      pQVar1 = (QMapNodeBase *)param_1[0x12];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1000332a7:
  pQVar2 = (QArrayData *)param_1[0x10];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000332dd;
      pQVar2 = (QArrayData *)param_1[0x10];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000332dd:
  QMutex::~QMutex((QMutex *)(param_1 + 0xd));
  pQVar2 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100033316;
      pQVar2 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100033316:
  pDVar3 = (Data *)param_1[9];
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_10003333c;
      pDVar3 = (Data *)param_1[9];
    }
    QListData::dispose(pDVar3);
  }
LAB_10003333c:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  FUN_1004c0680(param_1);
  return;
}

