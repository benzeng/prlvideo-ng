
void FUN_1004f9220(long param_1)

{
  QMutex *this;
  QMutexData *pQVar1;
  
  this = *(QMutex **)(param_1 + 8);
  if (this == (QMutex *)0x0) {
    return;
  }
  pQVar1 = this[1].field0_0x0.field0_0x0;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004f9255;
      pQVar1 = this[1].field0_0x0.field0_0x0;
    }
    FUN_1004fa0f0(pQVar1);
  }
LAB_1004f9255:
  QMutex::~QMutex(this);
  operator_delete(this);
  return;
}

