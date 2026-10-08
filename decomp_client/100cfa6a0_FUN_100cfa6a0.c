
undefined8 FUN_100cfa6a0(long param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long local_188;
  QString local_180;
  QString local_178;
  QArrayData *local_170;
  QFileInfo local_168 [8];
  QString local_160;
  QFileInfo local_158 [8];
  QString local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  uint local_124;
  QString local_120;
  QString local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QFileInfo local_e8 [8];
  QString local_e0;
  QFileInfo local_d8 [8];
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  QString local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_188 = 0;
  do {
    lVar5 = 0;
    do {
      local_68 = (QArrayData *)QString::fromAscii_helper("scsi%1:%2",9);
      QString::arg(&local_60,&local_68,local_188,0,10,0x20);
      QString::arg(&local_58,&local_60,lVar5,0,10,0x20);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa773;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100cfa773:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa7a3;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100cfa7a3:
      local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::fromUtf8_helper((char *)&local_50,0x1e28e7e);
      QString::operator=(&local_70,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa800;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100cfa800:
      pcVar1 = *(code **)(*param_2 + 0x10);
      local_78 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_80 = (QArrayData *)local_70.field0_0x0;
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
      }
      iVar4 = (*pcVar1)(param_2,&local_78,&local_80,10,0);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa881;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100cfa881:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa8b1;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100cfa8b1:
      if (iVar4 == 2) {
        FUN_100d15130(&local_128);
        local_128 = 1;
        local_127 = 1;
        local_126 = 1;
        QString::fromUtf8_helper((char *)&local_40,0x1ef68bf);
        QString::operator=(&local_70,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfa935;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100cfa935:
        pcVar1 = *(code **)*param_2;
        local_138 = local_58;
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        local_140 = (QArrayData *)local_70.field0_0x0;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        local_148 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_130,param_2,&local_138,&local_140,&local_148);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfa9e2;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_100cfa9e2:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfaa1b;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_100cfaa1b:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfaa51;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100cfaa51:
        local_124 = (uint)(*(int *)(local_130.field0_0x0 + 4) < 2);
        if (*(int *)(local_130.field0_0x0 + 4) < 2) {
          QString::operator=(&local_118,&local_130);
        }
        else {
          local_150.field0_0x0 = local_130.field0_0x0;
          if (1 < *(int *)local_130.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
            local_31 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
          }
          QFileInfo::QFileInfo(local_158,&local_130);
          cVar3 = QFileInfo::isRelative();
          if (cVar3 != '\0') {
            (**(code **)(*param_2 + 0x50))(&local_160,param_2);
            QString::operator=(&local_150,&local_160);
            if (*(int *)local_160.field0_0x0 != -1) {
              if (*(int *)local_160.field0_0x0 != 0) {
                LOCK();
                *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
                local_31 = *(int *)local_160.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfab06;
              }
              QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
            }
LAB_100cfab06:
            QFileInfo::QFileInfo(local_168,&local_150);
            QFileInfo::fileName();
            QString::lastIndexOf(&local_150,&local_170,0xffffffff,1);
            if (*(int *)local_170 != -1) {
              if (*(int *)local_170 != 0) {
                LOCK();
                *(int *)local_170 = *(int *)local_170 + -1;
                local_31 = *(int *)local_170 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfab84;
              }
              QArrayData::deallocate(local_170,2,8);
            }
LAB_100cfab84:
            QString::mid((int)&local_178,(int)&local_150);
            QString::operator=(&local_150,&local_178);
            if (*(int *)local_178.field0_0x0 != -1) {
              if (*(int *)local_178.field0_0x0 != 0) {
                LOCK();
                *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                local_31 = *(int *)local_178.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfabe4;
              }
              QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
            }
LAB_100cfabe4:
            local_180.field0_0x0 = local_150.field0_0x0;
            if (1 < *(int *)local_150.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + 1;
              local_31 = *(int *)local_150.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_180);
            QString::operator=(&local_150,&local_180);
            if (*(int *)local_180.field0_0x0 != -1) {
              if (*(int *)local_180.field0_0x0 != 0) {
                LOCK();
                *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
                local_31 = *(int *)local_180.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfac5e;
              }
              QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
            }
LAB_100cfac5e:
            QFileInfo::~QFileInfo(local_168);
          }
          QString::operator=(&local_120,&local_150);
          QFileInfo::~QFileInfo(local_158);
          if (*(int *)local_150.field0_0x0 != -1) {
            if (*(int *)local_150.field0_0x0 != 0) {
              LOCK();
              *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
              local_31 = *(int *)local_150.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfb193;
            }
            QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
          }
        }
LAB_100cfb193:
        local_110 = 2;
        local_10c = (int)local_188;
        local_108 = (int)lVar5;
        FUN_100d05970(param_1 + 0x2d8,&local_128);
        if (*(int *)local_130.field0_0x0 != -1) {
          if (*(int *)local_130.field0_0x0 != 0) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
            local_31 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfb1fa;
          }
          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
        }
LAB_100cfb1fa:
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfb230;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_100cfb230:
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfb266;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_100cfb266:
        bVar2 = false;
      }
      else {
        if (iVar4 != 1) goto LAB_100cfb266;
        FUN_100d14eb0(&local_a8);
        local_a8 = 1;
        local_a7 = 1;
        local_a6 = 1;
        QString::fromUtf8_helper((char *)&local_48,0x1ef68bf);
        QString::operator=(&local_70,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfad4d;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_100cfad4d:
        pcVar1 = *(code **)*param_2;
        local_b8 = local_58;
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        local_c0 = (QArrayData *)local_70.field0_0x0;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        local_c8 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_b0,param_2,&local_b8,&local_c0,&local_c8);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfadf7;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100cfadf7:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfae2d;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100cfae2d:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfae63;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100cfae63:
        bVar2 = true;
        if (*(int *)(local_b0.field0_0x0 + 4) != 0) {
          local_d0.field0_0x0 = local_b0.field0_0x0;
          if (1 < *(int *)local_b0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
          }
          QFileInfo::QFileInfo(local_d8,&local_b0);
          cVar3 = QFileInfo::isRelative();
          if (cVar3 != '\0') {
            (**(code **)(*param_2 + 0x50))(&local_e0,param_2);
            QString::operator=(&local_d0,&local_e0);
            if (*(int *)local_e0.field0_0x0 != -1) {
              if (*(int *)local_e0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                local_31 = *(int *)local_e0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfaf13;
              }
              QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
            }
LAB_100cfaf13:
            QFileInfo::QFileInfo(local_e8,&local_d0);
            QFileInfo::fileName();
            QString::lastIndexOf(&local_d0,&local_f0,0xffffffff,1);
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_31 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfaf91;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_100cfaf91:
            QString::mid((int)&local_f8,(int)&local_d0);
            QString::operator=(&local_d0,&local_f8);
            if (*(int *)local_f8.field0_0x0 != -1) {
              if (*(int *)local_f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                local_31 = *(int *)local_f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfaff1;
              }
              QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
            }
LAB_100cfaff1:
            local_100.field0_0x0 = local_d0.field0_0x0;
            if (1 < *(int *)local_d0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_100);
            QString::operator=(&local_d0,&local_100);
            if (*(int *)local_100.field0_0x0 != -1) {
              if (*(int *)local_100.field0_0x0 != 0) {
                LOCK();
                *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                local_31 = *(int *)local_100.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cfb06b;
              }
              QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
            }
LAB_100cfb06b:
            QFileInfo::~QFileInfo(local_e8);
          }
          QString::operator=(&local_98,&local_d0);
          local_90 = 2;
          local_8c = (int)local_188;
          local_88 = (int)lVar5;
          FUN_100d05600(param_1 + 0x2d0,&local_a8);
          QFileInfo::~QFileInfo(local_d8);
          bVar2 = false;
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfb0fb;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
        }
LAB_100cfb0fb:
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfb131;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100cfb131:
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfb167;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100cfb167:
        if (!bVar2) goto LAB_100cfb266;
      }
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfb298;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_100cfb298:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfb2c8;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100cfb2c8:
      if (bVar2) {
        return 0x8117002;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < 0x10);
    local_188 = local_188 + 1;
    if (3 < local_188) {
      return 0x8000000;
    }
  } while( true );
}

