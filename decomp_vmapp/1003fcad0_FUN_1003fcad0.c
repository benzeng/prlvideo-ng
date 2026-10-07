
void FUN_1003fcad0(undefined8 *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    if ((long *)param_1[4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 0x20))();
      param_1[4] = 0;
    }
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0x20))();
      param_1[3] = 0;
    }
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 8))();
      param_1[1] = 0;
    }
  }
  pQVar2 = (QArrayData *)*param_1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

