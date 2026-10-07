
undefined4 FUN_1000914b0(int param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_30;
  long *local_28;
  
  FUN_100259440(&local_28);
  uVar3 = 0x80010013;
  if (local_28 != (long *)0x0) {
    uVar3 = 0x80010013;
    if (local_28[2] != 0) {
      FUN_100258f10(&local_30);
      lVar2 = *(long *)(local_30[2] + 8);
      uVar3 = 0x80000291;
      if (lVar2 != 0) {
        if (param_1 == 1) {
          uVar3 = FUN_10025bb50(lVar2,param_3);
        }
        else {
          uVar3 = FUN_10025c0e0(lVar2,param_3);
        }
      }
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  return uVar3;
}

