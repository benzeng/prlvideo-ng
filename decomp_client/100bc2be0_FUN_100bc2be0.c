
ulong FUN_100bc2be0(uint *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint *puVar17;
  long local_58;
  long local_50;
  long local_48;
  byte *local_40;
  undefined4 local_38;
  int local_34;
  
  local_48 = 0;
  if (param_1[0x12] == 0x2110) {
    param_1[0x12] = 0x2111;
  }
  param_1[0x70] = 1;
  uVar8 = (**(code **)(*(long *)(param_1 + 2) + 0x60))(param_1,0x2111,0x2112,1,0x4000,&local_34);
  uVar15 = uVar8;
  if (local_34 == 0) goto LAB_100bc2d44;
  param_1[0x70] = 0;
  pbVar16 = *(byte **)(param_1 + 0x16);
  if ((long)uVar8 < 0x23) {
    local_38 = 0x32;
    uVar12 = 0xa0;
    uVar13 = 0x3ef;
    local_40 = pbVar16;
  }
  else {
    uVar4 = (uint)CONCAT11(*pbVar16,pbVar16[1]);
    param_1[0x71] = uVar4;
    local_40 = pbVar16 + 2;
    if (*param_1 == 0xfeff) {
      if (0xfeff < uVar4) {
LAB_100bc2cc5:
        FUN_100c62ee0(0x14,0x8a,0x10b,"s3_srvr.c",0x3fc);
        if ((((param_1[0x71] & 0xffffff00) == 0x300) && (*(long *)(param_1 + 0x3a) == 0)) &&
           (*(long *)(param_1 + 0x3c) == 0)) {
          *param_1 = param_1[0x71];
        }
        local_38 = 0x46;
        goto LAB_100bc2d19;
      }
    }
    else if ((int)uVar4 < (int)*param_1) goto LAB_100bc2cc5;
    uVar15 = FUN_100be4680(param_1,0x20,0,0);
    if ((uVar15 & 0x2000) != 0) {
      if (pbVar16 + uVar8 <= local_40 + (ulong)local_40[0x20] + 0x21) {
        local_38 = 0x32;
        uVar12 = 0xa0;
        uVar13 = 0x415;
        goto LAB_100bc2c81;
      }
      uVar15 = 1;
      if (local_40[(ulong)local_40[0x20] + 0x21] == 0) goto LAB_100bc2d44;
    }
    pbVar16 = pbVar16 + uVar8;
    lVar9 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar9 + 0xdc) = *(undefined8 *)(local_40 + 0x18);
    *(undefined8 *)(lVar9 + 0xd4) = *(undefined8 *)(local_40 + 0x10);
    uVar12 = *(undefined8 *)local_40;
    *(undefined8 *)(lVar9 + 0xcc) = *(undefined8 *)(local_40 + 8);
    *(undefined8 *)(lVar9 + 0xc4) = uVar12;
    pbVar14 = local_40 + 0x21;
    bVar2 = local_40[0x20];
    uVar15 = (ulong)bVar2;
    if (local_40 + uVar15 + 0x21 <= pbVar16) {
      if (0x20 < bVar2) {
        local_38 = 0x32;
        uVar12 = 0x9f;
        uVar13 = 0x42d;
        local_40 = pbVar14;
        goto LAB_100bc2c81;
      }
      param_1[0x2a] = 0;
      if ((param_1[0xf] == 0) || (local_40 = pbVar14, (*(byte *)((long)param_1 + 0x1aa) & 1) == 0))
      {
        local_40 = pbVar14;
        iVar5 = FUN_100be9250(param_1,pbVar14,bVar2,pbVar16);
        if (iVar5 != -1) {
          if ((iVar5 != 1) || (*param_1 != **(uint **)(param_1 + 0x4c))) goto LAB_100bc2eae;
          param_1[0x2a] = 1;
          goto LAB_100bc2ec3;
        }
      }
      else {
LAB_100bc2eae:
        iVar5 = FUN_100be8c40(param_1,1);
        if (iVar5 != 0) {
LAB_100bc2ec3:
          pbVar14 = local_40 + uVar15;
          if ((*param_1 == 0x100) || (iVar5 = 0, *param_1 == 0xfeff)) {
            pbVar1 = local_40 + uVar15 + 1;
            if (pbVar16 < pbVar1) {
              local_38 = 0x32;
              uVar12 = 0xa0;
              uVar13 = 0x45f;
              local_40 = pbVar14;
            }
            else {
              bVar2 = local_40[uVar15];
              uVar8 = (ulong)bVar2;
              if (pbVar16 < local_40 + uVar15 + uVar8 + 1) {
                local_38 = 0x32;
                uVar12 = 0xa0;
                uVar13 = 0x466;
                local_40 = pbVar1;
              }
              else {
                iVar5 = 0;
                local_40 = pbVar1;
                uVar15 = FUN_100be4680(param_1,0x20,0,0);
                if ((bVar2 == 0) || ((uVar15 & 0x2000) == 0)) {
LAB_100bc303b:
                  pbVar14 = local_40 + uVar8;
                  goto LAB_100bc3043;
                }
                _memcpy((void *)(*(long *)(param_1 + 0x22) + 0x104),local_40,uVar8);
                lVar9 = *(long *)(param_1 + 0x22);
                if (*(code **)(*(long *)(param_1 + 0x5c) + 200) == (code *)0x0) {
                  iVar6 = _memcmp((void *)(lVar9 + 0x104),(void *)(lVar9 + 4),
                                  (ulong)*(uint *)(lVar9 + 0x204));
                  iVar5 = 1;
                  if (iVar6 == 0) goto LAB_100bc303b;
                  local_38 = 0x28;
                  uVar12 = 0x134;
                  uVar13 = 0x488;
                }
                else {
                  iVar6 = (**(code **)(*(long *)(param_1 + 0x5c) + 200))
                                    (param_1,(void *)(lVar9 + 0x104),uVar8);
                  iVar5 = 1;
                  if (iVar6 != 0) goto LAB_100bc303b;
                  local_38 = 0x28;
                  uVar12 = 0x134;
                  uVar13 = 0x47f;
                }
              }
            }
          }
          else {
LAB_100bc3043:
            local_40 = pbVar14 + 2;
            if (pbVar16 < local_40) {
              local_38 = 0x32;
              uVar12 = 0xa0;
              uVar13 = 0x493;
              local_40 = pbVar14;
            }
            else {
              uVar4 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
              if (uVar4 == 0) {
                local_38 = 0x2f;
                uVar12 = 0xb7;
                uVar13 = 0x49a;
              }
              else if (pbVar16 < pbVar14 + (ulong)uVar4 + 3) {
                local_38 = 0x32;
                uVar12 = 0x9f;
                uVar13 = 0x4a2;
              }
              else {
                lVar9 = FUN_100be4ec0(param_1);
                if (lVar9 == 0) goto LAB_100bc2d29;
                local_40 = local_40 + uVar4;
                pbVar14 = local_40;
                if (param_1[0x2a] == 0) {
LAB_100bc317f:
                  uVar15 = (ulong)*pbVar14;
                  local_40 = pbVar14 + uVar15 + 1;
                  if (pbVar16 < local_40) {
                    local_38 = 0x32;
                    uVar12 = 0x9f;
                    uVar13 = 0x4e4;
                    local_40 = pbVar14 + 1;
                  }
                  else {
                    if (*pbVar14 != 0) {
                      lVar9 = 0;
                      do {
                        if (pbVar14[lVar9 + 1] == 0) {
                          if ((0x2ff < (int)*param_1) &&
                             (iVar6 = FUN_100bd8370(param_1,&local_40,pbVar16,&local_38), iVar6 == 0
                             )) {
                            uVar12 = 0xe3;
                            uVar13 = 0x4f9;
                            goto LAB_100bc2c81;
                          }
                          iVar6 = FUN_100bd9a00(param_1);
                          if (iVar6 < 1) {
                            FUN_100c62ee0(0x14,0x8a,0xe2,"s3_srvr.c",0x4fe);
                            goto LAB_100bc2d29;
                          }
                          iVar6 = FUN_100bd6ce0(param_1,1,*(long *)(param_1 + 0x20) + 0xa4,0x20);
                          if (iVar6 < 1) {
                            local_38 = 0x50;
                            goto LAB_100bc2d19;
                          }
                          if (((param_1[0x2a] == 0) && (0x300 < (int)*param_1)) &&
                             (pcVar3 = *(code **)(param_1 + 0x98), pcVar3 != (code *)0x0)) {
                            local_50 = 0;
                            lVar9 = *(long *)(param_1 + 0x4c);
                            *(undefined4 *)(lVar9 + 0x10) = 0x30;
                            iVar6 = (*pcVar3)(param_1,lVar9 + 0x14,lVar9 + 0x10,local_48,&local_50,
                                              *(undefined8 *)(param_1 + 0x9a));
                            if (iVar6 != 0) {
                              param_1[0x2a] = 1;
                              lVar9 = *(long *)(param_1 + 0x4c);
                              *(long *)(lVar9 + 0xf0) = local_48;
                              *(undefined8 *)(lVar9 + 0xb8) = 0;
                              local_48 = 0;
                              if (local_50 == 0) {
                                uVar12 = *(undefined8 *)(lVar9 + 0xf0);
                                uVar13 = FUN_100be4ad0(param_1);
                                local_50 = FUN_100bce2e0(param_1,uVar12,uVar13);
                                if (local_50 == 0) {
                                  local_38 = 0x28;
                                  uVar12 = 0xc1;
                                  uVar13 = 0x528;
                                  goto LAB_100bc2c81;
                                }
                                lVar9 = *(long *)(param_1 + 0x4c);
                              }
                              *(long *)(lVar9 + 0xe0) = local_50;
                              if (*(long *)(param_1 + 0x2e) != 0) {
                                FUN_100c5ffd0();
                              }
                              if (*(long *)(param_1 + 0x30) != 0) {
                                FUN_100c5ffd0();
                              }
                              uVar12 = FUN_100c5fe10(*(undefined8 *)
                                                      (*(long *)(param_1 + 0x4c) + 0xf0));
                              *(undefined8 *)(param_1 + 0x2e) = uVar12;
                              uVar12 = FUN_100c5fe10(*(undefined8 *)
                                                      (*(long *)(param_1 + 0x4c) + 0xf0));
                              *(undefined8 *)(param_1 + 0x30) = uVar12;
                            }
                          }
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x410) = 0;
                          lVar9 = *(long *)(param_1 + 0x4c);
                          uVar4 = *(uint *)(lVar9 + 0xd8);
                          if (uVar4 == 0) {
                            if (param_1[0x2a] != 0) goto LAB_100bc35f1;
                            puVar17 = (uint *)0x0;
                            if (((*(byte *)((long)param_1 + 0x1aa) & 2) == 0) &&
                               (puVar17 = (uint *)0x0,
                               *(long *)(*(long *)(param_1 + 0x5c) + 0x100) != 0)) {
                              iVar6 = FUN_100c60800();
                              iVar7 = 0;
                              puVar17 = (uint *)0x0;
                              if (0 < iVar6) {
                                do {
                                  puVar17 = (uint *)FUN_100c60820(*(undefined8 *)
                                                                   (*(long *)(param_1 + 0x5c) +
                                                                   0x100),iVar7);
                                  lVar9 = 0;
                                  do {
                                    if (*puVar17 == (uint)pbVar14[lVar9 + 1]) {
                                      *(uint **)(*(long *)(param_1 + 0x20) + 0x410) = puVar17;
                                      goto LAB_100bc35dd;
                                    }
                                    lVar9 = lVar9 + 1;
                                  } while (lVar9 < (long)uVar15);
                                  iVar7 = iVar7 + 1;
                                  puVar17 = (uint *)0x0;
                                } while (iVar7 < iVar6);
                              }
                            }
                            goto LAB_100bc35dd;
                          }
                          if ((*(byte *)((long)param_1 + 0x1aa) & 2) != 0) {
                            local_38 = 0x50;
                            uVar12 = 0x154;
                            uVar13 = 0x549;
                            goto LAB_100bc2c81;
                          }
                          iVar6 = FUN_100c60800(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100));
                          iVar7 = 0;
                          puVar17 = (uint *)0x0;
                          if (iVar6 < 1) goto LAB_100bc347f;
                          goto LAB_100bc343f;
                        }
                        lVar9 = lVar9 + 1;
                      } while (lVar9 < (long)uVar15);
                    }
                    local_38 = 0x32;
                    uVar12 = 0xbb;
                    uVar13 = 0x4f1;
                  }
                }
                else {
                  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xe0) + 0x10);
                  iVar6 = FUN_100c60800(local_48);
                  if (0 < iVar6) {
                    iVar6 = 0;
                    do {
                      lVar10 = FUN_100c60820(local_48,iVar6);
                      pbVar14 = local_40;
                      if (*(long *)(lVar10 + 0x10) == lVar9) goto LAB_100bc317f;
                      iVar6 = iVar6 + 1;
                      iVar7 = FUN_100c60800(local_48);
                    } while (iVar6 < iVar7);
                  }
                  local_38 = 0x2f;
                  uVar12 = 0xd7;
                  uVar13 = 0x4da;
                }
              }
            }
          }
          goto LAB_100bc2c81;
        }
      }
      goto LAB_100bc2d29;
    }
    local_38 = 0x32;
    uVar12 = 0xa0;
    uVar13 = 0x427;
    local_40 = pbVar14;
  }
  goto LAB_100bc2c81;
LAB_100bc35dd:
  if (param_1[0x2a] == 0) {
    uVar4 = 0;
    if (puVar17 != (uint *)0x0) {
      uVar4 = *puVar17;
    }
    lVar9 = *(long *)(param_1 + 0x4c);
    *(uint *)(lVar9 + 0xd8) = uVar4;
    if (*(long *)(lVar9 + 0xf0) != 0) {
      FUN_100c5ffd0();
      lVar9 = *(long *)(param_1 + 0x4c);
    }
    *(long *)(lVar9 + 0xf0) = local_48;
    if (local_48 == 0) {
      local_38 = 0x50;
      uVar12 = 0x44;
      uVar13 = 0x598;
    }
    else {
      local_48 = 0;
      uVar12 = *(undefined8 *)(lVar9 + 0xf0);
      uVar13 = FUN_100be4ad0(param_1);
      lVar9 = FUN_100bce2e0(param_1,uVar12,uVar13);
      if (lVar9 != 0) goto LAB_100bc3601;
      local_38 = 0x28;
      uVar12 = 0xc1;
      uVar13 = 0x5a0;
    }
    goto LAB_100bc2c81;
  }
  lVar9 = *(long *)(param_1 + 0x4c);
LAB_100bc35f1:
  if ((*(byte *)((long)param_1 + 0x1ab) & 0x40) == 0) {
    lVar9 = *(long *)(lVar9 + 0xe0);
LAB_100bc3601:
    *(long *)(*(long *)(param_1 + 0x20) + 0x3a8) = lVar9;
  }
  else {
    uVar12 = *(undefined8 *)(lVar9 + 0xf0);
    iVar6 = FUN_100c60800(uVar12);
    local_58 = 0;
    if (iVar6 < 1) {
LAB_100bc3742:
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3a8) =
           *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xe0);
    }
    else {
      lVar9 = 0;
      iVar6 = 0;
      do {
        lVar10 = FUN_100c60820(uVar12,iVar6);
        if ((*(ulong *)(lVar10 + 0x28) & 0x20) != 0) {
          lVar9 = lVar10;
        }
        if ((*(ulong *)(lVar10 + 0x40) & 2) != 0) {
          local_58 = lVar10;
        }
        iVar6 = iVar6 + 1;
        iVar7 = FUN_100c60800(uVar12);
      } while (iVar6 < iVar7);
      if (lVar9 == 0) {
        if (local_58 == 0) goto LAB_100bc3742;
        *(long *)(*(long *)(param_1 + 0x20) + 0x3a8) = local_58;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x20) + 0x3a8) = lVar9;
      }
    }
  }
  uVar4 = *param_1;
  if ((((int)uVar4 < 0x303) || ((uVar4 & 0xffffff00) != 0x300)) || ((param_1[0x50] & 1) == 0)) {
    iVar6 = FUN_100bcfe80(param_1);
    if (iVar6 != 0) {
      uVar4 = *param_1;
      goto LAB_100bc378e;
    }
    local_38 = 0x50;
    goto LAB_100bc2d19;
  }
LAB_100bc378e:
  if ((0x2ff < (int)uVar4) && (iVar6 = FUN_100bd9ac0(param_1), iVar6 < 1)) {
    FUN_100c62ee0(0x14,0x8a,0xe2,"s3_srvr.c",0x5d6);
    goto LAB_100bc2d29;
  }
  uVar15 = (ulong)(iVar5 + 1);
  goto LAB_100bc2d36;
  while( true ) {
    iVar7 = iVar7 + 1;
    iVar6 = FUN_100c60800(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100));
    if (iVar6 <= iVar7) break;
LAB_100bc343f:
    puVar11 = (uint *)FUN_100c60820(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100),iVar7);
    puVar17 = puVar11;
    if (uVar4 == *puVar11) {
      *(uint **)(*(long *)(param_1 + 0x20) + 0x410) = puVar11;
      goto LAB_100bc3564;
    }
  }
LAB_100bc347f:
  puVar11 = *(uint **)(*(long *)(param_1 + 0x20) + 0x410);
LAB_100bc3564:
  if (puVar11 == (uint *)0x0) {
    local_38 = 0x50;
    uVar12 = 0x155;
    uVar13 = 0x557;
  }
  else {
    lVar9 = 0;
    do {
      if (pbVar14[lVar9 + 1] == uVar4) goto LAB_100bc35dd;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (long)uVar15);
    local_38 = 0x2f;
    uVar12 = 0x156;
    uVar13 = 0x562;
  }
LAB_100bc2c81:
  FUN_100c62ee0(0x14,0x8a,uVar12,"s3_srvr.c",uVar13);
LAB_100bc2d19:
  FUN_100bd2dc0(param_1,2,local_38);
LAB_100bc2d29:
  param_1[0x12] = 5;
  uVar15 = 0xffffffff;
LAB_100bc2d36:
  if (local_48 != 0) {
    FUN_100c5ffd0();
  }
LAB_100bc2d44:
  return uVar15 & 0xffffffff;
}

