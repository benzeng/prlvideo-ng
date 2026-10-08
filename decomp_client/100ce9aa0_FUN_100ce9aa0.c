
undefined8 FUN_100ce9aa0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  QString *this;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 0x128);
  lVar4 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("serial%1",8);
    QString::arg(&local_40,&local_48,lVar4,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce9b2f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100ce9b2f:
    local_68 = (QArrayData *)QString::fromAscii_helper("present",7);
    pcVar1 = *(code **)*param_2;
    local_60 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
    local_70 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
    (*pcVar1)(&local_58,param_2,&local_60,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce9bd6;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100ce9bd6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce9c06;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100ce9c06:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce9c36;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100ce9c36:
    local_78 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar2 = QString::compare(&local_58,&local_78,0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce9c8c;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100ce9c8c:
    if (iVar2 == 0) {
      *(undefined2 *)&this[-1].field0_0x0 = 0x101;
      local_80.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileType",8);
      QString::operator=(&local_50,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9cf9;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100ce9cf9:
      pcVar1 = *(code **)*param_2;
      local_90 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_98 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper("device",6);
      (*pcVar1)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9da3;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100ce9da3:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9dd9;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100ce9dd9:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9e0f;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100ce9e0f:
      local_a8 = (QArrayData *)QString::fromAscii_helper("file",4);
      iVar2 = QString::compare(&local_88,&local_a8,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9e72;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100ce9e72:
      uVar3 = 1;
      if (iVar2 != 0) {
        local_b0 = (QArrayData *)QString::fromAscii_helper("pipe",4);
        iVar2 = QString::compare(&local_88,&local_b0,0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce9ede;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100ce9ede:
        uVar3 = iVar2 == 0 | 2;
      }
      *(uint *)((long)&this[-1].field0_0x0 + 4) = uVar3;
      local_b8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
      QString::operator=(&local_50,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9f51;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_100ce9f51:
      pcVar1 = *(code **)*param_2;
      local_c8 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_d0 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_d8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      (*pcVar1)(&local_c0,param_2,&local_c8,&local_d0,&local_d8);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce9ffe;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100ce9ffe:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea034;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100cea034:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea06a;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100cea06a:
      local_e0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar2 = QString::compare(&local_c0,&local_e0,0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea0d6;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100cea0d6:
      if (iVar2 == 0) {
        *(undefined1 *)((long)&this[-1].field0_0x0 + 2) = 1;
      }
      local_e8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("autodetect",10);
      QString::operator=(&local_50,&local_e8);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea13d;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_100cea13d:
      pcVar1 = *(code **)*param_2;
      local_f8 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_100 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_108 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      (*pcVar1)(&local_f0,param_2,&local_f8,&local_100,&local_108);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea1e6;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100cea1e6:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea21c;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100cea21c:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea252;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100cea252:
      local_110 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar2 = QString::compare(&local_f0,&local_110,0);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea2b3;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100cea2b3:
      if (iVar2 != 0) {
        local_118.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
        QString::operator=(&local_50,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cea319;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_100cea319:
        pcVar1 = *(code **)*param_2;
        local_128 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_130 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_138 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_120,param_2,&local_128,&local_130,&local_138);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cea3c3;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100cea3c3:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cea3f9;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_100cea3f9:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cea42f;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100cea42f:
        QString::operator=(this,&local_120);
        if (uVar3 == 3) {
          local_140.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pipe.endPoint",0xd);
          QString::operator=(&local_50,&local_140);
          if (*(int *)local_140.field0_0x0 != -1) {
            if (*(int *)local_140.field0_0x0 != 0) {
              LOCK();
              *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
              local_31 = *(int *)local_140.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea4a9;
            }
            QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
          }
LAB_100cea4a9:
          pcVar1 = *(code **)*param_2;
          local_150 = local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          local_158 = (QArrayData *)local_50.field0_0x0;
          if (1 < *(int *)local_50.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
          }
          local_160 = (QArrayData *)QString::fromAscii_helper("server",6);
          (*pcVar1)(&local_148,param_2,&local_150,&local_158,&local_160);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea556;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_100cea556:
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea58c;
            }
            QArrayData::deallocate(local_158,2,8);
          }
LAB_100cea58c:
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_31 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea5c2;
            }
            QArrayData::deallocate(local_150,2,8);
          }
LAB_100cea5c2:
          local_168 = (QArrayData *)QString::fromAscii_helper("server",6);
          iVar2 = QString::compare(&local_148,&local_168,0);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea627;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_100cea627:
          if (iVar2 == 0) {
            *(undefined1 *)((long)&this[-1].field0_0x0 + 3) = 1;
          }
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_31 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cea670;
            }
            QArrayData::deallocate(local_148,2,8);
          }
        }
LAB_100cea670:
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cea6a6;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
      }
LAB_100cea6a6:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea6dc;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cea6dc:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea712;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cea712:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cea750;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
    else {
      *(undefined1 *)&this[-1].field0_0x0 = 0;
    }
LAB_100cea750:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cea780;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cea780:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cea7b0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100cea7b0:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cea7e0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100cea7e0:
    lVar4 = lVar4 + 1;
    this = this + 2;
    if (3 < lVar4) {
      return 0x8000000;
    }
  } while( true );
}

