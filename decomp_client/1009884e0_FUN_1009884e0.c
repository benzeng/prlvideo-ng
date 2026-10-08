
undefined2 FUN_1009884e0(long param_1,char param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int *local_40;
  int *local_38;
  int *local_30;
  uint local_28;
  undefined1 local_19;
  
  FUN_10098a850(&local_40,param_1 + 8);
  local_38 = local_40 + (long)local_40[2] * 2 + 4;
  local_30 = local_40 + (long)local_40[3] * 2 + 4;
  local_28 = 1;
  uVar2 = 0;
  while (uVar1 = local_28, local_38 != local_30) {
    while ((uVar1 == 0 || (**(char **)local_38 != param_2))) {
      local_38 = local_38 + 2;
      local_28 = 1;
      uVar1 = 1;
      if (local_30 == local_38) goto LAB_10098858c;
    }
    uVar2 = *(undefined2 *)(*(char **)local_38 + 0x20);
    local_38 = local_38 + 2;
    local_28 = uVar1 ^ 1;
    if (uVar1 == 1) break;
  }
LAB_10098858c:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    FUN_10098a430(&local_40,local_40);
  }
  return uVar2;
}

