
void FUN_100db4300(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10225c280;
  param_1[1] = &PTR_FUN_10225c380;
  FUN_100db5350(param_1 + 2,param_1[10]);
  piVar1 = (int *)(param_1[10] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100db4480();
  }
  QMutex::~QMutex((QMutex *)(param_1 + 9));
  pQVar2 = (QArrayData *)param_1[3];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

