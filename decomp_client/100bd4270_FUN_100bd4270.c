
uint FUN_100bd4270(int *param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *local_38;
  
  uVar13 = param_4 + 1;
  if ((*param_1 < 0x302) && (*param_1 != 0x100)) {
    param_3 = param_2[1];
    if (param_3 < uVar13) {
      return 0;
    }
    lVar5 = *(long *)(param_2 + 4);
  }
  else {
    if (param_2[1] < uVar13 + param_3) {
      return 0;
    }
    lVar5 = *(long *)(param_2 + 4) + (ulong)param_3;
    *(long *)(param_2 + 4) = lVar5;
    *(ulong *)(param_2 + 6) = *(long *)(param_2 + 6) + (ulong)param_3;
    param_3 = param_2[1] - param_3;
    param_2[1] = param_3;
  }
  local_38 = param_2 + 4;
  bVar1 = *(byte *)(lVar5 + (ulong)(param_3 - 1));
  uVar14 = (uint)bVar1;
  if (((*(byte *)((long)param_1 + 0x1a9) & 2) != 0) && (*(long *)(param_1 + 0x38) == 0)) {
    iVar3 = FUN_100bf2f90(*(long *)(param_1 + 0x20) + 0xc,L"",8);
    uVar7 = **(ulong **)(param_1 + 0x20);
    if ((bVar1 & 1) == 0 && iVar3 == 0) {
      uVar7 = uVar7 | 8;
      **(ulong **)(param_1 + 0x20) = uVar7;
    }
    uVar14 = (uint)bVar1 - (uint)(bVar1 != 0 & (byte)(((uint)uVar7 & 8) >> 3));
  }
  uVar7 = FUN_100c6fbb0(**(undefined8 **)(param_1 + 0x34));
  uVar2 = param_2[1];
  if ((uVar7 & 0x200000) == 0) {
    uVar13 = uVar13 + uVar14;
    uVar13 = ~((int)((uVar2 - uVar13 ^ uVar13 | uVar2 ^ uVar13) ^ uVar2) >> 0x1f);
    if (uVar2 != 1) {
      lVar5 = *(long *)local_38;
      uVar11 = uVar2 - 1;
      uVar9 = 0xff;
      if (0xff < uVar11) {
        uVar9 = uVar11;
      }
      uVar7 = (ulong)((uVar2 + 0xfd) - uVar9) + 1;
      uVar12 = 0;
      uVar10 = uVar7 & 0x1fffffffe;
      uVar9 = 0xffffffff;
      if (uVar10 == 0) {
        uVar10 = 0;
      }
      else {
        uVar12 = 0xff;
        if (0xff < uVar11) {
          uVar12 = uVar11;
        }
        uVar9 = 0xffffffff;
        uVar8 = 0;
        uVar4 = uVar14;
        do {
          uVar6 = (uint)uVar8;
          uVar13 = ~((*(byte *)(lVar5 + (ulong)uVar11) ^ uVar14) &
                    ~((int)((uVar4 ^ uVar6 | uVar6 ^ uVar14) ^ uVar14) >> 0x1f)) & uVar13;
          uVar9 = ~((*(byte *)(lVar5 + (ulong)((uVar6 ^ 0xfffffffe) + uVar2)) ^ uVar14) &
                   ~((int)((uVar4 - 1 ^ uVar6 | uVar6 ^ uVar14) ^ uVar14) >> 0x1f)) & uVar9;
          uVar8 = uVar8 + 2;
          uVar11 = uVar11 - 2;
          uVar4 = uVar4 - 2;
        } while (((ulong)((uVar2 + 0xfd) - uVar12) + 1 & 0xfffffffffffffffe) != uVar8);
        uVar12 = (uint)uVar7 & 0xfffffffe;
      }
      uVar13 = uVar13 & uVar9;
      if (uVar7 != uVar10) {
        uVar11 = uVar2 - 1;
        uVar9 = 0xff;
        if (0xff < uVar11) {
          uVar9 = uVar11;
        }
        uVar4 = uVar14 - (int)uVar10;
        iVar3 = (int)uVar10 + -0xfe;
        uVar11 = uVar11 - uVar12;
        do {
          uVar13 = uVar13 & ~((*(byte *)(lVar5 + (ulong)uVar11) ^ uVar14) &
                             ~((int)((iVar3 + 0xfeU ^ uVar14 | uVar4 ^ iVar3 + 0xfeU) ^ uVar14) >>
                              0x1f));
          iVar3 = iVar3 + 1;
          uVar4 = uVar4 - 1;
          uVar11 = uVar11 - 1;
        } while (uVar2 - uVar9 != iVar3);
      }
    }
    uVar13 = (int)(0xfe - (uVar13 & 0xff)) >> 0x1f;
    uVar14 = uVar14 + 1 & uVar13;
    param_2[1] = uVar2 - uVar14;
    *param_2 = *param_2 | uVar14 << 8;
    uVar13 = (uVar13 | 1) ^ 0xfffffffe;
  }
  else {
    param_2[1] = uVar2 + ~uVar14;
    uVar13 = 1;
  }
  return uVar13;
}

