
void FUN_1003f3dd0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bbf870;
  FUN_1003f4770();
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x10))();
    param_1[6] = 0;
  }
  pQVar1 = (QArrayData *)param_1[0x24];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1003f3e3d;
      pQVar1 = (QArrayData *)param_1[0x24];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1003f3e3d:
  FUN_1003e07d0(param_1);
  return;
}

