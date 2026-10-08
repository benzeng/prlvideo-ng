
/* WARNING: Removing unreachable block (ram,0x000100a9b143) */

void FUN_100a9af10(long param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  bool bVar3;
  uint *local_60;
  uint *local_58;
  int *local_50;
  int *local_48;
  uint *local_40;
  undefined1 local_31;
  
  local_40 = (uint *)PTR_shared_null_1021e15e8;
  QMutex::lock();
  FUN_100a9d300(&local_48);
  FUN_100a9d1f0(&local_40,&local_48);
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a9af93;
    }
    FUN_100a9ea50(&local_48,local_48);
  }
LAB_100a9af93:
  FUN_100a9d3e0(&local_50);
  FUN_100a9d1f0(&local_40,&local_50);
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_31 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a9afe4;
    }
    FUN_100a9ea50(&local_50,local_50);
  }
LAB_100a9afe4:
  FUN_100a9d1f0(&local_40);
  QMutex::unlock();
  if (1 < *local_40) {
    FUN_100a9f670(&local_40,local_40[1]);
  }
  puVar2 = local_40 + (long)(int)local_40[2] * 2 + 4;
  while( true ) {
    if (1 < *local_40) {
      FUN_100a9f670(&local_40,local_40[1]);
    }
    if (puVar2 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
    uVar1 = 0;
    if (**(long **)puVar2 != 0) {
      uVar1 = *(undefined8 *)(**(long **)puVar2 + 0x10);
    }
    FUN_100a77260(uVar1);
    local_60 = puVar2;
    FUN_100a9d4c0(&local_58,&local_40,&local_60);
    puVar2 = local_58;
  }
  bVar3 = (param_1 + 0x58U & 0xfffffffffffffffe) != 0;
  if (bVar3) {
    QMutex::lock();
  }
  FUN_100a9d580(param_1 + 0x90);
  FUN_100a9d620(param_1 + 0x88);
  FUN_100a9d6c0(param_1 + 0x98);
  FUN_100538960(param_1 + 0xa0);
  FUN_100a9d7a0(param_1 + 0xd0);
  if (bVar3) {
    QMutex::unlock();
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

