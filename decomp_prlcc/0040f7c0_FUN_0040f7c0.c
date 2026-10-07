
undefined4 FUN_0040f7c0(void)

{
  int iVar1;
  undefined4 local_1ac;
  long local_1a8;
  long local_1a0;
  long local_118;
  long local_110;
  int local_7c;
  undefined8 local_78;
  long *local_70;
  time_t local_68;
  long *local_60;
  time_t local_58;
  long local_50;
  time_t local_48;
  long *local_40;
  long *local_38;
  int local_2c;
  int local_28;
  int local_24;
  long *local_20;
  
  local_70 = (long *)FUN_0040f16c();
  local_68 = time((time_t *)0x0);
  local_7c = (int)local_70[1];
  if (local_7c != -1) {
    if (*local_70 == local_68) {
      return (int)local_70[1];
    }
    local_40 = local_70;
    local_60 = local_70;
    LOCK();
    local_50 = *local_70;
    *local_70 = local_68;
    UNLOCK();
    local_58 = local_68;
    local_48 = local_68;
    if (local_50 == local_68) {
      return (int)local_70[1];
    }
  }
  local_78 = FUN_0040f46e();
  if ((((local_7c != -1) && (iVar1 = FUN_00410382(local_78,&local_118), -1 < iVar1)) &&
      (iVar1 = FUN_004103a6((int)local_70[1],&local_1a8), -1 < iVar1)) &&
     ((local_118 == local_1a8 && (local_110 == local_1a0)))) {
    return (int)local_70[1];
  }
  local_2c = FUN_0040f480(local_78);
  if (local_2c == -1) {
    local_1ac = 0xffffffff;
  }
  else {
    local_38 = local_70 + 1;
    LOCK();
    local_7c = (int)*local_38;
    *(int *)local_38 = local_2c;
    UNLOCK();
    if (local_7c != -1) {
      local_28 = local_7c;
      local_24 = local_2c;
      local_20 = local_38;
      close(local_7c);
    }
    local_1ac = (undefined4)local_70[1];
  }
  return local_1ac;
}

