
undefined8 FUN_100cf3830(long param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  QString local_250;
  QString local_248;
  QArrayData *local_240;
  QFileInfo local_238 [8];
  QString local_230;
  QFileInfo local_228 [8];
  QString local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QString local_200;
  QString local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  uint local_184;
  QString local_180;
  QString local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  QFileInfo local_138 [8];
  QString local_130;
  QFileInfo local_128 [8];
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  QString local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar5 = 0;
  do {
    local_50 = (QArrayData *)QString::fromAscii_helper("sata%1:%2",9);
    QString::arg(&local_48,&local_50,0,0,10,0x20);
    QString::arg(&local_40,&local_48,lVar5,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf38fa;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cf38fa:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf392a;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cf392a:
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("present",7);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf3987;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100cf3987:
    pcVar1 = *(code **)*param_2;
    local_70 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_78 = (QArrayData *)local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    local_80 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
    (*pcVar1)(&local_68,param_2,&local_70,&local_78,&local_80);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf3a19;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cf3a19:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf3a49;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cf3a49:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf3a79;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cf3a79:
    local_88 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
    iVar3 = QString::compare(&local_68,&local_88,0);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf3acf;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cf3acf:
    iVar6 = 7;
    if (iVar3 != 0) {
      local_90.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("deviceType",10);
      QString::operator=(&local_58,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf3b3b;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100cf3b3b:
      pcVar1 = *(code **)*param_2;
      local_a0 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_a8 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      local_b0 = (QArrayData *)QString::fromAscii_helper("disk",4);
      (*pcVar1)(&local_98,param_2,&local_a0,&local_a8,&local_b0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf3be8;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cf3be8:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf3c1e;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cf3c1e:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf3c54;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cf3c54:
      local_b8 = (QArrayData *)QString::fromAscii_helper("disk",4);
      iVar3 = QString::compare(&local_98,&local_b8,0);
      bVar7 = true;
      if (iVar3 != 0) {
        local_c0 = (QArrayData *)QString::fromAscii_helper("rawDisk",7);
        iVar3 = QString::compare(&local_98,&local_c0,0);
        bVar7 = true;
        if (iVar3 != 0) {
          local_c8 = (QArrayData *)QString::fromAscii_helper("sata-hardDisk",0xd);
          iVar3 = QString::compare(&local_98,&local_c8,0);
          bVar7 = iVar3 == 0;
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf3d26;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
        }
LAB_100cf3d26:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf3d5c;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
      }
LAB_100cf3d5c:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf3d92;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cf3d92:
      if (bVar7) {
        FUN_100d14eb0(&local_f0);
        local_f0 = 1;
        local_ef = 1;
        local_ee = 1;
        local_d8 = 3;
        local_d4 = 0;
        local_d0 = (int)lVar5;
        local_f8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
        QString::operator=(&local_58,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf3e34;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_100cf3e34:
        pcVar1 = *(code **)*param_2;
        local_108 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_110 = (QArrayData *)local_58.field0_0x0;
        if (1 < *(int *)local_58.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
        }
        local_118 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_100,param_2,&local_108,&local_110,&local_118);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf3ede;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100cf3ede:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf3f14;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100cf3f14:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf3f4a;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100cf3f4a:
        iVar6 = 1;
        if (*(int *)(local_100.field0_0x0 + 4) != 0) {
          local_120.field0_0x0 = local_100.field0_0x0;
          if (1 < *(int *)local_100.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
          }
          QFileInfo::QFileInfo(local_128,&local_100);
          cVar2 = QFileInfo::isRelative();
          if (cVar2 != '\0') {
            (**(code **)(*param_2 + 0x50))(&local_130,param_2);
            QString::operator=(&local_120,&local_130);
            if (*(int *)local_130.field0_0x0 != -1) {
              if (*(int *)local_130.field0_0x0 != 0) {
                LOCK();
                *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                local_31 = *(int *)local_130.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf3ffb;
              }
              QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
            }
LAB_100cf3ffb:
            QFileInfo::QFileInfo(local_138,&local_120);
            QFileInfo::fileName();
            QString::lastIndexOf(&local_120,&local_140,0xffffffff,1);
            if (*(int *)local_140 != -1) {
              if (*(int *)local_140 != 0) {
                LOCK();
                *(int *)local_140 = *(int *)local_140 + -1;
                local_31 = *(int *)local_140 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf4076;
              }
              QArrayData::deallocate(local_140,2,8);
            }
LAB_100cf4076:
            QString::mid((int)&local_148,(int)&local_120);
            QString::operator=(&local_120,&local_148);
            if (*(int *)local_148.field0_0x0 != -1) {
              if (*(int *)local_148.field0_0x0 != 0) {
                LOCK();
                *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                local_31 = *(int *)local_148.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf40d6;
              }
              QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
            }
LAB_100cf40d6:
            local_150.field0_0x0 = local_120.field0_0x0;
            if (1 < *(int *)local_120.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_150);
            QString::operator=(&local_120,&local_150);
            if (*(int *)local_150.field0_0x0 != -1) {
              if (*(int *)local_150.field0_0x0 != 0) {
                LOCK();
                *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                local_31 = *(int *)local_150.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf4150;
              }
              QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
            }
LAB_100cf4150:
            QFileInfo::~QFileInfo(local_138);
          }
          QString::operator=(&local_e0,&local_120);
          FUN_100d05600(param_1 + 0x2e8,&local_f0);
          QFileInfo::~QFileInfo(local_128);
          iVar6 = 0;
          if (*(int *)local_120.field0_0x0 != -1) {
            if (*(int *)local_120.field0_0x0 != 0) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf41c3;
            }
            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
            iVar6 = 0;
          }
        }
LAB_100cf41c3:
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf41f9;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_100cf41f9:
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf4ca0;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_100cf4ca0:
        if (iVar6 == 0) goto LAB_100cf4ca5;
      }
      else {
        local_158 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
        iVar3 = QString::compare(&local_98,&local_158,0);
        bVar7 = true;
        if (iVar3 != 0) {
          local_160 = (QArrayData *)QString::fromAscii_helper("cdrom-raw",9);
          iVar3 = QString::compare(&local_98,&local_160,0);
          bVar7 = iVar3 == 0;
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf42db;
            }
            QArrayData::deallocate(local_160,2,8);
          }
        }
LAB_100cf42db:
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf4311;
          }
          QArrayData::deallocate(local_158,2,8);
        }
LAB_100cf4311:
        if (bVar7) {
          FUN_100d15130(&local_188);
          local_188 = 1;
          local_187 = 1;
          local_170 = 3;
          local_16c = 0;
          local_168 = (int)lVar5;
          local_190.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
          QString::operator=(&local_58,&local_190);
          if (*(int *)local_190.field0_0x0 != -1) {
            if (*(int *)local_190.field0_0x0 != 0) {
              LOCK();
              *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
              local_31 = *(int *)local_190.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf43ac;
            }
            QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
          }
LAB_100cf43ac:
          pcVar1 = *(code **)*param_2;
          local_1a0 = local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          local_1a8 = (QArrayData *)local_58.field0_0x0;
          if (1 < *(int *)local_58.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
          }
          local_1b0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
          (*pcVar1)(&local_198,param_2,&local_1a0,&local_1a8,&local_1b0);
          if (*(int *)local_1b0 != -1) {
            if (*(int *)local_1b0 != 0) {
              LOCK();
              *(int *)local_1b0 = *(int *)local_1b0 + -1;
              local_31 = *(int *)local_1b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4459;
            }
            QArrayData::deallocate(local_1b0,2,8);
          }
LAB_100cf4459:
          if (*(int *)local_1a8 != -1) {
            if (*(int *)local_1a8 != 0) {
              LOCK();
              *(int *)local_1a8 = *(int *)local_1a8 + -1;
              local_31 = *(int *)local_1a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf448f;
            }
            QArrayData::deallocate(local_1a8,2,8);
          }
LAB_100cf448f:
          if (*(int *)local_1a0 != -1) {
            if (*(int *)local_1a0 != 0) {
              LOCK();
              *(int *)local_1a0 = *(int *)local_1a0 + -1;
              local_31 = *(int *)local_1a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf44c5;
            }
            QArrayData::deallocate(local_1a0,2,8);
          }
LAB_100cf44c5:
          local_1b8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
          iVar3 = QString::compare(&local_198,&local_1b8,0);
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_31 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf452a;
            }
            QArrayData::deallocate(local_1b8,2,8);
          }
LAB_100cf452a:
          local_186 = iVar3 == 0;
          local_1c0 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
          iVar3 = QString::compare(&local_98,&local_1c0,0);
          if (*(int *)local_1c0 != -1) {
            if (*(int *)local_1c0 != 0) {
              LOCK();
              *(int *)local_1c0 = *(int *)local_1c0 + -1;
              local_31 = *(int *)local_1c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4599;
            }
            QArrayData::deallocate(local_1c0,2,8);
          }
LAB_100cf4599:
          local_184 = (uint)(iVar3 != 0);
          local_1c8.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("autodetect",10);
          QString::operator=(&local_58,&local_1c8);
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_31 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4606;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
LAB_100cf4606:
          pcVar1 = *(code **)*param_2;
          local_1d8 = local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          local_1e0 = (QArrayData *)local_58.field0_0x0;
          if (1 < *(int *)local_58.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
          }
          local_1e8 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
          (*pcVar1)(&local_1d0,param_2,&local_1d8,&local_1e0,&local_1e8);
          if (*(int *)local_1e8 != -1) {
            if (*(int *)local_1e8 != 0) {
              LOCK();
              *(int *)local_1e8 = *(int *)local_1e8 + -1;
              local_31 = *(int *)local_1e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf46b3;
            }
            QArrayData::deallocate(local_1e8,2,8);
          }
LAB_100cf46b3:
          if (*(int *)local_1e0 != -1) {
            if (*(int *)local_1e0 != 0) {
              LOCK();
              *(int *)local_1e0 = *(int *)local_1e0 + -1;
              local_31 = *(int *)local_1e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf46e9;
            }
            QArrayData::deallocate(local_1e0,2,8);
          }
LAB_100cf46e9:
          if (*(int *)local_1d8 != -1) {
            if (*(int *)local_1d8 != 0) {
              LOCK();
              *(int *)local_1d8 = *(int *)local_1d8 + -1;
              local_31 = *(int *)local_1d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf471f;
            }
            QArrayData::deallocate(local_1d8,2,8);
          }
LAB_100cf471f:
          local_1f0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
          iVar4 = QString::compare(&local_1d0,&local_1f0,0);
          if (*(int *)local_1f0 != -1) {
            if (*(int *)local_1f0 != 0) {
              LOCK();
              *(int *)local_1f0 = *(int *)local_1f0 + -1;
              local_31 = *(int *)local_1f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4784;
            }
            QArrayData::deallocate(local_1f0,2,8);
          }
LAB_100cf4784:
          iVar6 = 7;
          if (iVar4 != 0) {
            local_1f8.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
            QString::operator=(&local_58,&local_1f8);
            if (*(int *)local_1f8.field0_0x0 != -1) {
              if (*(int *)local_1f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
                local_31 = *(int *)local_1f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf47f0;
              }
              QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
            }
LAB_100cf47f0:
            pcVar1 = *(code **)*param_2;
            local_208 = local_40;
            if (1 < *(int *)local_40 + 1U) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + 1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
            }
            local_210 = (QArrayData *)local_58.field0_0x0;
            if (1 < *(int *)local_58.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
            }
            local_218 = (QArrayData *)QString::fromAscii_helper("",0);
            (*pcVar1)(&local_200,param_2,&local_208,&local_210,&local_218);
            if (*(int *)local_218 != -1) {
              if (*(int *)local_218 != 0) {
                LOCK();
                *(int *)local_218 = *(int *)local_218 + -1;
                local_31 = *(int *)local_218 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf489a;
              }
              QArrayData::deallocate(local_218,2,8);
            }
LAB_100cf489a:
            if (*(int *)local_210 != -1) {
              if (*(int *)local_210 != 0) {
                LOCK();
                *(int *)local_210 = *(int *)local_210 + -1;
                local_31 = *(int *)local_210 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf48d0;
              }
              QArrayData::deallocate(local_210,2,8);
            }
LAB_100cf48d0:
            if (*(int *)local_208 != -1) {
              if (*(int *)local_208 != 0) {
                LOCK();
                *(int *)local_208 = *(int *)local_208 + -1;
                local_31 = *(int *)local_208 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf4906;
              }
              QArrayData::deallocate(local_208,2,8);
            }
LAB_100cf4906:
            iVar6 = 1;
            if (*(int *)(local_200.field0_0x0 + 4) != 0) {
              if (iVar3 == 0) {
                local_220.field0_0x0 = local_200.field0_0x0;
                if (1 < *(int *)local_200.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + 1;
                  local_31 = *(int *)local_200.field0_0x0 != 0;
                  UNLOCK();
                }
                QFileInfo::QFileInfo(local_228,&local_200);
                cVar2 = QFileInfo::isRelative();
                if (cVar2 != '\0') {
                  (**(code **)(*param_2 + 0x50))(&local_230,param_2);
                  QString::operator=(&local_220,&local_230);
                  if (*(int *)local_230.field0_0x0 != -1) {
                    if (*(int *)local_230.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
                      local_31 = *(int *)local_230.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cf49d7;
                    }
                    QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
                  }
LAB_100cf49d7:
                  QFileInfo::QFileInfo(local_238,&local_220);
                  QFileInfo::fileName();
                  QString::lastIndexOf(&local_220,&local_240,0xffffffff,1);
                  if (*(int *)local_240 != -1) {
                    if (*(int *)local_240 != 0) {
                      LOCK();
                      *(int *)local_240 = *(int *)local_240 + -1;
                      local_31 = *(int *)local_240 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cf4a4a;
                    }
                    QArrayData::deallocate(local_240,2,8);
                  }
LAB_100cf4a4a:
                  QString::mid((int)&local_248,(int)&local_220);
                  QString::operator=(&local_220,&local_248);
                  if (*(int *)local_248.field0_0x0 != -1) {
                    if (*(int *)local_248.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
                      local_31 = *(int *)local_248.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cf4aa2;
                    }
                    QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
                  }
LAB_100cf4aa2:
                  local_250.field0_0x0 = local_220.field0_0x0;
                  if (1 < *(int *)local_220.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
                    local_31 = *(int *)local_220.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::append(&local_250);
                  QString::operator=(&local_220,&local_250);
                  if (*(int *)local_250.field0_0x0 != -1) {
                    if (*(int *)local_250.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                      local_31 = *(int *)local_250.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cf4b18;
                    }
                    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
                  }
LAB_100cf4b18:
                  QFileInfo::~QFileInfo(local_238);
                }
                QString::operator=(&local_180,&local_220);
                QFileInfo::~QFileInfo(local_228);
                if (*(int *)local_220.field0_0x0 != -1) {
                  if (*(int *)local_220.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
                    local_31 = *(int *)local_220.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100cf4b71;
                  }
                  QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
                }
              }
              else {
                QString::operator=(&local_178,&local_200);
              }
LAB_100cf4b71:
              FUN_100d05970(param_1 + 0x2f0,&local_188);
              iVar6 = 0;
            }
            if (*(int *)local_200.field0_0x0 != -1) {
              if (*(int *)local_200.field0_0x0 != 0) {
                LOCK();
                *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
                local_31 = *(int *)local_200.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf4bbd;
              }
              QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
            }
          }
LAB_100cf4bbd:
          if (*(int *)local_1d0 != -1) {
            if (*(int *)local_1d0 != 0) {
              LOCK();
              *(int *)local_1d0 = *(int *)local_1d0 + -1;
              local_31 = *(int *)local_1d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4bf3;
            }
            QArrayData::deallocate(local_1d0,2,8);
          }
LAB_100cf4bf3:
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_31 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4c30;
            }
            QArrayData::deallocate(local_198,2,8);
          }
LAB_100cf4c30:
          if (*(int *)local_178.field0_0x0 != -1) {
            if (*(int *)local_178.field0_0x0 != 0) {
              LOCK();
              *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
              local_31 = *(int *)local_178.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4c66;
            }
            QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
          }
LAB_100cf4c66:
          if (*(int *)local_180.field0_0x0 != -1) {
            if (*(int *)local_180.field0_0x0 != 0) {
              LOCK();
              *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
              local_31 = *(int *)local_180.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf4ca0;
            }
            QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
          }
          goto LAB_100cf4ca0;
        }
LAB_100cf4ca5:
        iVar6 = 0;
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf4cde;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_100cf4cde:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf4d0e;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cf4d0e:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf4d3e;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100cf4d3e:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf4d6e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100cf4d6e:
    if (iVar6 == 1) {
      return 0x8117002;
    }
    lVar5 = lVar5 + 1;
    if (5 < lVar5) {
      return 0x8000000;
    }
  } while( true );
}

