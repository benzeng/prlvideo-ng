
void FUN_1004b6560(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100bc2820;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1005272b0(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[2] = 0;
  QMutex::lock();
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_1004b80a0(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[4] = 0;
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_1004bb540(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[6] = 0;
  param_1[10] = 0;
  QMutex::unlock();
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0xf] != pvVar1) {
      param_1[0xf] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0xc] != pvVar1) {
      param_1[0xc] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 9));
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004b667a;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004b667a:
  QMutex::~QMutex((QMutex *)(param_1 + 5));
  QMutex::~QMutex((QMutex *)(param_1 + 3));
  return;
}

