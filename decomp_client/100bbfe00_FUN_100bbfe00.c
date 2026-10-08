
void FUN_100bbfe00(byte *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  byte local_40 [8];
  undefined1 local_38 [8];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1[9] = param_1[9] ^ param_1[1];
  param_1[10] = param_1[10] ^ param_1[2];
  iVar9 = 2;
  lVar10 = 0;
  do {
    iVar4 = 7;
    uVar7 = 0;
    iVar5 = iVar9;
    do {
      uVar2 = 1 << ((byte)iVar4 & 0x1f);
      if ((param_1[iVar5 >> 3] >> (~(byte)iVar5 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar2;
      }
      else {
        uVar7 = uVar7 | uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
    iVar9 = iVar9 + 8;
    local_38[lVar10] = (char)uVar7;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 8);
  local_30 = lVar1;
  FUN_100ba7630(local_38,local_40);
  iVar9 = 2;
  lVar10 = 0;
  do {
    bVar3 = local_40[lVar10];
    uVar7 = 7;
    iVar5 = iVar9;
    do {
      iVar4 = iVar5 >> 3;
      bVar6 = (byte)(1 << (~(byte)iVar5 & 7));
      if ((bVar3 >> (uVar7 & 0x1f) & 1) == 0) {
        bVar6 = param_1[iVar4] & ~bVar6;
      }
      else {
        bVar6 = param_1[iVar4] | bVar6;
      }
      param_1[iVar4] = bVar6;
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0xffffffff);
    iVar9 = iVar9 + 8;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 8);
  uVar2 = (uint)(*param_1 >> 6);
  uVar7 = uVar2 | 1;
  if ((*param_1 & 0x40) == 0) {
    uVar7 = uVar2 & 2;
  }
  *param_2 = uVar7;
  uVar2 = *param_1 >> 4 & 3;
  param_2[1] = uVar2;
  uVar7 = 0;
  iVar9 = 0x1a;
  iVar5 = 4;
  do {
    uVar8 = 1 << ((byte)iVar9 & 0x1f);
    if ((param_1[iVar5 >> 3] >> (~(byte)iVar5 & 7) & 1) == 0) {
      uVar7 = uVar7 & ~uVar8;
    }
    else {
      uVar7 = uVar7 | uVar8;
    }
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar9 != -1);
  param_2[2] = uVar7;
  uVar7 = (uint)(param_1[4] >> 4);
  param_2[3] = uVar7 & 1 | uVar7 & 2 | uVar7 & 4 | uVar7 & 8 | (param_1[3] & 1) << 4;
  bVar3 = param_1[4];
  uVar8 = bVar3 & 0xc;
  uVar7 = uVar8 + 2;
  if ((bVar3 & 2) == 0) {
    uVar7 = uVar8;
  }
  param_2[4] = bVar3 & 1 | uVar7;
  uVar7 = 0xffffffff;
  if (param_1[5] >> 4 != 0xf) {
    uVar7 = (param_1[5] >> 4) + 0x7d6;
  }
  param_2[5] = uVar7;
  if ((param_1[5] & 8) == 0) {
    param_2[6] = 0;
    uVar7 = 0;
    iVar9 = 8;
    iVar5 = 0x2d;
    do {
      uVar2 = 1 << ((byte)iVar9 & 0x1f);
      if ((param_1[iVar5 >> 3] >> (~(byte)iVar5 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar2;
      }
      else {
        uVar7 = uVar7 | uVar2;
      }
      iVar9 = iVar9 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar9 != -1);
    uVar2 = uVar7;
    if (99 < uVar7) {
      if (uVar7 < 0x8c) {
        uVar2 = uVar7 * 5 - 400;
      }
      else if (uVar7 < 0xbe) {
        uVar2 = uVar7 * 10 - 0x44c;
      }
      else if (uVar7 < 0xfa) {
        uVar2 = uVar7 * 0x14 - 3000;
      }
      else if (uVar7 < 0x19a) {
        uVar2 = uVar7 * 0x32 - 0x2904;
      }
      else {
        uVar2 = 0xffffffff;
        if (uVar7 < 0x1ff) {
          uVar2 = uVar7 * 100 - 31000;
        }
      }
    }
    param_2[7] = uVar2;
    uVar7 = 0;
    iVar9 = 9;
    iVar5 = 0x36;
    do {
      uVar2 = 1 << ((byte)iVar9 & 0x1f);
      if ((param_1[iVar5 >> 3] >> (~(byte)iVar5 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar2;
      }
      else {
        uVar7 = uVar7 | uVar2;
      }
      iVar9 = iVar9 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar9 != -1);
    uVar2 = uVar7;
    if (99 < uVar7) {
      if (uVar7 < 0x96) {
        uVar2 = uVar7 * 2 - 100;
      }
      else if (uVar7 < 0xe6) {
        uVar2 = uVar7 * 5 - 0x226;
      }
      else if (uVar7 < 0x10e) {
        uVar2 = uVar7 * 10 - 0x6a4;
      }
      else if (uVar7 < 0x208) {
        uVar2 = uVar7 * 0x14 - 0x1130;
      }
      else if (uVar7 < 600) {
        uVar2 = uVar7 * 0x32 - 20000;
      }
      else if (uVar7 < 800) {
        uVar2 = uVar7 * 100 - 50000;
      }
      else if (uVar7 < 900) {
        uVar2 = uVar7 * 200 - 130000;
      }
      else if (uVar7 < 1000) {
        uVar2 = uVar7 * 500 - 400000;
      }
      else {
        uVar2 = 0xffffffff;
        if (uVar7 < 0x3ff) {
          uVar2 = uVar7 * 1000 - 900000;
        }
      }
    }
    param_2[8] = uVar2;
    uVar7 = 0;
    iVar9 = 9;
    iVar5 = 0x40;
    do {
      uVar2 = 1 << ((byte)iVar9 & 0x1f);
      if ((param_1[iVar5 >> 3] >> (~(byte)iVar5 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar2;
      }
      else {
        uVar7 = uVar7 | uVar2;
      }
      iVar9 = iVar9 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar9 != -1);
    uVar2 = uVar7;
    if (99 < uVar7) {
      if (uVar7 < 0x96) {
        uVar2 = uVar7 * 2 - 100;
      }
      else if (uVar7 < 0xe6) {
        uVar2 = uVar7 * 5 - 0x226;
      }
      else if (uVar7 < 0x10e) {
        uVar2 = uVar7 * 10 - 0x6a4;
      }
      else if (uVar7 < 0x208) {
        uVar2 = uVar7 * 0x14 - 0x1130;
      }
      else if (uVar7 < 600) {
        uVar2 = uVar7 * 0x32 - 20000;
      }
      else if (uVar7 < 800) {
        uVar2 = uVar7 * 100 - 50000;
      }
      else if (uVar7 < 900) {
        uVar2 = uVar7 * 200 - 130000;
      }
      else if (uVar7 < 1000) {
        uVar2 = uVar7 * 500 - 400000;
      }
      else {
        uVar2 = 0xffffffff;
        if (uVar7 < 0x3ff) {
          uVar2 = uVar7 * 1000 - 900000;
        }
      }
    }
    param_2[9] = uVar2;
    goto LAB_100bc05ac;
  }
  param_2[6] = 1;
  uVar7 = (uint)(param_1[6] >> 5);
  uVar7 = uVar7 & 2 | ((uint)param_1[5] << 3 | uVar7) & 0x3c;
  if ((param_1[6] & 0x20) == 0) {
    uVar8 = 0xffffffff;
    if (uVar7 != 0) goto LAB_100bc00d8;
  }
  else {
    uVar7 = uVar7 | 1;
LAB_100bc00d8:
    uVar8 = uVar7;
    if (7 < uVar7) {
      if (uVar7 < 0x24) {
        uVar8 = uVar7 * 2 - 8;
      }
      else if (uVar7 < 0x34) {
        uVar8 = uVar7 * 4 - 0x50;
      }
      else if (uVar7 < 0x3b) {
        uVar8 = uVar7 * 8 - 0x120;
      }
      else {
        uVar8 = 0x100;
        if (uVar7 < 0x3f) {
          uVar8 = uVar7 * 0x10 - 0x2f8;
        }
      }
    }
  }
  param_2[7] = uVar8;
  uVar7 = 0;
  iVar9 = 0x33;
  bVar3 = 8;
  do {
    uVar8 = 1 << (bVar3 & 0x1f);
    if ((param_1[iVar9 >> 3] >> (~(byte)iVar9 & 7) & 1) == 0) {
      uVar7 = uVar7 & ~uVar8;
    }
    else {
      uVar7 = uVar7 | uVar8;
    }
    iVar9 = iVar9 + 1;
    bVar3 = bVar3 - 1;
  } while (iVar9 != 0x3c);
  uVar8 = uVar7;
  if (99 < uVar7) {
    if (uVar7 < 0x8c) {
      uVar8 = uVar7 * 5 - 400;
    }
    else if (uVar7 < 0xbe) {
      uVar8 = uVar7 * 10 - 0x44c;
    }
    else if (uVar7 < 0xfa) {
      uVar8 = uVar7 * 0x14 - 3000;
    }
    else if (uVar7 < 0x19a) {
      uVar8 = uVar7 * 0x32 - 0x2904;
    }
    else {
      uVar8 = 0xffffffff;
      if (uVar7 < 0x1ff) {
        uVar8 = uVar7 * 100 - 31000;
      }
    }
  }
  param_2[8] = uVar8;
  param_2[9] = (uint)(param_1[7] >> 3 & 1);
  param_2[10] = (uint)(param_1[7] >> 2 & 1);
  uVar7 = param_1[7] & 2;
  if ((param_1[7] & 1) == 0) {
LAB_100bc0334:
    uVar8 = *(uint *)("0123456789ABCDEFGHJKMNPQRSTVWXYZ<" + (long)(int)uVar7 * 4 + 0x20);
  }
  else {
    uVar7 = uVar7 | 1;
    uVar8 = 900;
    if (uVar7 != 3) goto LAB_100bc0334;
  }
  param_2[0xb] = uVar8;
  uVar7 = (uint)(param_1[8] >> 5);
  param_2[0xc] = uVar7 & 1 | uVar7 & 2 | (uint)((char)param_1[8] < '\0') << 2;
  param_2[0xd] = param_1[8] >> 2 & 7;
  param_2[0xe] = (uint)(param_1[9] >> 7) | (uint)param_1[8] * 2 & 6;
  if (uVar2 != 1) {
    param_2[0xf] = (uint)(param_1[9] >> 6 & 1);
    param_2[0x10] = (uint)(param_1[9] >> 5 & 1);
    param_2[0x11] = (uint)(param_1[9] >> 4 & 1);
    param_2[0x12] = (uint)(param_1[9] >> 3 & 1);
  }
  uVar7 = (uint)(param_1[10] >> 7) | (uint)param_1[9] * 2 & 0xe;
  if (uVar7 < 0xb) {
    param_2[0x13] = uVar7;
  }
  else {
    uVar2 = 0xf;
    if (((0xb < uVar7) && (uVar2 = 0x14, 0xc < uVar7)) && (uVar2 = 0x1e, 0xd < uVar7)) {
      uVar2 = uVar7 == 0xf | 0xfffffffe;
    }
    param_2[0x13] = uVar2;
  }
LAB_100bc05ac:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

