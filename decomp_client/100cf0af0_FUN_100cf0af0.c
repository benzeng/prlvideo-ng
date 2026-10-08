
undefined8 FUN_100cf0af0(long param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined4 local_2c8;
  ulong local_2c0;
  QString local_2b8;
  QString local_2b0;
  QArrayData *local_2a8;
  QFileInfo local_2a0 [8];
  QString local_298;
  QFileInfo local_290 [8];
  QString local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QString local_268;
  QString local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QString local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QString local_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  uint local_1ec;
  QString local_1e8;
  QString local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  QFileInfo local_1a0 [8];
  QString local_198;
  QFileInfo local_190 [8];
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  QString local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined4 local_9c;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_64;
  QArrayData *local_60;
  undefined4 local_54;
  QArrayData *local_50;
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_2c0 = 0;
  do {
    if ((DAT_1023187d0 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023187d0), iVar3 != 0)) {
      DAT_1023187c8 = PTR_shared_null_1021e12f0;
      local_40 = (QArrayData *)QString::fromAscii_helper("buslogic",8);
      local_44 = 1;
      FUN_100d060c0(&DAT_1023187c8,&local_40,&local_44);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0bc7;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100cf0bc7:
      local_50 = (QArrayData *)QString::fromAscii_helper("lsilogic",8);
      local_54 = 2;
      FUN_100d060c0(&DAT_1023187c8,&local_50,&local_54);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0c27;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100cf0c27:
      local_60 = (QArrayData *)QString::fromAscii_helper("lsisas1068",10);
      local_64 = 3;
      FUN_100d060c0(&DAT_1023187c8,&local_60,&local_64);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0c87;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100cf0c87:
      ___cxa_atexit(FUN_100d06060,&DAT_1023187c8,0x100000000);
      ___cxa_guard_release(&DAT_1023187d0);
    }
    pcVar1 = *(code **)*param_2;
    local_80 = (QArrayData *)QString::fromAscii_helper("scsi%1",6);
    QString::arg(&local_78,&local_80,local_2c0 & 0xffffffff,0,10,0x20);
    local_88 = (QArrayData *)QString::fromAscii_helper("virtualDev",10);
    local_90 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar1)(&local_70,param_2,&local_78,&local_88,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf0d63;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100cf0d63:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf0d93;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cf0d93:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf0dc3;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cf0dc3:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf0df3;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cf0df3:
    local_2c8 = 1;
    if (*(int *)(local_70 + 4) != 0) {
      QString::toLower();
      local_9c = 0;
      lVar9 = *(long *)(DAT_1023187c8 + 0x10);
      lVar8 = 0;
      if (*(long *)(DAT_1023187c8 + 0x10) == 0) {
LAB_100cf0e8c:
        lVar6 = 0;
      }
      else {
        do {
          while (lVar6 = lVar9, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_98),
                cVar2 == '\0') {
            lVar9 = *(long *)(lVar6 + 8);
            lVar8 = lVar6;
            if (*(long *)(lVar6 + 8) == 0) goto LAB_100cf0e78;
          }
          lVar9 = *(long *)(lVar6 + 0x10);
        } while (*(long *)(lVar6 + 0x10) != 0);
        lVar6 = lVar8;
        if (lVar8 == 0) goto LAB_100cf0e8c;
LAB_100cf0e78:
        cVar2 = operator<(&local_98,(QString *)(lVar6 + 0x18));
        if (cVar2 != '\0') goto LAB_100cf0e8c;
      }
      puVar5 = (undefined4 *)(lVar6 + 0x20);
      if (lVar6 == 0) {
        puVar5 = &local_9c;
      }
      local_2c8 = *puVar5;
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0ede;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
    }
LAB_100cf0ede:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf0f0e;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cf0f0e:
    lVar9 = 0;
    do {
      local_b8 = (QArrayData *)QString::fromAscii_helper("scsi%1:%2",9);
      QString::arg(&local_b0,&local_b8,local_2c0,0,10,0x20);
      QString::arg(&local_a8,&local_b0,lVar9,0,10,0x20);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0fb2;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cf0fb2:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0fe8;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cf0fe8:
      local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_c8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("present",7);
      QString::operator=(&local_c0,&local_c8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf1057;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_100cf1057:
      pcVar1 = *(code **)*param_2;
      local_d8 = local_a8;
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      local_e0 = (QArrayData *)local_c0.field0_0x0;
      if (1 < *(int *)local_c0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
      }
      local_e8 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      (*pcVar1)(&local_d0,param_2,&local_d8,&local_e0,&local_e8);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf110b;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cf110b:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf1141;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100cf1141:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf1177;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100cf1177:
      local_f0 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      iVar3 = QString::compare(&local_d0,&local_f0,0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf11dc;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cf11dc:
      iVar7 = 7;
      if (iVar3 != 0) {
        local_f8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("deviceType",10);
        QString::operator=(&local_c0,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf124b;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_100cf124b:
        pcVar1 = *(code **)*param_2;
        local_108 = local_a8;
        if (1 < *(int *)local_a8 + 1U) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + 1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
        }
        local_110 = (QArrayData *)local_c0.field0_0x0;
        if (1 < *(int *)local_c0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
        }
        local_118 = (QArrayData *)QString::fromAscii_helper("disk",4);
        (*pcVar1)(&local_100,param_2,&local_108,&local_110,&local_118);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf12ff;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100cf12ff:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf1335;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100cf1335:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf136b;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100cf136b:
        local_120 = (QArrayData *)QString::fromAscii_helper("disk",4);
        iVar3 = QString::compare(&local_100,&local_120,0);
        bVar10 = true;
        if (iVar3 != 0) {
          local_128 = (QArrayData *)QString::fromAscii_helper("rawDisk",7);
          iVar3 = QString::compare(&local_100,&local_128,0);
          bVar10 = true;
          if (iVar3 != 0) {
            local_130 = (QArrayData *)QString::fromAscii_helper("scsi-hardDisk",0xd);
            iVar3 = QString::compare(&local_100,&local_130,0);
            bVar10 = iVar3 == 0;
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_31 = *(int *)local_130 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf143d;
              }
              QArrayData::deallocate(local_130,2,8);
            }
          }
LAB_100cf143d:
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf1473;
            }
            QArrayData::deallocate(local_128,2,8);
          }
        }
LAB_100cf1473:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf14a9;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_100cf14a9:
        if (bVar10) {
          FUN_100d14eb0(&local_158);
          local_158 = 1;
          local_157 = 1;
          local_156 = 1;
          local_140 = 2;
          local_134 = local_2c8;
          local_13c = (int)local_2c0;
          local_138 = (int)lVar9;
          local_160.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
          QString::operator=(&local_c0,&local_160);
          if (*(int *)local_160.field0_0x0 != -1) {
            if (*(int *)local_160.field0_0x0 != 0) {
              LOCK();
              *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
              local_31 = *(int *)local_160.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf155d;
            }
            QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
          }
LAB_100cf155d:
          pcVar1 = *(code **)*param_2;
          local_170 = local_a8;
          if (1 < *(int *)local_a8 + 1U) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + 1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
          }
          local_178 = (QArrayData *)local_c0.field0_0x0;
          if (1 < *(int *)local_c0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
          }
          local_180 = (QArrayData *)QString::fromAscii_helper("",0);
          (*pcVar1)(&local_168,param_2,&local_170,&local_178,&local_180);
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_31 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf160e;
            }
            QArrayData::deallocate(local_180,2,8);
          }
LAB_100cf160e:
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_31 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf1644;
            }
            QArrayData::deallocate(local_178,2,8);
          }
LAB_100cf1644:
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_31 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf167a;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_100cf167a:
          iVar7 = 1;
          if (*(int *)(local_168.field0_0x0 + 4) != 0) {
            local_188.field0_0x0 = local_168.field0_0x0;
            if (1 < *(int *)local_168.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + 1;
              local_31 = *(int *)local_168.field0_0x0 != 0;
              UNLOCK();
            }
            QFileInfo::QFileInfo(local_190,&local_168);
            cVar2 = QFileInfo::isRelative();
            if (cVar2 != '\0') {
              (**(code **)(*param_2 + 0x50))(&local_198,param_2);
              QString::operator=(&local_188,&local_198);
              if (*(int *)local_198.field0_0x0 != -1) {
                if (*(int *)local_198.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                  local_31 = *(int *)local_198.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf172c;
                }
                QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
              }
LAB_100cf172c:
              QFileInfo::QFileInfo(local_1a0,&local_188);
              QFileInfo::fileName();
              QString::lastIndexOf(&local_188,&local_1a8,0xffffffff,1);
              if (*(int *)local_1a8 != -1) {
                if (*(int *)local_1a8 != 0) {
                  LOCK();
                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                  local_31 = *(int *)local_1a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf17a7;
                }
                QArrayData::deallocate(local_1a8,2,8);
              }
LAB_100cf17a7:
              QString::mid((int)&local_1b0,(int)&local_188);
              QString::operator=(&local_188,&local_1b0);
              if (*(int *)local_1b0.field0_0x0 != -1) {
                if (*(int *)local_1b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
                  local_31 = *(int *)local_1b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf1807;
                }
                QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
              }
LAB_100cf1807:
              local_1b8.field0_0x0 = local_188.field0_0x0;
              if (1 < *(int *)local_188.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + 1;
                local_31 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_1b8);
              QString::operator=(&local_188,&local_1b8);
              if (*(int *)local_1b8.field0_0x0 != -1) {
                if (*(int *)local_1b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
                  local_31 = *(int *)local_1b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf1881;
                }
                QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
              }
LAB_100cf1881:
              QFileInfo::~QFileInfo(local_1a0);
            }
            QString::operator=(&local_148,&local_188);
            FUN_100d05600(param_1 + 0x2d0,&local_158);
            QFileInfo::~QFileInfo(local_190);
            iVar7 = 0;
            if (*(int *)local_188.field0_0x0 != -1) {
              if (*(int *)local_188.field0_0x0 != 0) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
                local_31 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf18f4;
              }
              QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
              iVar7 = 0;
            }
          }
LAB_100cf18f4:
          if (*(int *)local_168.field0_0x0 != -1) {
            if (*(int *)local_168.field0_0x0 != 0) {
              LOCK();
              *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
              local_31 = *(int *)local_168.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf192a;
            }
            QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
          }
LAB_100cf192a:
          if (*(int *)local_148.field0_0x0 != -1) {
            if (*(int *)local_148.field0_0x0 != 0) {
              LOCK();
              *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
              local_31 = *(int *)local_148.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf2410;
            }
            QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
          }
LAB_100cf2410:
          if (iVar7 == 0) goto LAB_100cf2415;
        }
        else {
          local_1c0 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
          iVar3 = QString::compare(&local_100,&local_1c0,0);
          bVar10 = true;
          if (iVar3 != 0) {
            local_1c8 = (QArrayData *)QString::fromAscii_helper("cdrom-raw",9);
            iVar3 = QString::compare(&local_100,&local_1c8,0);
            bVar10 = iVar3 == 0;
            if (*(int *)local_1c8 != -1) {
              if (*(int *)local_1c8 != 0) {
                LOCK();
                *(int *)local_1c8 = *(int *)local_1c8 + -1;
                local_31 = *(int *)local_1c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1a0b;
              }
              QArrayData::deallocate(local_1c8,2,8);
            }
          }
LAB_100cf1a0b:
          if (*(int *)local_1c0 != -1) {
            if (*(int *)local_1c0 != 0) {
              LOCK();
              *(int *)local_1c0 = *(int *)local_1c0 + -1;
              local_31 = *(int *)local_1c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf1a41;
            }
            QArrayData::deallocate(local_1c0,2,8);
          }
LAB_100cf1a41:
          if (bVar10) {
            FUN_100d15130(&local_1f0);
            local_1f0 = 1;
            local_1ef = 1;
            local_1d8 = 2;
            local_1d4 = (int)local_2c0;
            local_1d0 = (int)lVar9;
            local_1f8.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
            QString::operator=(&local_c0,&local_1f8);
            if (*(int *)local_1f8.field0_0x0 != -1) {
              if (*(int *)local_1f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
                local_31 = *(int *)local_1f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1ae2;
              }
              QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
            }
LAB_100cf1ae2:
            pcVar1 = *(code **)*param_2;
            local_208 = local_a8;
            if (1 < *(int *)local_a8 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
            }
            local_210 = (QArrayData *)local_c0.field0_0x0;
            if (1 < *(int *)local_c0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
              local_31 = *(int *)local_c0.field0_0x0 != 0;
              UNLOCK();
            }
            local_218 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
            (*pcVar1)(&local_200,param_2,&local_208,&local_210,&local_218);
            if (*(int *)local_218 != -1) {
              if (*(int *)local_218 != 0) {
                LOCK();
                *(int *)local_218 = *(int *)local_218 + -1;
                local_31 = *(int *)local_218 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1b96;
              }
              QArrayData::deallocate(local_218,2,8);
            }
LAB_100cf1b96:
            if (*(int *)local_210 != -1) {
              if (*(int *)local_210 != 0) {
                LOCK();
                *(int *)local_210 = *(int *)local_210 + -1;
                local_31 = *(int *)local_210 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1bcc;
              }
              QArrayData::deallocate(local_210,2,8);
            }
LAB_100cf1bcc:
            if (*(int *)local_208 != -1) {
              if (*(int *)local_208 != 0) {
                LOCK();
                *(int *)local_208 = *(int *)local_208 + -1;
                local_31 = *(int *)local_208 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1c02;
              }
              QArrayData::deallocate(local_208,2,8);
            }
LAB_100cf1c02:
            local_220 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
            iVar3 = QString::compare(&local_200,&local_220,0);
            if (*(int *)local_220 != -1) {
              if (*(int *)local_220 != 0) {
                LOCK();
                *(int *)local_220 = *(int *)local_220 + -1;
                local_31 = *(int *)local_220 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1c67;
              }
              QArrayData::deallocate(local_220,2,8);
            }
LAB_100cf1c67:
            local_1ee = iVar3 == 0;
            local_228 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
            iVar3 = QString::compare(&local_100,&local_228,0);
            if (*(int *)local_228 != -1) {
              if (*(int *)local_228 != 0) {
                LOCK();
                *(int *)local_228 = *(int *)local_228 + -1;
                local_31 = *(int *)local_228 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1cd6;
              }
              QArrayData::deallocate(local_228,2,8);
            }
LAB_100cf1cd6:
            local_1ec = (uint)(iVar3 != 0);
            local_230.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("autodetect",10);
            QString::operator=(&local_c0,&local_230);
            if (*(int *)local_230.field0_0x0 != -1) {
              if (*(int *)local_230.field0_0x0 != 0) {
                LOCK();
                *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
                local_31 = *(int *)local_230.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1d46;
              }
              QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
            }
LAB_100cf1d46:
            pcVar1 = *(code **)*param_2;
            local_240 = local_a8;
            if (1 < *(int *)local_a8 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
            }
            local_248 = (QArrayData *)local_c0.field0_0x0;
            if (1 < *(int *)local_c0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
              local_31 = *(int *)local_c0.field0_0x0 != 0;
              UNLOCK();
            }
            local_250 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
            (*pcVar1)(&local_238,param_2,&local_240,&local_248,&local_250);
            if (*(int *)local_250 != -1) {
              if (*(int *)local_250 != 0) {
                LOCK();
                *(int *)local_250 = *(int *)local_250 + -1;
                local_31 = *(int *)local_250 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1dfa;
              }
              QArrayData::deallocate(local_250,2,8);
            }
LAB_100cf1dfa:
            if (*(int *)local_248 != -1) {
              if (*(int *)local_248 != 0) {
                LOCK();
                *(int *)local_248 = *(int *)local_248 + -1;
                local_31 = *(int *)local_248 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1e30;
              }
              QArrayData::deallocate(local_248,2,8);
            }
LAB_100cf1e30:
            if (*(int *)local_240 != -1) {
              if (*(int *)local_240 != 0) {
                LOCK();
                *(int *)local_240 = *(int *)local_240 + -1;
                local_31 = *(int *)local_240 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1e66;
              }
              QArrayData::deallocate(local_240,2,8);
            }
LAB_100cf1e66:
            local_258 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
            iVar4 = QString::compare(&local_238,&local_258,0);
            if (*(int *)local_258 != -1) {
              if (*(int *)local_258 != 0) {
                LOCK();
                *(int *)local_258 = *(int *)local_258 + -1;
                local_31 = *(int *)local_258 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf1ed1;
              }
              QArrayData::deallocate(local_258,2,8);
            }
LAB_100cf1ed1:
            iVar7 = 7;
            if (iVar4 != 0) {
              local_260.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
              QString::operator=(&local_c0,&local_260);
              if (*(int *)local_260.field0_0x0 != -1) {
                if (*(int *)local_260.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
                  local_31 = *(int *)local_260.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf1f40;
                }
                QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
              }
LAB_100cf1f40:
              pcVar1 = *(code **)*param_2;
              local_270 = local_a8;
              if (1 < *(int *)local_a8 + 1U) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + 1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
              }
              local_278 = (QArrayData *)local_c0.field0_0x0;
              if (1 < *(int *)local_c0.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
              }
              local_280 = (QArrayData *)QString::fromAscii_helper("",0);
              (*pcVar1)(&local_268,param_2,&local_270,&local_278,&local_280);
              if (*(int *)local_280 != -1) {
                if (*(int *)local_280 != 0) {
                  LOCK();
                  *(int *)local_280 = *(int *)local_280 + -1;
                  local_31 = *(int *)local_280 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf1ff0;
                }
                QArrayData::deallocate(local_280,2,8);
              }
LAB_100cf1ff0:
              if (*(int *)local_278 != -1) {
                if (*(int *)local_278 != 0) {
                  LOCK();
                  *(int *)local_278 = *(int *)local_278 + -1;
                  local_31 = *(int *)local_278 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf2026;
                }
                QArrayData::deallocate(local_278,2,8);
              }
LAB_100cf2026:
              if (*(int *)local_270 != -1) {
                if (*(int *)local_270 != 0) {
                  LOCK();
                  *(int *)local_270 = *(int *)local_270 + -1;
                  local_31 = *(int *)local_270 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf205c;
                }
                QArrayData::deallocate(local_270,2,8);
              }
LAB_100cf205c:
              iVar7 = 1;
              if (*(int *)(local_268.field0_0x0 + 4) != 0) {
                if (iVar3 == 0) {
                  local_288.field0_0x0 = local_268.field0_0x0;
                  if (1 < *(int *)local_268.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + 1;
                    local_31 = *(int *)local_268.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QFileInfo::QFileInfo(local_290,&local_268);
                  cVar2 = QFileInfo::isRelative();
                  if (cVar2 != '\0') {
                    (**(code **)(*param_2 + 0x50))(&local_298,param_2);
                    QString::operator=(&local_288,&local_298);
                    if (*(int *)local_298.field0_0x0 != -1) {
                      if (*(int *)local_298.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
                        local_31 = *(int *)local_298.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100cf212a;
                      }
                      QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
                    }
LAB_100cf212a:
                    QFileInfo::QFileInfo(local_2a0,&local_288);
                    QFileInfo::fileName();
                    QString::lastIndexOf(&local_288,&local_2a8,0xffffffff,1);
                    if (*(int *)local_2a8 != -1) {
                      if (*(int *)local_2a8 != 0) {
                        LOCK();
                        *(int *)local_2a8 = *(int *)local_2a8 + -1;
                        local_31 = *(int *)local_2a8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100cf21a5;
                      }
                      QArrayData::deallocate(local_2a8,2,8);
                    }
LAB_100cf21a5:
                    QString::mid((int)&local_2b0,(int)&local_288);
                    QString::operator=(&local_288,&local_2b0);
                    if (*(int *)local_2b0.field0_0x0 != -1) {
                      if (*(int *)local_2b0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
                        local_31 = *(int *)local_2b0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100cf2205;
                      }
                      QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
                    }
LAB_100cf2205:
                    local_2b8.field0_0x0 = local_288.field0_0x0;
                    if (1 < *(int *)local_288.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + 1;
                      local_31 = *(int *)local_288.field0_0x0 != 0;
                      UNLOCK();
                    }
                    QString::append(&local_2b8);
                    QString::operator=(&local_288,&local_2b8);
                    if (*(int *)local_2b8.field0_0x0 != -1) {
                      if (*(int *)local_2b8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
                        local_31 = *(int *)local_2b8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100cf227f;
                      }
                      QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
                    }
LAB_100cf227f:
                    QFileInfo::~QFileInfo(local_2a0);
                  }
                  QString::operator=(&local_1e8,&local_288);
                  QFileInfo::~QFileInfo(local_290);
                  if (*(int *)local_288.field0_0x0 != -1) {
                    if (*(int *)local_288.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
                      local_31 = *(int *)local_288.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cf22dc;
                    }
                    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                  }
                }
                else {
                  QString::operator=(&local_1e0,&local_268);
                }
LAB_100cf22dc:
                FUN_100d05970(param_1 + 0x2d8,&local_1f0);
                iVar7 = 0;
              }
              if (*(int *)local_268.field0_0x0 != -1) {
                if (*(int *)local_268.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                  local_31 = *(int *)local_268.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf2328;
                }
                QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
              }
            }
LAB_100cf2328:
            if (*(int *)local_238 != -1) {
              if (*(int *)local_238 != 0) {
                LOCK();
                *(int *)local_238 = *(int *)local_238 + -1;
                local_31 = *(int *)local_238 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf2361;
              }
              QArrayData::deallocate(local_238,2,8);
            }
LAB_100cf2361:
            if (*(int *)local_200 != -1) {
              if (*(int *)local_200 != 0) {
                LOCK();
                *(int *)local_200 = *(int *)local_200 + -1;
                local_31 = *(int *)local_200 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf2397;
              }
              QArrayData::deallocate(local_200,2,8);
            }
LAB_100cf2397:
            if (*(int *)local_1e0.field0_0x0 != -1) {
              if (*(int *)local_1e0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
                local_31 = *(int *)local_1e0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf23cd;
              }
              QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
            }
LAB_100cf23cd:
            if (*(int *)local_1e8.field0_0x0 != -1) {
              if (*(int *)local_1e8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
                local_31 = *(int *)local_1e8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf2410;
              }
              QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
            }
            goto LAB_100cf2410;
          }
LAB_100cf2415:
          iVar7 = 0;
        }
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf244e;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
LAB_100cf244e:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf2484;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100cf2484:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf24ba;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_100cf24ba:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf24f0;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cf24f0:
      if (iVar7 == 1) {
        return 0x8117002;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < 0x10);
    local_2c0 = local_2c0 + 1;
    if (3 < (long)local_2c0) {
      return 0x8000000;
    }
  } while( true );
}

