
void FUN_100a32be0(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_102237db0;
  param_1[1] = &PTR_FUN_102237e28;
  param_1[2] = &PTR_FUN_102237e40;
  pvVar2 = (void *)param_1[0x2e];
  if (pvVar2 != (void *)0x0) {
    if ((void *)param_1[0x2f] != pvVar2) {
      param_1[0x2f] = pvVar2;
    }
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x2d];
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
  FUN_100ab46d0(param_1 + 0x1d);
  FUN_100ab0380(param_1 + 0x15);
  FUN_100a327c0(param_1 + 6);
  return;
}

