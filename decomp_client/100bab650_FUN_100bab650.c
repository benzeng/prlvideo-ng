
undefined8 FUN_100bab650(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  puVar7 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
  if (puVar7 == (undefined8 *)0x0) {
    return 0;
  }
  *(undefined4 *)(puVar7 + 7) = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar8 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
  if (plVar8 == (long *)0x0) {
    FUN_100ba8db0(puVar7);
    return 0;
  }
  *(undefined4 *)((long)plVar8 + 0x14) = 1;
  *(undefined4 *)(plVar8 + 2) = 0;
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar4 = *(long **)(param_1 + 8);
  plVar9 = (long *)0x0;
  uVar15 = 0;
  if (plVar4 == (long *)0x0) {
LAB_100bab822:
    FUN_100ba8db0(puVar7);
    if (plVar8 == (long *)0x0) goto LAB_100bab85e;
  }
  else {
    plVar9 = (long *)0x0;
    uVar15 = 0;
    if (*(long *)(*plVar4 + 0x48) == 0) goto LAB_100bab822;
    plVar9 = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe);
    uVar15 = 0;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto LAB_100bab822;
    }
    lVar10 = *plVar4;
    *plVar9 = lVar10;
    iVar6 = (**(code **)(lVar10 + 0x48))(plVar9);
    if (iVar6 == 0) {
      FUN_100bf3910(plVar9);
      plVar9 = (long *)0x0;
      goto LAB_100bab7c5;
    }
    lVar10 = **(long **)(param_1 + 8);
    pcVar5 = *(code **)(lVar10 + 200);
    if ((((pcVar5 == (code *)0x0) || (lVar10 != **(long **)(param_1 + 0x10))) ||
        (iVar6 = (*pcVar5)(*(long **)(param_1 + 8),*(long **)(param_1 + 0x10),puVar7), iVar6 == 0))
       || (lVar10 = FUN_100bac3a0(plVar8,*(long *)(param_1 + 8) + 0x10), lVar10 == 0))
    goto LAB_100bab822;
    if ((int)plVar8[1] != 0) {
      pcVar5 = *(code **)(*plVar9 + 0x60);
      if ((pcVar5 != (code *)0x0) && (*plVar9 == **(long **)(param_1 + 0x10))) {
        if ((plVar9 != *(long **)(param_1 + 0x10)) && (iVar6 = (*pcVar5)(plVar9), iVar6 == 0))
        goto LAB_100bab822;
        iVar6 = FUN_100bbdde0(*(undefined8 *)(param_1 + 8),plVar9,plVar8,0);
        if (iVar6 != 0) {
          lVar10 = **(long **)(param_1 + 8);
          pcVar5 = *(code **)(lVar10 + 0xc0);
          if (((pcVar5 != (code *)0x0) && (lVar10 == *plVar9)) &&
             (iVar6 = (*pcVar5)(*(long **)(param_1 + 8),plVar9), iVar6 != 0)) {
            plVar4 = *(long **)(param_1 + 0x18);
            uVar15 = 1;
            if (plVar4 != (long *)0x0) {
              iVar6 = (int)plVar4[2];
              uVar13 = ~-(uint)(iVar6 == 0) | 1;
              uVar14 = uVar13;
              if (iVar6 == (int)plVar8[2]) {
                iVar3 = (int)plVar4[1];
                lVar10 = (long)iVar3;
                if ((iVar3 <= (int)plVar8[1]) &&
                   (uVar12 = -(uint)(iVar6 == 0) | 1, uVar14 = uVar12, (int)plVar8[1] <= iVar3)) {
                  lVar11 = (long)(iVar3 + -1) << 3;
                  do {
                    if (lVar10 < 1) goto LAB_100bab9ea;
                    puVar1 = (ulong *)(*plVar4 + lVar11);
                    puVar2 = (ulong *)(*plVar8 + lVar11);
                    uVar14 = uVar13;
                    if (*puVar2 < *puVar1) break;
                    lVar10 = lVar10 + -1;
                    lVar11 = lVar11 + -8;
                    uVar14 = uVar12;
                  } while (*puVar2 <= *puVar1);
                }
              }
              if (((int)uVar14 < 0) &&
                 (iVar6 = FUN_100bbdde0(*(undefined8 *)(param_1 + 8),plVar9,plVar4,0,0,puVar7),
                 iVar6 != 0)) {
                lVar10 = **(long **)(param_1 + 8);
                if ((*(code **)(lVar10 + 0xd0) == (code *)0x0) ||
                   (((lVar10 != *plVar9 || (lVar10 != **(long **)(param_1 + 0x10))) ||
                    (iVar6 = (**(code **)(lVar10 + 0xd0))
                                       (*(long **)(param_1 + 8),plVar9,*(long **)(param_1 + 0x10),
                                        puVar7), iVar6 == 0)))) goto LAB_100bab822;
              }
LAB_100bab7c5:
              uVar15 = 0;
            }
            goto LAB_100bab822;
          }
        }
LAB_100bab9ea:
        uVar15 = 0;
        goto LAB_100bab822;
      }
    }
    FUN_100ba8db0(puVar7);
    uVar15 = 0;
  }
  if ((*plVar8 != 0) && ((*(byte *)((long)plVar8 + 0x14) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)((long)plVar8 + 0x14) & 1) == 0) {
    *plVar8 = 0;
  }
  else {
    FUN_100bf3910(plVar8);
  }
LAB_100bab85e:
  if (plVar9 != (long *)0x0) {
    if (*(code **)(*plVar9 + 0x50) != (code *)0x0) {
      (**(code **)(*plVar9 + 0x50))();
    }
    FUN_100bf3910(plVar9);
  }
  return uVar15;
}

