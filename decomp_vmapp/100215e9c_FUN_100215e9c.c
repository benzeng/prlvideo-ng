
int FUN_100215e9c(long param_1,long *param_2)

{
  byte *pbVar1;
  int local_2c;
  int local_10;
  uint local_c;
  
  pbVar1 = (byte *)*param_2;
  local_10 = 0;
  local_c = 0;
  if ((((*pbVar1 < 0x30) || (0x39 < *pbVar1)) || (pbVar1[1] < 0x30)) || (0x39 < pbVar1[1])) {
    local_10 = 1;
  }
  else {
    local_c = (((uint)*pbVar1 * 4 + (uint)*pbVar1) * 2 + (uint)pbVar1[1]) - 0x210;
  }
  if (local_10 == 0) {
    if ((local_c == 0) || (0x1f < local_c)) {
      local_2c = 2;
    }
    else {
      *(ulong *)(param_1 + 8) =
           *(ulong *)(param_1 + 8) & 0xfffffffffffffe0f | (ulong)(local_c & 0x1f) << 4;
      *param_2 = (long)(pbVar1 + 2);
      local_2c = 0;
    }
  }
  else {
    local_2c = local_10;
  }
  return local_2c;
}

