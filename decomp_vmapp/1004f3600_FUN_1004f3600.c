
undefined1 FUN_1004f3600(undefined8 param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  QString QVar4;
  QArrayData *pQVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  QArrayData *pQVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 uVar18;
  bool bVar19;
  ulong uVar20;
  QArrayData *pQVar21;
  undefined8 uVar22;
  QArrayData *pQVar23;
  QArrayData *pQVar24;
  QArrayData *pQVar25;
  bool bVar26;
  QArrayData *local_5da0;
  undefined1 local_5d92;
  char local_5d91;
  QArrayData *local_5d90;
  QArrayData *local_5d88;
  int *local_5d80;
  int *local_5d78;
  int *local_5d70;
  uint local_5d68;
  QString local_5d60;
  QString local_5d58;
  ulong local_5d50;
  undefined8 local_5d48;
  int *local_5d40;
  undefined *local_5d38;
  int *local_5d30;
  QArrayData *local_5d28;
  QArrayData *local_5d20;
  QArrayData *local_5d18;
  undefined1 local_5d09;
  byte local_5d08 [108];
  undefined8 auStack_5c9c [578];
  undefined1 local_4a88 [2560];
  undefined1 local_4088 [2];
  undefined1 local_4086 [16382];
  undefined1 local_88 [80];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar18 = 0;
  local_38 = lVar13;
  cVar6 = QString::endsWith(param_1,&DAT_1011bc170,0);
  if (cVar6 == '\0') goto LAB_1004f4044;
  uVar18 = 0;
  sVar8 = _FSFindFolder(0xffff8005,0x74727368,0,local_88);
  if (sVar8 != 0) goto LAB_1004f4044;
  local_5d18 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar10 = FUN_1004efc00(local_88,&local_5d18);
  if (iVar10 == 0) {
    FUN_1004f2f20(param_1,&local_5d18);
  }
  if (*(int *)local_5d18 != -1) {
    if (*(int *)local_5d18 != 0) {
      LOCK();
      *(int *)local_5d18 = *(int *)local_5d18 + -1;
      local_5d09 = *(int *)local_5d18 != 0;
      UNLOCK();
      if ((bool)local_5d09) goto LAB_1004f36d1;
    }
    QArrayData::deallocate(local_5d18,2,8);
  }
LAB_1004f36d1:
  QString::left((int)&local_5d20);
  FUN_1004f0330(&local_5d28,0x646f6373);
  cVar6 = QString::startsWith(&local_5d20,&local_5d28,1);
  puVar3 = PTR_shared_null_100ba2188;
  local_5d30 = (int *)PTR_shared_null_100ba2188;
  local_5d38 = PTR_shared_null_100ba2188;
  if (cVar6 == '\0') {
    cVar7 = FUN_1004f2610(param_1,&local_5d38);
    if (cVar7 != '\0') goto LAB_1004f378a;
    uVar18 = 0;
  }
  else {
    cVar7 = FUN_1004f2970(&local_5d38);
    if (cVar7 == '\0') {
      uVar18 = 0;
    }
    else {
      FUN_1004f0400(&local_5d40);
      local_5d30 = local_5d40;
      local_5d40 = (int *)puVar3;
      FUN_100013180(&local_5d40);
LAB_1004f378a:
      QtPrivate::QStringList_sort(&local_5d38,1);
      sVar8 = _FSOpenIterator(local_88,0,&local_5d48);
      if (sVar8 == 0) {
        do {
          sVar8 = _FSGetCatalogInfoBulk
                            (local_5d48,0x20,&local_5d50,0,0x4002,local_5d08,local_4a88,0,local_4088
                            );
          if ((sVar8 != -0x589) && (sVar8 != 0)) break;
          uVar20 = 0;
          if (local_5d50 != 0) {
            do {
              QString::fromUtf16((ushort *)&local_5d58,(int)local_4086 + (int)(uVar20 << 9));
              iVar10 = QString::compare(&local_5d58,&DAT_1011bc188,0);
              if ((iVar10 != 0) &&
                 (cVar7 = QtPrivate::QStringList_contains(&local_5d38,&local_5d58,0), cVar7 == '\0')
                 ) {
                FUN_1004eff40(&local_5d60);
                if (*(uint *)(local_5d60.field0_0x0 + 4) == 0) goto LAB_1004f3b17;
                cVar7 = QString::startsWith(&local_5d60,&local_5d20,0);
                piVar15 = local_5d30;
                if (cVar7 == '\0') {
                  if (cVar6 != '\0') {
                    local_5d80 = local_5d30;
                    if (*local_5d30 != -1) {
                      if (*local_5d30 == 0) {
                        QListData::detach((int)&local_5d80);
                        iVar10 = local_5d80[2];
                        if (iVar10 != local_5d80[3]) {
                          piVar15 = piVar15 + (long)piVar15[2] * 2 + 4;
                          piVar17 = local_5d80 + (long)iVar10 * 2 + 4;
                          lVar13 = (long)local_5d80[3] * 8 + (long)iVar10 * -8;
                          do {
                            piVar1 = *(int **)piVar15;
                            *(int **)piVar17 = piVar1;
                            if (1 < *piVar1 + 1U) {
                              LOCK();
                              *piVar1 = *piVar1 + 1;
                              local_5d09 = *piVar1 != 0;
                              UNLOCK();
                            }
                            piVar17 = piVar17 + 2;
                            piVar15 = piVar15 + 2;
                            lVar13 = lVar13 + -8;
                          } while (lVar13 != 0);
                        }
                      }
                      else {
                        LOCK();
                        *local_5d30 = *local_5d30 + 1;
                        local_5d09 = *local_5d30 != 0;
                        UNLOCK();
                      }
                    }
                    local_5d78 = local_5d80 + (long)local_5d80[2] * 2 + 4;
                    local_5d70 = local_5d80 + (long)local_5d80[3] * 2 + 4;
                    local_5d68 = 1;
                    if (local_5d80[2] == local_5d80[3]) {
                      bVar19 = false;
                    }
                    else {
                      bVar19 = false;
                      do {
                        if ((local_5d68 == 0) ||
                           (cVar7 = QString::startsWith(&local_5d60,local_5d78,0), cVar7 == '\0')) {
                          local_5d78 = local_5d78 + 2;
                          local_5d68 = 1;
                        }
                        else {
                          local_5d78 = local_5d78 + 2;
                          uVar11 = local_5d68 ^ 1;
                          bVar19 = true;
                          bVar26 = local_5d68 == 1;
                          local_5d68 = uVar11;
                          if (bVar26) {
                            FUN_100013180(&local_5d80);
                            goto LAB_1004f3f00;
                          }
                        }
                      } while (local_5d78 != local_5d70);
                    }
                    FUN_100013180(&local_5d80);
                    if (!bVar19) goto LAB_1004f3aa4;
                  }
                }
                else {
LAB_1004f3aa4:
                  QString::append(&local_5d60);
                  cVar7 = FUN_1004f1d70(&local_5d60,&local_5d60);
                  QVar4.field0_0x0 = local_5d60.field0_0x0;
                  if (cVar7 != '\0') {
                    if ((0x103 < *(int *)(local_5d60.field0_0x0 + 4)) &&
                       (local_5d60.field0_0x0 !=
                        (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0)) {
                      local_5d60.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                      if (*(int *)QVar4.field0_0x0 != -1) {
                        if (*(int *)QVar4.field0_0x0 != 0) {
                          LOCK();
                          *(int *)QVar4.field0_0x0 = *(int *)QVar4.field0_0x0 + -1;
                          local_5d09 = *(int *)QVar4.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_5d09) goto LAB_1004f3b17;
                        }
                        QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
                      }
                    }
LAB_1004f3b17:
                    if (*(uint *)(local_5d60.field0_0x0 + 4) == 0) {
                      if (cVar6 == '\0') goto LAB_1004f3f00;
                      QString::operator=(&local_5d60,&local_5d58);
                      if ((1 < *(uint *)local_5d60.field0_0x0) ||
                         (*(long *)(local_5d60.field0_0x0 + 0x10) != 0x18)) {
                        QString::reallocData
                                  ((uint)&local_5d60,
                                   (bool)((char)*(uint *)(local_5d60.field0_0x0 + 4) + '\x01'));
                      }
                      uVar16 = (ulong)(int)*(uint *)(local_5d60.field0_0x0 + 4);
                      if ((uVar16 & 0x7fffffffffffffff) != 0) {
                        pQVar23 = (QArrayData *)
                                  (local_5d60.field0_0x0 + *(long *)(local_5d60.field0_0x0 + 0x10));
                        pQVar14 = pQVar23 + uVar16 * 2;
                        pQVar21 = (QArrayData *)
                                  (local_5d60.field0_0x0 +
                                  *(long *)(local_5d60.field0_0x0 + 0x10) + uVar16 * 2);
                        do {
                          if (*(short *)pQVar23 == 0x2f) {
                            pQVar23 = pQVar23 + 2;
                          }
                          else {
                            pQVar25 = pQVar14;
                            pQVar24 = pQVar23;
                            if (pQVar23 != pQVar14) {
                              do {
                                pQVar24 = pQVar24 + 2;
                                pQVar25 = pQVar14;
                                if (pQVar21 == pQVar24) break;
                                pQVar25 = pQVar24;
                              } while (*(short *)pQVar24 != 0x2f);
                            }
                            if ((long)pQVar25 - (long)pQVar23 != 0) {
                              sVar9 = FUN_100541f30(*(short *)pQVar23);
                              *(short *)pQVar23 = sVar9;
                              pQVar5 = pQVar23 + 2;
                              pQVar24 = pQVar23;
                              while (pQVar2 = pQVar5, pQVar2 != pQVar25) {
                                sVar9 = FUN_100541f30(*(short *)(pQVar24 + 2));
                                *(short *)(pQVar24 + 2) = sVar9;
                                pQVar5 = pQVar24 + 4;
                                pQVar24 = pQVar2;
                              }
                              if (*(short *)(pQVar25 + -2) == 0x2e) {
                                if ((2 < (ulong)((long)pQVar25 - (long)pQVar23 >> 1)) ||
                                   (sVar9 = *(short *)pQVar23, pQVar23 = pQVar25, sVar9 != 0x2e)) {
                                  *(short *)(pQVar25 + -2) = -0xfd7;
                                  pQVar23 = pQVar25;
                                }
                              }
                              else {
                                pQVar23 = pQVar25;
                                if (*(short *)(pQVar25 + -2) == 0x20) {
                                  *(short *)(pQVar25 + -2) = -0xfd8;
                                }
                              }
                            }
                          }
                        } while (pQVar23 != pQVar14);
                      }
                      uVar12 = 1;
                      QString::insert((int)&local_5d60,(QChar *)0x0,
                                      (int)*(undefined8 *)(DAT_1011bc180 + 0x10) +
                                      (int)DAT_1011bc180);
                    }
                    else {
                      uVar12 = 0;
                    }
                    local_5d88 = (QArrayData *)PTR_shared_null_100ba20d0;
                    iVar10 = FUN_1004efc00(local_4a88 + uVar20 * 0x50,&local_5d88);
                    if (iVar10 == 0) {
                      uVar22 = 0;
                      if ((local_5d08[uVar20 * 0x94] & 4) == 0) {
                        uVar22 = *(undefined8 *)((long)auStack_5c9c + uVar20 * 0x94);
                      }
                      local_5d90 = (QArrayData *)PTR_shared_null_100ba20d0;
                      sVar9 = _FSIsAliasFile(local_4a88 + uVar20 * 0x50,&local_5d91,&local_5d92);
                      if ((sVar9 == 0) && (local_5d91 != '\0')) {
                        pQVar14 = (QArrayData *)QString::fromAscii_helper(".lnk",4);
                        pQVar23 = local_5d90;
                        if (*(int *)local_5d90 != -1) {
                          if (*(int *)local_5d90 != 0) {
                            LOCK();
                            *(int *)local_5d90 = *(int *)local_5d90 + -1;
                            local_5d09 = *(int *)local_5d90 != 0;
                            UNLOCK();
                            if ((bool)local_5d09) goto LAB_1004f3dd9;
                          }
                          local_5d90 = pQVar14;
                          QArrayData::deallocate(pQVar23,2,8);
                          pQVar14 = local_5d90;
                        }
LAB_1004f3dd9:
                        local_5d90 = pQVar14;
                        uVar22 = FUN_1005042c0(&local_5d88);
                      }
                      else {
                        FUN_1004f2160(&local_5da0,&local_5d88);
                        pQVar23 = local_5d90;
                        local_5d90 = local_5da0;
                        local_5da0 = pQVar23;
                        if (*(int *)pQVar23 != -1) {
                          if (*(int *)pQVar23 != 0) {
                            LOCK();
                            *(int *)pQVar23 = *(int *)pQVar23 + -1;
                            local_5d09 = *(int *)pQVar23 != 0;
                            UNLOCK();
                            if ((bool)local_5d09) goto LAB_1004f3e4e;
                          }
                          QArrayData::deallocate(pQVar23,2,8);
                        }
                      }
LAB_1004f3e4e:
                      FUN_1004f2310(param_1,&local_5d88,&local_5d60,uVar22,&local_5d90,uVar12);
                      if (*(int *)local_5d90 != -1) {
                        if (*(int *)local_5d90 != 0) {
                          LOCK();
                          *(int *)local_5d90 = *(int *)local_5d90 + -1;
                          local_5d09 = *(int *)local_5d90 != 0;
                          UNLOCK();
                          if ((bool)local_5d09) goto LAB_1004f3ec1;
                        }
                        QArrayData::deallocate(local_5d90,2,8);
                      }
                    }
LAB_1004f3ec1:
                    if (*(int *)local_5d88 != -1) {
                      if (*(int *)local_5d88 != 0) {
                        LOCK();
                        *(int *)local_5d88 = *(int *)local_5d88 + -1;
                        local_5d09 = *(int *)local_5d88 != 0;
                        UNLOCK();
                        if ((bool)local_5d09) goto LAB_1004f3f00;
                      }
                      QArrayData::deallocate(local_5d88,2,8);
                    }
                  }
                }
LAB_1004f3f00:
                if (*(int *)local_5d60.field0_0x0 != -1) {
                  if (*(int *)local_5d60.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_5d60.field0_0x0 = *(int *)local_5d60.field0_0x0 + -1;
                    local_5d09 = *(int *)local_5d60.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_5d09) goto LAB_1004f3f40;
                  }
                  QArrayData::deallocate((QArrayData *)local_5d60.field0_0x0,2,8);
                }
              }
LAB_1004f3f40:
              if (*(int *)local_5d58.field0_0x0 != -1) {
                if (*(int *)local_5d58.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_5d58.field0_0x0 = *(int *)local_5d58.field0_0x0 + -1;
                  local_5d09 = *(int *)local_5d58.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_5d09) goto LAB_1004f3f7c;
                }
                QArrayData::deallocate((QArrayData *)local_5d58.field0_0x0,2,8);
              }
LAB_1004f3f7c:
              uVar20 = uVar20 + 1;
            } while (uVar20 < local_5d50);
          }
        } while (sVar8 != -0x589);
        _FSCloseIterator(local_5d48);
        lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
    }
  }
  FUN_100013180(&local_5d38);
  FUN_100013180(&local_5d30);
  if (*(int *)local_5d28 != -1) {
    if (*(int *)local_5d28 != 0) {
      LOCK();
      *(int *)local_5d28 = *(int *)local_5d28 + -1;
      local_5d09 = *(int *)local_5d28 != 0;
      UNLOCK();
      if ((bool)local_5d09) goto LAB_1004f4008;
    }
    QArrayData::deallocate(local_5d28,2,8);
  }
LAB_1004f4008:
  if (*(int *)local_5d20 != -1) {
    if (*(int *)local_5d20 != 0) {
      LOCK();
      *(int *)local_5d20 = *(int *)local_5d20 + -1;
      local_5d09 = *(int *)local_5d20 != 0;
      UNLOCK();
      if ((bool)local_5d09) goto LAB_1004f4044;
    }
    QArrayData::deallocate(local_5d20,2,8);
  }
LAB_1004f4044:
  if (lVar13 == local_38) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

