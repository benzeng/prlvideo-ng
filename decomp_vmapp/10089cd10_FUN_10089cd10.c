
undefined8 FUN_10089cd10(byte *param_1,int param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    return 0;
  }
  bVar1 = *param_1;
  if ((bVar1 & 0x80) == 0) {
    uVar3 = (ulong)(bVar1 & 0x7f);
    uVar4 = 1;
  }
  else {
    uVar2 = (uint)bVar1;
    if ((bVar1 & 0xe0) == 0xc0) {
      if (param_2 < 2) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar3 = (ulong)param_1[1] & 0x3f | (ulong)((uVar2 & 0x1f) << 6);
      uVar4 = 2;
      if (uVar3 < 0x80) {
        return 0xfffffffc;
      }
    }
    else if ((uVar2 & 0xf0) == 0xe0) {
      if (param_2 < 3) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar3 = (ulong)param_1[2] & 0x3f |
              ((ulong)param_1[1] & 0x3f) << 6 | (ulong)((uVar2 & 0xf) << 0xc);
      uVar4 = 3;
      if (uVar3 < 0x800) {
        return 0xfffffffc;
      }
    }
    else if ((uVar2 & 0xf8) == 0xf0) {
      if (param_2 < 4) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar3 = (ulong)param_1[3] & 0x3f |
              ((ulong)param_1[2] & 0x3f) << 6 |
              ((ulong)param_1[1] & 0x3f) << 0xc | (ulong)(uVar2 & 7) << 0x12;
      uVar4 = 4;
      if (uVar3 < 0x10000) {
        return 0xfffffffc;
      }
    }
    else if ((uVar2 & 0xfc) == 0xf8) {
      if (param_2 < 5) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[4] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar3 = (ulong)param_1[4] & 0x3f |
              ((ulong)param_1[3] & 0x3f) << 6 |
              ((ulong)param_1[2] & 0x3f) << 0xc |
              ((ulong)param_1[1] & 0x3f) << 0x12 | (ulong)(uVar2 & 3) << 0x18;
      uVar4 = 5;
      if (uVar3 < 0x200000) {
        return 0xfffffffc;
      }
    }
    else {
      if ((bVar1 & 0xfe) != 0xfc) {
        return 0xfffffffe;
      }
      if (param_2 < 6) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[4] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if ((param_1[5] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar3 = (ulong)param_1[5] & 0x3f |
              ((ulong)param_1[4] & 0x3f) << 6 |
              ((ulong)param_1[3] & 0x3f) << 0xc |
              ((ulong)param_1[2] & 0x3f) << 0x12 |
              ((ulong)param_1[1] & 0x3f) << 0x18 | (ulong)(bVar1 & 1) << 0x1e;
      uVar4 = 6;
      if (uVar3 < 0x4000000) {
        return 0xfffffffc;
      }
    }
  }
  *param_3 = uVar3;
  return uVar4;
}

