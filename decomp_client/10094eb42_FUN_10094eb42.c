
int FUN_10094eb42(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int local_6c;
  long local_48;
  int local_40;
  int local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  
  local_40 = 1;
  if (((*(ulong *)(param_1 + 0x28) & 0x100000000) == 0) ||
     (((*(long *)(param_1 + 0x10) == 0 && (*(long *)(param_1 + 0x18) == 0)) &&
      (*(long *)(param_1 + 0x20) == 0)))) {
    if (((*(ulong *)(param_2 + 0x28) & 0x100000000) != 0) &&
       (((*(long *)(param_2 + 0x10) != 0 || (*(long *)(param_2 + 0x18) != 0)) ||
        (*(long *)(param_2 + 0x20) != 0)))) {
      return 1;
    }
  }
  else {
    if (((*(ulong *)(param_2 + 0x28) & 0x100000000) == 0) ||
       (((*(long *)(param_2 + 0x10) == 0 && (*(long *)(param_2 + 0x18) == 0)) &&
        (*(long *)(param_2 + 0x20) == 0)))) {
      return -1;
    }
    local_40 = -1;
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x2d) -
          ((uint)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x21) & 0x7f);
  iVar2 = (uint)*(byte *)(param_2 + 0x2d) -
          ((uint)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x21) & 0x7f);
  if (iVar2 < iVar1) {
    local_6c = local_40;
  }
  else if (iVar1 < iVar2) {
    local_6c = -local_40;
  }
  else {
    local_34 = (uint)*(byte *)(param_1 + 0x2d) - (uint)*(byte *)(param_2 + 0x2d);
    if (local_34 < 0) {
      local_30 = *(ulong *)(param_2 + 0x20);
      local_28 = *(ulong *)(param_2 + 0x18);
      local_20 = *(ulong *)(param_2 + 0x10);
      local_34 = -local_34;
      local_40 = -local_40;
      local_48 = param_1;
    }
    else {
      local_30 = *(ulong *)(param_1 + 0x20);
      local_28 = *(ulong *)(param_1 + 0x18);
      local_20 = *(ulong *)(param_1 + 0x10);
      local_48 = param_2;
    }
    for (; 8 < local_34; local_34 = local_34 + -8) {
      local_20 = local_28;
      local_28 = local_30;
      local_30 = 0;
    }
    for (; 0 < local_34; local_34 = local_34 + -1) {
      uVar3 = local_30 % 10;
      local_30 = local_30 / 10;
      uVar4 = local_28 % 10;
      local_28 = (local_28 + uVar3 * 100000000) / 10;
      local_20 = (local_20 + uVar4 * 100000000) / 10;
    }
    if (*(ulong *)(local_48 + 0x20) < local_30) {
      local_6c = local_40;
    }
    else {
      if (*(ulong *)(local_48 + 0x20) == local_30) {
        if (*(ulong *)(local_48 + 0x18) < local_28) {
          return local_40;
        }
        if (*(ulong *)(local_48 + 0x18) == local_28) {
          if (*(ulong *)(local_48 + 0x10) < local_20) {
            return local_40;
          }
          if (*(ulong *)(local_48 + 0x10) == local_20) {
            if (*(char *)(param_1 + 0x2d) == *(char *)(param_2 + 0x2d)) {
              return 0;
            }
            return local_40;
          }
        }
      }
      local_6c = -local_40;
    }
  }
  return local_6c;
}

