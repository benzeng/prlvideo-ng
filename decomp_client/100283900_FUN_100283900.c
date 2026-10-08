
void FUN_100283900(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *param_1 = &DAT_1021ef4d0;
  pQVar1 = (QMapNodeBase *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100283962;
      pQVar1 = (QMapNodeBase *)param_1[10];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100283962:
  pQVar2 = (QArrayData *)param_1[9];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100283992;
      pQVar2 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100283992:
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002839c2;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002839c2:
  pQVar2 = (QArrayData *)param_1[7];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002839f2;
      pQVar2 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002839f2:
  pQVar2 = (QArrayData *)param_1[6];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100283a22;
      pQVar2 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100283a22:
  FUN_10027cf50(param_1);
  return;
}

