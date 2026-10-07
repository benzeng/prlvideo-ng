
void FUN_10053e600(long param_1)

{
  undefined8 *puVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  FUN_100541150(puVar1);
  QMutex::unlock();
  pQVar3 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10053e66a;
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10053e66a:
  pQVar2 = (QMapNodeBase *)*puVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10053e6b0;
      pQVar2 = (QMapNodeBase *)*puVar1;
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100541c50();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10053e6b0:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  return;
}

