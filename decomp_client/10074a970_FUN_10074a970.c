
undefined8 FUN_10074a970(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_728;
  QArrayData *local_720;
  QArrayData *local_718;
  QArrayData *local_710;
  undefined1 local_708 [768];
  QArrayData *local_408;
  QArrayData *local_400;
  QArrayData *local_3f8;
  QArrayData *local_3f0;
  QArrayData *local_3e8;
  QArrayData *local_3e0;
  QArrayData *local_3d8;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100ce2a10(local_708);
  iVar2 = FUN_100ce0640(param_1);
  iVar3 = FUN_100ce4100(local_708,param_1,iVar2);
  if (iVar3 != 0x8000000) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to parse Vm config [%s] as vendor type [%d], error [0x%X]",
                  local_710 + *(long *)(local_710 + 0x10),iVar2,iVar3);
    uVar4 = 0xffff;
    if (*(int *)local_710 != -1) {
      if (*(int *)local_710 != 0) {
        LOCK();
        *(int *)local_710 = *(int *)local_710 + -1;
        local_21 = *(int *)local_710 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10074da58;
      }
      QArrayData::deallocate(local_710,1,8);
    }
    goto LAB_10074da58;
  }
  FUN_100d02e10(&local_718,local_708);
  if (iVar2 == 4) {
    FUN_100d02e10(&local_728,local_708);
    local_30 = (QArrayData *)QString::fromAscii_helper("win31",5);
    iVar2 = QString::compare(&local_728,&local_30,0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10074aa45;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_10074aa45:
    uVar4 = 0x801;
    if (iVar2 != 0) {
      local_38 = (QArrayData *)QString::fromAscii_helper("win95",5);
      iVar2 = QString::compare(&local_728,&local_38,0);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10074aaac;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_10074aaac:
      uVar4 = 0x802;
      if (iVar2 != 0) {
        local_40 = (QArrayData *)QString::fromAscii_helper("win98",5);
        iVar2 = QString::compare(&local_728,&local_40,0);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_21 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10074ab13;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_10074ab13:
        uVar4 = 0x803;
        if (iVar2 != 0) {
          local_48 = (QArrayData *)QString::fromAscii_helper("winme",5);
          iVar2 = QString::compare(&local_728,&local_48,0);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_21 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_10074ab7a;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10074ab7a:
          uVar4 = 0x804;
          if (iVar2 != 0) {
            local_50 = (QArrayData *)QString::fromAscii_helper("winnt4",6);
            iVar2 = QString::compare(&local_728,&local_50,0);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_21 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_10074abe1;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_10074abe1:
            uVar4 = 0x805;
            if (iVar2 != 0) {
              local_58 = (QArrayData *)QString::fromAscii_helper("win2k",5);
              iVar2 = QString::compare(&local_728,&local_58,0);
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_21 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_21) goto LAB_10074ac48;
                }
                QArrayData::deallocate(local_58,2,8);
              }
LAB_10074ac48:
              uVar4 = 0x806;
              if (iVar2 != 0) {
                local_60 = (QArrayData *)QString::fromAscii_helper("winxp",5);
                iVar2 = QString::compare(&local_728,&local_60,0);
                if (*(int *)local_60 != -1) {
                  if (*(int *)local_60 != 0) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + -1;
                    local_21 = *(int *)local_60 != 0;
                    UNLOCK();
                    if ((bool)local_21) goto LAB_10074acaf;
                  }
                  QArrayData::deallocate(local_60,2,8);
                }
LAB_10074acaf:
                uVar4 = 0x807;
                if (iVar2 != 0) {
                  local_68 = (QArrayData *)QString::fromAscii_helper("win2k3",6);
                  iVar2 = QString::compare(&local_728,&local_68,0);
                  if (*(int *)local_68 != -1) {
                    if (*(int *)local_68 != 0) {
                      LOCK();
                      *(int *)local_68 = *(int *)local_68 + -1;
                      local_21 = *(int *)local_68 != 0;
                      UNLOCK();
                      if ((bool)local_21) goto LAB_10074ad16;
                    }
                    QArrayData::deallocate(local_68,2,8);
                  }
LAB_10074ad16:
                  uVar4 = 0x808;
                  if (iVar2 != 0) {
                    local_70 = (QArrayData *)QString::fromAscii_helper("winvista",8);
                    iVar2 = QString::compare(&local_728,&local_70,0);
                    if (*(int *)local_70 != -1) {
                      if (*(int *)local_70 != 0) {
                        LOCK();
                        *(int *)local_70 = *(int *)local_70 + -1;
                        local_21 = *(int *)local_70 != 0;
                        UNLOCK();
                        if ((bool)local_21) goto LAB_10074ad7d;
                      }
                      QArrayData::deallocate(local_70,2,8);
                    }
LAB_10074ad7d:
                    if (iVar2 == 0) {
                      uVar4 = 0x809;
                    }
                    else {
                      local_78 = (QArrayData *)QString::fromAscii_helper("win2k8",6);
                      iVar2 = QString::compare(&local_728,&local_78,0);
                      if (*(int *)local_78 != -1) {
                        if (*(int *)local_78 != 0) {
                          LOCK();
                          *(int *)local_78 = *(int *)local_78 + -1;
                          local_21 = *(int *)local_78 != 0;
                          UNLOCK();
                          if ((bool)local_21) goto LAB_10074adde;
                        }
                        QArrayData::deallocate(local_78,2,8);
                      }
LAB_10074adde:
                      uVar4 = 0x8ff;
                      if (iVar2 != 0) {
                        local_80 = (QArrayData *)QString::fromAscii_helper("Windows31",9);
                        iVar2 = QString::compare(&local_728,&local_80,0);
                        if (*(int *)local_80 != -1) {
                          if (*(int *)local_80 != 0) {
                            LOCK();
                            *(int *)local_80 = *(int *)local_80 + -1;
                            local_21 = *(int *)local_80 != 0;
                            UNLOCK();
                            if ((bool)local_21) goto LAB_10074ae45;
                          }
                          QArrayData::deallocate(local_80,2,8);
                        }
LAB_10074ae45:
                        uVar4 = 0x801;
                        if (iVar2 != 0) {
                          local_88 = (QArrayData *)QString::fromAscii_helper("Windows95",9);
                          iVar2 = QString::compare(&local_728,&local_88,0);
                          if (*(int *)local_88 != -1) {
                            if (*(int *)local_88 != 0) {
                              LOCK();
                              *(int *)local_88 = *(int *)local_88 + -1;
                              local_21 = *(int *)local_88 != 0;
                              UNLOCK();
                              if ((bool)local_21) goto LAB_10074aeac;
                            }
                            QArrayData::deallocate(local_88,2,8);
                          }
LAB_10074aeac:
                          uVar4 = 0x802;
                          if (iVar2 != 0) {
                            local_90 = (QArrayData *)QString::fromAscii_helper("Windows98",9);
                            iVar2 = QString::compare(&local_728,&local_90,0);
                            if (*(int *)local_90 != -1) {
                              if (*(int *)local_90 != 0) {
                                LOCK();
                                *(int *)local_90 = *(int *)local_90 + -1;
                                local_21 = *(int *)local_90 != 0;
                                UNLOCK();
                                if ((bool)local_21) goto LAB_10074af1f;
                              }
                              QArrayData::deallocate(local_90,2,8);
                            }
LAB_10074af1f:
                            uVar4 = 0x803;
                            if (iVar2 != 0) {
                              local_98 = (QArrayData *)QString::fromAscii_helper("WindowsMe",9);
                              iVar2 = QString::compare(&local_728,&local_98,0);
                              if (*(int *)local_98 != -1) {
                                if (*(int *)local_98 != 0) {
                                  LOCK();
                                  *(int *)local_98 = *(int *)local_98 + -1;
                                  local_21 = *(int *)local_98 != 0;
                                  UNLOCK();
                                  if ((bool)local_21) goto LAB_10074af92;
                                }
                                QArrayData::deallocate(local_98,2,8);
                              }
LAB_10074af92:
                              uVar4 = 0x804;
                              if (iVar2 != 0) {
                                local_a0 = (QArrayData *)QString::fromAscii_helper("WindowsNT",9);
                                iVar2 = QString::compare(&local_728,&local_a0,0);
                                bVar5 = true;
                                if (iVar2 != 0) {
                                  local_a8 = (QArrayData *)
                                             QString::fromAscii_helper("WindowsNT4",10);
                                  iVar2 = QString::compare(&local_728,&local_a8,0);
                                  bVar5 = iVar2 == 0;
                                  if (*(int *)local_a8 != -1) {
                                    if (*(int *)local_a8 != 0) {
                                      LOCK();
                                      *(int *)local_a8 = *(int *)local_a8 + -1;
                                      local_21 = *(int *)local_a8 != 0;
                                      UNLOCK();
                                      if ((bool)local_21) goto LAB_10074b03b;
                                    }
                                    QArrayData::deallocate(local_a8,2,8);
                                  }
                                }
LAB_10074b03b:
                                if (*(int *)local_a0 != -1) {
                                  if (*(int *)local_a0 != 0) {
                                    LOCK();
                                    *(int *)local_a0 = *(int *)local_a0 + -1;
                                    local_21 = *(int *)local_a0 != 0;
                                    UNLOCK();
                                    if ((bool)local_21) goto LAB_10074b071;
                                  }
                                  QArrayData::deallocate(local_a0,2,8);
                                }
LAB_10074b071:
                                uVar4 = 0x805;
                                if (!bVar5) {
                                  local_b0 = (QArrayData *)
                                             QString::fromAscii_helper("Windows2000",0xb);
                                  iVar2 = QString::compare(&local_728,&local_b0,0);
                                  if (*(int *)local_b0 != -1) {
                                    if (*(int *)local_b0 != 0) {
                                      LOCK();
                                      *(int *)local_b0 = *(int *)local_b0 + -1;
                                      local_21 = *(int *)local_b0 != 0;
                                      UNLOCK();
                                      if ((bool)local_21) goto LAB_10074b0e4;
                                    }
                                    QArrayData::deallocate(local_b0,2,8);
                                  }
LAB_10074b0e4:
                                  uVar4 = 0x806;
                                  if (iVar2 != 0) {
                                    local_b8 = (QArrayData *)
                                               QString::fromAscii_helper("WindowsXP",9);
                                    iVar2 = QString::compare(&local_728,&local_b8,0);
                                    bVar5 = true;
                                    if (iVar2 != 0) {
                                      local_c0 = (QArrayData *)
                                                 QString::fromAscii_helper("WindowsXP_64",0xc);
                                      iVar2 = QString::compare(&local_728,&local_c0,0);
                                      bVar5 = iVar2 == 0;
                                      if (*(int *)local_c0 != -1) {
                                        if (*(int *)local_c0 != 0) {
                                          LOCK();
                                          *(int *)local_c0 = *(int *)local_c0 + -1;
                                          local_21 = *(int *)local_c0 != 0;
                                          UNLOCK();
                                          if ((bool)local_21) goto LAB_10074b18d;
                                        }
                                        QArrayData::deallocate(local_c0,2,8);
                                      }
                                    }
LAB_10074b18d:
                                    if (*(int *)local_b8 != -1) {
                                      if (*(int *)local_b8 != 0) {
                                        LOCK();
                                        *(int *)local_b8 = *(int *)local_b8 + -1;
                                        local_21 = *(int *)local_b8 != 0;
                                        UNLOCK();
                                        if ((bool)local_21) goto LAB_10074b1c3;
                                      }
                                      QArrayData::deallocate(local_b8,2,8);
                                    }
LAB_10074b1c3:
                                    uVar4 = 0x807;
                                    if (!bVar5) {
                                      local_c8 = (QArrayData *)
                                                 QString::fromAscii_helper("Windows2003",0xb);
                                      iVar2 = QString::compare(&local_728,&local_c8,0);
                                      bVar5 = true;
                                      if (iVar2 != 0) {
                                        local_d0 = (QArrayData *)
                                                   QString::fromAscii_helper("Windows2003_64",0xe);
                                        iVar2 = QString::compare(&local_728,&local_d0,0);
                                        bVar5 = iVar2 == 0;
                                        if (*(int *)local_d0 != -1) {
                                          if (*(int *)local_d0 != 0) {
                                            LOCK();
                                            *(int *)local_d0 = *(int *)local_d0 + -1;
                                            local_21 = *(int *)local_d0 != 0;
                                            UNLOCK();
                                            if ((bool)local_21) goto LAB_10074b26c;
                                          }
                                          QArrayData::deallocate(local_d0,2,8);
                                        }
                                      }
LAB_10074b26c:
                                      if (*(int *)local_c8 != -1) {
                                        if (*(int *)local_c8 != 0) {
                                          LOCK();
                                          *(int *)local_c8 = *(int *)local_c8 + -1;
                                          local_21 = *(int *)local_c8 != 0;
                                          UNLOCK();
                                          if ((bool)local_21) goto LAB_10074b2a2;
                                        }
                                        QArrayData::deallocate(local_c8,2,8);
                                      }
LAB_10074b2a2:
                                      uVar4 = 0x808;
                                      if (!bVar5) {
                                        local_d8 = (QArrayData *)
                                                   QString::fromAscii_helper("WindowsVista",0xc);
                                        iVar2 = QString::compare(&local_728,&local_d8,0);
                                        if (iVar2 == 0) {
                                          if (*(int *)local_d8 == -1) {
                                            uVar4 = 0x809;
                                          }
                                          else {
                                            if (*(int *)local_d8 != 0) {
                                              LOCK();
                                              *(int *)local_d8 = *(int *)local_d8 + -1;
                                              local_21 = *(int *)local_d8 != 0;
                                              UNLOCK();
                                              if ((bool)local_21) {
                                                uVar4 = 0x809;
                                                goto LAB_10074d9ec;
                                              }
                                            }
                                            QArrayData::deallocate(local_d8,2,8);
                                            uVar4 = 0x809;
                                          }
                                        }
                                        else {
                                          local_e0 = (QArrayData *)
                                                     QString::fromAscii_helper
                                                               ("WindowsVista_64",0xf);
                                          iVar2 = QString::compare(&local_728,&local_e0,0);
                                          if (*(int *)local_e0 != -1) {
                                            if (*(int *)local_e0 != 0) {
                                              LOCK();
                                              *(int *)local_e0 = *(int *)local_e0 + -1;
                                              local_21 = *(int *)local_e0 != 0;
                                              UNLOCK();
                                              if ((bool)local_21) goto LAB_10074b34a;
                                            }
                                            QArrayData::deallocate(local_e0,2,8);
                                          }
LAB_10074b34a:
                                          if (*(int *)local_d8 != -1) {
                                            if (*(int *)local_d8 != 0) {
                                              LOCK();
                                              *(int *)local_d8 = *(int *)local_d8 + -1;
                                              local_21 = *(int *)local_d8 != 0;
                                              UNLOCK();
                                              if ((bool)local_21) goto LAB_10074b380;
                                            }
                                            QArrayData::deallocate(local_d8,2,8);
                                          }
LAB_10074b380:
                                          uVar4 = 0x809;
                                          if (iVar2 != 0) {
                                            local_e8 = (QArrayData *)
                                                       QString::fromAscii_helper("Windows2008",0xb);
                                            iVar2 = QString::compare(&local_728,&local_e8,0);
                                            if (iVar2 == 0) {
                                              uVar4 = 0x80a;
                                              if (*(int *)local_e8 != -1) {
                                                if (*(int *)local_e8 != 0) {
                                                  LOCK();
                                                  *(int *)local_e8 = *(int *)local_e8 + -1;
                                                  local_21 = *(int *)local_e8 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_21) goto LAB_10074d9ec;
                                                }
                                                QArrayData::deallocate(local_e8,2,8);
                                              }
                                            }
                                            else {
                                              local_f0 = (QArrayData *)
                                                         QString::fromAscii_helper
                                                                   ("Windows2008_64",0xe);
                                              iVar2 = QString::compare(&local_728,&local_f0,0);
                                              if (*(int *)local_f0 != -1) {
                                                if (*(int *)local_f0 != 0) {
                                                  LOCK();
                                                  *(int *)local_f0 = *(int *)local_f0 + -1;
                                                  local_21 = *(int *)local_f0 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_21) goto LAB_10074b429;
                                                }
                                                QArrayData::deallocate(local_f0,2,8);
                                              }
LAB_10074b429:
                                              if (*(int *)local_e8 != -1) {
                                                if (*(int *)local_e8 != 0) {
                                                  LOCK();
                                                  *(int *)local_e8 = *(int *)local_e8 + -1;
                                                  local_21 = *(int *)local_e8 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_21) goto LAB_10074b45f;
                                                }
                                                QArrayData::deallocate(local_e8,2,8);
                                              }
LAB_10074b45f:
                                              uVar4 = 0x80a;
                                              if (iVar2 != 0) {
                                                local_f8 = (QArrayData *)
                                                           QString::fromAscii_helper("Windows7",8);
                                                iVar2 = QString::compare(&local_728,&local_f8,0);
                                                if (iVar2 == 0) {
                                                  uVar4 = 0x80b;
                                                  if (*(int *)local_f8 != -1) {
                                                    if (*(int *)local_f8 != 0) {
                                                      LOCK();
                                                      *(int *)local_f8 = *(int *)local_f8 + -1;
                                                      local_21 = *(int *)local_f8 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074d9ec;
                                                    }
                                                    QArrayData::deallocate(local_f8,2,8);
                                                  }
                                                }
                                                else {
                                                  local_100 = (QArrayData *)
                                                              QString::fromAscii_helper
                                                                        ("Windows7_64",0xb);
                                                  iVar2 = QString::compare(&local_728,&local_100,0);
                                                  if (*(int *)local_100 != -1) {
                                                    if (*(int *)local_100 != 0) {
                                                      LOCK();
                                                      *(int *)local_100 = *(int *)local_100 + -1;
                                                      local_21 = *(int *)local_100 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074b509;
                                                    }
                                                    QArrayData::deallocate(local_100,2,8);
                                                  }
LAB_10074b509:
                                                  if (*(int *)local_f8 != -1) {
                                                    if (*(int *)local_f8 != 0) {
                                                      LOCK();
                                                      *(int *)local_f8 = *(int *)local_f8 + -1;
                                                      local_21 = *(int *)local_f8 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074b53f;
                                                    }
                                                    QArrayData::deallocate(local_f8,2,8);
                                                  }
LAB_10074b53f:
                                                  uVar4 = 0x80b;
                                                  if (iVar2 != 0) {
                                                    local_108 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("Windows8",8);
                                                    iVar2 = QString::compare(&local_728,&local_108,0
                                                                            );
                                                    if (iVar2 == 0) {
                                                      uVar4 = 0x80c;
                                                      if (*(int *)local_108 != -1) {
                                                        if (*(int *)local_108 != 0) {
                                                          LOCK();
                                                          *(int *)local_108 = *(int *)local_108 + -1
                                                          ;
                                                          local_21 = *(int *)local_108 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074d9ec;
                                                        }
                                                        QArrayData::deallocate(local_108,2,8);
                                                      }
                                                    }
                                                    else {
                                                      local_110 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("Windows8_64",0xb);
                                                      iVar2 = QString::compare(&local_728,&local_110
                                                                               ,0);
                                                      if (*(int *)local_110 != -1) {
                                                        if (*(int *)local_110 != 0) {
                                                          LOCK();
                                                          *(int *)local_110 = *(int *)local_110 + -1
                                                          ;
                                                          local_21 = *(int *)local_110 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074b5e9;
                                                        }
                                                        QArrayData::deallocate(local_110,2,8);
                                                      }
LAB_10074b5e9:
                                                      if (*(int *)local_108 != -1) {
                                                        if (*(int *)local_108 != 0) {
                                                          LOCK();
                                                          *(int *)local_108 = *(int *)local_108 + -1
                                                          ;
                                                          local_21 = *(int *)local_108 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074b61f;
                                                        }
                                                        QArrayData::deallocate(local_108,2,8);
                                                      }
LAB_10074b61f:
                                                      uVar4 = 0x80c;
                                                      if (iVar2 != 0) {
                                                        local_118 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("Windows81",9);
                                                        iVar2 = QString::compare(&local_728,
                                                                                 &local_118,0);
                                                        if (iVar2 == 0) {
                                                          uVar4 = 0x80e;
                                                          if (*(int *)local_118 != -1) {
                                                            if (*(int *)local_118 != 0) {
                                                              LOCK();
                                                              *(int *)local_118 =
                                                                   *(int *)local_118 + -1;
                                                              local_21 = *(int *)local_118 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074d9ec;
                                                            }
                                                            QArrayData::deallocate(local_118,2,8);
                                                          }
                                                        }
                                                        else {
                                                          local_120 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("Windows81_64",0xc)
                                                          ;
                                                          iVar2 = QString::compare(&local_728,
                                                                                   &local_120,0);
                                                          if (*(int *)local_120 != -1) {
                                                            if (*(int *)local_120 != 0) {
                                                              LOCK();
                                                              *(int *)local_120 =
                                                                   *(int *)local_120 + -1;
                                                              local_21 = *(int *)local_120 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074b6c9;
                                                            }
                                                            QArrayData::deallocate(local_120,2,8);
                                                          }
LAB_10074b6c9:
                                                          if (*(int *)local_118 != -1) {
                                                            if (*(int *)local_118 != 0) {
                                                              LOCK();
                                                              *(int *)local_118 =
                                                                   *(int *)local_118 + -1;
                                                              local_21 = *(int *)local_118 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074b6ff;
                                                            }
                                                            QArrayData::deallocate(local_118,2,8);
                                                          }
LAB_10074b6ff:
                                                          uVar4 = 0x80e;
                                                          if (iVar2 != 0) {
                                                            local_128 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("Windows2012_64",
                                                                                   0xe);
                                                            iVar2 = QString::compare(&local_728,
                                                                                     &local_128,0);
                                                            if (*(int *)local_128 != -1) {
                                                              if (*(int *)local_128 != 0) {
                                                                LOCK();
                                                                *(int *)local_128 =
                                                                     *(int *)local_128 + -1;
                                                                local_21 = *(int *)local_128 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074b773;
                                                              }
                                                              QArrayData::deallocate(local_128,2,8);
                                                            }
LAB_10074b773:
                                                            uVar4 = 0x80d;
                                                            if (iVar2 != 0) {
                                                              local_130 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("Windows10",9);
                                                              iVar2 = QString::compare(&local_728,
                                                                                       &local_130,0)
                                                              ;
                                                              if (iVar2 == 0) {
                                                                uVar4 = 0x80f;
                                                                if (*(int *)local_130 != -1) {
                                                                  if (*(int *)local_130 != 0) {
                                                                    LOCK();
                                                                    *(int *)local_130 =
                                                                         *(int *)local_130 + -1;
                                                                    local_21 = *(int *)local_130 !=
                                                                               0;
                                                                    UNLOCK();
                                                                    if ((bool)local_21)
                                                                    goto LAB_10074d9ec;
                                                                  }
                                                                  QArrayData::deallocate
                                                                            (local_130,2,8);
                                                                }
                                                              }
                                                              else {
                                                                local_138 = (QArrayData *)
                                                                            QString::
                                                  fromAscii_helper("Windows10_64",0xc);
                                                  iVar2 = QString::compare(&local_728,&local_138,0);
                                                  if (*(int *)local_138 != -1) {
                                                    if (*(int *)local_138 != 0) {
                                                      LOCK();
                                                      *(int *)local_138 = *(int *)local_138 + -1;
                                                      local_21 = *(int *)local_138 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074b81c;
                                                    }
                                                    QArrayData::deallocate(local_138,2,8);
                                                  }
LAB_10074b81c:
                                                  if (*(int *)local_130 != -1) {
                                                    if (*(int *)local_130 != 0) {
                                                      LOCK();
                                                      *(int *)local_130 = *(int *)local_130 + -1;
                                                      local_21 = *(int *)local_130 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074b852;
                                                    }
                                                    QArrayData::deallocate(local_130,2,8);
                                                  }
LAB_10074b852:
                                                  uVar4 = 0x80f;
                                                  if (iVar2 != 0) {
                                                    local_140 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("os2warp3",8);
                                                    iVar2 = QString::compare(&local_728,&local_140,0
                                                                            );
                                                    if (*(int *)local_140 != -1) {
                                                      if (*(int *)local_140 != 0) {
                                                        LOCK();
                                                        *(int *)local_140 = *(int *)local_140 + -1;
                                                        local_21 = *(int *)local_140 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074b8c6;
                                                      }
                                                      QArrayData::deallocate(local_140,2,8);
                                                    }
LAB_10074b8c6:
                                                    uVar4 = 0xb01;
                                                    if (iVar2 != 0) {
                                                      local_148 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("os2warp4",8);
                                                      iVar2 = QString::compare(&local_728,&local_148
                                                                               ,0);
                                                      if (*(int *)local_148 != -1) {
                                                        if (*(int *)local_148 != 0) {
                                                          LOCK();
                                                          *(int *)local_148 = *(int *)local_148 + -1
                                                          ;
                                                          local_21 = *(int *)local_148 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074b939;
                                                        }
                                                        QArrayData::deallocate(local_148,2,8);
                                                      }
LAB_10074b939:
                                                      uVar4 = 0xb02;
                                                      if (iVar2 != 0) {
                                                        local_150 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("os2warp45",9);
                                                        iVar2 = QString::compare(&local_728,
                                                                                 &local_150,0);
                                                        if (*(int *)local_150 != -1) {
                                                          if (*(int *)local_150 != 0) {
                                                            LOCK();
                                                            *(int *)local_150 =
                                                                 *(int *)local_150 + -1;
                                                            local_21 = *(int *)local_150 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074b9ac;
                                                          }
                                                          QArrayData::deallocate(local_150,2,8);
                                                        }
LAB_10074b9ac:
                                                        uVar4 = 0xb03;
                                                        if (iVar2 != 0) {
                                                          local_158 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("ecs",3);
                                                          iVar2 = QString::compare(&local_728,
                                                                                   &local_158,0);
                                                          if (*(int *)local_158 != -1) {
                                                            if (*(int *)local_158 != 0) {
                                                              LOCK();
                                                              *(int *)local_158 =
                                                                   *(int *)local_158 + -1;
                                                              local_21 = *(int *)local_158 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074ba1f;
                                                            }
                                                            QArrayData::deallocate(local_158,2,8);
                                                          }
LAB_10074ba1f:
                                                          uVar4 = 0xb04;
                                                          if (iVar2 != 0) {
                                                            local_160 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("Debian",6);
                                                            cVar1 = QString::startsWith(&local_728,
                                                                                        &local_160,0
                                                                                       );
                                                            if (*(int *)local_160 != -1) {
                                                              if (*(int *)local_160 != 0) {
                                                                LOCK();
                                                                *(int *)local_160 =
                                                                     *(int *)local_160 + -1;
                                                                local_21 = *(int *)local_160 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074ba92;
                                                              }
                                                              QArrayData::deallocate(local_160,2,8);
                                                            }
LAB_10074ba92:
                                                            uVar4 = 0x906;
                                                            if (cVar1 == '\0') {
                                                              local_168 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("OpenSUSE",8);
                                                              cVar1 = QString::startsWith(&local_728
                                                                                          ,&
                                                  local_168,0);
                                                  if (*(int *)local_168 != -1) {
                                                    if (*(int *)local_168 != 0) {
                                                      LOCK();
                                                      *(int *)local_168 = *(int *)local_168 + -1;
                                                      local_21 = *(int *)local_168 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074bb05;
                                                    }
                                                    QArrayData::deallocate(local_168,2,8);
                                                  }
LAB_10074bb05:
                                                  uVar4 = 0x902;
                                                  if (cVar1 == '\0') {
                                                    local_170 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("Fedora",6);
                                                    cVar1 = QString::startsWith(&local_728,
                                                                                &local_170,0);
                                                    if (*(int *)local_170 != -1) {
                                                      if (*(int *)local_170 != 0) {
                                                        LOCK();
                                                        *(int *)local_170 = *(int *)local_170 + -1;
                                                        local_21 = *(int *)local_170 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074bb78;
                                                      }
                                                      QArrayData::deallocate(local_170,2,8);
                                                    }
LAB_10074bb78:
                                                    uVar4 = 0x907;
                                                    if (cVar1 == '\0') {
                                                      local_178 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("RedHat",6);
                                                      cVar1 = QString::startsWith(&local_728,
                                                                                  &local_178,0);
                                                      if (*(int *)local_178 != -1) {
                                                        if (*(int *)local_178 != 0) {
                                                          LOCK();
                                                          *(int *)local_178 = *(int *)local_178 + -1
                                                          ;
                                                          local_21 = *(int *)local_178 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074bbeb;
                                                        }
                                                        QArrayData::deallocate(local_178,2,8);
                                                      }
LAB_10074bbeb:
                                                      uVar4 = 0x901;
                                                      if (cVar1 == '\0') {
                                                        local_180 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("Ubuntu",6);
                                                        cVar1 = QString::startsWith(&local_728,
                                                                                    &local_180,0);
                                                        if (*(int *)local_180 != -1) {
                                                          if (*(int *)local_180 != 0) {
                                                            LOCK();
                                                            *(int *)local_180 =
                                                                 *(int *)local_180 + -1;
                                                            local_21 = *(int *)local_180 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074bc5e;
                                                          }
                                                          QArrayData::deallocate(local_180,2,8);
                                                        }
LAB_10074bc5e:
                                                        uVar4 = 0x90a;
                                                        if (cVar1 == '\0') {
                                                          local_188 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("Xandros",7);
                                                          cVar1 = QString::startsWith(&local_728,
                                                                                      &local_188,0);
                                                          if (*(int *)local_188 != -1) {
                                                            if (*(int *)local_188 != 0) {
                                                              LOCK();
                                                              *(int *)local_188 =
                                                                   *(int *)local_188 + -1;
                                                              local_21 = *(int *)local_188 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074bcd1;
                                                            }
                                                            QArrayData::deallocate(local_188,2,8);
                                                          }
LAB_10074bcd1:
                                                          uVar4 = 0x909;
                                                          if (cVar1 == '\0') {
                                                            local_190 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("Linux22",7);
                                                            cVar1 = QString::startsWith(&local_728,
                                                                                        &local_190,0
                                                                                       );
                                                            if (*(int *)local_190 != -1) {
                                                              if (*(int *)local_190 != 0) {
                                                                LOCK();
                                                                *(int *)local_190 =
                                                                     *(int *)local_190 + -1;
                                                                local_21 = *(int *)local_190 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074bd44;
                                                              }
                                                              QArrayData::deallocate(local_190,2,8);
                                                            }
LAB_10074bd44:
                                                            if (cVar1 == '\0') {
                                                              local_198 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("Linux24",7);
                                                              cVar1 = QString::startsWith(&local_728
                                                                                          ,&
                                                  local_198,0);
                                                  if (*(int *)local_198 != -1) {
                                                    if (*(int *)local_198 != 0) {
                                                      LOCK();
                                                      *(int *)local_198 = *(int *)local_198 + -1;
                                                      local_21 = *(int *)local_198 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074e68c;
                                                    }
                                                    QArrayData::deallocate(local_198,2,8);
                                                  }
LAB_10074e68c:
                                                  uVar4 = 0x904;
                                                  if (cVar1 == '\0') {
                                                    local_1a0 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("Linux26",7);
                                                    cVar1 = QString::startsWith(&local_728,
                                                                                &local_1a0,0);
                                                    if (*(int *)local_1a0 != -1) {
                                                      if (*(int *)local_1a0 != 0) {
                                                        LOCK();
                                                        *(int *)local_1a0 = *(int *)local_1a0 + -1;
                                                        local_21 = *(int *)local_1a0 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074e6ff;
                                                      }
                                                      QArrayData::deallocate(local_1a0,2,8);
                                                    }
LAB_10074e6ff:
                                                    uVar4 = 0x905;
                                                    if (cVar1 == '\0') {
                                                      local_1a8 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("ArchLinux",9);
                                                      cVar1 = QString::startsWith(&local_728,
                                                                                  &local_1a8,0);
                                                      if (*(int *)local_1a8 != -1) {
                                                        if (*(int *)local_1a8 != 0) {
                                                          LOCK();
                                                          *(int *)local_1a8 = *(int *)local_1a8 + -1
                                                          ;
                                                          local_21 = *(int *)local_1a8 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074e772;
                                                        }
                                                        QArrayData::deallocate(local_1a8,2,8);
                                                      }
LAB_10074e772:
                                                      if (cVar1 == '\0') {
                                                        local_1b0 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("Gentoo",6);
                                                        cVar1 = QString::startsWith(&local_728,
                                                                                    &local_1b0,0);
                                                        if (*(int *)local_1b0 != -1) {
                                                          if (*(int *)local_1b0 != 0) {
                                                            LOCK();
                                                            *(int *)local_1b0 =
                                                                 *(int *)local_1b0 + -1;
                                                            local_21 = *(int *)local_1b0 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074eaa6;
                                                          }
                                                          QArrayData::deallocate(local_1b0,2,8);
                                                        }
LAB_10074eaa6:
                                                        if (cVar1 == '\0') {
                                                          local_1b8 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("Mandriva",8);
                                                          cVar1 = QString::startsWith(&local_728,
                                                                                      &local_1b8,0);
                                                          if (*(int *)local_1b8 != -1) {
                                                            if (*(int *)local_1b8 != 0) {
                                                              LOCK();
                                                              *(int *)local_1b8 =
                                                                   *(int *)local_1b8 + -1;
                                                              local_21 = *(int *)local_1b8 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074ebf0;
                                                            }
                                                            QArrayData::deallocate(local_1b8,2,8);
                                                          }
LAB_10074ebf0:
                                                          if (cVar1 == '\0') {
                                                            local_1c0 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("Turbolinux",10);
                                                            cVar1 = QString::startsWith(&local_728,
                                                                                        &local_1c0,1
                                                                                       );
                                                            if (*(int *)local_1c0 != -1) {
                                                              if (*(int *)local_1c0 != 0) {
                                                                LOCK();
                                                                *(int *)local_1c0 =
                                                                     *(int *)local_1c0 + -1;
                                                                local_21 = *(int *)local_1c0 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074ed83;
                                                              }
                                                              QArrayData::deallocate(local_1c0,2,8);
                                                            }
LAB_10074ed83:
                                                            if (cVar1 == '\0') {
                                                              local_1c8 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("Oracle",6);
                                                              cVar1 = QString::startsWith(&local_728
                                                                                          ,&
                                                  local_1c8,1);
                                                  if (*(int *)local_1c8 != -1) {
                                                    if (*(int *)local_1c8 != 0) {
                                                      LOCK();
                                                      *(int *)local_1c8 = *(int *)local_1c8 + -1;
                                                      local_21 = *(int *)local_1c8 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074ee40;
                                                    }
                                                    QArrayData::deallocate(local_1c8,2,8);
                                                  }
LAB_10074ee40:
                                                  if (cVar1 == '\0') {
                                                    local_1d0 = (QArrayData *)
                                                                QString::fromAscii_helper("Linux",5)
                                                    ;
                                                    cVar1 = QString::startsWith(&local_728,
                                                                                &local_1d0,1);
                                                    if (*(int *)local_1d0 != -1) {
                                                      if (*(int *)local_1d0 != 0) {
                                                        LOCK();
                                                        *(int *)local_1d0 = *(int *)local_1d0 + -1;
                                                        local_21 = *(int *)local_1d0 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074efd3;
                                                      }
                                                      QArrayData::deallocate(local_1d0,2,8);
                                                    }
LAB_10074efd3:
                                                    uVar4 = 0x9ff;
                                                    if (cVar1 == '\0') {
                                                      local_1d8 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("FreeBSD",7);
                                                      cVar1 = QString::startsWith(&local_728,
                                                                                  &local_1d8,0);
                                                      if (*(int *)local_1d8 != -1) {
                                                        if (*(int *)local_1d8 != 0) {
                                                          LOCK();
                                                          *(int *)local_1d8 = *(int *)local_1d8 + -1
                                                          ;
                                                          local_21 = *(int *)local_1d8 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074f046;
                                                        }
                                                        QArrayData::deallocate(local_1d8,2,8);
                                                      }
LAB_10074f046:
                                                      uVar4 = 0xaff;
                                                      if (cVar1 == '\0') {
                                                        local_1e0 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("OpenBSD",7);
                                                        cVar1 = QString::startsWith(&local_728,
                                                                                    &local_1e0,0);
                                                        if (*(int *)local_1e0 != -1) {
                                                          if (*(int *)local_1e0 != 0) {
                                                            LOCK();
                                                            *(int *)local_1e0 =
                                                                 *(int *)local_1e0 + -1;
                                                            local_21 = *(int *)local_1e0 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074f0b9;
                                                          }
                                                          QArrayData::deallocate(local_1e0,2,8);
                                                        }
LAB_10074f0b9:
                                                        if (cVar1 == '\0') {
                                                          local_1e8 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("NetBSD",6);
                                                          cVar1 = QString::startsWith(&local_728,
                                                                                      &local_1e8,0);
                                                          if (*(int *)local_1e8 != -1) {
                                                            if (*(int *)local_1e8 != 0) {
                                                              LOCK();
                                                              *(int *)local_1e8 =
                                                                   *(int *)local_1e8 + -1;
                                                              local_21 = *(int *)local_1e8 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074f126;
                                                            }
                                                            QArrayData::deallocate(local_1e8,2,8);
                                                          }
LAB_10074f126:
                                                          if (cVar1 == '\0') {
                                                            local_1f0 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("Netware",7);
                                                            cVar1 = QString::startsWith(&local_728,
                                                                                        &local_1f0,0
                                                                                       );
                                                            if (*(int *)local_1f0 != -1) {
                                                              if (*(int *)local_1f0 != 0) {
                                                                LOCK();
                                                                *(int *)local_1f0 =
                                                                     *(int *)local_1f0 + -1;
                                                                local_21 = *(int *)local_1f0 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074f193;
                                                              }
                                                              QArrayData::deallocate(local_1f0,2,8);
                                                            }
LAB_10074f193:
                                                            uVar4 = 0xdff;
                                                            if (cVar1 == '\0') {
                                                              local_1f8 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("Solaris",7);
                                                              iVar2 = QString::compare(&local_728,
                                                                                       &local_1f8,0)
                                                              ;
                                                              if (*(int *)local_1f8 != -1) {
                                                                if (*(int *)local_1f8 != 0) {
                                                                  LOCK();
                                                                  *(int *)local_1f8 =
                                                                       *(int *)local_1f8 + -1;
                                                                  local_21 = *(int *)local_1f8 != 0;
                                                                  UNLOCK();
                                                                  if ((bool)local_21)
                                                                  goto LAB_10074f206;
                                                                }
                                                                QArrayData::deallocate
                                                                          (local_1f8,2,8);
                                                              }
LAB_10074f206:
                                                              uVar4 = 0xeff;
                                                              if (iVar2 != 0) {
                                                                local_200 = (QArrayData *)
                                                                            QString::
                                                  fromAscii_helper("OpenSolaris",0xb);
                                                  iVar2 = QString::compare(&local_728,&local_200,0);
                                                  if (*(int *)local_200 != -1) {
                                                    if (*(int *)local_200 != 0) {
                                                      LOCK();
                                                      *(int *)local_200 = *(int *)local_200 + -1;
                                                      local_21 = *(int *)local_200 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074f279;
                                                    }
                                                    QArrayData::deallocate(local_200,2,8);
                                                  }
LAB_10074f279:
                                                  if (iVar2 != 0) {
                                                    local_208 = (QArrayData *)
                                                                QString::fromAscii_helper("MacOS",5)
                                                    ;
                                                    cVar1 = QString::startsWith(&local_728,
                                                                                &local_208,1);
                                                    if (*(int *)local_208 != -1) {
                                                      if (*(int *)local_208 != 0) {
                                                        LOCK();
                                                        *(int *)local_208 = *(int *)local_208 + -1;
                                                        local_21 = *(int *)local_208 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074f2e9;
                                                      }
                                                      QArrayData::deallocate(local_208,2,8);
                                                    }
LAB_10074f2e9:
                                                    uVar4 = 0x702;
                                                    if (cVar1 == '\0') {
                                                      local_210 = (QArrayData *)
                                                                  QString::fromAscii_helper("QNX",3)
                                                      ;
                                                      cVar1 = QString::startsWith(&local_728,
                                                                                  &local_210,1);
                                                      if (*(int *)local_210 != -1) {
                                                        if (*(int *)local_210 != 0) {
                                                          LOCK();
                                                          *(int *)local_210 = *(int *)local_210 + -1
                                                          ;
                                                          local_21 = *(int *)local_210 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074f35f;
                                                        }
                                                        QArrayData::deallocate(local_210,2,8);
                                                      }
LAB_10074f35f:
                                                      uVar4 = 0xffff;
                                                      if (cVar1 != '\0') {
                                                        uVar4 = 0xff01;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = 0x9ff;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_10074d9ec:
    if (*(int *)local_728 != -1) {
      if (*(int *)local_728 != 0) {
        LOCK();
        *(int *)local_728 = *(int *)local_728 + -1;
        local_21 = *(int *)local_728 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10074da22;
      }
      QArrayData::deallocate(local_728,2,8);
    }
  }
  else {
    uVar4 = 0xffff;
    if (iVar2 == 3) {
      FUN_100d02e10(&local_720,local_708);
      local_218 = (QArrayData *)QString::fromAscii_helper("win31",5);
      iVar2 = QString::compare(&local_720,&local_218,0);
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_21 = *(int *)local_218 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10074be6a;
        }
        QArrayData::deallocate(local_218,2,8);
      }
LAB_10074be6a:
      uVar4 = 0x801;
      if (iVar2 != 0) {
        local_220 = (QArrayData *)QString::fromAscii_helper("win95",5);
        iVar2 = QString::compare(&local_720,&local_220,0);
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_21 = *(int *)local_220 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10074bedd;
          }
          QArrayData::deallocate(local_220,2,8);
        }
LAB_10074bedd:
        uVar4 = 0x802;
        if (iVar2 != 0) {
          local_228 = (QArrayData *)QString::fromAscii_helper("win98",5);
          iVar2 = QString::compare(&local_720,&local_228,0);
          if (*(int *)local_228 != -1) {
            if (*(int *)local_228 != 0) {
              LOCK();
              *(int *)local_228 = *(int *)local_228 + -1;
              local_21 = *(int *)local_228 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_10074bf50;
            }
            QArrayData::deallocate(local_228,2,8);
          }
LAB_10074bf50:
          uVar4 = 0x803;
          if (iVar2 != 0) {
            local_230 = (QArrayData *)QString::fromAscii_helper("winme",5);
            iVar2 = QString::compare(&local_720,&local_230,0);
            if (*(int *)local_230 != -1) {
              if (*(int *)local_230 != 0) {
                LOCK();
                *(int *)local_230 = *(int *)local_230 + -1;
                local_21 = *(int *)local_230 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_10074bfc3;
              }
              QArrayData::deallocate(local_230,2,8);
            }
LAB_10074bfc3:
            uVar4 = 0x804;
            if (iVar2 != 0) {
              local_238 = (QArrayData *)QString::fromAscii_helper("winnt",5);
              iVar2 = QString::compare(&local_720,&local_238,0);
              if (*(int *)local_238 != -1) {
                if (*(int *)local_238 != 0) {
                  LOCK();
                  *(int *)local_238 = *(int *)local_238 + -1;
                  local_21 = *(int *)local_238 != 0;
                  UNLOCK();
                  if ((bool)local_21) goto LAB_10074c036;
                }
                QArrayData::deallocate(local_238,2,8);
              }
LAB_10074c036:
              uVar4 = 0x805;
              if (iVar2 != 0) {
                local_240 = (QArrayData *)QString::fromAscii_helper("win2000pro",10);
                iVar2 = QString::compare(&local_720,&local_240,0);
                if (*(int *)local_240 != -1) {
                  if (*(int *)local_240 != 0) {
                    LOCK();
                    *(int *)local_240 = *(int *)local_240 + -1;
                    local_21 = *(int *)local_240 != 0;
                    UNLOCK();
                    if ((bool)local_21) goto LAB_10074c0a9;
                  }
                  QArrayData::deallocate(local_240,2,8);
                }
LAB_10074c0a9:
                uVar4 = 0x806;
                if (iVar2 != 0) {
                  local_248 = (QArrayData *)QString::fromAscii_helper("win2000serv",0xb);
                  iVar2 = QString::compare(&local_720,&local_248,0);
                  if (*(int *)local_248 != -1) {
                    if (*(int *)local_248 != 0) {
                      LOCK();
                      *(int *)local_248 = *(int *)local_248 + -1;
                      local_21 = *(int *)local_248 != 0;
                      UNLOCK();
                      if ((bool)local_21) goto LAB_10074c11c;
                    }
                    QArrayData::deallocate(local_248,2,8);
                  }
LAB_10074c11c:
                  if (iVar2 != 0) {
                    local_250 = (QArrayData *)QString::fromAscii_helper("win2000advserv",0xe);
                    iVar2 = QString::compare(&local_720,&local_250,0);
                    if (*(int *)local_250 != -1) {
                      if (*(int *)local_250 != 0) {
                        LOCK();
                        *(int *)local_250 = *(int *)local_250 + -1;
                        local_21 = *(int *)local_250 != 0;
                        UNLOCK();
                        if ((bool)local_21) goto LAB_10074c189;
                      }
                      QArrayData::deallocate(local_250,2,8);
                    }
LAB_10074c189:
                    if (iVar2 != 0) {
                      local_258 = (QArrayData *)QString::fromAscii_helper("winxphome",9);
                      iVar2 = QString::compare(&local_720,&local_258,0);
                      if (*(int *)local_258 != -1) {
                        if (*(int *)local_258 != 0) {
                          LOCK();
                          *(int *)local_258 = *(int *)local_258 + -1;
                          local_21 = *(int *)local_258 != 0;
                          UNLOCK();
                          if ((bool)local_21) goto LAB_10074c1f6;
                        }
                        QArrayData::deallocate(local_258,2,8);
                      }
LAB_10074c1f6:
                      uVar4 = 0x807;
                      if (iVar2 != 0) {
                        local_260 = (QArrayData *)QString::fromAscii_helper("winxppro",8);
                        iVar2 = QString::compare(&local_720,&local_260,0);
                        if (*(int *)local_260 != -1) {
                          if (*(int *)local_260 != 0) {
                            LOCK();
                            *(int *)local_260 = *(int *)local_260 + -1;
                            local_21 = *(int *)local_260 != 0;
                            UNLOCK();
                            if ((bool)local_21) goto LAB_10074c269;
                          }
                          QArrayData::deallocate(local_260,2,8);
                        }
LAB_10074c269:
                        if (iVar2 != 0) {
                          local_268 = (QArrayData *)QString::fromAscii_helper("winxppro-64",0xb);
                          iVar2 = QString::compare(&local_720,&local_268,0);
                          if (*(int *)local_268 != -1) {
                            if (*(int *)local_268 != 0) {
                              LOCK();
                              *(int *)local_268 = *(int *)local_268 + -1;
                              local_21 = *(int *)local_268 != 0;
                              UNLOCK();
                              if ((bool)local_21) goto LAB_10074c2d6;
                            }
                            QArrayData::deallocate(local_268,2,8);
                          }
LAB_10074c2d6:
                          if (iVar2 != 0) {
                            local_270 = (QArrayData *)QString::fromAscii_helper("winnetweb",9);
                            iVar2 = QString::compare(&local_720,&local_270,0);
                            if (*(int *)local_270 != -1) {
                              if (*(int *)local_270 != 0) {
                                LOCK();
                                *(int *)local_270 = *(int *)local_270 + -1;
                                local_21 = *(int *)local_270 != 0;
                                UNLOCK();
                                if ((bool)local_21) goto LAB_10074c343;
                              }
                              QArrayData::deallocate(local_270,2,8);
                            }
LAB_10074c343:
                            uVar4 = 0x808;
                            if (iVar2 != 0) {
                              local_278 = (QArrayData *)
                                          QString::fromAscii_helper("winnetstandard",0xe);
                              iVar2 = QString::compare(&local_720,&local_278,0);
                              if (*(int *)local_278 != -1) {
                                if (*(int *)local_278 != 0) {
                                  LOCK();
                                  *(int *)local_278 = *(int *)local_278 + -1;
                                  local_21 = *(int *)local_278 != 0;
                                  UNLOCK();
                                  if ((bool)local_21) goto LAB_10074c3b6;
                                }
                                QArrayData::deallocate(local_278,2,8);
                              }
LAB_10074c3b6:
                              if (iVar2 != 0) {
                                local_280 = (QArrayData *)
                                            QString::fromAscii_helper("winnetenterprise",0x10);
                                iVar2 = QString::compare(&local_720,&local_280,0);
                                if (*(int *)local_280 != -1) {
                                  if (*(int *)local_280 != 0) {
                                    LOCK();
                                    *(int *)local_280 = *(int *)local_280 + -1;
                                    local_21 = *(int *)local_280 != 0;
                                    UNLOCK();
                                    if ((bool)local_21) goto LAB_10074c423;
                                  }
                                  QArrayData::deallocate(local_280,2,8);
                                }
LAB_10074c423:
                                if (iVar2 != 0) {
                                  local_288 = (QArrayData *)
                                              QString::fromAscii_helper("winnetbusiness",0xe);
                                  iVar2 = QString::compare(&local_720,&local_288,0);
                                  if (*(int *)local_288 != -1) {
                                    if (*(int *)local_288 != 0) {
                                      LOCK();
                                      *(int *)local_288 = *(int *)local_288 + -1;
                                      local_21 = *(int *)local_288 != 0;
                                      UNLOCK();
                                      if ((bool)local_21) goto LAB_10074c490;
                                    }
                                    QArrayData::deallocate(local_288,2,8);
                                  }
LAB_10074c490:
                                  if (iVar2 != 0) {
                                    local_290 = (QArrayData *)
                                                QString::fromAscii_helper("winnetstandard-64",0x11);
                                    iVar2 = QString::compare(&local_720,&local_290,0);
                                    if (*(int *)local_290 != -1) {
                                      if (*(int *)local_290 != 0) {
                                        LOCK();
                                        *(int *)local_290 = *(int *)local_290 + -1;
                                        local_21 = *(int *)local_290 != 0;
                                        UNLOCK();
                                        if ((bool)local_21) goto LAB_10074c4fd;
                                      }
                                      QArrayData::deallocate(local_290,2,8);
                                    }
LAB_10074c4fd:
                                    if (iVar2 != 0) {
                                      local_298 = (QArrayData *)
                                                  QString::fromAscii_helper
                                                            ("winnetenterprise-64",0x13);
                                      iVar2 = QString::compare(&local_720,&local_298,0);
                                      if (*(int *)local_298 != -1) {
                                        if (*(int *)local_298 != 0) {
                                          LOCK();
                                          *(int *)local_298 = *(int *)local_298 + -1;
                                          local_21 = *(int *)local_298 != 0;
                                          UNLOCK();
                                          if ((bool)local_21) goto LAB_10074c56a;
                                        }
                                        QArrayData::deallocate(local_298,2,8);
                                      }
LAB_10074c56a:
                                      if (iVar2 != 0) {
                                        local_2a0 = (QArrayData *)
                                                    QString::fromAscii_helper("winvista",8);
                                        iVar2 = QString::compare(&local_720,&local_2a0,0);
                                        if (*(int *)local_2a0 != -1) {
                                          if (*(int *)local_2a0 != 0) {
                                            LOCK();
                                            *(int *)local_2a0 = *(int *)local_2a0 + -1;
                                            local_21 = *(int *)local_2a0 != 0;
                                            UNLOCK();
                                            if ((bool)local_21) goto LAB_10074c5d7;
                                          }
                                          QArrayData::deallocate(local_2a0,2,8);
                                        }
LAB_10074c5d7:
                                        uVar4 = 0x809;
                                        if (iVar2 != 0) {
                                          local_2a8 = (QArrayData *)
                                                      QString::fromAscii_helper("winvista-64",0xb);
                                          iVar2 = QString::compare(&local_720,&local_2a8,0);
                                          if (*(int *)local_2a8 != -1) {
                                            if (*(int *)local_2a8 != 0) {
                                              LOCK();
                                              *(int *)local_2a8 = *(int *)local_2a8 + -1;
                                              local_21 = *(int *)local_2a8 != 0;
                                              UNLOCK();
                                              if ((bool)local_21) goto LAB_10074c64a;
                                            }
                                            QArrayData::deallocate(local_2a8,2,8);
                                          }
LAB_10074c64a:
                                          if (iVar2 != 0) {
                                            local_2b0 = (QArrayData *)
                                                        QString::fromAscii_helper("windows7",8);
                                            iVar2 = QString::compare(&local_720,&local_2b0,0);
                                            if (*(int *)local_2b0 != -1) {
                                              if (*(int *)local_2b0 != 0) {
                                                LOCK();
                                                *(int *)local_2b0 = *(int *)local_2b0 + -1;
                                                local_21 = *(int *)local_2b0 != 0;
                                                UNLOCK();
                                                if ((bool)local_21) goto LAB_10074c6b7;
                                              }
                                              QArrayData::deallocate(local_2b0,2,8);
                                            }
LAB_10074c6b7:
                                            uVar4 = 0x80b;
                                            if (iVar2 != 0) {
                                              local_2b8 = (QArrayData *)
                                                          QString::fromAscii_helper
                                                                    ("windows7-64",0xb);
                                              iVar2 = QString::compare(&local_720,&local_2b8,0);
                                              if (*(int *)local_2b8 != -1) {
                                                if (*(int *)local_2b8 != 0) {
                                                  LOCK();
                                                  *(int *)local_2b8 = *(int *)local_2b8 + -1;
                                                  local_21 = *(int *)local_2b8 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_21) goto LAB_10074c72a;
                                                }
                                                QArrayData::deallocate(local_2b8,2,8);
                                              }
LAB_10074c72a:
                                              if (iVar2 != 0) {
                                                local_2c0 = (QArrayData *)
                                                            QString::fromAscii_helper("longhorn",8);
                                                iVar2 = QString::compare(&local_720,&local_2c0,0);
                                                if (*(int *)local_2c0 != -1) {
                                                  if (*(int *)local_2c0 != 0) {
                                                    LOCK();
                                                    *(int *)local_2c0 = *(int *)local_2c0 + -1;
                                                    local_21 = *(int *)local_2c0 != 0;
                                                    UNLOCK();
                                                    if ((bool)local_21) goto LAB_10074c797;
                                                  }
                                                  QArrayData::deallocate(local_2c0,2,8);
                                                }
LAB_10074c797:
                                                uVar4 = 0x80a;
                                                if (iVar2 != 0) {
                                                  local_2c8 = (QArrayData *)
                                                              QString::fromAscii_helper
                                                                        ("longhorn-64",0xb);
                                                  iVar2 = QString::compare(&local_720,&local_2c8,0);
                                                  if (*(int *)local_2c8 != -1) {
                                                    if (*(int *)local_2c8 != 0) {
                                                      LOCK();
                                                      *(int *)local_2c8 = *(int *)local_2c8 + -1;
                                                      local_21 = *(int *)local_2c8 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074c80a;
                                                    }
                                                    QArrayData::deallocate(local_2c8,2,8);
                                                  }
LAB_10074c80a:
                                                  if (iVar2 != 0) {
                                                    local_2d0 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("windows7srv-64",0xe);
                                                    iVar2 = QString::compare(&local_720,&local_2d0,0
                                                                            );
                                                    if (*(int *)local_2d0 != -1) {
                                                      if (*(int *)local_2d0 != 0) {
                                                        LOCK();
                                                        *(int *)local_2d0 = *(int *)local_2d0 + -1;
                                                        local_21 = *(int *)local_2d0 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074c877;
                                                      }
                                                      QArrayData::deallocate(local_2d0,2,8);
                                                    }
LAB_10074c877:
                                                    if (iVar2 != 0) {
                                                      local_2d8 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("windows8",8);
                                                      iVar2 = QString::compare(&local_720,&local_2d8
                                                                               ,0);
                                                      if (*(int *)local_2d8 != -1) {
                                                        if (*(int *)local_2d8 != 0) {
                                                          LOCK();
                                                          *(int *)local_2d8 = *(int *)local_2d8 + -1
                                                          ;
                                                          local_21 = *(int *)local_2d8 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074c8e4;
                                                        }
                                                        QArrayData::deallocate(local_2d8,2,8);
                                                      }
LAB_10074c8e4:
                                                      uVar4 = 0x80c;
                                                      if (iVar2 != 0) {
                                                        local_2e0 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("windows8-64",0xb);
                                                        iVar2 = QString::compare(&local_720,
                                                                                 &local_2e0,0);
                                                        if (*(int *)local_2e0 != -1) {
                                                          if (*(int *)local_2e0 != 0) {
                                                            LOCK();
                                                            *(int *)local_2e0 =
                                                                 *(int *)local_2e0 + -1;
                                                            local_21 = *(int *)local_2e0 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074c957;
                                                          }
                                                          QArrayData::deallocate(local_2e0,2,8);
                                                        }
LAB_10074c957:
                                                        if (iVar2 != 0) {
                                                          local_2e8 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("windows8srv-64",
                                                                                 0xe);
                                                          iVar2 = QString::compare(&local_720,
                                                                                   &local_2e8,0);
                                                          if (*(int *)local_2e8 != -1) {
                                                            if (*(int *)local_2e8 != 0) {
                                                              LOCK();
                                                              *(int *)local_2e8 =
                                                                   *(int *)local_2e8 + -1;
                                                              local_21 = *(int *)local_2e8 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074c9c4;
                                                            }
                                                            QArrayData::deallocate(local_2e8,2,8);
                                                          }
LAB_10074c9c4:
                                                          uVar4 = 0x80d;
                                                          if (iVar2 != 0) {
                                                            local_2f0 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("windows9",8);
                                                            iVar2 = QString::compare(&local_720,
                                                                                     &local_2f0,0);
                                                            if (*(int *)local_2f0 != -1) {
                                                              if (*(int *)local_2f0 != 0) {
                                                                LOCK();
                                                                *(int *)local_2f0 =
                                                                     *(int *)local_2f0 + -1;
                                                                local_21 = *(int *)local_2f0 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074ca37;
                                                              }
                                                              QArrayData::deallocate(local_2f0,2,8);
                                                            }
LAB_10074ca37:
                                                            uVar4 = 0x80f;
                                                            if (iVar2 != 0) {
                                                              local_2f8 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("windows9-64",
                                                                                     0xb);
                                                              iVar2 = QString::compare(&local_720,
                                                                                       &local_2f8,0)
                                                              ;
                                                              if (*(int *)local_2f8 != -1) {
                                                                if (*(int *)local_2f8 != 0) {
                                                                  LOCK();
                                                                  *(int *)local_2f8 =
                                                                       *(int *)local_2f8 + -1;
                                                                  local_21 = *(int *)local_2f8 != 0;
                                                                  UNLOCK();
                                                                  if ((bool)local_21)
                                                                  goto LAB_10074caaa;
                                                                }
                                                                QArrayData::deallocate
                                                                          (local_2f8,2,8);
                                                              }
LAB_10074caaa:
                                                              if (iVar2 != 0) {
                                                                local_300 = (QArrayData *)
                                                                            QString::
                                                  fromAscii_helper("windows9srv",0xb);
                                                  iVar2 = QString::compare(&local_720,&local_300,0);
                                                  if (*(int *)local_300 != -1) {
                                                    if (*(int *)local_300 != 0) {
                                                      LOCK();
                                                      *(int *)local_300 = *(int *)local_300 + -1;
                                                      local_21 = *(int *)local_300 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074cb17;
                                                    }
                                                    QArrayData::deallocate(local_300,2,8);
                                                  }
LAB_10074cb17:
                                                  uVar4 = 0x810;
                                                  if (iVar2 != 0) {
                                                    local_308 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("windows9srv-64",0xe);
                                                    iVar2 = QString::compare(&local_720,&local_308,0
                                                                            );
                                                    if (*(int *)local_308 != -1) {
                                                      if (*(int *)local_308 != 0) {
                                                        LOCK();
                                                        *(int *)local_308 = *(int *)local_308 + -1;
                                                        local_21 = *(int *)local_308 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074cb8a;
                                                      }
                                                      QArrayData::deallocate(local_308,2,8);
                                                    }
LAB_10074cb8a:
                                                    if (iVar2 != 0) {
                                                      local_310 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("ubuntu",6);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_310,0);
                                                      if (*(int *)local_310 != -1) {
                                                        if (*(int *)local_310 != 0) {
                                                          LOCK();
                                                          *(int *)local_310 = *(int *)local_310 + -1
                                                          ;
                                                          local_21 = *(int *)local_310 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074cbf7;
                                                        }
                                                        QArrayData::deallocate(local_310,2,8);
                                                      }
LAB_10074cbf7:
                                                      uVar4 = 0x90a;
                                                      if (cVar1 == '\0') {
                                                        local_318 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("redhat",6);
                                                        cVar1 = QString::startsWith(&local_720,
                                                                                    &local_318,0);
                                                        if (*(int *)local_318 != -1) {
                                                          if (*(int *)local_318 != 0) {
                                                            LOCK();
                                                            *(int *)local_318 =
                                                                 *(int *)local_318 + -1;
                                                            local_21 = *(int *)local_318 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074cc6a;
                                                          }
                                                          QArrayData::deallocate(local_318,2,8);
                                                        }
LAB_10074cc6a:
                                                        uVar4 = 0x901;
                                                        if (cVar1 == '\0') {
                                                          local_320 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("rhel",4);
                                                          cVar1 = QString::startsWith(&local_720,
                                                                                      &local_320,0);
                                                          if (*(int *)local_320 != -1) {
                                                            if (*(int *)local_320 != 0) {
                                                              LOCK();
                                                              *(int *)local_320 =
                                                                   *(int *)local_320 + -1;
                                                              local_21 = *(int *)local_320 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074ccdd;
                                                            }
                                                            QArrayData::deallocate(local_320,2,8);
                                                          }
LAB_10074ccdd:
                                                          if (cVar1 == '\0') {
                                                            local_328 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("centos",6);
                                                            cVar1 = QString::startsWith(&local_720,
                                                                                        &local_328,0
                                                                                       );
                                                            if (*(int *)local_328 != -1) {
                                                              if (*(int *)local_328 != 0) {
                                                                LOCK();
                                                                *(int *)local_328 =
                                                                     *(int *)local_328 + -1;
                                                                local_21 = *(int *)local_328 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074cd4a;
                                                              }
                                                              QArrayData::deallocate(local_328,2,8);
                                                            }
LAB_10074cd4a:
                                                            uVar4 = 0x90d;
                                                            if (cVar1 == '\0') {
                                                              local_330 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("suse",4);
                                                              cVar1 = QString::startsWith(&local_720
                                                                                          ,&
                                                  local_330,0);
                                                  if (*(int *)local_330 != -1) {
                                                    if (*(int *)local_330 != 0) {
                                                      LOCK();
                                                      *(int *)local_330 = *(int *)local_330 + -1;
                                                      local_21 = *(int *)local_330 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074cdbd;
                                                    }
                                                    QArrayData::deallocate(local_330,2,8);
                                                  }
LAB_10074cdbd:
                                                  uVar4 = 0x902;
                                                  if (cVar1 == '\0') {
                                                    local_338 = (QArrayData *)
                                                                QString::fromAscii_helper("sles",4);
                                                    cVar1 = QString::startsWith(&local_720,
                                                                                &local_338,0);
                                                    if (*(int *)local_338 != -1) {
                                                      if (*(int *)local_338 != 0) {
                                                        LOCK();
                                                        *(int *)local_338 = *(int *)local_338 + -1;
                                                        local_21 = *(int *)local_338 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074ce30;
                                                      }
                                                      QArrayData::deallocate(local_338,2,8);
                                                    }
LAB_10074ce30:
                                                    if (cVar1 == '\0') {
                                                      local_340 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("mandrake",8);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_340,0);
                                                      if (*(int *)local_340 != -1) {
                                                        if (*(int *)local_340 != 0) {
                                                          LOCK();
                                                          *(int *)local_340 = *(int *)local_340 + -1
                                                          ;
                                                          local_21 = *(int *)local_340 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074ce9d;
                                                        }
                                                        QArrayData::deallocate(local_340,2,8);
                                                      }
LAB_10074ce9d:
                                                      uVar4 = 0x903;
                                                      if (cVar1 == '\0') {
                                                        local_348 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("fedora",6);
                                                        cVar1 = QString::startsWith(&local_720,
                                                                                    &local_348,0);
                                                        if (*(int *)local_348 != -1) {
                                                          if (*(int *)local_348 != 0) {
                                                            LOCK();
                                                            *(int *)local_348 =
                                                                 *(int *)local_348 + -1;
                                                            local_21 = *(int *)local_348 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074cf10;
                                                          }
                                                          QArrayData::deallocate(local_348,2,8);
                                                        }
LAB_10074cf10:
                                                        uVar4 = 0x907;
                                                        if (cVar1 == '\0') {
                                                          local_350 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("debian",6);
                                                          cVar1 = QString::startsWith(&local_720,
                                                                                      &local_350,0);
                                                          if (*(int *)local_350 != -1) {
                                                            if (*(int *)local_350 != 0) {
                                                              LOCK();
                                                              *(int *)local_350 =
                                                                   *(int *)local_350 + -1;
                                                              local_21 = *(int *)local_350 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074cf83;
                                                            }
                                                            QArrayData::deallocate(local_350,2,8);
                                                          }
LAB_10074cf83:
                                                          uVar4 = 0x906;
                                                          if (cVar1 == '\0') {
                                                            local_358 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("opensuse",8);
                                                            cVar1 = QString::startsWith(&local_720,
                                                                                        &local_358,0
                                                                                       );
                                                            if (*(int *)local_358 != -1) {
                                                              if (*(int *)local_358 != 0) {
                                                                LOCK();
                                                                *(int *)local_358 =
                                                                     *(int *)local_358 + -1;
                                                                local_21 = *(int *)local_358 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074cff6;
                                                              }
                                                              QArrayData::deallocate(local_358,2,8);
                                                            }
LAB_10074cff6:
                                                            uVar4 = 0x90f;
                                                            if (cVar1 == '\0') {
                                                              local_360 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("mandriva",8);
                                                              cVar1 = QString::startsWith(&local_720
                                                                                          ,&
                                                  local_360,0);
                                                  if (*(int *)local_360 != -1) {
                                                    if (*(int *)local_360 != 0) {
                                                      LOCK();
                                                      *(int *)local_360 = *(int *)local_360 + -1;
                                                      local_21 = *(int *)local_360 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074d069;
                                                    }
                                                    QArrayData::deallocate(local_360,2,8);
                                                  }
LAB_10074d069:
                                                  uVar4 = 0x9ff;
                                                  if (cVar1 == '\0') {
                                                    local_368 = (QArrayData *)
                                                                QString::fromAscii_helper("nld9",4);
                                                    cVar1 = QString::startsWith(&local_720,
                                                                                &local_368,0);
                                                    if (*(int *)local_368 != -1) {
                                                      if (*(int *)local_368 != 0) {
                                                        LOCK();
                                                        *(int *)local_368 = *(int *)local_368 + -1;
                                                        local_21 = *(int *)local_368 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074d0dc;
                                                      }
                                                      QArrayData::deallocate(local_368,2,8);
                                                    }
LAB_10074d0dc:
                                                    if (cVar1 == '\0') {
                                                      local_370 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("sjds",4);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_370,0);
                                                      if (*(int *)local_370 != -1) {
                                                        if (*(int *)local_370 != 0) {
                                                          LOCK();
                                                          *(int *)local_370 = *(int *)local_370 + -1
                                                          ;
                                                          local_21 = *(int *)local_370 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074d149;
                                                        }
                                                        QArrayData::deallocate(local_370,2,8);
                                                      }
LAB_10074d149:
                                                      if (cVar1 == '\0') {
                                                        local_378 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("turbolinux",10);
                                                        cVar1 = QString::startsWith(&local_720,
                                                                                    &local_378,0);
                                                        if (*(int *)local_378 != -1) {
                                                          if (*(int *)local_378 != 0) {
                                                            LOCK();
                                                            *(int *)local_378 =
                                                                 *(int *)local_378 + -1;
                                                            local_21 = *(int *)local_378 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074d1b6;
                                                          }
                                                          QArrayData::deallocate(local_378,2,8);
                                                        }
LAB_10074d1b6:
                                                        if (cVar1 == '\0') {
                                                          local_380 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("asianux",7);
                                                          cVar1 = QString::startsWith(&local_720,
                                                                                      &local_380,0);
                                                          if (*(int *)local_380 != -1) {
                                                            if (*(int *)local_380 != 0) {
                                                              LOCK();
                                                              *(int *)local_380 =
                                                                   *(int *)local_380 + -1;
                                                              local_21 = *(int *)local_380 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074d223;
                                                            }
                                                            QArrayData::deallocate(local_380,2,8);
                                                          }
LAB_10074d223:
                                                          if (cVar1 == '\0') {
                                                            local_388 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("oraclelinux",0xb
                                                                                  );
                                                            cVar1 = QString::startsWith(&local_720,
                                                                                        &local_388,0
                                                                                       );
                                                            if (*(int *)local_388 != -1) {
                                                              if (*(int *)local_388 != 0) {
                                                                LOCK();
                                                                *(int *)local_388 =
                                                                     *(int *)local_388 + -1;
                                                                local_21 = *(int *)local_388 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074d290;
                                                              }
                                                              QArrayData::deallocate(local_388,2,8);
                                                            }
LAB_10074d290:
                                                            if (cVar1 == '\0') {
                                                              local_390 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("other24xlinux"
                                                                                     ,0xd);
                                                              cVar1 = QString::startsWith(&local_720
                                                                                          ,&
                                                  local_390,0);
                                                  if (*(int *)local_390 != -1) {
                                                    if (*(int *)local_390 != 0) {
                                                      LOCK();
                                                      *(int *)local_390 = *(int *)local_390 + -1;
                                                      local_21 = *(int *)local_390 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074d2fd;
                                                    }
                                                    QArrayData::deallocate(local_390,2,8);
                                                  }
LAB_10074d2fd:
                                                  uVar4 = 0x904;
                                                  if (cVar1 == '\0') {
                                                    local_398 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("other26xlinux",0xd);
                                                    cVar1 = QString::startsWith(&local_720,
                                                                                &local_398,0);
                                                    if (*(int *)local_398 != -1) {
                                                      if (*(int *)local_398 != 0) {
                                                        LOCK();
                                                        *(int *)local_398 = *(int *)local_398 + -1;
                                                        local_21 = *(int *)local_398 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074d370;
                                                      }
                                                      QArrayData::deallocate(local_398,2,8);
                                                    }
LAB_10074d370:
                                                    uVar4 = 0x905;
                                                    if (cVar1 == '\0') {
                                                      local_3a0 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("otherlinux",10);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_3a0,0);
                                                      if (*(int *)local_3a0 != -1) {
                                                        if (*(int *)local_3a0 != 0) {
                                                          LOCK();
                                                          *(int *)local_3a0 = *(int *)local_3a0 + -1
                                                          ;
                                                          local_21 = *(int *)local_3a0 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074d3e3;
                                                        }
                                                        QArrayData::deallocate(local_3a0,2,8);
                                                      }
LAB_10074d3e3:
                                                      uVar4 = 0x9ff;
                                                      if (cVar1 == '\0') {
                                                        local_3a8 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("netware5",8);
                                                        iVar2 = QString::compare(&local_720,
                                                                                 &local_3a8,0);
                                                        if (*(int *)local_3a8 != -1) {
                                                          if (*(int *)local_3a8 != 0) {
                                                            LOCK();
                                                            *(int *)local_3a8 =
                                                                 *(int *)local_3a8 + -1;
                                                            local_21 = *(int *)local_3a8 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074d456;
                                                          }
                                                          QArrayData::deallocate(local_3a8,2,8);
                                                        }
LAB_10074d456:
                                                        uVar4 = 0xd02;
                                                        if (iVar2 != 0) {
                                                          local_3b0 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("netware6",8);
                                                          iVar2 = QString::compare(&local_720,
                                                                                   &local_3b0,0);
                                                          if (*(int *)local_3b0 != -1) {
                                                            if (*(int *)local_3b0 != 0) {
                                                              LOCK();
                                                              *(int *)local_3b0 =
                                                                   *(int *)local_3b0 + -1;
                                                              local_21 = *(int *)local_3b0 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074d4c9;
                                                            }
                                                            QArrayData::deallocate(local_3b0,2,8);
                                                          }
LAB_10074d4c9:
                                                          uVar4 = 0xd03;
                                                          if (iVar2 != 0) {
                                                            local_3b8 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("netware",7);
                                                            cVar1 = QString::startsWith(&local_720,
                                                                                        &local_3b8,0
                                                                                       );
                                                            if (*(int *)local_3b8 != -1) {
                                                              if (*(int *)local_3b8 != 0) {
                                                                LOCK();
                                                                *(int *)local_3b8 =
                                                                     *(int *)local_3b8 + -1;
                                                                local_21 = *(int *)local_3b8 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074d53c;
                                                              }
                                                              QArrayData::deallocate(local_3b8,2,8);
                                                            }
LAB_10074d53c:
                                                            uVar4 = 0xdff;
                                                            if (cVar1 == '\0') {
                                                              local_3c0 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("solaris9",8);
                                                              cVar1 = QString::startsWith(&local_720
                                                                                          ,&
                                                  local_3c0,0);
                                                  if (*(int *)local_3c0 != -1) {
                                                    if (*(int *)local_3c0 != 0) {
                                                      LOCK();
                                                      *(int *)local_3c0 = *(int *)local_3c0 + -1;
                                                      local_21 = *(int *)local_3c0 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074d5af;
                                                    }
                                                    QArrayData::deallocate(local_3c0,2,8);
                                                  }
LAB_10074d5af:
                                                  uVar4 = 0xe01;
                                                  if (cVar1 == '\0') {
                                                    local_3c8 = (QArrayData *)
                                                                QString::fromAscii_helper
                                                                          ("solaris10",9);
                                                    cVar1 = QString::startsWith(&local_720,
                                                                                &local_3c8,0);
                                                    if (*(int *)local_3c8 != -1) {
                                                      if (*(int *)local_3c8 != 0) {
                                                        LOCK();
                                                        *(int *)local_3c8 = *(int *)local_3c8 + -1;
                                                        local_21 = *(int *)local_3c8 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074d622;
                                                      }
                                                      QArrayData::deallocate(local_3c8,2,8);
                                                    }
LAB_10074d622:
                                                    uVar4 = 0xe02;
                                                    if (cVar1 == '\0') {
                                                      local_3d0 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("solaris",7);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_3d0,0);
                                                      if (*(int *)local_3d0 != -1) {
                                                        if (*(int *)local_3d0 != 0) {
                                                          LOCK();
                                                          *(int *)local_3d0 = *(int *)local_3d0 + -1
                                                          ;
                                                          local_21 = *(int *)local_3d0 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074d695;
                                                        }
                                                        QArrayData::deallocate(local_3d0,2,8);
                                                      }
LAB_10074d695:
                                                      uVar4 = 0xeff;
                                                      if (cVar1 == '\0') {
                                                        local_3d8 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("darwin12",8);
                                                        cVar1 = QString::startsWith(&local_720,
                                                                                    &local_3d8,0);
                                                        if (*(int *)local_3d8 != -1) {
                                                          if (*(int *)local_3d8 != 0) {
                                                            LOCK();
                                                            *(int *)local_3d8 =
                                                                 *(int *)local_3d8 + -1;
                                                            local_21 = *(int *)local_3d8 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074d708;
                                                          }
                                                          QArrayData::deallocate(local_3d8,2,8);
                                                        }
LAB_10074d708:
                                                        uVar4 = 0x703;
                                                        if (cVar1 == '\0') {
                                                          local_3e0 = (QArrayData *)
                                                                      QString::fromAscii_helper
                                                                                ("darwin11",8);
                                                          cVar1 = QString::startsWith(&local_720,
                                                                                      &local_3e0,0);
                                                          if (*(int *)local_3e0 != -1) {
                                                            if (*(int *)local_3e0 != 0) {
                                                              LOCK();
                                                              *(int *)local_3e0 =
                                                                   *(int *)local_3e0 + -1;
                                                              local_21 = *(int *)local_3e0 != 0;
                                                              UNLOCK();
                                                              if ((bool)local_21)
                                                              goto LAB_10074d77b;
                                                            }
                                                            QArrayData::deallocate(local_3e0,2,8);
                                                          }
LAB_10074d77b:
                                                          if (cVar1 == '\0') {
                                                            local_3e8 = (QArrayData *)
                                                                        QString::fromAscii_helper
                                                                                  ("darwin10",8);
                                                            cVar1 = QString::startsWith(&local_720,
                                                                                        &local_3e8,0
                                                                                       );
                                                            if (*(int *)local_3e8 != -1) {
                                                              if (*(int *)local_3e8 != 0) {
                                                                LOCK();
                                                                *(int *)local_3e8 =
                                                                     *(int *)local_3e8 + -1;
                                                                local_21 = *(int *)local_3e8 != 0;
                                                                UNLOCK();
                                                                if ((bool)local_21)
                                                                goto LAB_10074d7e8;
                                                              }
                                                              QArrayData::deallocate(local_3e8,2,8);
                                                            }
LAB_10074d7e8:
                                                            if (cVar1 == '\0') {
                                                              local_3f0 = (QArrayData *)
                                                                          QString::fromAscii_helper
                                                                                    ("darwin",6);
                                                              cVar1 = QString::startsWith(&local_720
                                                                                          ,&
                                                  local_3f0,0);
                                                  if (*(int *)local_3f0 != -1) {
                                                    if (*(int *)local_3f0 != 0) {
                                                      LOCK();
                                                      *(int *)local_3f0 = *(int *)local_3f0 + -1;
                                                      local_21 = *(int *)local_3f0 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_21) goto LAB_10074d855;
                                                    }
                                                    QArrayData::deallocate(local_3f0,2,8);
                                                  }
LAB_10074d855:
                                                  uVar4 = 0x702;
                                                  if (cVar1 == '\0') {
                                                    local_3f8 = (QArrayData *)
                                                                QString::fromAscii_helper("dos",3);
                                                    iVar2 = QString::compare(&local_720,&local_3f8,0
                                                                            );
                                                    if (*(int *)local_3f8 != -1) {
                                                      if (*(int *)local_3f8 != 0) {
                                                        LOCK();
                                                        *(int *)local_3f8 = *(int *)local_3f8 + -1;
                                                        local_21 = *(int *)local_3f8 != 0;
                                                        UNLOCK();
                                                        if ((bool)local_21) goto LAB_10074d8c8;
                                                      }
                                                      QArrayData::deallocate(local_3f8,2,8);
                                                    }
LAB_10074d8c8:
                                                    uVar4 = 0xc01;
                                                    if (iVar2 != 0) {
                                                      local_400 = (QArrayData *)
                                                                  QString::fromAscii_helper
                                                                            ("freebsd",7);
                                                      cVar1 = QString::startsWith(&local_720,
                                                                                  &local_400,0);
                                                      if (*(int *)local_400 != -1) {
                                                        if (*(int *)local_400 != 0) {
                                                          LOCK();
                                                          *(int *)local_400 = *(int *)local_400 + -1
                                                          ;
                                                          local_21 = *(int *)local_400 != 0;
                                                          UNLOCK();
                                                          if ((bool)local_21) goto LAB_10074d93b;
                                                        }
                                                        QArrayData::deallocate(local_400,2,8);
                                                      }
LAB_10074d93b:
                                                      uVar4 = 0xa03;
                                                      if (cVar1 == '\0') {
                                                        local_408 = (QArrayData *)
                                                                    QString::fromAscii_helper
                                                                              ("other",5);
                                                        QString::startsWith(&local_720,&local_408,0)
                                                        ;
                                                        uVar4 = 0xffff;
                                                        if (*(int *)local_408 != -1) {
                                                          if (*(int *)local_408 != 0) {
                                                            LOCK();
                                                            *(int *)local_408 =
                                                                 *(int *)local_408 + -1;
                                                            local_21 = *(int *)local_408 != 0;
                                                            UNLOCK();
                                                            if ((bool)local_21) goto LAB_10074d9ae;
                                                          }
                                                          QArrayData::deallocate(local_408,2,8);
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_10074d9ae:
      if (*(int *)local_720 != -1) {
        if (*(int *)local_720 != 0) {
          LOCK();
          *(int *)local_720 = *(int *)local_720 + -1;
          local_21 = *(int *)local_720 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10074da22;
        }
        QArrayData::deallocate(local_720,2,8);
      }
    }
  }
LAB_10074da22:
  if (*(int *)local_718 != -1) {
    if (*(int *)local_718 != 0) {
      LOCK();
      *(int *)local_718 = *(int *)local_718 + -1;
      local_21 = *(int *)local_718 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10074da58;
    }
    QArrayData::deallocate(local_718,2,8);
  }
LAB_10074da58:
  FUN_100ce40c0(local_708);
  return uVar4;
}

