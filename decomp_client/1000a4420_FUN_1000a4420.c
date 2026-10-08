
void FUN_1000a4420(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10226c9f0;
  pQVar2 = (QArrayData *)param_1[4];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000a4468;
      pQVar2 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000a4468:
  pQVar2 = (QArrayData *)param_1[3];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000a4498;
      pQVar2 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000a4498:
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[1] != (void *)0x0)) {
      operator_delete((void *)param_1[1]);
    }
  }
  return;
}

