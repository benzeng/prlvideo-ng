
undefined8 FUN_100c7c7d0(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  __darwin_ct_rune_t _Var8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  long local_68;
  int local_5c;
  long local_40;
  undefined8 local_38;
  
  if (param_1[3] != 0) {
    FUN_100bf3910();
    param_1[3] = 0;
  }
  iVar6 = FUN_100c60800(*param_1);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar12 = 1;
  }
  else {
    lVar9 = FUN_100c60010();
    uVar12 = 0;
    if (lVar9 != 0) {
      iVar6 = FUN_100c60800(*param_1);
      iVar14 = 0;
      if (0 < iVar6) {
        local_5c = -1;
        local_68 = 0;
        do {
          puVar10 = (undefined8 *)FUN_100c60820(*param_1,iVar14);
          if (*(int *)(puVar10 + 2) != local_5c) {
            local_68 = FUN_100c60010();
            uVar12 = 0;
            if (local_68 == 0) {
LAB_100c7cc31:
              uVar12 = 0;
            }
            else {
              iVar6 = FUN_100c604e0(lVar9,local_68);
              if (iVar6 != 0) {
                local_5c = *(int *)(puVar10 + 2);
                goto LAB_100c7c89e;
              }
            }
            goto LAB_100c7cc35;
          }
LAB_100c7c89e:
          puVar11 = (undefined8 *)FUN_100c7fb90(&DAT_102251ba0);
          if (puVar11 == (undefined8 *)0x0) goto LAB_100c7cc31;
          uVar12 = FUN_100bf8640(*puVar10);
          *puVar11 = uVar12;
          piVar3 = (int *)puVar11[1];
          lVar4 = puVar10[1];
          uVar13 = FUN_100c81470(*(undefined4 *)(lVar4 + 4));
          if ((uVar13 & 0x2956) == 0) {
            iVar6 = FUN_100c8b060(piVar3,lVar4);
            if (iVar6 != 0) goto LAB_100c7cadb;
LAB_100c7cc1f:
            FUN_100c801c0(puVar11,&DAT_102251ba0);
            goto LAB_100c7cc31;
          }
          piVar3[1] = 0xc;
          piVar1 = piVar3 + 2;
          iVar6 = FUN_100c7a8b0(piVar1,lVar4);
          *piVar3 = iVar6;
          if (iVar6 == -1) goto LAB_100c7cc1f;
          if (iVar6 < 1) {
LAB_100c7c9e0:
            pbVar18 = *(byte **)piVar1;
            iVar6 = (int)pbVar18;
          }
          else {
            pbVar15 = *(byte **)piVar1;
            do {
              bVar2 = *pbVar15;
              iVar16 = iVar6;
              if ((bVar2 & 0x80) != 0) break;
              if ((char)bVar2 < '\0') {
                uVar7 = ___maskrune((uint)bVar2,0x4000);
              }
              else {
                uVar7 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar2 * 4 + 0x3c) &
                        0x4000;
              }
              if (uVar7 == 0) break;
              pbVar15 = pbVar15 + 1;
              iVar16 = iVar6 + -1;
              bVar5 = 1 < iVar6;
              iVar6 = iVar16;
            } while (bVar5);
            if (iVar16 < 1) goto LAB_100c7c9e0;
            pbVar18 = pbVar15 + (long)iVar16 + -1;
            do {
              bVar2 = *pbVar18;
              iVar17 = iVar16;
              if ((bVar2 & 0x80) != 0) break;
              if ((char)bVar2 < '\0') {
                uVar7 = ___maskrune((uint)bVar2,0x4000);
              }
              else {
                uVar7 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar2 * 4 + 0x3c) &
                        0x4000;
              }
              if (uVar7 == 0) break;
              pbVar18 = pbVar18 + -1;
              iVar17 = iVar16 + -1;
              bVar5 = 1 < iVar16;
              iVar16 = iVar17;
            } while (bVar5);
            pbVar18 = *(byte **)piVar1;
            iVar16 = 0;
            iVar6 = (int)pbVar18;
            if (0 < iVar17) {
              do {
                bVar2 = *pbVar15;
                if ((bVar2 & 0x80) == 0) {
                  if ((char)bVar2 < '\0') {
                    uVar7 = ___maskrune((uint)bVar2,0x4000);
                  }
                  else {
                    uVar7 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar2 * 4 + 0x3c) &
                            0x4000;
                  }
                  if (uVar7 == 0) {
                    _Var8 = ___tolower((uint)*pbVar15);
                    *pbVar18 = (byte)_Var8;
                    goto LAB_100c7cab7;
                  }
                  *pbVar18 = 0x20;
                  do {
                    iVar16 = iVar16 + 1;
                    pbVar15 = pbVar15 + 1;
                    bVar2 = *pbVar15;
                    if ((bVar2 & 0x80) != 0) break;
                    if ((char)bVar2 < '\0') {
                      uVar7 = ___maskrune((uint)bVar2,0x4000);
                    }
                    else {
                      uVar7 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar2 * 4 + 0x3c)
                              & 0x4000;
                    }
                  } while (uVar7 != 0);
                }
                else {
                  *pbVar18 = bVar2;
LAB_100c7cab7:
                  pbVar15 = pbVar15 + 1;
                  iVar16 = iVar16 + 1;
                }
                pbVar18 = pbVar18 + 1;
              } while (iVar16 < iVar17);
              iVar6 = (int)*(undefined8 *)piVar1;
            }
          }
          *piVar3 = (int)pbVar18 - iVar6;
LAB_100c7cadb:
          iVar6 = FUN_100c604e0(local_68,puVar11);
          if (iVar6 == 0) goto LAB_100c7cc1f;
          iVar14 = iVar14 + 1;
          iVar6 = FUN_100c60800(*param_1);
        } while (iVar14 < iVar6);
      }
      iVar14 = FUN_100c60800(lVar9);
      iVar6 = 0;
      if (0 < iVar14) {
        iVar16 = 0;
        iVar14 = 0;
        do {
          local_38 = FUN_100c60820(lVar9,iVar16);
          iVar6 = FUN_100c80910(&local_38,0,&DAT_102251c00,0xffffffff,0xffffffff);
          if (iVar6 < 0) break;
          iVar14 = iVar6 + iVar14;
          iVar16 = iVar16 + 1;
          iVar17 = FUN_100c60800(lVar9);
          iVar6 = iVar14;
        } while (iVar16 < iVar17);
      }
      *(int *)(param_1 + 4) = iVar6;
      local_40 = FUN_100bf3540(iVar6,"x_name.c",0x17f);
      uVar12 = 0;
      if (local_40 != 0) {
        param_1[3] = local_40;
        iVar6 = FUN_100c60800(lVar9);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            local_38 = FUN_100c60820(lVar9,iVar6);
            iVar14 = FUN_100c80910(&local_38,&local_40,&DAT_102251c00,0xffffffff,0xffffffff);
            if (iVar14 < 0) break;
            iVar6 = iVar6 + 1;
            iVar14 = FUN_100c60800(lVar9);
          } while (iVar6 < iVar14);
        }
        uVar12 = 1;
      }
LAB_100c7cc35:
      FUN_100c60790(lVar9,FUN_100c7cc60);
    }
  }
  return uVar12;
}

