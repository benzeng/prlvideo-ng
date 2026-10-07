
int FUN_1001c1489(long param_1)

{
  ulong uVar1;
  int local_28;
  long local_20;
  int local_c;
  
  local_c = 0;
  if (param_1 == 0) {
    return -1;
  }
  if (*(uint *)(param_1 + 8) < 0xe) {
    uVar1 = 1L << ((byte)*(uint *)(param_1 + 8) & 0x3f);
    if ((uVar1 & 0x2202) == 0) {
      if ((uVar1 & 0x1b8) == 0) {
        if ((uVar1 & 4) != 0) {
          return -1;
        }
        goto LAB_1001c14fa;
      }
      local_c = _xmlStrlen(*(xmlChar **)(param_1 + 0x50));
    }
    else {
      for (local_20 = *(long *)(param_1 + 0x18); local_20 != 0;
          local_20 = *(long *)(local_20 + 0x30)) {
        if (*(int *)(local_20 + 8) == 1) {
          local_c = local_c + 1;
        }
      }
    }
    local_28 = local_c;
  }
  else {
LAB_1001c14fa:
    local_28 = -1;
  }
  return local_28;
}

