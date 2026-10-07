
undefined4 FUN_1004e02b0(long param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 local_3c;
  long *local_38;
  undefined4 local_2c;
  
  FUN_1004e0410(&local_38,param_2,param_1,(int)param_3[2],param_3[1],&local_2c,0xffffffff);
  *param_3 = 0;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  if (local_38 != (long *)0x0) {
    uVar4 = param_1 + 0x38;
    if ((uVar4 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      uVar4 = uVar4 | 1;
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_3c = *(undefined4 *)((long)local_38 + 0x3c);
      FUN_1004eb720(param_1 + 0x40,&local_3c,&local_38);
      if ((uVar4 & 1) != 0) {
        uVar4 = 0;
        QReadWriteLock::unlock();
      }
      *param_3 = (ulong)*(uint *)((long)local_38 + 0x3c);
      uVar3 = FUN_1004d8470(param_1);
      *(undefined4 *)((long)param_3 + 0x14) = uVar3;
    }
    else {
      local_2c = 0xf0000012;
    }
    if ((uVar4 & 1) != 0) {
      QReadWriteLock::unlock();
    }
    uVar3 = local_2c;
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_2c = uVar3;
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
      local_2c = uVar3;
    }
  }
  return local_2c;
}

