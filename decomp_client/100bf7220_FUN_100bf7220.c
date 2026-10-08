
int FUN_100bf7220(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint *local_48;
  undefined4 local_40 [2];
  long local_38;
  
  iVar2 = 0;
  if (((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) &&
     (iVar2 = 0, *(int *)(param_1 + 0x14) != 0)) {
    if (DAT_1023160d8 != 0) {
      local_40[0] = 0;
      local_38 = param_1;
      lVar3 = FUN_100c60fc0(DAT_1023160d8,local_40);
      if (lVar3 != 0) {
        return *(int *)(*(long *)(lVar3 + 8) + 0x10);
      }
    }
    iVar5 = 0;
    iVar2 = 0;
    local_48 = (uint *)0x0;
    iVar4 = 0x359;
    do {
      iVar1 = iVar4;
      if (iVar1 <= iVar5) {
        if (iVar2 != 0) {
          return 0;
        }
        break;
      }
      iVar4 = (iVar1 + iVar5) / 2;
      local_48 = (uint *)(&DAT_101da2a00 + (long)iVar4 * 4);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == *(int *)(&DAT_102242b94 +
                           (ulong)*(uint *)(&DAT_101da2a00 + (long)iVar4 * 4) * 0x28)) {
        if (iVar2 == 0) break;
        iVar2 = _memcmp(*(void **)(param_1 + 0x18),
                        *(void **)(&DAT_102242b98 +
                                  (ulong)*(uint *)(&DAT_101da2a00 + (long)iVar4 * 4) * 0x28),
                        (long)iVar2);
      }
      else {
        iVar2 = iVar2 - *(int *)(&DAT_102242b94 +
                                (ulong)*(uint *)(&DAT_101da2a00 + (long)iVar4 * 4) * 0x28);
      }
    } while ((iVar2 < 0) || (iVar5 = iVar4 + 1, iVar4 = iVar1, 0 < iVar2));
    iVar2 = 0;
    if (local_48 != (uint *)0x0) {
      iVar2 = *(int *)(&DAT_102242b90 + (ulong)*local_48 * 0x28);
    }
  }
  return iVar2;
}

