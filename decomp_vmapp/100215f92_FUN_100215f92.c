
int FUN_100215f92(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int local_3c;
  byte *local_20;
  int local_18;
  uint local_14;
  double local_10;
  
  pbVar2 = (byte *)*param_2;
  local_18 = 0;
  local_14 = 0;
  if ((((*pbVar2 < 0x30) || (0x39 < *pbVar2)) || (pbVar2[1] < 0x30)) || (0x39 < pbVar2[1])) {
    local_18 = 1;
  }
  else {
    local_14 = (((uint)*pbVar2 * 4 + (uint)*pbVar2) * 2 + (uint)pbVar2[1]) - 0x210;
  }
  if (local_18 == 0) {
    if (pbVar2[2] == 0x3a) {
      if (((int)local_14 < 0) || (0x17 < (int)local_14)) {
        local_3c = 2;
      }
      else {
        pbVar1 = pbVar2 + 3;
        *(ulong *)(param_1 + 8) =
             *(ulong *)(param_1 + 8) & 0xffffffffffffc1ff | (ulong)(local_14 & 0x1f) << 9;
        if (((*pbVar1 < 0x30) || ((0x39 < *pbVar1 || (pbVar2[4] < 0x30)))) || (0x39 < pbVar2[4])) {
          local_18 = 1;
        }
        else {
          local_14 = (((uint)*pbVar1 * 4 + (uint)*pbVar1) * 2 + (uint)pbVar2[4]) - 0x210;
        }
        if (local_18 == 0) {
          if (((int)local_14 < 0) || (0x3b < (int)local_14)) {
            local_3c = 2;
          }
          else {
            *(ulong *)(param_1 + 8) =
                 *(ulong *)(param_1 + 8) & 0xfffffffffff03fff | (ulong)(local_14 & 0x3f) << 0xe;
            if (pbVar2[5] == 0x3a) {
              pbVar1 = pbVar2 + 6;
              if ((((*pbVar1 < 0x30) || (0x39 < *pbVar1)) || (pbVar2[7] < 0x30)) ||
                 (0x39 < pbVar2[7])) {
                local_18 = 1;
              }
              else {
                *(double *)(param_1 + 0x10) =
                     (double)(int)(((uint)*pbVar1 * 4 + (uint)*pbVar1) * 2 + (uint)pbVar2[7] +
                                  -0x210);
              }
              local_20 = pbVar2 + 8;
              if ((local_18 == 0) && (*local_20 == 0x2e)) {
                local_10 = 1.0;
                local_20 = pbVar2 + 9;
                if ((*local_20 < 0x30) || (0x39 < *local_20)) {
                  local_18 = 1;
                }
                for (; (0x2f < *local_20 && (*local_20 < 0x3a)); local_20 = local_20 + 1) {
                  local_10 = local_10 / DAT_100b4aec0;
                  *(double *)(param_1 + 0x10) =
                       (double)(int)(*local_20 - 0x30) * local_10 + *(double *)(param_1 + 0x10);
                }
              }
              if (local_18 == 0) {
                if ((((*(double *)(param_1 + 0x10) < 0.0) ||
                     (DAT_100b4aed8 <= *(double *)(param_1 + 0x10))) ||
                    ((short)((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4) < -0x347)) ||
                   (0x347 < (short)((short)((int)*(undefined8 *)(param_1 + 0x18) << 3) >> 4))) {
                  local_3c = 2;
                }
                else {
                  *param_2 = (long)local_20;
                  local_3c = 0;
                }
              }
              else {
                local_3c = local_18;
              }
            }
            else {
              local_3c = 1;
            }
          }
        }
        else {
          local_3c = local_18;
        }
      }
    }
    else {
      local_3c = 1;
    }
  }
  else {
    local_3c = local_18;
  }
  return local_3c;
}

