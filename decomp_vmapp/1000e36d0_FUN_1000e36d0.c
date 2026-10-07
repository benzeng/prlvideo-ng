
void FUN_1000e36d0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  QString QVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  long lVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint *puVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  QArrayData *pQVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  long local_e0c0;
  QArrayData *local_e0a0;
  QArrayData *local_e098;
  QString local_e090;
  QArrayData *local_e088;
  QArrayData *local_e080;
  QArrayData *local_e078;
  QArrayData *local_e070;
  QString local_e068;
  undefined1 local_e059;
  undefined1 local_e058 [16];
  ushort local_e048 [2];
  undefined8 auStack_e044 [2];
  QArrayData aQStack_e034 [57320];
  undefined4 local_4c;
  undefined1 local_48 [16];
  long local_38;
  
  puVar13 = DAT_1011c3778;
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = *(int *)(DAT_1011c3698 + 0x1948);
  local_38 = lVar17;
  if (iVar1 != 4) {
    uVar2 = *(uint *)(*(long *)(DAT_1011c3698 + 0x109c8) + 0x1f0);
    ___bzero(local_e048,0xe000);
    if (puVar13 != &DAT_1011c3780) {
      local_e0c0 = 0;
      uVar9 = 0;
      bVar25 = false;
      do {
        if ((iVar1 == 6 || (uVar2 & 0x5000000) != 0) || ((*(byte *)(puVar13 + 6) & 1) != 0)) {
          local_e090.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar13[4];
          if (1 < *(int *)local_e090.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_e090.field0_0x0 = *(int *)local_e090.field0_0x0 + 1;
            local_e059 = *(int *)local_e090.field0_0x0 != 0;
            UNLOCK();
          }
          QString::right((int)&local_e098);
          FUN_1007d6920(local_e058,&local_e098);
          if (*(int *)local_e098 != -1) {
            if (*(int *)local_e098 != 0) {
              LOCK();
              *(int *)local_e098 = *(int *)local_e098 + -1;
              local_e059 = *(int *)local_e098 != 0;
              UNLOCK();
              if ((bool)local_e059) goto LAB_1000e381e;
            }
            QArrayData::deallocate(local_e098,2,8);
          }
LAB_1000e381e:
          QString::chop((int)&local_e090);
          iVar7 = FUN_1007ea6f0(local_e058,&DAT_1011b6cc0);
          plVar10 = DAT_1011b6d20;
          if ((iVar7 == 0) && (uVar3 = *(uint *)(DAT_1011b6d20 + 4), uVar3 != 0)) {
            uVar8 = qHash(&local_e090,*(uint *)((long)DAT_1011b6d20 + 0x24));
            uVar22 = (ulong)uVar8 % (ulong)uVar3;
            plVar18 = *(long **)(plVar10[1] + uVar22 * 8);
            if (plVar18 == plVar10) goto LAB_1000e38c0;
            plVar16 = (long *)(plVar10[1] + uVar22 * 8);
            do {
              plVar19 = plVar10;
              if (*(uint *)(plVar18 + 1) == uVar8) {
                cVar6 = operator==(&local_e090,(QString *)(plVar18 + 2));
                plVar10 = (long *)*plVar16;
                plVar18 = plVar10;
                plVar19 = DAT_1011b6d20;
                if (cVar6 != '\0') break;
              }
              plVar10 = plVar19;
              plVar16 = plVar18;
              plVar18 = (long *)*plVar16;
              plVar19 = plVar10;
            } while (plVar18 != plVar10);
            if (plVar10 == plVar19) goto LAB_1000e38c0;
          }
          else {
LAB_1000e38c0:
            if (*(int *)(local_e090.field0_0x0 + 4) < 0x101) {
              iVar7 = *(int *)(puVar13[5] + 4) + 0x16 + *(int *)(local_e090.field0_0x0 + 4) * 2;
              if (iVar7 + uVar9 < 0xdffd) {
                uVar22 = (ulong)uVar9;
                pvVar12 = (void *)QString::utf16();
                QVar5.field0_0x0 = local_e090.field0_0x0;
                _memcpy((void *)((long)local_e048 + (ulong)(uVar9 + 0x16)),pvVar12,
                        (long)*(int *)(local_e090.field0_0x0 + 4) * 2);
                aQStack_e034[uVar22] = *(QArrayData *)(QVar5.field0_0x0 + 4);
                iVar4 = *(int *)(QVar5.field0_0x0 + 4);
                aQStack_e034[uVar22 + 1] = *(QArrayData *)(puVar13 + 6);
                *(undefined2 *)((long)local_e048 + uVar22 + 2) = *(undefined2 *)(puVar13[5] + 4);
                auVar27 = FUN_1007d6c90(local_e058);
                puVar11 = puVar13 + 5;
                uVar9 = uVar9 + 0x16 + iVar4 * 2;
                *(long *)((long)local_e048 + uVar22 + 4) = auVar27._0_8_;
                *(long *)((long)auStack_e044 + uVar22 + 8) = auVar27._8_8_;
                puVar20 = (uint *)*puVar11;
                if ((1 < *puVar20) || (*(long *)(puVar20 + 4) != 0x18)) {
                  QByteArray::reallocData(puVar11,puVar20[1] + 1,puVar20[2] >> 0x1f);
                  puVar20 = (uint *)*puVar11;
                }
                local_e0c0 = (long)local_e048 + uVar22;
                _memcpy((void *)((long)local_e048 + (ulong)uVar9),
                        (void *)((long)puVar20 + *(long *)(puVar20 + 4)),
                        (ulong)*(ushort *)((long)local_e048 + uVar22 + 2));
                uVar9 = *(ushort *)((long)local_e048 + uVar22 + 2) + uVar9;
                *(short *)((long)local_e048 + uVar22) = (short)iVar7;
              }
              else {
                if (!bVar25) {
                  FUN_1008e3970("","vm",0,"There are too much data to write (at %u size %u)",uVar9,
                                *(undefined2 *)(local_e0c0 + 2));
                  FUN_1008e3970("","vm",0,"=== Dump of non-volatile efi-vars ===");
                  puVar11 = DAT_1011c3778;
                  while (puVar11 != &DAT_1011c3780) {
                    if ((*(byte *)(puVar11 + 6) & 1) != 0) {
                      local_e068.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar11[4];
                      if (1 < *(int *)local_e068.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_e068.field0_0x0 = *(int *)local_e068.field0_0x0 + 1;
                        local_e059 = *(int *)local_e068.field0_0x0 != 0;
                        UNLOCK();
                      }
                      QString::right((int)&local_e070);
                      FUN_1007d6920(local_48,&local_e070);
                      if (*(int *)local_e070 != -1) {
                        if (*(int *)local_e070 != 0) {
                          LOCK();
                          *(int *)local_e070 = *(int *)local_e070 + -1;
                          local_e059 = *(int *)local_e070 != 0;
                          UNLOCK();
                          if ((bool)local_e059) goto LAB_1000e39ed;
                        }
                        QArrayData::deallocate(local_e070,2,8);
                      }
LAB_1000e39ed:
                      QString::chop((int)&local_e068);
                      iVar7 = FUN_1007ea6f0(local_48,&DAT_1011b6cc0);
                      plVar10 = DAT_1011b6d20;
                      if ((iVar7 == 0) && (uVar3 = *(uint *)(DAT_1011b6d20 + 4), uVar3 != 0)) {
                        uVar8 = qHash(&local_e068,*(uint *)((long)DAT_1011b6d20 + 0x24));
                        uVar22 = (ulong)uVar8 % (ulong)uVar3;
                        plVar18 = *(long **)(plVar10[1] + uVar22 * 8);
                        if (plVar18 == plVar10) goto LAB_1000e3aa0;
                        plVar16 = (long *)(plVar10[1] + uVar22 * 8);
                        do {
                          plVar19 = plVar18;
                          plVar21 = plVar10;
                          if (*(uint *)(plVar18 + 1) == uVar8) {
                            cVar6 = operator==(&local_e068,(QString *)(plVar18 + 2));
                            plVar10 = (long *)*plVar16;
                            plVar19 = plVar10;
                            plVar21 = DAT_1011b6d20;
                            if (cVar6 != '\0') break;
                          }
                          plVar10 = plVar21;
                          plVar18 = (long *)*plVar19;
                          plVar21 = plVar10;
                          plVar16 = plVar19;
                        } while (plVar18 != plVar10);
                        if (plVar10 == plVar21) goto LAB_1000e3aa0;
                      }
                      else {
LAB_1000e3aa0:
                        iVar7 = *(int *)(local_e068.field0_0x0 + 4);
                        iVar4 = *(int *)(puVar11[5] + 4);
                        QString::toUtf8();
                        pQVar24 = local_e078 + *(long *)(local_e078 + 0x10);
                        FUN_1007d6a70(&local_e088,local_48);
                        QString::toUtf8();
                        FUN_1008e3970("","vm",0,"%s {%s} record_size %u",pQVar24,
                                      local_e080 + *(long *)(local_e080 + 0x10),
                                      iVar4 + 0x16 + iVar7 * 2);
                        if (*(int *)local_e080 != -1) {
                          if (*(int *)local_e080 != 0) {
                            LOCK();
                            *(int *)local_e080 = *(int *)local_e080 + -1;
                            local_e059 = *(int *)local_e080 != 0;
                            UNLOCK();
                            if ((bool)local_e059) goto LAB_1000e3b67;
                          }
                          QArrayData::deallocate(local_e080,1,8);
                        }
LAB_1000e3b67:
                        if (*(int *)local_e088 != -1) {
                          if (*(int *)local_e088 != 0) {
                            LOCK();
                            *(int *)local_e088 = *(int *)local_e088 + -1;
                            local_e059 = *(int *)local_e088 != 0;
                            UNLOCK();
                            if ((bool)local_e059) goto LAB_1000e3ba3;
                          }
                          QArrayData::deallocate(local_e088,2,8);
                        }
LAB_1000e3ba3:
                        if (*(int *)local_e078 != -1) {
                          if (*(int *)local_e078 != 0) {
                            LOCK();
                            *(int *)local_e078 = *(int *)local_e078 + -1;
                            local_e059 = *(int *)local_e078 != 0;
                            UNLOCK();
                            if ((bool)local_e059) goto LAB_1000e3bdf;
                          }
                          QArrayData::deallocate(local_e078,1,8);
                        }
                      }
LAB_1000e3bdf:
                      if (*(int *)local_e068.field0_0x0 != -1) {
                        if (*(int *)local_e068.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_e068.field0_0x0 = *(int *)local_e068.field0_0x0 + -1;
                          local_e059 = *(int *)local_e068.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_e059) goto LAB_1000e3c20;
                        }
                        QArrayData::deallocate((QArrayData *)local_e068.field0_0x0,2,8);
                      }
                    }
LAB_1000e3c20:
                    puVar23 = (undefined8 *)puVar11[1];
                    if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
                      do {
                        puVar23 = (undefined8 *)puVar11[2];
                        bVar25 = (undefined8 *)*puVar23 != puVar11;
                        puVar11 = puVar23;
                      } while (bVar25);
                    }
                    else {
                      do {
                        puVar11 = puVar23;
                        puVar23 = (undefined8 *)*puVar11;
                      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
                    }
                  }
                  FUN_1008e3970("","vm",0,"============ End of dump ============");
                  bVar25 = true;
                }
                QString::toUtf8();
                FUN_1008e3970("","vm",0,"EFI-var %s were not stored.",
                              local_e0a0 + *(long *)(local_e0a0 + 0x10));
                if (*(int *)local_e0a0 != -1) {
                  if (*(int *)local_e0a0 != 0) {
                    LOCK();
                    *(int *)local_e0a0 = *(int *)local_e0a0 + -1;
                    local_e059 = *(int *)local_e0a0 != 0;
                    UNLOCK();
                    if ((bool)local_e059) goto LAB_1000e3e20;
                  }
                  QArrayData::deallocate(local_e0a0,1,8);
                }
              }
            }
          }
LAB_1000e3e20:
          if (*(int *)local_e090.field0_0x0 != -1) {
            if (*(int *)local_e090.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e090.field0_0x0 = *(int *)local_e090.field0_0x0 + -1;
              local_e059 = *(int *)local_e090.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_e059) goto LAB_1000e3e8c;
            }
            QArrayData::deallocate((QArrayData *)local_e090.field0_0x0,2,8);
          }
        }
LAB_1000e3e8c:
        puVar11 = (undefined8 *)puVar13[1];
        if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
          do {
            puVar23 = (undefined8 *)puVar13[2];
            bVar26 = (undefined8 *)*puVar23 != puVar13;
            puVar13 = puVar23;
          } while (bVar26);
        }
        else {
          do {
            puVar23 = puVar11;
            puVar11 = (undefined8 *)*puVar23;
          } while ((undefined8 *)*puVar23 != (undefined8 *)0x0);
        }
        puVar13 = puVar23;
      } while (puVar23 != &DAT_1011c3780);
    }
    local_4c = 2;
    cVar6 = (**(code **)(*param_1 + 0x88))(param_1,0x2000);
    lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (cVar6 == '\0') {
      pcVar15 = "Error seeking file for writing EFI values";
    }
    else {
      lVar14 = QIODevice::write((char *)param_1,(longlong)local_e048);
      if (lVar14 == 0xe000) goto LAB_1000e3f5a;
      pcVar15 = "Error writing EFI variables section";
    }
    FUN_1008e3970("","vm",0,pcVar15);
  }
LAB_1000e3f5a:
  if (lVar17 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

