
undefined8 FUN_10038fba0(int *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0x31000) {
    if (iVar1 < 0x2a400) {
      if ((iVar1 != 0x23000) && (iVar1 != 0x2a000)) {
        return 0x7fffff;
      }
    }
    else if ((iVar1 != 0x2a400) && (iVar1 != 0x2a500)) {
      return 0x7fffff;
    }
    iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
    if (0x81a5 < iVar1) {
      if (((1 < iVar1 - 0x8cacU) && (iVar1 != 0x81a6)) && (iVar1 != 0x88f0)) {
        return 0xffff;
      }
      return 0xffffff;
    }
    uVar2 = 0xffff;
  }
  else {
    if (0x4a5ff < iVar1) {
      if (iVar1 != 0x4a600) {
        return 0x7fffff;
      }
      iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
      if (iVar1 < 0x81a6) {
        if (iVar1 == 0x81a5) {
          return 0x8000;
        }
        return 0x7fffff;
      }
      if (((1 < iVar1 - 0x8cacU) && (iVar1 != 0x81a6)) && (iVar1 != 0x88f0)) {
        return 0x7fffff;
      }
      return 0x800000;
    }
    if (iVar1 < 0x36000) {
      if (iVar1 == 0x31000) {
        return 0x3fffff;
      }
      if (iVar1 != 0x32000) {
        return 0x7fffff;
      }
    }
    else if ((iVar1 != 0x36000) && (iVar1 != 0x37000)) {
      return 0x7fffff;
    }
    iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
    if (0x81a5 < iVar1) {
      if ((1 < iVar1 - 0x8cacU) && (iVar1 != 0x81a6)) {
        if (iVar1 != 0x88f0) {
          return 0xffff;
        }
        return 0x200000;
      }
      return 0x1000000;
    }
    uVar2 = 0x8000;
  }
  if (iVar1 != 0x81a5) {
    return 0xffff;
  }
  return uVar2;
}

