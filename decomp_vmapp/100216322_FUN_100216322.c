
int FUN_100216322(long param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int local_40;
  byte *local_20;
  int local_14;
  int local_c;
  
  local_20 = (byte *)*param_2;
  local_14 = 0;
  if (param_2 == (long *)0x0) {
    return -1;
  }
  bVar2 = *local_20;
  if (bVar2 == 0x2d) {
LAB_1002163e2:
    local_c = 0;
    bVar2 = *local_20;
    pbVar1 = local_20 + 1;
    if ((((*pbVar1 < 0x30) || (0x39 < *pbVar1)) || (local_20[2] < 0x30)) || (0x39 < local_20[2])) {
      local_14 = 1;
    }
    else {
      local_c = ((uint)*pbVar1 * 4 + (uint)*pbVar1) * 2 + (uint)local_20[2] + -0x210;
    }
    if (local_14 != 0) {
      return local_14;
    }
    if ((local_c < 0) || (0x17 < local_c)) {
      return 2;
    }
    if (local_20[3] != 0x3a) {
      return 1;
    }
    pbVar1 = local_20 + 4;
    *(ulong *)(param_1 + 0x18) =
         *(ulong *)(param_1 + 0x18) & 0xffffffffffffe001 |
         (ulong)((ushort)((short)((short)local_c * 0x3c0) >> 4) & 0xfff) * 2;
    if (((*pbVar1 < 0x30) || (0x39 < *pbVar1)) || ((local_20[5] < 0x30 || (0x39 < local_20[5])))) {
      local_14 = 1;
    }
    else {
      local_c = ((uint)*pbVar1 * 4 + (uint)*pbVar1) * 2 + (uint)local_20[5] + -0x210;
    }
    local_20 = local_20 + 6;
    if (local_14 != 0) {
      return local_14;
    }
    if ((local_c < 0) || (0x3b < local_c)) {
      return 2;
    }
    *(ulong *)(param_1 + 0x18) =
         *(ulong *)(param_1 + 0x18) & 0xffffffffffffe001 |
         (ulong)((ushort)((short)((((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4) +
                                  (short)local_c) * 0x10) >> 4) & 0xfff) * 2;
    if (bVar2 == 0x2d) {
      *(ulong *)(param_1 + 0x18) =
           *(ulong *)(param_1 + 0x18) & 0xffffffffffffe001 |
           (ulong)((ushort)((short)(((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4) *
                                   -0x10) >> 4) & 0xfff) * 2;
    }
    if (((short)((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4) < -0x347) ||
       (0x347 < (short)((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4))) {
      return 2;
    }
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 1;
LAB_1002163a7:
    *param_2 = (long)local_20;
    local_40 = 0;
  }
  else {
    if (bVar2 < 0x2e) {
      if (bVar2 == 0) {
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xffffffffffffe001;
        goto LAB_1002163a7;
      }
      if (bVar2 == 0x2b) goto LAB_1002163e2;
    }
    else if (bVar2 == 0x5a) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 1;
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xffffffffffffe001;
      local_20 = local_20 + 1;
      goto LAB_1002163a7;
    }
    local_40 = 1;
  }
  return local_40;
}

