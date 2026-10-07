
void FUN_1005f2c50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  QFileInfo::~QFileInfo((QFileInfo *)(param_1 + 0x208));
  plVar2 = *(long **)(param_1 + 0x200);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001005f2c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}

