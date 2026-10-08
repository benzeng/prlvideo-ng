
void FUN_100a9ad90(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_100a9fc40(&local_40,param_1 + 0x98);
  FUN_100a9d6c0(param_1 + 0x98);
  QMutex::unlock();
  if (1 < *local_40) {
    FUN_100a9f670(&local_40,local_40[1]);
  }
  puVar1 = local_40 + (long)(int)local_40[2] * 2 + 4;
  while( true ) {
    if (1 < *local_40) {
      FUN_100a9f670(&local_40,local_40[1]);
    }
    if (puVar1 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
    uVar2 = 0;
    if (**(long **)puVar1 != 0) {
      uVar2 = *(undefined8 *)(**(long **)puVar1 + 0x10);
    }
    FUN_100a77260(uVar2);
    local_50 = puVar1;
    FUN_100a9d4c0(&local_48,&local_40,&local_50);
    puVar1 = local_48;
  }
  if (*local_40 != 0xffffffff) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 - 1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100a9ea50(&local_40,local_40);
  }
  return;
}

