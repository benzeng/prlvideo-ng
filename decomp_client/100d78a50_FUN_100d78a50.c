
void FUN_100d78a50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  plVar2 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100d78a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}

