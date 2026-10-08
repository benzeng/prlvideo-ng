
void FUN_100a4cb70(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_1022384a0;
  pQVar1 = (QMapNodeBase *)param_1[6];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100a4cbcf;
      pQVar1 = (QMapNodeBase *)param_1[6];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100a4cc80();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100a4cbcf:
  pQVar2 = (QArrayData *)param_1[5];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100a4cbff;
      pQVar2 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a4cbff:
  QMutex::~QMutex((QMutex *)(param_1 + 3));
  FUN_100a4a040(param_1);
  return;
}

