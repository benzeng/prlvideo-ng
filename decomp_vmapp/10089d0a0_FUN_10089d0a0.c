
undefined8 FUN_10089d0a0(byte *param_1,int param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = 6;
  if ((param_1 == (byte *)0x0) || (uVar2 = 0xffffffff, iVar3 = param_2, 0 < param_2)) {
    bVar4 = (byte)param_3;
    if (param_3 < 0x80) {
      uVar2 = 1;
      if (param_1 != (byte *)0x0) {
        *param_1 = bVar4;
        return uVar2;
      }
    }
    else if (param_3 < 0x800) {
      uVar2 = 2;
      if (iVar3 < 2) {
        uVar2 = 0xffffffff;
      }
      else if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 6) & 0x1f | 0xc0;
        param_1[1] = bVar4 & 0x3f | 0x80;
        return 2;
      }
    }
    else if (param_3 < 0x10000) {
      uVar2 = 3;
      if (iVar3 < 3) {
        uVar2 = 0xffffffff;
      }
      else if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 0xc) & 0xf | 0xe0;
        param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        param_1[2] = bVar4 & 0x3f | 0x80;
        return 3;
      }
    }
    else if (param_3 < 0x200000) {
      uVar2 = 4;
      if (iVar3 < 4) {
        uVar2 = 0xffffffff;
      }
      else if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 0x12) & 7 | 0xf0;
        param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        param_1[3] = bVar4 & 0x3f | 0x80;
        return 4;
      }
    }
    else {
      bVar1 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x4000000) {
        uVar2 = 5;
        if (iVar3 < 5) {
          uVar2 = 0xffffffff;
        }
        else if (param_1 != (byte *)0x0) {
          *param_1 = bVar1 & 3 | 0xf8;
          param_1[1] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[3] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[4] = bVar4 & 0x3f | 0x80;
          return 5;
        }
      }
      else {
        uVar2 = 6;
        if (iVar3 < 6) {
          uVar2 = 0xffffffff;
        }
        else if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 0x1e) & 1 | 0xfc;
          param_1[1] = bVar1 & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
          param_1[3] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[4] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[5] = bVar4 & 0x3f | 0x80;
          uVar2 = 6;
        }
      }
    }
  }
  return uVar2;
}

