
void FUN_10070a220(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  QMutex::lock();
  QMutex::lock();
  if ((*(int *)((long)param_1 + 0x24) == 0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) {
    lVar2 = param_1[5];
    plVar3 = (long *)param_1[6];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    param_1[5] = (long)(param_1 + 5);
    param_1[6] = (long)(param_1 + 5);
    (**(code **)(*plVar1 + 0x10))();
    *param_1 = 0;
    if ((*(uint *)(param_1 + 3) & 0x200) != 0) {
      *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffff5ff;
    }
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    LOCK();
    DAT_1011ccb24 = DAT_1011ccb24 + -1;
    UNLOCK();
  }
  QMutex::unlock();
  QMutex::unlock();
  return;
}

