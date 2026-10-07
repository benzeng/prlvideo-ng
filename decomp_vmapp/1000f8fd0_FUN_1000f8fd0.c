
void FUN_1000f8fd0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *local_30;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(*(long *)(param_1 + 0x48) + 0x10) != 0)) {
    FUN_100119090(&local_28,param_1 + 0x48,param_2);
    lVar4 = 0;
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      lVar4 = local_28[2];
      LOCK();
      plVar1 = local_28 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_100128660(lVar4,param_3);
    uVar2 = *(undefined8 *)(DAT_1011c3650 + 0x10);
    FUN_10011cf50(&local_30,lVar4);
    lVar4 = 0;
    if (local_30 != (long *)0x0) {
      lVar4 = local_30[2];
    }
    FUN_10006b660(uVar2,param_1 + 0x48,lVar4);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  return;
}

