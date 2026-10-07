
ulong FUN_1002bd570(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  QArrayData *in_stack_fffffffffffffde8;
  undefined4 uVar15;
  ulong local_1e0;
  uint local_1d8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined1 local_188 [24];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 *puStack_160;
  undefined4 *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmDevice::getSystemName();
  iVar5 = FUN_1002c6e30(&local_90);
  if (iVar5 == 0) {
    uVar8 = FUN_1002b8030(&local_90);
    uVar7 = (undefined4)uVar8;
    piVar12 = &DAT_1011c4aa0;
    uVar13 = 0;
    do {
      local_1e0 = uVar8 & 0xffffffff;
      if (*piVar12 != 0) {
        local_1e0 = uVar8 & 0xffffffff;
        local_98 = *(QArrayData **)(piVar12 + 6);
        if (1 < *(int *)local_98 + 1U) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + 1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
        }
        QString::QString(&local_88,0x7c);
        QString::section(&local_a0,&local_90,&local_88,0,1,0);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bd67b;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1002bd67b:
        QString::QString(&local_80,0x7c);
        QString::section(&local_a8,&local_98,&local_80,0,1,0);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bd6db;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1002bd6db:
        cVar4 = operator==(&local_a0,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bd726;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1002bd726:
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bd75c;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1002bd75c:
        local_1d8 = 4;
        uVar8 = local_1e0;
        if (cVar4 != '\0') {
          iVar5 = FUN_1002b7860(param_1,&local_90);
          uVar15 = (undefined4)((ulong)in_stack_fffffffffffffde8 >> 0x20);
          iVar14 = 3;
          if (uVar13 < 0x2f) {
            iVar14 = (0x1f < uVar13) + 1;
          }
          if (-1 < DAT_1011c568c) {
            QString::toUtf8();
            pQVar3 = local_b0;
            lVar10 = *(long *)(local_b0 + 0x10);
            QString::toUtf8();
            in_stack_fffffffffffffde8 = (QArrayData *)CONCAT44(uVar15,iVar5);
            FUN_1008e3970("","USB",0,"Device<%s> speed r:%u v:%u, Found<%s> speed v:%u)",
                          pQVar3 + lVar10,uVar7,in_stack_fffffffffffffde8,
                          local_b8 + *(long *)(local_b8 + 0x10),iVar14);
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002bd862;
              }
              QArrayData::deallocate(local_b8,1,8);
            }
LAB_1002bd862:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002bd8a2;
              }
              QArrayData::deallocate(local_b0,1,8);
            }
          }
LAB_1002bd8a2:
          if (iVar14 == iVar5) {
            uVar8 = uVar13 & 0xffffffff;
            goto LAB_1002bd8b5;
          }
          if (*piVar12 - 1U < 4) {
            uVar6 = FUN_1002bd140(param_1,&local_90);
            uVar8 = (ulong)uVar6;
            if (uVar6 == 0xffffffff) {
              if (*piVar12 != 4) {
                FUN_1002bcd80();
              }
              if (-1 < DAT_1011c568c) {
                QString::toUtf8();
                pQVar3 = local_c0;
                lVar10 = *(long *)(local_c0 + 0x10);
                QString::toUtf8();
                FUN_1008e3970("","USB",0,"Release %s for %s (speed change)",pQVar3 + lVar10);
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002bddbf;
                  }
                  QArrayData::deallocate(local_c8,1,8);
                }
LAB_1002bddbf:
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002bddf5;
                  }
                  QArrayData::deallocate(local_c0,1,8);
                }
              }
LAB_1002bddf5:
              FUN_1002b6210(uVar13);
              uVar8 = local_1e0;
            }
            else {
              uVar9 = (ulong)uVar6;
              (&DAT_1011c4ab0)[uVar9 * 0xc] = piVar12[4];
              uVar11 = *(undefined8 *)(piVar12 + 2);
              *(undefined8 *)(&DAT_1011c4aa0 + uVar9 * 0xc) = *(undefined8 *)piVar12;
              (&DAT_1011c4aa8)[uVar9 * 6] = uVar11;
              QString::operator=((QString *)(&DAT_1011c4ab8 + uVar9 * 6),(QString *)(piVar12 + 6));
              QString::operator=((QString *)(&DAT_1011c4ac0 + uVar9 * 0x30),(QString *)(piVar12 + 8)
                                );
              puVar1 = &DAT_1011c4ac8 + uVar9 * 0x30;
              FUN_10051afa0(puVar1,piVar12 + 10);
              FUN_1002b6210(uVar13);
              iVar5 = FUN_1002c6ef0(&local_90);
              if (iVar5 != 0xfca) {
                QString::QString(&local_78,0x7c);
                QString::section(&local_d0,&local_90,&local_78,0,2,0);
                if (*(int *)local_78.field0_0x0 != -1) {
                  if (*(int *)local_78.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                    local_31 = *(int *)local_78.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002bde66;
                  }
                  QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
                }
LAB_1002bde66:
                QString::QString(&local_70,0x7c);
                QString::section(&local_d8,&local_98,&local_70,0,2,0);
                if (*(int *)local_70.field0_0x0 != -1) {
                  if (*(int *)local_70.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                    local_31 = *(int *)local_70.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002bdec6;
                  }
                  QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
                }
LAB_1002bdec6:
                cVar4 = operator==(&local_d0,&local_d8);
                if (cVar4 == '\0') {
                  cVar4 = '\0';
                }
                else {
                  QString::QString(&local_68,0x7c);
                  QString::section(&local_e0,&local_90,&local_68,5,0xffffffff,0);
                  if (*(int *)local_68.field0_0x0 != -1) {
                    if (*(int *)local_68.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                      local_31 = *(int *)local_68.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bdf44;
                    }
                    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
                  }
LAB_1002bdf44:
                  QString::QString(&local_60,0x7c);
                  QString::section(&local_e8,&local_98,&local_60,5,0xffffffff,0);
                  if (*(int *)local_60.field0_0x0 != -1) {
                    if (*(int *)local_60.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                      local_31 = *(int *)local_60.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bdfa7;
                    }
                    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
                  }
LAB_1002bdfa7:
                  cVar4 = operator==(&local_e0,&local_e8);
                  if (*(int *)local_e8.field0_0x0 != -1) {
                    if (*(int *)local_e8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                      local_31 = *(int *)local_e8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bdff2;
                    }
                    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                  }
LAB_1002bdff2:
                  if (*(int *)local_e0.field0_0x0 != -1) {
                    if (*(int *)local_e0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                      local_31 = *(int *)local_e0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002be125;
                    }
                    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                  }
                }
LAB_1002be125:
                if (*(int *)local_d8.field0_0x0 != -1) {
                  if (*(int *)local_d8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
                    local_31 = *(int *)local_d8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002be15b;
                  }
                  QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
                }
LAB_1002be15b:
                if (*(int *)local_d0.field0_0x0 != -1) {
                  if (*(int *)local_d0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                    local_31 = *(int *)local_d0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002be191;
                  }
                  QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
                }
LAB_1002be191:
                if (cVar4 == '\0') {
                  if (DAT_1011c568c < 0) goto LAB_1002bd8b5;
                  QString::toUtf8();
                  pQVar3 = local_100;
                  uVar8 = (ulong)uVar6;
                  lVar10 = *(long *)(local_100 + 0x10);
                  QString::toUtf8();
                  FUN_1008e3970("","USB",0,"Speed change for %s, use %s",pQVar3 + lVar10);
                  if (*(int *)local_108 != -1) {
                    if (*(int *)local_108 != 0) {
                      LOCK();
                      *(int *)local_108 = *(int *)local_108 + -1;
                      local_31 = *(int *)local_108 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002be37a;
                    }
                    QArrayData::deallocate(local_108,1,8);
                  }
LAB_1002be37a:
                  if (*(int *)local_100 != -1) {
                    if (*(int *)local_100 != 0) {
                      LOCK();
                      *(int *)local_100 = *(int *)local_100 + -1;
                      local_31 = *(int *)local_100 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bd8b5;
                    }
                    QArrayData::deallocate(local_100,1,8);
                  }
LAB_1002bd8b5:
                  QString::QString(&local_58,0x7c);
                  QString::section(&local_110,&local_90,&local_58,0,3,0);
                  if (*(int *)local_58.field0_0x0 != -1) {
                    if (*(int *)local_58.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                      local_31 = *(int *)local_58.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bd915;
                    }
                    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
                  }
LAB_1002bd915:
                  QString::QString(&local_50,0x7c);
                  QString::section(&local_118,&local_98,&local_50,0,3,0);
                  if (*(int *)local_50.field0_0x0 != -1) {
                    if (*(int *)local_50.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
                      local_31 = *(int *)local_50.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bd975;
                    }
                    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
                  }
LAB_1002bd975:
                  cVar4 = operator==(&local_110,&local_118);
                  if (cVar4 == '\0') {
                    cVar4 = '\0';
                  }
                  else {
                    QString::QString(&local_48,0x7c);
                    QString::section(&local_120,&local_90,&local_48,5,0xffffffff,0);
                    if (*(int *)local_48.field0_0x0 != -1) {
                      if (*(int *)local_48.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                        local_31 = *(int *)local_48.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002bd9f3;
                      }
                      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
                    }
LAB_1002bd9f3:
                    QString::QString(&local_40,0x7c);
                    QString::section(&local_128,&local_98,&local_40,5,0xffffffff,0);
                    if (*(int *)local_40.field0_0x0 != -1) {
                      if (*(int *)local_40.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                        local_31 = *(int *)local_40.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002bda56;
                      }
                      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                    }
LAB_1002bda56:
                    cVar4 = operator==(&local_120,&local_128);
                    if (*(int *)local_128.field0_0x0 != -1) {
                      if (*(int *)local_128.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                        local_31 = *(int *)local_128.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002bdaa1;
                      }
                      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                    }
LAB_1002bdaa1:
                    if (*(int *)local_120.field0_0x0 != -1) {
                      if (*(int *)local_120.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                        local_31 = *(int *)local_120.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002bdbaf;
                      }
                      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                    }
                  }
LAB_1002bdbaf:
                  if (*(int *)local_118.field0_0x0 != -1) {
                    if (*(int *)local_118.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                      local_31 = *(int *)local_118.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bdbe5;
                    }
                    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
                  }
LAB_1002bdbe5:
                  if (*(int *)local_110.field0_0x0 != -1) {
                    if (*(int *)local_110.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                      local_31 = *(int *)local_110.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002bdc1b;
                    }
                    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                  }
LAB_1002bdc1b:
                  local_1d8 = 1;
                  if (cVar4 == '\0') {
                    iVar5 = (&DAT_1011c4aa0)[uVar8 * 0xc];
                    if (iVar5 - 1U < 3) {
                      puVar1 = &DAT_1011c4ac8 + uVar8 * 0x30;
                      iVar5 = FUN_1002bf710(puVar1,&local_90);
                      if (iVar5 == 0) {
                        lVar10 = FUN_1007d87f0();
                        if ((ulong)(lVar10 - (&DAT_1011c4aa8)[uVar8 * 6]) < 2000000) {
                          if (0 < DAT_1011c568c) {
                            QString::toUtf8();
                            FUN_1008e3970("","USB",0,
                                          "USB device %s is retained, because reconnected quickly",
                                          local_138 + *(long *)(local_138 + 0x10));
                            if (*(int *)local_138 != -1) {
                              if (*(int *)local_138 != 0) {
                                LOCK();
                                *(int *)local_138 = *(int *)local_138 + -1;
                                local_31 = *(int *)local_138 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002be8ab;
                              }
                              QArrayData::deallocate(local_138,1,8);
                            }
                          }
                        }
                        else {
                          iVar5 = CVmUsbDevice::getConnectReason();
                          if (iVar5 == 1) {
                            if (DAT_1011c566c == 0) {
                              iVar5 = FUN_1002c6ef0(&local_90);
                              if (((iVar5 == 0x5ac) &&
                                  ((uVar6 = FUN_1002c7030(&local_90), uVar6 == 0x1000 ||
                                   ((uVar6 & 0xfffff000) == 0x8000)))) ||
                                 ((iVar5 = FUN_1002c6ef0(&local_98), iVar5 == 0x5ac &&
                                  ((uVar6 = FUN_1002c7030(&local_98), uVar6 == 0x1000 ||
                                   ((uVar6 & 0xfffff000) == 0x8000)))))) {
                                if (0 < DAT_1011c568c) {
                                  QString::toUtf8();
                                  FUN_1008e3970("","USB",0,
                                                "USB device %s is retained, because it is builtin",
                                                local_150 + *(long *)(local_150 + 0x10));
                                  if (*(int *)local_150 != -1) {
                                    if (*(int *)local_150 != 0) {
                                      LOCK();
                                      *(int *)local_150 = *(int *)local_150 + -1;
                                      local_31 = *(int *)local_150 != 0;
                                      UNLOCK();
                                      if ((bool)local_31) goto LAB_1002be8ab;
                                    }
                                    QArrayData::deallocate(local_150,1,8);
                                  }
                                }
                              }
                              else {
                                local_168 = (undefined4 *)0x0;
                                puStack_160 = (undefined4 *)0x0;
                                local_158 = (undefined4 *)0x0;
                                local_16c = 0x3e82;
                                FUN_10002de70(&local_168,&local_16c);
                                local_170 = 0x3e83;
                                if (puStack_160 == local_158) {
                                  FUN_10002de70(&local_168,&local_170);
                                }
                                else {
                                  *puStack_160 = 0x3e83;
                                  puStack_160 = puStack_160 + 1;
                                }
                                FUN_10006a060(local_188);
                                CVmDevice::getUserFriendlyName();
                                FUN_10006a120(local_188,&local_190,0);
                                if (*(int *)local_190 != -1) {
                                  if (*(int *)local_190 != 0) {
                                    LOCK();
                                    *(int *)local_190 = *(int *)local_190 + -1;
                                    local_31 = *(int *)local_190 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_1002be7f8;
                                  }
                                  QArrayData::deallocate(local_190,2,8);
                                }
LAB_1002be7f8:
                                iVar5 = FUN_1000648b0(DAT_1011c3650,0x80008007,&local_168,local_188)
                                ;
                                bVar2 = false;
                                if (iVar5 == 0x3e82) {
                                  iVar5 = FUN_1002bf710(puVar1,&local_90);
                                  bVar2 = true;
                                  if (iVar5 == 0) {
                                    FUN_10000c490(puVar1,&local_90);
                                  }
                                }
                                FUN_10006a680(local_188);
                                if (local_168 != (undefined4 *)0x0) {
                                  if (puStack_160 != local_168) {
                                    puStack_160 = (undefined4 *)
                                                  ((~((long)puStack_160 + (-4 - (long)local_168)) &
                                                   0xfffffffffffffffcU) + (long)puStack_160);
                                  }
                                  operator_delete(local_168);
                                }
                                if (!bVar2) {
                                  FUN_1002bcd80();
                                  if (-1 < DAT_1011c568c) {
                                    QString::toUtf8();
                                    lVar10 = *(long *)(local_198 + 0x10);
                                    QString::toUtf8();
                                    FUN_1008e3970("","USB",0,"Release %s for %s",local_198 + lVar10)
                                    ;
                                    if (*(int *)local_1a0 != -1) {
                                      if (*(int *)local_1a0 != 0) {
                                        LOCK();
                                        *(int *)local_1a0 = *(int *)local_1a0 + -1;
                                        local_31 = *(int *)local_1a0 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_1002beb23;
                                      }
                                      QArrayData::deallocate(local_1a0,1,8);
                                    }
LAB_1002beb23:
                                    if (*(int *)local_198 != -1) {
                                      if (*(int *)local_198 != 0) {
                                        LOCK();
                                        *(int *)local_198 = *(int *)local_198 + -1;
                                        local_31 = *(int *)local_198 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_1002beb5c;
                                      }
                                      QArrayData::deallocate(local_198,1,8);
                                    }
                                  }
LAB_1002beb5c:
                                  local_1d8 = 0;
                                  FUN_1002b6210(uVar8);
                                  uVar8 = local_1e0;
                                  goto LAB_1002be9f0;
                                }
                              }
                            }
                            else if (0 < DAT_1011c568c) {
                              QString::toUtf8();
                              FUN_1008e3970("","USB",0,
                                            "USB device %s is retained, because of grab_port",
                                            local_148 + *(long *)(local_148 + 0x10));
                              if (*(int *)local_148 != -1) {
                                if (*(int *)local_148 != 0) {
                                  LOCK();
                                  *(int *)local_148 = *(int *)local_148 + -1;
                                  local_31 = *(int *)local_148 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1002be8ab;
                                }
                                QArrayData::deallocate(local_148,1,8);
                              }
                            }
                          }
                          else if (0 < DAT_1011c568c) {
                            QString::toUtf8();
                            FUN_1008e3970("","USB",0,
                                          "USB device %s is retained, because connected manually",
                                          local_140 + *(long *)(local_140 + 0x10));
                            if (*(int *)local_140 != -1) {
                              if (*(int *)local_140 != 0) {
                                LOCK();
                                *(int *)local_140 = *(int *)local_140 + -1;
                                local_31 = *(int *)local_140 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002be8ab;
                              }
                              QArrayData::deallocate(local_140,1,8);
                            }
                          }
                        }
                      }
                      else if (0 < DAT_1011c568c) {
                        QString::toUtf8();
                        FUN_1008e3970("","USB",0,
                                      "USB device %s is retained, because found as altname",
                                      local_130 + *(long *)(local_130 + 0x10));
                        if (*(int *)local_130 != -1) {
                          if (*(int *)local_130 != 0) {
                            LOCK();
                            *(int *)local_130 = *(int *)local_130 + -1;
                            local_31 = *(int *)local_130 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002be8ab;
                          }
                          QArrayData::deallocate(local_130,1,8);
                        }
                      }
LAB_1002be8ab:
                      if (-1 < DAT_1011c568c) {
                        QString::toUtf8();
                        lVar10 = *(long *)(local_1a8 + 0x10);
                        QString::toUtf8();
                        FUN_1008e3970("","USB",0,"Reown %s, use %s",local_1a8 + lVar10);
                        if (*(int *)local_1b0 != -1) {
                          if (*(int *)local_1b0 != 0) {
                            LOCK();
                            *(int *)local_1b0 = *(int *)local_1b0 + -1;
                            local_31 = *(int *)local_1b0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002be963;
                          }
                          QArrayData::deallocate(local_1b0,1,8);
                        }
LAB_1002be963:
                        if (*(int *)local_1a8 != -1) {
                          if (*(int *)local_1a8 != 0) {
                            LOCK();
                            *(int *)local_1a8 = *(int *)local_1a8 + -1;
                            local_31 = *(int *)local_1a8 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002be9b0;
                          }
                          QArrayData::deallocate(local_1a8,1,8);
                        }
                      }
LAB_1002be9b0:
                      iVar5 = FUN_1002bf710(puVar1,&local_98);
                      if (iVar5 == 0) {
                        FUN_10000c490(puVar1,&local_98);
                      }
                      uVar11 = FUN_1007d87f0();
                      (&DAT_1011c4aa8)[uVar8 * 6] = uVar11;
                    }
                    else if (iVar5 == 4) {
                      iVar5 = FUN_1002c6ef0(&local_90);
                      if ((iVar5 != 0xfca) || (iVar5 = FUN_1002c7030(&local_90), iVar5 == 6)) {
                        local_1d8 = 0;
                        FUN_1002b6210(uVar8);
                        uVar8 = local_1e0;
                      }
                    }
                    else {
                      local_1d8 = 0;
                      uVar8 = local_1e0;
                      if (-1 < DAT_1011c568c) {
                        QString::toUtf8();
                        lVar10 = *(long *)(local_1b8 + 0x10);
                        QString::toUtf8();
                        in_stack_fffffffffffffde8 = local_1c0 + *(long *)(local_1c0 + 0x10);
                        FUN_1008e3970("","USB",0,
                                      "Invalid port state %u for %s, when searching for %s",iVar5,
                                      local_1b8 + lVar10,in_stack_fffffffffffffde8);
                        if (*(int *)local_1c0 != -1) {
                          if (*(int *)local_1c0 != 0) {
                            LOCK();
                            *(int *)local_1c0 = *(int *)local_1c0 + -1;
                            local_31 = *(int *)local_1c0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002be52c;
                          }
                          QArrayData::deallocate(local_1c0,1,8);
                        }
LAB_1002be52c:
                        if (*(int *)local_1b8 != -1) {
                          if (*(int *)local_1b8 != 0) {
                            LOCK();
                            *(int *)local_1b8 = *(int *)local_1b8 + -1;
                            local_31 = *(int *)local_1b8 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002be9f0;
                          }
                          QArrayData::deallocate(local_1b8,1,8);
                        }
                      }
                    }
                  }
                  goto LAB_1002be9f0;
                }
              }
              if (-1 < DAT_1011c568c) {
                QString::toUtf8();
                pQVar3 = local_f0;
                lVar10 = *(long *)(local_f0 + 0x10);
                QString::toUtf8();
                FUN_1008e3970("","USB",0,"Reown %s, use %s (speed change)",pQVar3 + lVar10);
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002be249;
                  }
                  QArrayData::deallocate(local_f8,1,8);
                }
LAB_1002be249:
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002be28c;
                  }
                  QArrayData::deallocate(local_f0,1,8);
                }
              }
LAB_1002be28c:
              iVar5 = FUN_1002bf710(puVar1,&local_98);
              if (iVar5 == 0) {
                FUN_10000c490(puVar1,&local_98);
              }
              uVar11 = FUN_1007d87f0();
              (&DAT_1011c4aa8)[uVar9 * 6] = uVar11;
              local_1d8 = 1;
              local_1e0 = (ulong)uVar6;
              uVar8 = local_1e0;
            }
          }
        }
LAB_1002be9f0:
        local_1e0 = uVar8;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bea26;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1002bea26:
        if ((local_1d8 | 4) != 4) break;
      }
      uVar8 = local_1e0;
      uVar13 = uVar13 + 1;
      piVar12 = piVar12 + 0xc;
      local_1e0 = 0xffffffff;
    } while (uVar13 < 0x3d);
  }
  else {
    uVar6 = FUN_1002b9040(&local_90);
    local_1e0 = (ulong)uVar6;
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return local_1e0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return local_1e0;
}

