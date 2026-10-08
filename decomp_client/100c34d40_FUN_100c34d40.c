
bool FUN_100c34d40(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  bool bVar26;
  ulong *local_90;
  ulong *local_88;
  long *local_80;
  undefined8 *local_70;
  int local_64;
  undefined8 *local_50;
  long *local_48;
  
  FUN_100c27c60(param_4);
  local_80 = (long *)FUN_100c27e20(param_4);
  bVar26 = false;
  if ((local_80 != (long *)0x0) &&
     (local_48 = (long *)FUN_100c27e20(param_4), local_48 != (long *)0x0)) {
    local_70 = (undefined8 *)FUN_100c27e20(param_4);
    if (local_70 == (undefined8 *)0x0) {
      bVar26 = false;
    }
    else {
      local_50 = (undefined8 *)FUN_100c27e20(param_4);
      if (local_50 == (undefined8 *)0x0) {
        bVar26 = false;
      }
      else {
        iVar5 = FUN_100c34420(local_70,param_2,param_3);
        if (iVar5 == 0) {
          bVar26 = false;
        }
        else if (*(int *)(local_70 + 1) == 0) {
          bVar26 = false;
        }
        else {
          lVar8 = FUN_100c26b50(local_50,param_3);
          if (lVar8 == 0) {
            bVar26 = false;
          }
          else {
            iVar6 = FUN_100c26610(local_70);
            local_64 = FUN_100c26610(local_50);
            iVar5 = (int)param_3[1];
            if ((*(int *)((long)local_70 + 0xc) < iVar5) &&
               (lVar8 = FUN_100c26b00(local_70,iVar5), lVar8 == 0)) {
              bVar26 = false;
            }
            else {
              puVar25 = (ulong *)*local_70;
              iVar12 = *(int *)(local_70 + 1);
              if (iVar12 < iVar5) {
                ___bzero(puVar25 + iVar12,(ulong)(uint)((iVar5 + -1) - iVar12) * 8 + 8);
              }
              *(int *)(local_70 + 1) = iVar5;
              if ((*(int *)((long)local_80 + 0xc) < iVar5) &&
                 (lVar8 = FUN_100c26b00(local_80,iVar5), lVar8 == 0)) {
                bVar26 = false;
              }
              else {
                puVar24 = (ulong *)*local_80;
                *puVar24 = 1;
                if (1 < iVar5) {
                  ___bzero(puVar24 + 1,(ulong)(iVar5 - 2) * 8 + 8);
                }
                *(int *)(local_80 + 1) = iVar5;
                if (*(int *)((long)local_48 + 0xc) < iVar5) {
                  lVar8 = FUN_100c26b00(local_48,iVar5);
                  bVar26 = false;
                  if (lVar8 == 0) goto LAB_100c35365;
                }
                local_88 = (ulong *)*local_48;
                if (iVar5 < 1) {
                  uVar11 = (ulong)(iVar5 - 1);
                }
                else {
                  uVar11 = (ulong)(iVar5 - 1);
                  ___bzero(local_88,uVar11 * 8 + 8);
                }
                *(int *)(local_48 + 1) = iVar5;
                local_90 = (ulong *)*local_50;
                iVar19 = (int)uVar11;
                iVar12 = 1;
                if (1 < iVar19) {
                  iVar12 = iVar19;
                }
                uVar1 = uVar11 + 1;
joined_r0x000100c34fd4:
                for (; puVar4 = local_70, plVar15 = local_80, iVar6 != 0; iVar6 = iVar6 + -1) {
                  uVar14 = *puVar25;
                  if ((uVar14 & 1) != 0) {
                    if (iVar6 < 0x41) goto LAB_100c35094;
                    goto LAB_100c350a9;
                  }
                  uVar21 = -(*puVar24 & 1);
                  puVar10 = (ulong *)*param_3;
                  uVar17 = *puVar10 & uVar21 ^ *puVar24;
                  if (iVar5 < 2) {
                    iVar20 = 0;
                  }
                  else {
                    lVar8 = 0;
                    uVar9 = uVar14;
                    uVar18 = uVar17;
                    do {
                      uVar14 = puVar25[lVar8 + 1];
                      puVar25[lVar8] = uVar9 >> 1 | uVar14 << 0x3f;
                      uVar17 = puVar10[lVar8 + 1] & uVar21 ^ puVar24[lVar8 + 1];
                      puVar24[lVar8] = uVar18 >> 1 | uVar17 << 0x3f;
                      lVar8 = lVar8 + 1;
                      uVar9 = uVar14;
                      uVar18 = uVar17;
                      iVar20 = iVar12;
                    } while (lVar8 < iVar19);
                  }
                  puVar25[iVar20] = uVar14 >> 1;
                  puVar24[iVar20] = uVar17 >> 1;
                }
                uVar14 = *puVar25;
                iVar6 = 0;
LAB_100c35094:
                bVar26 = false;
                if (uVar14 == 0) goto LAB_100c35365;
                if (uVar14 != 1) {
LAB_100c350a9:
                  iVar20 = local_64;
                  if (iVar6 < local_64) {
                    puVar10 = (ulong *)*local_70;
                    puVar22 = (ulong *)*local_80;
                    local_70 = local_50;
                    local_80 = local_48;
                    local_50 = puVar4;
                    local_48 = plVar15;
                    puVar24 = local_88;
                    puVar25 = local_90;
                    local_90 = puVar10;
                    local_88 = puVar22;
                    iVar20 = iVar6;
                    iVar6 = local_64;
                  }
                  local_64 = iVar20;
                  if (0 < iVar5) {
                    uVar14 = 0;
                    if ((uVar1 & 0x1fffffffc) != 0) {
                      puVar22 = puVar25 + uVar11;
                      puVar10 = puVar24 + uVar11;
                      if (((puVar10 < puVar25 || puVar22 < puVar24) &&
                          (local_90 + uVar11 < puVar25 || puVar22 < local_90)) &&
                         (local_88 + uVar11 < puVar25 || puVar22 < local_88)) {
                        if (local_90 + uVar11 < puVar24 || puVar10 < local_90) {
                          uVar14 = 0;
                          if (local_88 + uVar11 < puVar24 || puVar10 < local_88) {
                            puVar13 = puVar24 + 2;
                            puVar10 = local_88 + 2;
                            puVar22 = puVar25 + 2;
                            puVar23 = local_90 + 2;
                            uVar17 = uVar1 & 0xfffffffffffffffc;
                            do {
                              uVar16 = *(uint *)((long)puVar23 + -0xc);
                              uVar14 = puVar23[-1];
                              uVar7 = *(uint *)((long)puVar23 + -4);
                              uVar21 = *puVar23;
                              uVar2 = *(uint *)((long)puVar23 + 4);
                              uVar9 = puVar23[1];
                              uVar3 = *(uint *)((long)puVar23 + 0xc);
                              *(uint *)(puVar22 + -2) = (uint)puVar22[-2] ^ (uint)puVar23[-2];
                              *(uint *)((long)puVar22 + -0xc) =
                                   *(uint *)((long)puVar22 + -0xc) ^ uVar16;
                              *(uint *)(puVar22 + -1) = (uint)puVar22[-1] ^ (uint)uVar14;
                              *(uint *)((long)puVar22 + -4) = *(uint *)((long)puVar22 + -4) ^ uVar7;
                              *(uint *)puVar22 = (uint)*puVar22 ^ (uint)uVar21;
                              *(uint *)((long)puVar22 + 4) = *(uint *)((long)puVar22 + 4) ^ uVar2;
                              *(uint *)(puVar22 + 1) = (uint)puVar22[1] ^ (uint)uVar9;
                              *(uint *)((long)puVar22 + 0xc) =
                                   *(uint *)((long)puVar22 + 0xc) ^ uVar3;
                              uVar16 = *(uint *)((long)puVar10 + -0xc);
                              uVar14 = puVar10[-1];
                              uVar7 = *(uint *)((long)puVar10 + -4);
                              uVar21 = *puVar10;
                              uVar2 = *(uint *)((long)puVar10 + 4);
                              uVar9 = puVar10[1];
                              uVar3 = *(uint *)((long)puVar10 + 0xc);
                              *(uint *)(puVar13 + -2) = (uint)puVar13[-2] ^ (uint)puVar10[-2];
                              *(uint *)((long)puVar13 + -0xc) =
                                   *(uint *)((long)puVar13 + -0xc) ^ uVar16;
                              *(uint *)(puVar13 + -1) = (uint)puVar13[-1] ^ (uint)uVar14;
                              *(uint *)((long)puVar13 + -4) = *(uint *)((long)puVar13 + -4) ^ uVar7;
                              *(uint *)puVar13 = (uint)*puVar13 ^ (uint)uVar21;
                              *(uint *)((long)puVar13 + 4) = *(uint *)((long)puVar13 + 4) ^ uVar2;
                              *(uint *)(puVar13 + 1) = (uint)puVar13[1] ^ (uint)uVar9;
                              *(uint *)((long)puVar13 + 0xc) =
                                   *(uint *)((long)puVar13 + 0xc) ^ uVar3;
                              puVar13 = puVar13 + 4;
                              puVar10 = puVar10 + 4;
                              puVar22 = puVar22 + 4;
                              puVar23 = puVar23 + 4;
                              uVar17 = uVar17 - 4;
                              uVar14 = uVar1 & 0x1fffffffc;
                            } while (uVar17 != 0);
                          }
                        }
                        else {
                          uVar14 = 0;
                        }
                      }
                      else {
                        uVar14 = 0;
                      }
                    }
                    if (uVar1 != uVar14) {
                      iVar20 = (int)uVar14;
                      if ((iVar19 + 1U & 1) != 0) {
                        puVar25[uVar14] = puVar25[uVar14] ^ local_90[uVar14];
                        puVar24[uVar14] = puVar24[uVar14] ^ local_88[uVar14];
                        uVar14 = uVar14 + 1;
                      }
                      if (iVar19 != iVar20) {
                        lVar8 = 0;
                        do {
                          puVar25[uVar14 + lVar8] =
                               puVar25[uVar14 + lVar8] ^ local_90[uVar14 + lVar8];
                          puVar24[uVar14 + lVar8] =
                               puVar24[uVar14 + lVar8] ^ local_88[uVar14 + lVar8];
                          puVar25[uVar14 + lVar8 + 1] =
                               puVar25[uVar14 + lVar8 + 1] ^ local_90[uVar14 + lVar8 + 1];
                          puVar24[uVar14 + lVar8 + 1] =
                               puVar24[uVar14 + lVar8 + 1] ^ local_88[uVar14 + lVar8 + 1];
                          lVar8 = lVar8 + 2;
                        } while ((iVar19 + 2) - ((int)uVar14 + 1) != (int)lVar8);
                      }
                    }
                  }
                  if (iVar6 == local_64) {
                    iVar6 = (int)(iVar6 + -1 + ((uint)(iVar6 + -1 >> 0x1f) >> 0x1a)) >> 6;
                    iVar20 = iVar6 + 1;
                    puVar10 = puVar25 + iVar6;
                    do {
                      uVar14 = *puVar10;
                      bVar26 = iVar20 == 1;
                      iVar20 = iVar20 + -1;
                      if (bVar26) break;
                      puVar10 = puVar10 + -1;
                    } while (uVar14 == 0);
                    iVar6 = FUN_100c26520();
                    iVar6 = iVar6 + iVar20 * 0x40;
                  }
                  goto joined_r0x000100c34fd4;
                }
                uVar11 = (ulong)(int)local_80[1];
                if (0 < (long)uVar11) {
                  plVar15 = (long *)(*local_80 + -8 + uVar11 * 8);
                  do {
                    uVar7 = (uint)uVar11;
                    uVar16 = uVar7;
                    if (*plVar15 != 0) break;
                    plVar15 = plVar15 + -1;
                    uVar16 = uVar7 - 1;
                    uVar11 = (ulong)uVar16;
                  } while (1 < (int)uVar7);
                  *(uint *)(local_80 + 1) = uVar16;
                }
                lVar8 = FUN_100c26b50(param_1);
                bVar26 = lVar8 != 0;
              }
            }
          }
        }
      }
    }
  }
LAB_100c35365:
  FUN_100c27d40(param_4);
  return bVar26;
}

