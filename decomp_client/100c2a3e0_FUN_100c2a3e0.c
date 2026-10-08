
int FUN_100c2a3e0(long *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  bVar13 = *param_2 == '-';
  if (bVar13) {
    param_2 = param_2 + 1;
  }
  plVar6 = (long *)0x0;
  lVar7 = 1;
  while ((PTR___DefaultRuneLocale_1021e1278[(ulong)(byte)param_2[lVar7 + -1] * 4 + 0x3e] & 1) != 0)
  {
    if ((PTR___DefaultRuneLocale_1021e1278[(ulong)(byte)param_2[lVar7] * 4 + 0x3e] & 1) == 0)
    goto LAB_100c2a474;
    lVar12 = lVar7 + 1;
    lVar7 = lVar7 + 2;
    if (0x1fffffff < lVar12) {
LAB_100c2a62e:
      if (*param_1 == 0) {
        FUN_100c266b0(plVar6);
        return 0;
      }
      return 0;
    }
  }
  lVar7 = lVar7 + -1;
LAB_100c2a474:
  uVar3 = (uint)lVar7;
  if (param_1 == (long *)0x0) {
    return uVar3 + bVar13;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)FUN_100c26720();
    if (plVar6 == (long *)0x0) {
      return 0;
    }
  }
  else {
    FUN_100c26db0(plVar6,0);
  }
  iVar4 = uVar3 * 4;
  if ((0x7fffffc0 < iVar4) ||
     ((*(int *)((long)plVar6 + 0xc) <
       (int)(iVar4 + 0x3f + ((uint)(iVar4 + 0x3f >> 0x1f) >> 0x1a)) >> 6 &&
      (lVar7 = FUN_100c26b00(plVar6), lVar7 == 0)))) goto LAB_100c2a62e;
  if ((int)uVar3 < 1) {
    *(undefined4 *)(plVar6 + 1) = 0;
    goto LAB_100c2a651;
  }
  uVar5 = ~uVar3;
  uVar8 = 0xffffffef;
  if (-0x12 < (int)uVar5) {
    uVar8 = uVar5;
  }
  param_2 = param_2 + (int)uVar3;
  lVar12 = 0;
  lVar7 = (long)(int)uVar3;
  do {
    lVar11 = (long)(int)~uVar5;
    if ((int)uVar5 < -0x10) {
      lVar11 = 0x10;
    }
    pcVar9 = param_2 + -lVar11;
    lVar11 = lVar11 + 1;
    uVar10 = 0;
    do {
      cVar1 = *pcVar9;
      iVar4 = (int)cVar1;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar4 = iVar4 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar4 = iVar4 + -0x57;
      }
      else {
        iVar4 = iVar4 + -0x37;
        if (5 < (byte)(cVar1 + 0xbfU)) {
          iVar4 = 0;
        }
      }
      uVar10 = (long)iVar4 | uVar10 << 4;
      lVar11 = lVar11 + -1;
      pcVar9 = pcVar9 + 1;
    } while (1 < lVar11);
    *(ulong *)(*plVar6 + lVar12 * 8) = uVar10;
    lVar12 = lVar12 + 1;
    uVar5 = uVar5 + 0x10;
    param_2 = param_2 + -0x10;
    bVar2 = 0x10 < lVar7;
    lVar7 = lVar7 + -0x10;
  } while (bVar2);
  *(uint *)(plVar6 + 1) = (uVar3 + 0x10 + uVar8 >> 4) + 1;
  uVar8 = 0xffffffef;
  if (-0x12 < (int)~uVar3) {
    uVar8 = ~uVar3;
  }
  uVar10 = (ulong)(uVar8 + 0x10 + uVar3 >> 4);
  do {
    if (*(long *)(*plVar6 + uVar10 * 8) != 0) break;
    uVar10 = uVar10 - 1;
  } while (1 < (int)uVar10 + 2);
  *(int *)(plVar6 + 1) = (int)uVar10 + 1;
LAB_100c2a651:
  *(uint *)(plVar6 + 2) = (uint)bVar13;
  *param_1 = (long)plVar6;
  return uVar3 + bVar13;
}

