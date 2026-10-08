
int FUN_100bac820(long *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 != '\0') {
    bVar14 = *param_2 == '-';
    if (bVar14) {
      param_2 = param_2 + 1;
    }
    lVar6 = -1;
    do {
      lVar12 = lVar6;
      lVar6 = lVar12 + 1;
    } while ((PTR___DefaultRuneLocale_1021e1278[(ulong)(byte)param_2[lVar12 + 1] * 4 + 0x3e] & 1) !=
             0);
    uVar3 = (uint)(lVar12 + 1);
    if (param_1 == (long *)0x0) {
      return uVar3 + bVar14;
    }
    plVar5 = (long *)*param_1;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      *(undefined4 *)((long)plVar5 + 0x14) = 1;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5[1] = 0;
      *plVar5 = 0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
    }
    if (((int)(((uint)((int)(uVar3 * 4 + 0x3f) >> 0x1f) >> 0x1a) + 0x3f + uVar3 * 4) >> 6 <=
         *(int *)((long)plVar5 + 0xc)) || (lVar6 = FUN_100bac510(plVar5), lVar6 != 0)) {
      if ((int)uVar3 < 1) {
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      else {
        uVar4 = ~uVar3;
        uVar7 = 0xffffffef;
        if (-0x12 < (int)uVar4) {
          uVar7 = uVar4;
        }
        param_2 = param_2 + (int)uVar3;
        lVar13 = 0;
        lVar6 = (long)(int)uVar3;
        do {
          lVar11 = (long)(int)~uVar4;
          if ((int)uVar4 < -0x10) {
            lVar11 = 0x10;
          }
          pcVar9 = param_2 + -lVar11;
          lVar11 = lVar11 + 1;
          uVar10 = 0;
          do {
            cVar1 = *pcVar9;
            iVar8 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar8 = iVar8 + -0x30;
            }
            else if ((byte)(cVar1 + 0x9fU) < 6) {
              iVar8 = iVar8 + -0x57;
            }
            else {
              iVar8 = iVar8 + -0x37;
              if (5 < (byte)(cVar1 + 0xbfU)) {
                iVar8 = 0;
              }
            }
            uVar10 = (long)iVar8 | uVar10 << 4;
            lVar11 = lVar11 + -1;
            pcVar9 = pcVar9 + 1;
          } while (1 < lVar11);
          *(ulong *)(*plVar5 + lVar13 * 8) = uVar10;
          lVar13 = lVar13 + 1;
          uVar4 = uVar4 + 0x10;
          param_2 = param_2 + -0x10;
          bVar2 = 0x10 < lVar6;
          lVar6 = lVar6 + -0x10;
        } while (bVar2);
        *(uint *)(plVar5 + 1) = ((int)lVar12 + 0x11 + uVar7 >> 4) + 1;
        uVar7 = 0xffffffef;
        if (-0x12 < (int)~uVar3) {
          uVar7 = ~uVar3;
        }
        uVar10 = (ulong)(uVar7 + 0x10 + uVar3 >> 4);
        do {
          if (*(long *)(*plVar5 + uVar10 * 8) != 0) break;
          *(int *)(plVar5 + 1) = (int)uVar10;
          uVar10 = uVar10 - 1;
        } while (1 < (int)uVar10 + 2);
      }
      *(uint *)(plVar5 + 2) = (uint)bVar14;
      *param_1 = (long)plVar5;
      return uVar3 + bVar14;
    }
    if (*param_1 == 0) {
      if ((*plVar5 != 0) && ((*(byte *)((long)plVar5 + 0x14) & 2) == 0)) {
        FUN_100bf3910();
      }
      if ((*(byte *)((long)plVar5 + 0x14) & 1) == 0) {
        *plVar5 = 0;
      }
      else {
        FUN_100bf3910(plVar5);
      }
    }
  }
  return 0;
}

