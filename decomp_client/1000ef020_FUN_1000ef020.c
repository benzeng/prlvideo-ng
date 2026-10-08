
void FUN_1000ef020(long param_1)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  long *plVar3;
  long *local_38;
  
  local_38 = in_RAX;
  while( true ) {
    QMutex::lock();
    lVar2 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar2 + 0xc) == *(int *)(lVar2 + 8)) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      plVar3 = (long *)0x0;
    }
    else {
      FUN_1000ef6f0(&local_38,(long *)(param_1 + 0x18));
      plVar3 = local_38;
      if (local_38 != (long *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = local_38 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    QMutex::unlock();
    if (plVar3 == (long *)0x0) break;
    if ((long *)plVar3[2] == (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 != 1) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001000ef11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
    (**(code **)(*(long *)plVar3[2] + 0x10))();
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return;
}

