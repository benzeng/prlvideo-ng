
void FUN_10009f020(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100bef918;
  pvVar2 = (void *)param_1[2];
  if (pvVar2 != (void *)0x0) {
    plVar3 = *(long **)((long)pvVar2 + 8);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}

