
void FUN_1008339f0(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10220e380;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[9] != (void *)0x0)) {
      operator_delete((void *)param_1[9]);
    }
  }
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100833a5d;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100833a5d:
  FUN_1001eebd0(param_1);
  operator_delete(param_1);
  return;
}

