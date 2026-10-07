
void FUN_1000b4d30(QMutex *param_1)

{
  QMutexData *pQVar1;
  int iVar2;
  QMutexData *pQVar3;
  
  pQVar3 = param_1[7].field0_0x0.field0_0x0;
  if (pQVar3 != (QMutexData *)0x0) {
    LOCK();
    pQVar1 = pQVar3 + 8;
    iVar2 = *(int *)pQVar1;
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(long *)pQVar3 + 0x10))();
    }
  }
  pQVar3 = param_1[5].field0_0x0.field0_0x0;
  if (pQVar3 != (QMutexData *)0x0) {
    LOCK();
    pQVar1 = pQVar3 + 8;
    iVar2 = *(int *)pQVar1;
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(long *)pQVar3 + 0x10))();
    }
  }
  pQVar3 = param_1[4].field0_0x0.field0_0x0;
  if (*(int *)(pQVar3 + 0x10) != -1) {
    if (*(int *)(pQVar3 + 0x10) != 0) {
      LOCK();
      pQVar3 = pQVar3 + 0x10;
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b4daf;
      pQVar3 = param_1[4].field0_0x0.field0_0x0;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pQVar3);
  }
LAB_1000b4daf:
  QMutex::~QMutex(param_1 + 3);
  pQVar3 = param_1[2].field0_0x0.field0_0x0;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b4de8;
      pQVar3 = param_1[2].field0_0x0.field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar3,2,8);
  }
LAB_1000b4de8:
  pQVar3 = param_1[1].field0_0x0.field0_0x0;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b4e11;
      pQVar3 = param_1[1].field0_0x0.field0_0x0;
    }
    FUN_100037810(param_1 + 1,pQVar3);
  }
LAB_1000b4e11:
  QMutex::~QMutex(param_1);
  return;
}

