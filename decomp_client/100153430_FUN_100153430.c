
void FUN_100153430(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long local_1e0;
  QVariant local_1d8;
  Data_conflict local_1c8;
  QVariant local_1c0;
  Data_conflict local_1b0;
  QVariant local_1a8;
  Data_conflict local_198;
  QVariant local_190;
  Data_conflict local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QVariant local_158;
  Data_conflict local_148;
  QString local_140;
  QVariant local_138;
  Data_conflict local_128;
  QString local_120;
  QVariant local_118;
  Data_conflict local_108;
  QString local_100;
  QVariant local_f8;
  Data_conflict local_e8;
  QString local_e0;
  QVariant local_d8;
  Data_conflict local_c8;
  QString local_c0;
  QVariant local_b8;
  Data_conflict local_a8;
  QString local_a0;
  QVariant local_98;
  Data_conflict local_88;
  QString local_80;
  QVariant local_78;
  Data_conflict local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48 [2];
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  FUN_1009dfbf0();
  local_50 = (QArrayData *)QString::fromAscii_helper("Login",5);
  QSettings::beginGroup(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001534a6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001534a6:
  local_58 = (QArrayData *)QString::fromAscii_helper("Servers",7);
  QSettings::remove(local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001534f8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001534f8:
  local_60 = (QArrayData *)QString::fromAscii_helper("Servers",7);
  QSettings::beginWriteArray(local_48,(int)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015354f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10015354f:
  local_1e0 = 0;
  do {
    lVar5 = FUN_100152280();
    if ((long)*(int *)(*(long *)(lVar5 + 0x10) + 0xc) - (long)*(int *)(*(long *)(lVar5 + 0x10) + 8)
        <= local_1e0) {
      QSettings::endArray();
      QSettings::endGroup();
      QSettings::~QSettings((QSettings *)local_48);
      return;
    }
    lVar5 = FUN_100152280();
    lVar5 = *(long *)(lVar5 + 0x10);
    if (local_1e0 < (long)*(int *)(lVar5 + 0xc) - (long)*(int *)(lVar5 + 8)) {
      plVar1 = *(long **)(lVar5 + 0x10 + (*(int *)(lVar5 + 8) + local_1e0) * 8);
      lVar5 = *plVar1;
      if (((lVar5 != 0) && (*(int *)(lVar5 + 4) != 0)) && (lVar5 = plVar1[1], lVar5 != 0)) {
        QSettings::setArrayIndex((int)local_48);
        local_68.field7 = QString::fromAscii_helper("Server Name",0xb);
        FUN_10015a060(&local_80,lVar5);
        QVariant::QVariant(&local_78,&local_80);
        QSettings::setValue(local_48,(QVariant *)&local_68);
        QVariant::~QVariant(&local_78);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015366a;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_10015366a:
        if (*(int *)local_68.field15 != -1) {
          if (*(int *)local_68.field15 != 0) {
            LOCK();
            *(int *)local_68.field15 = *(int *)local_68.field15 + -1;
            local_31 = *(int *)local_68.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015369a;
          }
          QArrayData::deallocate((QArrayData *)local_68.field15,2,8);
        }
LAB_10015369a:
        local_88.field7 = QString::fromAscii_helper("Server Custom Name",0x12);
        FUN_10015a120(&local_a0,lVar5);
        QVariant::QVariant(&local_98,&local_a0);
        QSettings::setValue(local_48,(QVariant *)&local_88);
        QVariant::~QVariant(&local_98);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015371e;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10015371e:
        if (*(int *)local_88.field15 != -1) {
          if (*(int *)local_88.field15 != 0) {
            LOCK();
            *(int *)local_88.field15 = *(int *)local_88.field15 + -1;
            local_31 = *(int *)local_88.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015374e;
          }
          QArrayData::deallocate((QArrayData *)local_88.field15,2,8);
        }
LAB_10015374e:
        local_a8.field7 = QString::fromAscii_helper("Server Ip",9);
        FUN_10015a1a0(&local_c0,lVar5);
        QVariant::QVariant(&local_b8,&local_c0);
        QSettings::setValue(local_48,(QVariant *)&local_a8);
        QVariant::~QVariant(&local_b8);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001537d8;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_1001537d8:
        if (*(int *)local_a8.field15 != -1) {
          if (*(int *)local_a8.field15 != 0) {
            LOCK();
            *(int *)local_a8.field15 = *(int *)local_a8.field15 + -1;
            local_31 = *(int *)local_a8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015380e;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field15,2,8);
        }
LAB_10015380e:
        local_c8.field7 = QString::fromAscii_helper("Server Id",9);
        FUN_10015aab0(&local_e0,lVar5);
        QVariant::QVariant(&local_d8,&local_e0);
        QSettings::setValue(local_48,(QVariant *)&local_c8);
        QVariant::~QVariant(&local_d8);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015389f;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_10015389f:
        if (*(int *)local_c8.field15 != -1) {
          if (*(int *)local_c8.field15 != 0) {
            LOCK();
            *(int *)local_c8.field15 = *(int *)local_c8.field15 + -1;
            local_31 = *(int *)local_c8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001538d5;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field15,2,8);
        }
LAB_1001538d5:
        local_e8.field7 = QString::fromAscii_helper("Server Disp Id",0xe);
        FUN_10015a2b0(&local_100,lVar5);
        QVariant::QVariant(&local_f8,&local_100);
        QSettings::setValue(local_48,(QVariant *)&local_e8);
        QVariant::~QVariant(&local_f8);
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153966;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_100153966:
        if (*(int *)local_e8.field15 != -1) {
          if (*(int *)local_e8.field15 != 0) {
            LOCK();
            *(int *)local_e8.field15 = *(int *)local_e8.field15 + -1;
            local_31 = *(int *)local_e8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015399c;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field15,2,8);
        }
LAB_10015399c:
        local_108.field7 = QString::fromAscii_helper("User Name",9);
        FUN_10015a1d0(&local_120,lVar5);
        QVariant::QVariant(&local_118,&local_120);
        QSettings::setValue(local_48,(QVariant *)&local_108);
        QVariant::~QVariant(&local_118);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153a2d;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_100153a2d:
        if (*(int *)local_108.field15 != -1) {
          if (*(int *)local_108.field15 != 0) {
            LOCK();
            *(int *)local_108.field15 = *(int *)local_108.field15 + -1;
            local_31 = *(int *)local_108.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153a63;
          }
          QArrayData::deallocate((QArrayData *)local_108.field15,2,8);
        }
LAB_100153a63:
        local_128.field7 = QString::fromAscii_helper("Last Session Uuid",0x11);
        FUN_1001747b0(&local_140,lVar5);
        QVariant::QVariant(&local_138,&local_140);
        QSettings::setValue(local_48,(QVariant *)&local_128);
        QVariant::~QVariant(&local_138);
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_31 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153af4;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_100153af4:
        if (*(int *)local_128.field15 != -1) {
          if (*(int *)local_128.field15 != 0) {
            LOCK();
            *(int *)local_128.field15 = *(int *)local_128.field15 + -1;
            local_31 = *(int *)local_128.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153b2a;
          }
          QArrayData::deallocate((QArrayData *)local_128.field15,2,8);
        }
LAB_100153b2a:
        cVar2 = FUN_100174000(lVar5);
        if (cVar2 == '\0') {
          local_178 = (QArrayData *)QString::fromAscii_helper("User Password",0xd);
          QSettings::remove(local_48);
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_31 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100153d02;
            }
            QArrayData::deallocate(local_178,2,8);
          }
        }
        else {
          local_148.field7 = QString::fromAscii_helper("User Password",0xd);
          FUN_10015aab0(&local_168,lVar5);
          FUN_10015a6a0(&local_170,lVar5);
          FUN_1009dfae0(&local_160,&local_168,&local_170);
          QVariant::QVariant(&local_158,&local_160);
          QSettings::setValue(local_48,(QVariant *)&local_148);
          QVariant::~QVariant(&local_158);
          if (*(int *)local_160.field0_0x0 != -1) {
            if (*(int *)local_160.field0_0x0 != 0) {
              LOCK();
              *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
              local_31 = *(int *)local_160.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100153bfc;
            }
            QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
          }
LAB_100153bfc:
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_31 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100153c32;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_100153c32:
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100153c68;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_100153c68:
          if (*(int *)local_148.field15 != -1) {
            if (*(int *)local_148.field15 != 0) {
              LOCK();
              *(int *)local_148.field15 = *(int *)local_148.field15 + -1;
              local_31 = *(int *)local_148.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100153d02;
            }
            QArrayData::deallocate((QArrayData *)local_148.field15,2,8);
          }
        }
LAB_100153d02:
        local_180.field7 = QString::fromAscii_helper("Save Password",0xd);
        bVar3 = (bool)FUN_100174000(lVar5);
        QVariant::QVariant(&local_190,bVar3);
        QSettings::setValue(local_48,(QVariant *)&local_180);
        QVariant::~QVariant(&local_190);
        if (*(int *)local_180.field15 != -1) {
          if (*(int *)local_180.field15 != 0) {
            LOCK();
            *(int *)local_180.field15 = *(int *)local_180.field15 + -1;
            local_31 = *(int *)local_180.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153d89;
          }
          QArrayData::deallocate((QArrayData *)local_180.field15,2,8);
        }
LAB_100153d89:
        local_198.field7 = QString::fromAscii_helper("Use Local Login",0xf);
        bVar3 = (bool)FUN_100174740(lVar5);
        QVariant::QVariant(&local_1a8,bVar3);
        QSettings::setValue(local_48,(QVariant *)&local_198);
        QVariant::~QVariant(&local_1a8);
        if (*(int *)local_198.field15 != -1) {
          if (*(int *)local_198.field15 != 0) {
            LOCK();
            *(int *)local_198.field15 = *(int *)local_198.field15 + -1;
            local_31 = *(int *)local_198.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153e10;
          }
          QArrayData::deallocate((QArrayData *)local_198.field15,2,8);
        }
LAB_100153e10:
        iVar4 = FUN_1001747f0(lVar5);
        local_1b0.field7 = QString::fromAscii_helper("Connection Security",0x13);
        QVariant::QVariant(&local_1c0,iVar4);
        QSettings::setValue(local_48,(QVariant *)&local_1b0);
        QVariant::~QVariant(&local_1c0);
        if (*(int *)local_1b0.field15 != -1) {
          if (*(int *)local_1b0.field15 != 0) {
            LOCK();
            *(int *)local_1b0.field15 = *(int *)local_1b0.field15 + -1;
            local_31 = *(int *)local_1b0.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153e9a;
          }
          QArrayData::deallocate((QArrayData *)local_1b0.field15,2,8);
        }
LAB_100153e9a:
        local_1c8.field7 = QString::fromAscii_helper("Video compression type",0x16);
        iVar4 = FUN_10015ab70(lVar5);
        QVariant::QVariant(&local_1d8,iVar4);
        QSettings::setValue(local_48,(QVariant *)&local_1c8);
        QVariant::~QVariant(&local_1d8);
        if (*(int *)local_1c8.field15 != -1) {
          if (*(int *)local_1c8.field15 != 0) {
            LOCK();
            *(int *)local_1c8.field15 = *(int *)local_1c8.field15 + -1;
            local_31 = *(int *)local_1c8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100153570;
          }
          QArrayData::deallocate((QArrayData *)local_1c8.field15,2,8);
        }
      }
    }
LAB_100153570:
    local_1e0 = local_1e0 + 1;
  } while( true );
}

