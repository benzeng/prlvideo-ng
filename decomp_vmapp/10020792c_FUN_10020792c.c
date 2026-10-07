
void FUN_10020792c(undefined8 param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  long local_28;
  int *local_18;
  uint local_10;
  
  if ((*(long *)(param_2 + 0x98) != 0) && ((*(uint *)(param_2 + 0x58) >> 4 & 1) == 0)) {
    for (local_28 = *(long *)(param_2 + 0x98); local_28 != 0; local_28 = *(long *)(local_28 + 0x98))
    {
      local_10 = 0;
      bVar3 = false;
      bVar2 = false;
      if ((*(uint *)(local_28 + 0x58) >> 0xd & 1) == 0) {
        piVar1 = *(int **)(local_28 + 0x38);
        local_18 = *(int **)(param_2 + 0x38);
        if (piVar1 != local_18) {
          if ((*(uint *)(local_28 + 0x58) >> 0xc & 1) != 0) {
            local_10 = 0x80000;
          }
          if ((*(uint *)(local_28 + 0x58) >> 0xb & 1) != 0) {
            local_10 = local_10 | 0x40000;
          }
          for (; (local_18 != (int *)0x0 && (local_18 != piVar1));
              local_18 = *(int **)(local_18 + 0x1c)) {
            if ((((uint)local_18[0x16] >> 1 & 1) != 0) && (!bVar2)) {
              bVar3 = true;
            }
            if ((((uint)local_18[0x16] >> 2 & 1) != 0) && ((bool)(bVar2 ^ 1))) {
              bVar2 = true;
            }
          }
          for (local_18 = *(int **)(*(long *)(param_2 + 0x38) + 0x70);
              (local_18 != (int *)0x0 && ((*local_18 == 5 || (local_18[0x28] == 0x2d))));
              local_18 = *(int **)(local_18 + 0x1c)) {
            if ((((uint)local_18[0x16] >> 0x12 & 1) != 0) && (((local_10 >> 0x12 ^ 1) & 1) != 0)) {
              local_10 = local_10 | 0x40000;
            }
            if ((((uint)local_18[0x16] >> 0x13 & 1) != 0) && (local_10 >> 0x13 != 1)) {
              local_10 = local_10 | 0x80000;
            }
            if (local_18 == piVar1) break;
          }
          if ((local_10 != 0) &&
             (((((byte)(local_10 >> 0x12) & 1) == 1 && (bVar3)) ||
              (((char)(local_10 >> 0x13) == '\x01' && (bVar2)))))) goto LAB_100207b8f;
        }
        FUN_1001eef3a(param_1,local_28,param_2);
        if (((*(uint *)(local_28 + 0x58) >> 0x11 ^ 1) & 1) != 0) {
          *(uint *)(local_28 + 0x58) = *(uint *)(local_28 + 0x58) | 0x20000;
        }
      }
LAB_100207b8f:
    }
  }
  return;
}

