
/* WARNING: Removing unreachable block (ram,0x0001007c0f83) */

void FUN_1007c0d50(long param_1)

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
  
  local_40 = (uint *)PTR_shared_null_100ba2188;
  QMutex::lock();
  FUN_1007c2fd0(&local_48);
  FUN_1007c2ec0(&local_40,&local_48);
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c0dd3;
    }
    FUN_1007c4450(&local_48,local_48);
  }
LAB_1007c0dd3:
  FUN_1007c30b0(&local_50);
  FUN_1007c2ec0(&local_40,&local_50);
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_31 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c0e24;
    }
    FUN_1007c4450(&local_50,local_50);
  }
LAB_1007c0e24:
  FUN_1007c2ec0(&local_40);
  QMutex::unlock();
  if (1 < *local_40) {
    FUN_1007c4dc0(&local_40,local_40[1]);
  }
  puVar2 = local_40 + (long)(int)local_40[2] * 2 + 4;
  while( true ) {
    if (1 < *local_40) {
      FUN_1007c4dc0(&local_40,local_40[1]);
    }
    if (puVar2 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
    uVar1 = 0;
    if (**(long **)puVar2 != 0) {
      uVar1 = *(undefined8 *)(**(long **)puVar2 + 0x10);
    }
    FUN_10079c8d0(uVar1);
    local_60 = puVar2;
    FUN_1007c3190(&local_58,&local_40,&local_60);
    puVar2 = local_58;
  }
  bVar3 = (param_1 + 0x58U & 0xfffffffffffffffe) != 0;
  if (bVar3) {
    QMutex::lock();
  }
  FUN_1007c3250(param_1 + 0x90);
  FUN_1007c32f0(param_1 + 0x88);
  FUN_1007c3390(param_1 + 0x98);
  FUN_1007c3470(param_1 + 0xa0);
  FUN_1007c3510(param_1 + 0xd0);
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
    FUN_1007c4450(&local_40,local_40);
  }
  return;
}

