
undefined1 FUN_1001b0280(undefined8 *param_1,undefined8 *param_2,int *param_3,QString *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  QArrayData *pQVar6;
  int iVar7;
  Data_conflict local_168;
  undefined4 local_160;
  QArrayData *local_158;
  QVariant local_150;
  QString local_140;
  Data_conflict local_138;
  undefined4 local_130;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    local_48 = (QArrayData *)*param_1;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar6 = local_40 + *(long *)(local_40 + 0x10);
    local_58 = (QArrayData *)*param_2;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",2,"Search UDP for ID: \'%s\', Name: \'%s\'",pQVar6,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001b037c;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1001b037c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001b03ac;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001b03ac:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001b03dc;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1001b03dc:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001b040c;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001b040c:
  QSettings::QSettings((QSettings *)&local_68,(QObject *)0x0);
  local_70 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar3 = QSettings::beginReadArray((QString *)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b046f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001b046f:
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      QSettings::setArrayIndex((int)&local_68);
      local_98 = (QArrayData *)QString::fromAscii_helper("Device Name",0xb);
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      QSettings::value((QString *)&local_90,&local_68);
      QVariant::toString();
      QString::trimmed();
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b052e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1001b052e:
      QVariant::~QVariant(&local_90);
      QVariant::~QVariant((QVariant *)&local_a8);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0578;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1001b0578:
      local_c8 = (QArrayData *)QString::fromAscii_helper("Device Id",9);
      local_d0 = 0x80000000;
      local_d8.field7 = 0;
      QSettings::value((QString *)&local_c0,&local_68);
      QVariant::toString();
      QVariant::~QVariant(&local_c0);
      QVariant::~QVariant((QVariant *)&local_d8);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b061f;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1001b061f:
      local_e8 = local_b0;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar6 = local_e0 + *(long *)(local_e0 + 0x10);
      local_f8 = (QArrayData *)local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","prl_client_app",0,"UDP[%d] ID: \'%s\', Name: \'%s\'",iVar7,pQVar6,
                    local_f0 + *(long *)(local_f0 + 0x10));
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b06f7;
        }
        QArrayData::deallocate(local_f0,1,8);
      }
LAB_1001b06f7:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b072d;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1001b072d:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0763;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_1001b0763:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0799;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1001b0799:
      QString::trimmed();
      cVar2 = operator==(&local_78,&local_100);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_1001aee90(&local_b0,param_1);
      }
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0818;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_1001b0818:
      bVar1 = false;
      if (cVar2 != '\0') {
        local_110 = (QArrayData *)*param_2;
        if (1 < *(int *)local_110 + 1U) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + 1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,"UDP[%d] match to device \'%s\'",iVar7,
                      local_108 + *(long *)(local_108 + 0x10));
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b08bd;
          }
          QArrayData::deallocate(local_108,1,8);
        }
LAB_1001b08bd:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b08f3;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1001b08f3:
        bVar1 = true;
        if (param_3 != (int *)0x0) {
          local_128 = (QArrayData *)QString::fromAscii_helper("Action",6);
          local_130 = 0x80000000;
          local_138.field7 = 0;
          QSettings::value((QString *)&local_120,&local_68);
          iVar4 = QVariant::toInt((bool *)&local_120);
          QVariant::~QVariant(&local_120);
          QVariant::~QVariant((QVariant *)&local_138);
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b09a4;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_1001b09a4:
          *param_3 = iVar4;
          if ((param_4 != (QString *)0x0) && (iVar4 == 2)) {
            local_158 = (QArrayData *)QString::fromAscii_helper("AssocVmId",9);
            local_160 = 0x80000000;
            local_168.field7 = 0;
            QSettings::value((QString *)&local_150,&local_68);
            QVariant::toString();
            QString::operator=(param_4,&local_140);
            if (*(int *)local_140.field0_0x0 != -1) {
              if (*(int *)local_140.field0_0x0 != 0) {
                LOCK();
                *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                local_31 = *(int *)local_140.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001b0a6a;
              }
              QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
            }
LAB_1001b0a6a:
            QVariant::~QVariant(&local_150);
            QVariant::~QVariant((QVariant *)&local_168);
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_31 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001b0ac0;
              }
              QArrayData::deallocate(local_158,2,8);
            }
          }
        }
      }
LAB_1001b0ac0:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0af6;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001b0af6:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b0b26;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1001b0b26:
      uVar5 = 1;
      if (bVar1) goto LAB_1001b0b48;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  QSettings::endArray();
  uVar5 = 0;
LAB_1001b0b48:
  QSettings::~QSettings((QSettings *)&local_68);
  return uVar5;
}

