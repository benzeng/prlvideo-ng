
void FUN_10073cf10(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long *local_28;
  
  plVar4 = (long *)(param_1 + 0x10);
  plVar2 = (long *)FUN_10073d5b0(plVar4,param_2,0);
  if (*plVar2 == *plVar4) {
    pvVar3 = operator_new(0x28);
    FUN_10073bcf0(pvVar3,param_2);
    plVar2 = (long *)FUN_10073d700(pvVar3,0);
    local_28 = plVar2;
    FUN_10073d0e0(plVar4,param_2,&local_28);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      lVar1 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return;
}

