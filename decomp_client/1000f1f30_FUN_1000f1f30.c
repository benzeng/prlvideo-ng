
void FUN_1000f1f30(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(*(long *)(param_1 + 0x40) + 0x10) == 0)) {
    puVar4 = operator_new(8);
    *puVar4 = PTR_shared_null_1021e15d0;
    plVar5 = (long *)FUN_1000f7eb0(puVar4);
    if (plVar5 != (long *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar5;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  else {
    FUN_1000f73f0();
  }
  FUN_1000f2010(param_1,param_1 + 8);
  return;
}

