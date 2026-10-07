
undefined8
FUN_1008a0960(ulong *param_1,byte *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if ((int)param_3 < 9) {
    if ((param_3 == 0) || (bVar1 = true, -1 < (char)*param_2)) {
      bVar1 = false;
    }
    uVar3 = 0;
    if (0 < (int)param_3) {
      lVar2 = 0;
      if (bVar1) {
        bVar6 = (param_3 & 1) != 0;
        uVar3 = 0;
        if (bVar6) {
          uVar3 = (ulong)*param_2 ^ 0xff;
        }
        if (param_3 != 1) {
          param_2 = param_2 + (ulong)bVar6 + 1;
          iVar4 = (param_3 + 1) - (bVar6 + 1);
          do {
            uVar3 = ((ulong)*param_2 | (((ulong)param_2[-1] | uVar3 << 8) ^ 0xff) << 8) ^ 0xff;
            param_2 = param_2 + 2;
            iVar4 = iVar4 + -2;
          } while (iVar4 != 0);
        }
      }
      else {
        uVar3 = 0;
        if ((param_3 & 3) != 0) {
          lVar2 = 0;
          uVar3 = 0;
          do {
            uVar3 = uVar3 << 8 | (ulong)param_2[lVar2];
            lVar2 = lVar2 + 1;
          } while ((param_3 & 3) != (uint)lVar2);
        }
        if (2 < param_3 - 1) {
          param_2 = param_2 + lVar2 + 3;
          iVar4 = (param_3 + 3) - ((int)lVar2 + 3);
          do {
            uVar3 = (ulong)*param_2 |
                    ((ulong)param_2[-1] |
                    ((ulong)param_2[-2] | ((ulong)param_2[-3] | uVar3 << 8) << 8) << 8) << 8;
            param_2 = param_2 + 4;
            iVar4 = iVar4 + -4;
          } while (iVar4 != 0);
        }
      }
    }
    uVar3 = (long)((int)((uint)bVar1 << 0x1f) >> 0x1f) ^ uVar3;
    if (uVar3 != *(ulong *)(param_6 + 0x28)) {
      *param_1 = uVar3;
      return 1;
    }
    uVar5 = 0xb9;
  }
  else {
    uVar5 = 0xa3;
  }
  FUN_100887ce0(0xd,0xa6,0x80,"x_long.c",uVar5);
  return 0;
}

