
void FUN_100795ec0(long param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x30));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x28));
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x18);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100795f12;
      piVar1 = *(int **)(param_1 + 0x18);
    }
    FUN_100069b10((undefined8 *)(param_1 + 0x18),piVar1);
  }
LAB_100795f12:
  pQVar2 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

