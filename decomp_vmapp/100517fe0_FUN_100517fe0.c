
void FUN_100517fe0(QMutex *param_1)

{
  QMutexData *pQVar1;
  int iVar2;
  QMutexData *pQVar3;
  
  pQVar3 = param_1[6].field0_0x0.field0_0x0;
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
  QMutex::~QMutex(param_1 + 4);
  pQVar3 = param_1[2].field0_0x0.field0_0x0;
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
  FUN_100037320(param_1 + 1);
  QMutex::~QMutex(param_1);
  return;
}

