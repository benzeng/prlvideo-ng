
int FUN_100b143f0(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 in_stack_ffffffffffffeeb8;
  undefined4 uVar32;
  ulong local_10f8;
  QArrayData *local_10c8;
  undefined8 *local_10c0;
  undefined8 local_10b8;
  ulong local_10b0;
  ulong local_10a8;
  ulong local_10a0;
  ulong local_1098;
  undefined4 local_1090;
  uint local_108c;
  undefined4 local_1084;
  QArrayData *local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined4 local_1060;
  undefined8 local_1058;
  bool local_1041;
  ulong local_1040;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1078 = 0;
  uStack_1070 = 0;
  local_1060 = 0;
  local_1068 = 0;
  lVar4 = param_1[4];
  local_1058 = param_3;
  local_38 = lVar14;
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("ChangeCapacity","dimg",0,
                  "Disk \"%s\" is not opened (struct info is absent), increase capacity failed.",
                  local_1080 + *(long *)(local_1080 + 0x10));
    puVar24 = &local_1078;
    iVar8 = 0;
    if (*(int *)local_1080 != -1) {
      iVar8 = 0;
      if (*(int *)local_1080 != 0) {
        LOCK();
        *(int *)local_1080 = *(int *)local_1080 + -1;
        UNLOCK();
        local_1041 = *(int *)local_1080 != 0;
        if (*(int *)local_1080 != 0) goto LAB_100b145b4;
      }
      QArrayData::deallocate(local_1080,1,8);
    }
LAB_100b145b4:
    while( true ) {
      pcVar5 = (code *)*puVar24;
      if ((pcVar5 == (code *)0x0) && (iVar11 = -0x7ffdefdf, puVar24[4] == 0)) goto LAB_100b14935;
      if ((-1 < iVar8) && (1 < *(uint *)(puVar24 + 2))) {
        iVar11 = *(int *)((long)puVar24 + 0x14);
        if (iVar8 < *(int *)((long)puVar24 + 0x14)) {
          *(int *)((long)puVar24 + 0x14) = iVar8;
          iVar11 = -0x7ffdefdf;
          goto LAB_100b14935;
        }
        *(int *)((long)puVar24 + 0x14) = iVar8;
        iVar8 = (uint)(iVar8 - iVar11) / *(uint *)(puVar24 + 2) + *(int *)(puVar24 + 3);
        *(int *)(puVar24 + 3) = iVar8;
      }
      if (pcVar5 != (code *)0x0) break;
      puVar24 = (undefined8 *)puVar24[4];
    }
    iVar11 = -0x7ffdefdf;
    (*pcVar5)(iVar8,puVar24[1]);
    goto LAB_100b14935;
  }
  uVar1 = *(uint *)(lVar4 + 0x10);
  uVar31 = (ulong)uVar1;
  uVar12 = FUN_100b1ffb0(lVar4);
  uVar2 = *(uint *)(lVar4 + 0xc);
  uVar17 = 0;
  if ((ulong)uVar2 != 0) {
    uVar26 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) * uVar31;
    uVar9 = (uint)uVar26;
    uVar17 = 0;
    if (4 < uVar9) {
      uVar13 = 0xffffffffffffffff;
      if (uVar2 - 1 < 0x7fffff) {
        uVar13 = (ulong)uVar2 << 0x29;
      }
      uVar26 = uVar26 & 0xffffffff;
      uVar13 = uVar13 / uVar26;
      uVar17 = 0;
      if ((uVar13 * 4 < 0xffffffffffffffc0) &&
         (uVar17 = 0, (ulong)(uVar9 - 1) <= uVar13 * -4 - 0x41)) {
        uVar27 = uVar26 + 0x3f + uVar13 * 4;
        uVar27 = uVar27 - uVar27 % uVar26;
        uVar17 = 0;
        if (uVar27 <= uVar13 * uVar26) {
          uVar17 = uVar13 * uVar26 - uVar27;
        }
      }
    }
  }
  local_1084 = 0;
  local_10c0 = &local_10b8;
  local_10b0 = 0;
  local_10b8 = 0;
  lVar14 = *(long *)(*param_1 + -0x18);
  cVar7 = (**(code **)(*(long *)((long)param_1 + lVar14) + 0x150))((long)param_1 + lVar14);
  lVar14 = *(long *)(*param_1 + -0x18);
  if (cVar7 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("ChangeCapacity","dimg",0,
                  "Disk \"%s\" is not opened, increase capacity failed. [%p]",
                  local_10c8 + *(long *)(local_10c8 + 0x10),
                  *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
    iVar11 = -0x7ffdefdf;
    if (*(int *)local_10c8 != -1) {
      if (*(int *)local_10c8 != 0) {
        LOCK();
        *(int *)local_10c8 = *(int *)local_10c8 + -1;
        local_1041 = *(int *)local_10c8 != 0;
        UNLOCK();
        if (local_1041) goto LAB_100b147e6;
      }
      QArrayData::deallocate(local_10c8,1,8);
    }
LAB_100b147e6:
    (**(code **)(*param_1 + 0x70))(param_1,1);
    (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
              ((long)param_1 + *(long *)(*param_1 + -0x18),*(undefined8 *)(lVar4 + 0x20));
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar14 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    pcVar5 = *(code **)(lVar14 + 0x188);
    uVar16 = (**(code **)(lVar14 + 0x160))(lVar4);
    (*pcVar5)(lVar4,uVar16);
    (**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*param_1 + 0xf0))(param_1);
    if ((iVar11 < 0) && (iVar11 != -0x7ffdefc8)) {
      puVar24 = &local_1078;
      iVar8 = iVar11;
      while( true ) {
        pcVar5 = (code *)*puVar24;
        if ((pcVar5 == (code *)0x0) && (puVar24[4] == 0)) goto LAB_100b148e7;
        if ((-1 < iVar8) && (1 < *(uint *)(puVar24 + 2))) {
          iVar3 = *(int *)((long)puVar24 + 0x14);
          if (iVar8 < *(int *)((long)puVar24 + 0x14)) {
            *(int *)((long)puVar24 + 0x14) = iVar8;
            goto LAB_100b148e7;
          }
          *(int *)((long)puVar24 + 0x14) = iVar8;
          iVar8 = (uint)(iVar8 - iVar3) / *(uint *)(puVar24 + 2) + *(int *)(puVar24 + 3);
          *(int *)(puVar24 + 3) = iVar8;
        }
        if (pcVar5 != (code *)0x0) break;
        puVar24 = (undefined8 *)puVar24[4];
      }
      (*pcVar5)(iVar8,puVar24[1]);
    }
LAB_100b148e7:
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("ChangeCapacity","dimg",2,"[IncreaseCapacity] Done with result = 0x%X",iVar11);
    }
  }
  else {
    iVar11 = -0x7ffffffd;
    if ((*(byte *)(lVar14 + 0x18 + (long)param_1) & 3) == 0) goto LAB_100b147e6;
    lVar19 = *(long *)((long)param_1 + lVar14 + 0x58);
    lVar14 = (**(code **)(*(long *)((long)param_1 + lVar14) + 0x160))((long)param_1 + lVar14);
    if (lVar19 != lVar14) {
      lVar14 = *(long *)(*param_1 + -0x18);
      uVar16 = *(undefined8 *)((long)param_1 + lVar14 + 0x58);
      uVar15 = (**(code **)(*(long *)((long)param_1 + lVar14) + 0x160))((long)param_1 + lVar14);
      iVar11 = -0x7ffdefef;
      FUN_100df99c0("ChangeCapacity","dimg",0,
                    "Data area end [%llu] is not equal to file size [%llu]",uVar16,uVar15);
      goto LAB_100b147e6;
    }
    if (uVar31 - 1 <= ~param_2) {
      uVar26 = ((param_2 - 1) + uVar31) / uVar31;
      uVar13 = uVar26 * uVar31;
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("ChangeCapacity","dimg",2,
                      "[IncreaseCapacity] Change size from %llu sect to %llu sect",
                      *(undefined8 *)(*(long *)(*param_1 + -0x18) + 0x20 + (long)param_1),uVar13);
      }
      lVar14 = *(long *)(*param_1 + -0x18);
      uVar17 = uVar17 / *(ulong *)(lVar14 + 0x38 + (long)param_1);
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
LAB_100b14b32:
        uVar27 = (ulong)*(uint *)(lVar4 + 0x6c);
        uVar17 = (**(code **)(**(long **)(lVar14 + 8 + (long)param_1) + 0x78))();
        uVar13 = uVar26 - uVar27;
        if (uVar26 < uVar27 || uVar13 == 0) {
          iVar11 = -0x7ffdefef;
          FUN_100df99c0("ChangeCapacity","dimg",0,
                        "New size (%llu blocks) must be bigger than current size (%llu)",uVar27);
        }
        else {
          uVar18 = FUN_100b1ff40(param_1[4]);
          uVar21 = (uVar18 & 0xffffffff) % (ulong)*(uint *)(param_1[4] + 0x10);
          lVar19 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                             ((long)param_1 + *(long *)(*param_1 + -0x18));
          uVar23 = (undefined4)uVar21;
          lVar14 = *(long *)(*param_1 + -0x18);
          uVar28 = uVar12 & 0xffffffff;
          if ((lVar19 - uVar21 * *(long *)((long)param_1 + lVar14 + 0x38)) % uVar28 == 0) {
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("ChangeCapacity","dimg",3,"Current FirstBlockOffset %u",uVar18);
              lVar14 = *(long *)(*param_1 + -0x18);
            }
            uVar21 = uVar18 & 0xffffffff;
            uVar27 = uVar27 * -4 + -0x40 + *(long *)(lVar14 + 0x38 + (long)param_1) * uVar21;
            if ((uVar27 & 3) != 0) {
              in_stack_ffffffffffffeeb8 =
                   CONCAT44((int)((ulong)in_stack_ffffffffffffeeb8 >> 0x20),0x3cc);
              FUN_100df99c0("ChangeCapacity","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                            "PAD_Size % sizeof(PRL_UINT32) == 0","DiskImageComp.cpp",
                            in_stack_ffffffffffffeeb8,"IncreaseCapacity");
            }
            uVar27 = uVar27 >> 2;
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("ChangeCapacity","dimg",3,
                            "Free BAT slots %llu required additional BAT slots %llu",uVar27,uVar13);
            }
            uVar32 = (undefined4)((ulong)in_stack_ffffffffffffeeb8 >> 0x20);
            uVar30 = *(ulong *)(param_1[4] + 0x20);
            uVar25 = *(ulong *)(param_1[4] + 0x40);
            uVar29 = uVar30 & 0xffffffff;
            if (uVar25 < uVar29) {
              ___bzero(local_1038,0x1000);
              uVar30 = (uVar30 & 0xffffffff) - uVar25;
              do {
                plVar6 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                uVar22 = uVar30 & 0xffffffff;
                if (0x1000 < uVar30) {
                  uVar22 = 0x1000;
                }
                (**(code **)(*plVar6 + 0x48))(plVar6,local_1038,uVar22,0,uVar25);
                uVar32 = (undefined4)((ulong)in_stack_ffffffffffffeeb8 >> 0x20);
                uVar25 = uVar25 + 0x1000;
                uVar30 = uVar30 - 0x1000;
              } while (uVar25 < uVar29);
            }
            if (uVar27 < uVar13) {
              lVar14 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
              uVar13 = lVar14 * uVar31;
              uVar13 = (((uVar26 * 4 + 0x3f) - lVar14 * uVar21) + uVar13) / uVar13;
              if (uVar13 == 0) {
                FUN_100df99c0("ChangeCapacity","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                              "CountIntersectsBlocks > 0","DiskImageComp.cpp",CONCAT44(uVar32,0x3e2)
                              ,"IncreaseCapacity");
              }
              if (1 < DAT_10230ffd0) {
                FUN_100df99c0("ChangeCapacity","dimg",2,
                              "[IncreaseCapacity] Relocation required for %llu blocks",uVar13);
              }
              lVar19 = uVar13 * uVar31;
              lVar14 = *(long *)(*param_1 + -0x18);
              iVar8 = (**(code **)(*(long *)((long)param_1 + lVar14) + 0x178))
                                ((long)param_1 + lVar14,
                                 uVar17 / *(ulong *)((long)param_1 + lVar14 + 0x38),lVar19,
                                 &DAT_102313c68);
              if (iVar8 < 0) {
                iVar11 = -0x7ffdefa9;
                FUN_100df99c0("ChangeCapacity","dimg",0,"Increase file size on %llu failed",
                              uVar13 * uVar28);
              }
              else {
                pvVar20 = _valloc(uVar28);
                if (pvVar20 != (void *)0x0) {
                  local_10f8 = lVar19 + uVar21;
                  local_1098 = (ulong)*(uint *)(lVar4 + 0xc);
                  local_10a8 = local_10f8;
                  local_10a0 = uVar21;
                  local_1090 = uVar23;
                  local_108c = uVar1;
                  if (uVar13 != 0) {
                    lVar14 = 0;
                    uVar31 = 0;
                    do {
                      uVar27 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) *
                               (uVar18 & 0xffffffff) + lVar14;
                      plVar6 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                      cVar7 = (**(code **)(*plVar6 + 0x40))
                                        (plVar6,pvVar20,uVar12,&local_1084,uVar27);
                      if (cVar7 == '\0') {
                        iVar11 = -0x7ffdefd7;
                        FUN_100df99c0("ChangeCapacity","dimg",0,
                                      "Failed to read block at offset %llu and size %u",uVar27,
                                      uVar12);
                        goto LAB_100b15286;
                      }
                      uVar28 = uVar17 + lVar14;
                      plVar6 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                      cVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,pvVar20,uVar12,0,uVar28);
                      if (cVar7 == '\0') {
                        iVar11 = -0x7ffdefd9;
                        FUN_100df99c0("ChangeCapacity","dimg",0,
                                      "Failed to write block at offset %llu and size %u",uVar28,
                                      uVar12);
                        goto LAB_100b15286;
                      }
                      uVar30 = *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
                      uVar1 = *(uint *)(lVar4 + 0xc);
                      uVar28 = uVar28 / uVar30 & 0xffffffff;
                      local_1040 = (uVar27 / uVar30 & 0xffffffff) / (ulong)uVar1 |
                                   uVar28 / uVar1 << 0x20;
                      FUN_100b1c1e0(&local_10c0,&local_1040,uVar28 % (ulong)uVar1);
                      uVar31 = uVar31 + 1;
                      lVar14 = lVar14 + (uVar12 & 0xffffffff);
                    } while (uVar31 < uVar13);
                  }
                  if (local_10b0 == 0) {
                    FUN_100df99c0("ChangeCapacity","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                  "Data.ChangedOffs.size() > 0","DiskImageComp.cpp",0x426,
                                  "IncreaseCapacity");
                  }
                  if (1 < DAT_10230ffd0) {
                    FUN_100df99c0("ChangeCapacity","dimg",2,
                                  "[IncreaseCapacity] Fix BAT entries for %u blocks",
                                  local_10b0 & 0xffffffff);
                  }
                  iVar11 = (**(code **)(*param_1 + 0x1d8))(param_1,FUN_100b141d0,&local_10c0);
                  if (iVar11 < 0) {
                    FUN_100df99c0("ChangeCapacity","dimg",0,"Rewrite BAT failed, err = 0x%x",iVar11)
                    ;
                  }
                  else {
                    if (1 < DAT_10230ffd0) {
                      FUN_100df99c0("ChangeCapacity","dimg",2,
                                    "[IncreaseCapacity] Clear trailed BAT entries");
                    }
                    iVar8 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) +
                                        0x178))((long)param_1 + *(long *)(*param_1 + -0x18),uVar21,
                                                lVar19,&DAT_102313c68);
                    if (-1 < iVar8) goto LAB_100b151d4;
                    iVar11 = -0x7ffdefa9;
                    FUN_100df99c0("ChangeCapacity","dimg",0,"Bzero last BAT entries failed");
                  }
                  goto LAB_100b15286;
                }
                iVar11 = -0x7ffffffe;
                FUN_100df99c0("ChangeCapacity","dimg",0,"Memory allocation failed [%llu bytes]",
                              uVar26 << 2);
              }
            }
            else {
              pvVar20 = (void *)0x0;
              local_10f8 = uVar18;
              if (1 < DAT_10230ffd0) {
                pvVar20 = (void *)0x0;
                FUN_100df99c0("ChangeCapacity","dimg",2,
                              "[IncreaseCapacity] Just change image file header params");
LAB_100b151d4:
                if (1 < DAT_10230ffd0) {
                  uVar16 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) +
                                       0x160))((long)param_1 + *(long *)(*param_1 + -0x18));
                  FUN_100df99c0("ChangeCapacity","dimg",2,
                                "[IncreaseCapacity] New image params: data offset %u sect, file size %llu bytes (%llu blocks)"
                                ,local_10f8,uVar16,uVar26);
                }
              }
              (**(code **)(*param_1 + 0x70))(param_1,0);
              iVar11 = FUN_100b15b90(lVar4,uVar26,local_10f8);
              if (iVar11 < 0) {
                FUN_100df99c0("ChangeCapacity","dimg",0,"BAT params update failed, err = 0x%X",
                              iVar11);
              }
LAB_100b15286:
              if (pvVar20 != (void *)0x0) {
                _free(pvVar20);
              }
            }
          }
          else {
            uVar16 = (**(code **)(*(long *)(lVar14 + (long)param_1) + 0x160))();
            iVar11 = -0x7ffdefef;
            FUN_100df99c0("ChangeCapacity","dimg",0,
                          "File size [%llu bytes] is not alligned to block size [%u bytes]",uVar16,
                          uVar12);
          }
        }
      }
      else {
        uVar9 = FUN_100b1ffb0(lVar4);
        uVar2 = *(uint *)(lVar4 + 0x10);
        uVar10 = FUN_100b1ffb0();
        uVar17 = 0;
        if ((4 < uVar9) && ((uVar9 != 0 && uVar2 != 0) && uVar10 != 0)) {
          uVar27 = 0xffffffffffffffff;
          if (uVar2 - 1 < 0x7fffff) {
            uVar27 = (ulong)uVar2 << 0x29;
          }
          uVar27 = uVar27 / uVar9;
          uVar17 = 0;
          if ((uVar27 * 4 < 0xffffffffffffffc0) &&
             (uVar17 = 0, (ulong)(uVar10 - 1) <= uVar27 * -4 - 0x41)) {
            uVar21 = uVar27 * uVar9;
            uVar27 = (ulong)uVar10 + 0x3f + uVar27 * 4;
            uVar27 = uVar27 - uVar27 % (ulong)uVar10;
            uVar17 = 0;
            if (uVar27 <= uVar21) {
              uVar17 = uVar21 - uVar27;
            }
          }
        }
        if ((*(int *)(lVar4 + 0xc) == 1) &&
           (uVar27 = uVar17 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1),
           uVar13 < uVar27 || uVar13 - uVar27 == 0)) {
          local_1068 = CONCAT44(local_1068._4_4_,2);
          if (1 < DAT_10230ffd0) {
            FUN_100df99c0("ChangeCapacity","dimg",2,
                          "[IncreaseCapacity] Change format to Extended Expanding");
          }
          iVar11 = FUN_100b15620(param_1,&local_1078);
          if (-1 < iVar11) {
            lVar14 = *(long *)(*param_1 + -0x18);
            goto LAB_100b14b32;
          }
          FUN_100df99c0("ChangeCapacity","dimg",0,
                        "Conversion to Extended Expanding failed, err = 0x%X",iVar11);
        }
        else {
          iVar11 = -0x7ffdefef;
          FUN_100df99c0("ChangeCapacity","dimg",0,
                        "Max possible image capacity: %llu sect, requested capacity %llu sect",
                        uVar17 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1),
                        uVar13);
        }
      }
      goto LAB_100b147e6;
    }
    iVar11 = -0x7ffdefef;
    FUN_100df99c0("ChangeCapacity","dimg",0,"Requested capacity too big %llu",param_2);
  }
  FUN_100b1c120(&local_10c0,local_10b8);
  lVar14 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100b14935:
  if (lVar14 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar11;
}

