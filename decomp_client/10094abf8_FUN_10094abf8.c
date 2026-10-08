
undefined4 FUN_10094abf8(undefined8 param_1,byte *param_2,long *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined4 local_58;
  byte *local_38;
  uint local_24;
  double local_20;
  int local_14;
  double local_10;
  
  local_24 = 0;
  local_14 = 0;
  if (param_2 == (byte *)0x0) {
    local_58 = 0xffffffff;
  }
  else {
    local_38 = param_2;
    if (param_4 != 0) {
      for (; (*local_38 == 0x20 || (((8 < *local_38 && (*local_38 < 0xb)) || (*local_38 == 0xd))));
          local_38 = local_38 + 1) {
      }
    }
    bVar1 = *local_38;
    if (bVar1 == 0x2d) {
      local_38 = local_38 + 1;
    }
    bVar2 = *local_38;
    local_38 = local_38 + 1;
    if (bVar2 == 0x50) {
      if (*local_38 == 0) {
        local_58 = 1;
      }
      else {
        lVar3 = FUN_100947ed5(0xc);
        if (lVar3 == 0) {
          local_58 = 0xffffffff;
        }
        else {
          while (*local_38 != 0) {
            if (5 < local_24) {
LAB_10094b027:
              if (lVar3 != 0) {
                _xmlSchemaFreeValue(lVar3);
              }
              return 1;
            }
            if (*local_38 == 0x54) {
              if (3 < local_24) {
                return 1;
              }
              local_24 = 3;
              local_38 = local_38 + 1;
            }
            else if (local_24 == 3) goto LAB_10094b027;
            local_20 = 0.0;
            if ((*local_38 < 0x30) || (0x39 < *local_38)) {
              local_14 = -1;
            }
            else {
              for (; (0x2f < *local_38 && (*local_38 < 0x3a)); local_38 = local_38 + 1) {
                local_20 = (double)(int)(*local_38 - 0x30) + local_20 * DAT_100e19930;
              }
            }
            if ((local_14 == 0) && (*local_38 == 0x2e)) {
              local_10 = 1.0;
              local_38 = local_38 + 1;
              if ((*local_38 < 0x30) || (0x39 < *local_38)) {
                local_14 = -1;
              }
              else {
                local_14 = 1;
              }
              for (; (0x2f < *local_38 && (*local_38 < 0x3a)); local_38 = local_38 + 1) {
                local_10 = local_10 / DAT_100e19930;
                local_20 = local_20 + (double)(int)(*local_38 - 0x30) * local_10;
              }
            }
            if ((local_14 == -1) || (*local_38 == 0)) goto LAB_10094b027;
            while (local_24 < 6) {
              if (*local_38 == (&DAT_101c9bd18)[local_24]) {
                if ((local_14 != 0) && (local_24 < 5)) goto LAB_10094b027;
                if (local_24 == 0) {
                  *(long *)(lVar3 + 0x10) = (long)local_20 * 0xc;
                }
                else if (local_24 == 1) {
                  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + (long)local_20;
                }
                else {
                  *(double *)(lVar3 + 0x20) =
                       *(double *)(&DAT_101c9bce0 + (ulong)local_24 * 8) * local_20 +
                       *(double *)(lVar3 + 0x20);
                  local_24 = local_24 + 1;
                }
                break;
              }
              local_24 = local_24 + 1;
              if ((local_24 == 3) || (local_24 == 6)) goto LAB_10094b027;
            }
            local_38 = local_38 + 1;
            if (param_4 != 0) {
              for (; (*local_38 == 0x20 ||
                     (((8 < *local_38 && (*local_38 < 0xb)) || (*local_38 == 0xd))));
                  local_38 = local_38 + 1) {
              }
            }
          }
          if (bVar1 == 0x2d) {
            *(long *)(lVar3 + 0x10) = -*(long *)(lVar3 + 0x10);
            *(long *)(lVar3 + 0x18) = -*(long *)(lVar3 + 0x18);
            *(ulong *)(lVar3 + 0x20) = DAT_101c9be10 ^ *(ulong *)(lVar3 + 0x20);
          }
          if (param_3 == (long *)0x0) {
            _xmlSchemaFreeValue(lVar3);
          }
          else {
            *param_3 = lVar3;
          }
          local_58 = 0;
        }
      }
    }
    else {
      local_58 = 1;
    }
  }
  return local_58;
}

