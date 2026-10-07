
void FUN_1000f88e0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000f8919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}

