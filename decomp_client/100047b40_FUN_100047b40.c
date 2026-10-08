
undefined8 FUN_100047b40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  QArrayData *pQVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
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
  QString local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [32];
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1db67f6);
  QString::append(&local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100047bc4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100047bc4:
  cVar7 = QFile::exists(&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100047bff;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100047bff:
  if (cVar7 == '\0') {
    uVar10 = 0xffffffff;
    if (DAT_10230ffd0 < 2) {
      return 0xffffffff;
    }
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",2,"Error: helper Info.plist file for \"%s\" not found"
                  ,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 == -1) {
      return 0xffffffff;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return 0xffffffff;
      }
      local_31 = 0;
    }
    uVar9 = 1;
    goto LAB_100048ac8;
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db6890);
  QString::append(&local_68);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100047c71;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100047c71:
  cVar7 = QFile::exists(&local_68);
  if (cVar7 == '\0') {
    uVar10 = 0xffffffff;
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      pQVar6 = local_70;
      lVar1 = *(long *)(local_70 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",2,
                    "Error: configuration file \"%s\" for helper \"%s\" not found",pQVar6 + lVar1,
                    local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000484c5;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_1000484c5:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048aa2;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
  }
  else {
    local_a0 = (QArrayData *)local_68.field0_0x0;
    if (1 < *(int *)local_68.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_100b56ca0(local_98,&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100047ce7;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100047ce7:
    local_b0 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_b8 = (QArrayData *)QString::fromAscii_helper("Protocols",9);
    local_c0 = (QArrayData *)QString::fromAscii_helper("-",1);
    FUN_100b57250(&local_a8,local_98,&local_b0,&local_b8,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100047d8d;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100047d8d:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100047dc3;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100047dc3:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100047df9;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100047df9:
    iVar8 = QString::compare_helper
                      (local_a8 + *(long *)(local_a8 + 0x10),*(undefined4 *)(local_a8 + 4),"-",
                       0xffffffff,1);
    if (iVar8 == 0) {
      uVar10 = 0xffffffff;
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        pQVar6 = local_c8;
        lVar1 = *(long *)(local_c8 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",2,
                      "Error: configuration file \"%s\" for helper \"%s\" not contain protocols",
                      pQVar6 + lVar1,local_d0 + *(long *)(local_d0 + 0x10));
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000485aa;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
LAB_1000485aa:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100048a60;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
      }
    }
    else {
      local_e0 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_e8 = (QArrayData *)QString::fromAscii_helper("Helper Version",0xe);
      puVar5 = PTR_shared_null_1021e1288;
      local_f0 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_100b57250(&local_d8,local_98,&local_e0,&local_e8,&local_f0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047ec5;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100047ec5:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047efb;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100047efb:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047f31;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100047f31:
      local_100 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_108 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
      local_110 = (QArrayData *)puVar5;
      FUN_100b57250(&local_f8,local_98,&local_100,&local_108,&local_110);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047fc6;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100047fc6:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047ffc;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100047ffc:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048032;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100048032:
      local_120 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_128 = (QArrayData *)QString::fromAscii_helper("VM Name",7);
      local_130 = (QArrayData *)puVar5;
      FUN_100b57250(&local_118,local_98,&local_120,&local_128,&local_130);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000480c7;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1000480c7:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000480fd;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1000480fd:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048133;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100048133:
      local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
      if (1 < *(int *)local_138.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + 1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1db68d4);
      QString::append(&local_138);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000481a3;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1000481a3:
      cVar7 = QFile::exists(&local_138);
      if (*(int *)local_138.field0_0x0 != -1) {
        if (*(int *)local_138.field0_0x0 != 0) {
          LOCK();
          *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
          local_31 = *(int *)local_138.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000481e7;
        }
        QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
      }
LAB_1000481e7:
      if (cVar7 == '\0') {
        uVar10 = 2;
        if (0 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",1,
                        "Warning: helper executable file for \"%s\" not found",
                        local_140 + *(long *)(local_140 + 0x10));
          uVar10 = 2;
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_31 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000487c6;
            }
            QArrayData::deallocate(local_140,1,8);
          }
          goto LAB_1000487c6;
        }
      }
      else {
        cVar7 = operator==((QString *)(param_1 + 0x10),&local_f8);
        if ((cVar7 != '\0') &&
           (cVar7 = operator==((QString *)(param_1 + 0x18),&local_118), cVar7 != '\0')) {
          cVar7 = operator==(&local_d8,(QString *)&DAT_102310848);
          uVar10 = 1;
          if (cVar7 == '\0') {
            cVar7 = operator==(&local_d8,(QString *)&DAT_102310840);
            uVar10 = 0;
            if (cVar7 == '\0') {
              uVar10 = 2;
              if (DAT_10230ffd0 < 1) goto LAB_1000489be;
              QString::toUtf8();
              lVar1 = *(long *)(local_160 + 0x10);
              QString::toUtf8();
              lVar2 = *(long *)(local_168 + 0x10);
              QString::toUtf8();
              FUN_100df99c0("SGASMGMT","prl_client_app",1,
                            "Warning: invalid helperVersion=\"%s\" (must be \"%s\") for helper bundlePath=\"%s\""
                            ,local_160 + lVar1,local_168 + lVar2,
                            local_170 + *(long *)(local_170 + 0x10));
              if (*(int *)local_170 != -1) {
                if (*(int *)local_170 != 0) {
                  LOCK();
                  *(int *)local_170 = *(int *)local_170 + -1;
                  local_31 = *(int *)local_170 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100048332;
                }
                QArrayData::deallocate(local_170,1,8);
              }
LAB_100048332:
              if (*(int *)local_168 != -1) {
                if (*(int *)local_168 != 0) {
                  LOCK();
                  *(int *)local_168 = *(int *)local_168 + -1;
                  local_31 = *(int *)local_168 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100048368;
                }
                QArrayData::deallocate(local_168,1,8);
              }
LAB_100048368:
              uVar10 = 2;
              if (*(int *)local_160 != -1) {
                if (*(int *)local_160 != 0) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + -1;
                  local_31 = *(int *)local_160 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000487c6;
                }
                QArrayData::deallocate(local_160,1,8);
              }
            }
          }
          goto LAB_1000487c6;
        }
        uVar10 = 2;
        if (DAT_10230ffd0 < 1) goto LAB_1000489be;
        QString::toUtf8();
        lVar1 = *(long *)(local_148 + 0x10);
        QString::toUtf8();
        lVar2 = *(long *)(local_150 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",1,
                      "Warning: invalid vmUuid=\"%s\" (must be \"%s\") for helper bundlePath=\"%s\""
                      ,local_148 + lVar1,local_150 + lVar2,local_158 + *(long *)(local_158 + 0x10));
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100048754;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_100048754:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004878a;
          }
          QArrayData::deallocate(local_150,1,8);
        }
LAB_10004878a:
        uVar10 = 2;
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000487c6;
          }
          QArrayData::deallocate(local_148,1,8);
        }
LAB_1000487c6:
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          lVar1 = *(long *)(local_178 + 0x10);
          QString::toUtf8();
          lVar2 = *(long *)(local_180 + 0x10);
          QString::toUtf8();
          lVar3 = *(long *)(local_188 + 0x10);
          QString::toUtf8();
          lVar4 = *(long *)(local_190 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",3,
                        "Helper bundle \"%s\" versionStatus=%i: helperVmUuid=\"%s\", currentVmUuid=\"%s\", helperVersion=\"%s\", currentVersion=\"%s\""
                        ,local_178 + lVar1,uVar10,local_180 + lVar2,local_188 + lVar3,
                        local_190 + lVar4,local_198 + *(long *)(local_198 + 0x10));
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_31 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000488e6;
            }
            QArrayData::deallocate(local_198,1,8);
          }
LAB_1000488e6:
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_31 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10004891c;
            }
            QArrayData::deallocate(local_190,1,8);
          }
LAB_10004891c:
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_31 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100048952;
            }
            QArrayData::deallocate(local_188,1,8);
          }
LAB_100048952:
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_31 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100048988;
            }
            QArrayData::deallocate(local_180,1,8);
          }
LAB_100048988:
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_31 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000489be;
            }
            QArrayData::deallocate(local_178,1,8);
          }
        }
      }
LAB_1000489be:
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_31 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000489f4;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
LAB_1000489f4:
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048a2a;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_100048a2a:
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048a60;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
    }
LAB_100048a60:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100048a96;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100048a96:
    FUN_100b57060(local_98);
  }
LAB_100048aa2:
  if (*(int *)local_68.field0_0x0 == -1) {
    return uVar10;
  }
  if (*(int *)local_68.field0_0x0 != 0) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_68.field0_0x0 != 0) {
      return uVar10;
    }
    local_31 = 0;
  }
  uVar9 = 2;
  local_60 = (QArrayData *)local_68.field0_0x0;
LAB_100048ac8:
  QArrayData::deallocate(local_60,uVar9,8);
  return uVar10;
}

