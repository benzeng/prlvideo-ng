
void FUN_100ab4fb0(ulong *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                  int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  uVar7 = *param_1;
  uVar3 = -uVar7;
  if (0 < (long)uVar7) {
    uVar3 = uVar7;
  }
  lVar10 = 0x253d8c;
  if (86399999 < (long)uVar3) {
    lVar4 = -((long)uVar7 >> 0x3f);
    lVar5 = (long)uVar7 / 86400000 + ((long)uVar7 >> 0x3f);
    lVar10 = lVar5 + 0x253d8c + lVar4;
    uVar7 = uVar7 + (lVar5 + lVar4) * -86400000;
  }
  if ((long)uVar7 < 0) {
    iVar1 = 86399999 - (int)uVar7;
    lVar10 = lVar10 - iVar1 / 86400000;
    uVar7 = (ulong)(86399999 - iVar1 % 86400000);
  }
  iVar1 = (int)uVar7;
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1 / 3600000;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (iVar1 % 3600000) / 60000;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (iVar1 / 1000) % 0x3c;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = iVar1 % 1000;
  }
  if (((param_2 != (int *)0x0) || (param_3 != (int *)0x0)) || (param_4 != (int *)0x0)) {
    lVar5 = (lVar10 * 4 + 0x1f4b3) - (lVar10 + 0x7d2c >> 0x3d & 0x23ab0U);
    lVar4 = lVar5 / 0x23ab1;
    lVar5 = lVar4 * 0x23ab1 + (ulong)(lVar5 < -0x23ab0) * -3;
    iVar9 = (int)(lVar10 + 0x7d2c) - (int)(((ulong)(lVar5 >> 0x3f) >> 0x3e) + lVar5 >> 2);
    iVar2 = (iVar9 * 4 + 3) - (iVar9 >> 0x1d & 0x5b4U);
    iVar1 = (iVar2 / 0x5b5) * 0x5b5 - ((uint)(iVar2 < -0x5b4) + (uint)(iVar2 < -0x5b4) * 2);
    iVar9 = iVar9 - ((int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2);
    iVar1 = iVar9 * 5;
    iVar6 = -0x98;
    if (-3 < iVar1) {
      iVar6 = 0;
    }
    iVar8 = iVar6 + 2 + iVar1;
    iVar1 = (int)((ulong)((long)iVar8 * -0x29d47f29) >> 0x20) + 2 + iVar1 + iVar6;
    iVar1 = (iVar1 >> 7) - (iVar1 >> 0x1f);
    if (param_4 != (int *)0x0) {
      iVar6 = 0;
      if (iVar1 * 0x99 < -2) {
        iVar6 = -4;
      }
      iVar6 = (int)((ulong)((long)(iVar1 * 0x99 + 2 + iVar6) * -0x66666667) >> 0x20);
      *param_4 = iVar9 + 1 + ((iVar6 >> 1) - (iVar6 >> 0x1f));
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1 + 3 +
                 ((int)(iVar1 - ((uint)(iVar8 < -0x98) + (uint)(iVar8 < -0x98) * 8)) / 10) * -0xc;
    }
    if (param_2 != (int *)0x0) {
      iVar1 = (int)lVar4 * 100 + -0x12c0 + iVar2 / 0x5b5 +
              (int)(iVar1 - ((uint)(iVar8 < -0x98) + (uint)(iVar8 < -0x98) * 8)) / 10;
      *param_2 = iVar1;
      if (iVar1 < 1) {
        *param_2 = iVar1 + -1;
      }
    }
  }
  return;
}

