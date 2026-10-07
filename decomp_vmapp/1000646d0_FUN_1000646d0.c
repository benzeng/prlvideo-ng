
undefined1 FUN_1000646d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  long *local_38;
  long *local_30;
  undefined1 local_21;
  
  FUN_100069450(&local_30);
  (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))(&local_38,*(long **)(param_1 + 0x28),&local_30);
  plVar2 = local_38;
  if ((local_38 != (long *)0x0) && (local_38[2] != 0)) {
    local_21 = 0;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    FUN_100796350(local_38[2],0xffffffff,&local_21);
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if ((local_38 != (long *)0x0) && (local_38[2] != 0)) {
    iVar4 = FUN_1007965e0();
    uVar6 = 1;
    if (iVar4 == 0) goto LAB_1000647cd;
  }
  uVar5 = param_1 + 0x50;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (iVar4 != 0) {
    QMutex::lock();
    FUN_100069370(param_1 + 0x70,&local_30);
    QMutex::unlock();
  }
  uVar6 = 0;
LAB_1000647cd:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return uVar6;
}

