
ulong FUN_1005e2ce0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *local_40 [2];
  
  FUN_1005b6c40(param_1,1);
  *param_1 = &PTR_FUN_100bc6f20;
  QMutex::QMutex((QMutex *)(param_1 + 3),1);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  FUN_1007d6870(param_1 + 10);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = FUN_1005d7340(local_40,1);
  if (local_40[0] != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_40[0] + 1);
    uVar4 = (ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  plVar3 = (long *)param_1[1];
  param_1[1] = local_40[0];
  if (plVar3 != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(plVar3 + 1);
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_40[0] != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_40[0] + 1);
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      uVar4 = (**(code **)(*local_40[0] + 0x10))();
    }
  }
  return uVar4;
}

