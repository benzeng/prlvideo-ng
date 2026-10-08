
int FUN_1008fbd6d(long param_1,long param_2,int param_3)

{
  int iVar1;
  ssize_t sVar2;
  uint local_a8 [32];
  ulong local_28;
  undefined4 local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  if (((*(uint *)(param_1 + 0x2c) & 1) != 0) && (param_2 != 0)) {
    while (local_14 < param_3) {
      sVar2 = _send(*(int *)(param_1 + 0x28),(void *)(local_14 + param_2),(long)(param_3 - local_14)
                    ,0);
      local_10 = (int)sVar2;
      if (local_10 < 1) {
        if ((local_10 == -1) && (iVar1 = FUN_1008fb6ec(), iVar1 != 0x23)) {
          ___xmlIOErr(10,0,"send failed\n");
          if (local_14 != 0) {
            return local_14;
          }
          return -1;
        }
        local_28 = (ulong)DAT_102279408;
        local_20 = 0;
        _memset(local_a8,0,0x80);
        local_c = *(int *)(param_1 + 0x28);
        local_a8[(ulong)(long)local_c >> 5] =
             1 << ((byte)local_c & 0x1f) | local_a8[(ulong)(long)local_c >> 5];
        _select_1050(*(int *)(param_1 + 0x28) + 1,0,local_a8,0,&local_28);
      }
      else {
        local_14 = local_14 + local_10;
      }
    }
  }
  return local_14;
}

