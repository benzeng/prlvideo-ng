
int FUN_10094ef3b(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  int local_6c;
  int local_34;
  long local_30;
  long local_28;
  long local_18;
  long local_10;
  
  local_34 = 1;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_6c = -2;
  }
  else {
    local_30 = *(long *)(param_1 + 0x10) - *(long *)(param_2 + 0x10);
    dVar3 = *(double *)(param_1 + 0x20) - *(double *)(param_2 + 0x20);
    local_28 = (long)dVar3 / 0x15180;
    dVar3 = dVar3 - (double)(local_28 * 0x15180);
    local_28 = (*(long *)(param_1 + 0x18) - *(long *)(param_2 + 0x18)) + local_28;
    if (local_30 == 0) {
      if (local_28 == 0) {
        if (dVar3 == 0.0) {
          local_6c = 0;
        }
        else if (dVar3 < 0.0) {
          local_6c = -1;
        }
        else {
          local_6c = 1;
        }
      }
      else if (local_28 < 0) {
        local_6c = -1;
      }
      else {
        local_6c = 1;
      }
    }
    else {
      if (local_30 < 1) {
        if ((local_28 < 1) && (dVar3 <= 0.0)) {
          return -1;
        }
        local_34 = -1;
        local_30 = -local_30;
      }
      else {
        if ((-1 < local_28) && (0.0 <= dVar3)) {
          return 1;
        }
        local_28 = -local_28;
      }
      lVar1 = local_30 / 0xc;
      if (lVar1 == 0) {
        local_18 = 0;
        local_10 = 0;
      }
      else {
        lVar2 = lVar1 + 3;
        if (lVar1 + 3 < 0) {
          lVar2 = lVar1 + 6;
        }
        local_10 = (lVar2 >> 2) * 0x16e + ((lVar1 + -1) % 4) * 0x16d;
        local_18 = local_10 + -1;
      }
      local_10 = local_10 + *(long *)(&DAT_101c9bd80 + (local_30 % 0xc) * 8);
      if ((local_10 == local_18 + *(long *)(&DAT_101c9bd20 + (local_30 % 0xc) * 8)) &&
         (local_10 == local_28)) {
        local_6c = 0;
      }
      else if (local_10 < local_28) {
        local_6c = -local_34;
      }
      else if (local_28 < local_18 + *(long *)(&DAT_101c9bd20 + (local_30 % 0xc) * 8)) {
        local_6c = local_34;
      }
      else {
        local_6c = 2;
      }
    }
  }
  return local_6c;
}

