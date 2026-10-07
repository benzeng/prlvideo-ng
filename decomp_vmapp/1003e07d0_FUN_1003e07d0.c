
void FUN_1003e07d0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  QArrayData *pQVar3;
  
  *param_1 = &PTR_FUN_100bbe6f0;
  plVar1 = (long *)param_1[6];
  plVar2 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    plVar2 = (long *)param_1[6];
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    param_1[6] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    _free((void *)param_1[7]);
  }
  pQVar3 = (QArrayData *)param_1[4];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

