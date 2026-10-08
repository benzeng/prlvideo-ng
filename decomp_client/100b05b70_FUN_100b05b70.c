
void FUN_100b05b70(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  piVar1 = (int *)param_1[6];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100b05ba7;
      piVar1 = (int *)param_1[6];
    }
    FUN_100b05c90(param_1 + 6,piVar1);
  }
LAB_100b05ba7:
  pQVar2 = (QArrayData *)param_1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b05bd7;
      pQVar2 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b05bd7:
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

