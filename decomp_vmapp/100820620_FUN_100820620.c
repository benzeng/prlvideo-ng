
undefined4 FUN_100820620(int *param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  
  param_2 = param_2 + (int)(param_3 / 0x15180);
  iVar11 = param_1[1] * 0x3c + param_1[2] * 0xe10 + *param_1 +
           ((int)param_3 - (int)((ulong)((param_3 / 0x15180) * 0x1518000000000) >> 0x20));
  if (iVar11 < 0x15180) {
    if (iVar11 < 0) {
      param_2 = param_2 + -1;
      iVar11 = iVar11 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar11 = iVar11 + -0x15180;
  }
  iVar2 = (param_1[4] + -0xd) / 0xc;
  iVar6 = (param_1[5] + iVar2) * 0x5b5;
  iVar3 = ((param_1[5] + 0x1a90 + iVar2) / 100) * 3;
  uVar10 = 0;
  lVar9 = (long)param_2 +
          (long)(((((int)(iVar6 + 0x955d1c + ((uint)(iVar6 + 0x955d1c >> 0x1f) >> 0x1e)) >> 2) +
                   param_1[3] + ((iVar2 * -0xc + param_1[4]) * 0x16f + -0x16f) / 0xc) -
                 ((int)(((uint)(iVar3 >> 0x1f) >> 0x1e) + iVar3) >> 2)) + -0x7d4b);
  if (-1 < lVar9) {
    lVar4 = (lVar9 * 4 + 0x42f64) / 0x23ab1;
    lVar7 = lVar4 * 0x23ab1;
    lVar7 = (lVar9 + 0x10bd9) - ((long)(lVar7 + 3 + ((ulong)(lVar7 + 3 >> 0x3f) >> 0x3e)) >> 2);
    lVar5 = (lVar7 * 4000 + 4000) / 0x164b09;
    lVar9 = lVar5 * 0x5b5;
    lVar9 = (lVar7 + 0x1f) - ((long)(((ulong)(lVar9 >> 0x3f) >> 0x3e) + lVar9) >> 2);
    lVar7 = lVar9 * 0x50;
    iVar2 = (int)(lVar7 / 0x6925);
    uVar8 = iVar2 + -0x1a90 + (int)lVar5 + (int)lVar4 * 100;
    if (uVar8 < 0x1fa4) {
      lVar7 = lVar7 / 0x98f - lVar7 / -0x6710000000000000;
      auVar1 = SEXT816(lVar7 * 0x98f) * SEXT816(0x6666666666666667);
      param_1[5] = uVar8;
      param_1[4] = (int)lVar7 + 1 + iVar2 * -0xc;
      param_1[3] = (int)lVar9 - ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f));
      param_1[2] = iVar11 / 0xe10;
      param_1[1] = (iVar11 / 0x3c) % 0x3c;
      *param_1 = iVar11 % 0x3c;
      uVar10 = 1;
    }
  }
  return uVar10;
}

