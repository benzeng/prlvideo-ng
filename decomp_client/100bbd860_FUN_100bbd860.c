
long FUN_100bbd860(long *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar12 = 0;
  if ((int)param_2 - 1U < 7) {
    cVar3 = '\x01';
    uVar7 = 1 << ((byte)param_2 & 0x1f);
    if ((int)param_1[2] != 0) {
      cVar3 = -1;
    }
    iVar10 = (int)param_1[1];
    iVar4 = 0;
    if ((long)iVar10 != 0) {
      iVar4 = FUN_100bac6c0(*(undefined8 *)(*param_1 + -8 + (long)iVar10 * 8));
      iVar4 = iVar4 + (iVar10 + -1) * 0x40;
    }
    lVar5 = FUN_100bf3540(iVar4 + 1,"../src/snlic/sn_crypto_helper_03.c",0xd4);
    lVar12 = 0;
    if (((lVar5 != 0) && (lVar12 = lVar5, (uint *)*param_1 != (uint *)0x0)) &&
       ((int)param_1[1] != 0)) {
      uVar2 = uVar7 * 2 - 1;
      uVar13 = (ulong)iVar4;
      uVar8 = *(uint *)*param_1 & uVar2;
      lVar14 = (long)(int)param_2 + 1;
      uVar9 = 0;
      do {
        if (uVar8 == 0) {
          uVar6 = 0;
          uVar11 = 0;
          if (uVar13 <= lVar14 + uVar9) {
            if (uVar9 <= uVar13 + 1) {
              *param_3 = uVar9;
              return lVar5;
            }
            break;
          }
        }
        else {
          uVar6 = 0;
          uVar11 = uVar8;
          if ((uVar8 & 1) != 0) {
            uVar6 = uVar8;
            if ((uVar7 & uVar8) != 0) {
              uVar6 = uVar8 & (int)uVar2 >> 1;
              if (lVar14 + uVar9 < uVar13) {
                uVar6 = uVar8 + uVar7 * -2;
              }
            }
            if (((((int)uVar7 <= (int)uVar6) || ((int)uVar6 <= (int)-uVar7)) || ((uVar6 & 1) == 0))
               || (((uVar11 = uVar8 - uVar6, uVar11 != uVar7 && (uVar8 != uVar6)) &&
                   (uVar11 != uVar7 * 2)))) break;
          }
        }
        *(char *)(lVar5 + uVar9) = (char)uVar6 * cVar3;
        uVar1 = (param_2 & 0xffffffff) + 1 + uVar9;
        iVar10 = (int)uVar1;
        uVar8 = 0;
        if ((-1 < iVar10) &&
           (iVar10 = (int)(((uint)(iVar10 >> 0x1f) >> 0x1a) + iVar10) >> 6, uVar8 = 0,
           iVar10 < (int)param_1[1])) {
          uVar8 = -(uint)((*(ulong *)(*param_1 + (long)iVar10 * 8) >> (uVar1 & 0x3f) & 1) != 0) & 1;
        }
        uVar9 = uVar9 + 1;
        uVar8 = (uVar8 << ((byte)(param_2 & 0xffffffff) & 0x1f)) + ((int)uVar11 >> 1);
      } while ((int)uVar8 <= (int)(uVar7 * 2));
    }
  }
  FUN_100bf3910(lVar12);
  return 0;
}

