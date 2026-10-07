
uint FUN_100351740(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 < *param_1) {
    uVar1 = 0xffffffff;
    if ((param_2 >> (param_3 & 0x1f) & 1) != 0) {
      uVar1 = param_3;
    }
  }
  else {
    iVar2 = 0;
    uVar1 = (1 << ((char)param_3 - 0x10U & 0x1f)) + 0xffffU & param_2 >> 0x10;
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      do {
        iVar2 = (uVar1 & 1) + iVar2;
        uVar1 = uVar1 >> 1;
      } while (uVar1 != 0);
    }
    if ((param_2 & 1) == 0) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 2) == 0) {
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 4) == 0) {
      if (iVar2 == 0) {
        return 2;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 8) == 0) {
      if (iVar2 == 0) {
        return 3;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x10) == 0) {
      if (iVar2 == 0) {
        return 4;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x20) == 0) {
      if (iVar2 == 0) {
        return 5;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x40) == 0) {
      if (iVar2 == 0) {
        return 6;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x80) == 0) {
      if (iVar2 == 0) {
        return 7;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x100) == 0) {
      if (iVar2 == 0) {
        return 8;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x200) == 0) {
      if (iVar2 == 0) {
        return 9;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x400) == 0) {
      if (iVar2 == 0) {
        return 10;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x800) == 0) {
      if (iVar2 == 0) {
        return 0xb;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x1000) == 0) {
      if (iVar2 == 0) {
        return 0xc;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x2000) == 0) {
      if (iVar2 == 0) {
        return 0xd;
      }
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 0x4000) == 0) {
      if (iVar2 == 0) {
        return 0xe;
      }
      iVar2 = iVar2 + -1;
    }
    uVar1 = 0xffffffff;
    if ((param_2 & 0x8000) == 0 && iVar2 == 0) {
      uVar1 = 0xf;
    }
  }
  return uVar1;
}

