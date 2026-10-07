
void FUN_10061ea60(long *param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  QString this;
  long lVar5;
  QArrayData *pQVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QChar local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  QVariant local_d0 [16];
  QString local_c0;
  QArrayData *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  uint local_98;
  QString local_90;
  QString local_88;
  int *local_80;
  QString local_78;
  QSettings local_70 [16];
  QString local_60;
  QSettings local_58 [16];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this.field0_0x0 = operator_new(0xd0);
  ClientInfo::ClientInfo((ClientInfo *)this.field0_0x0);
  QSettings::QSettings(local_70,(QObject *)0x0);
  QSettings::organizationName();
  FUN_1006e6350(&local_78,param_2);
  QSettings::QSettings(local_58,&local_60,&local_78,(QObject *)0x0);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061eafe;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10061eafe:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061eb2e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10061eb2e:
  QSettings::~QSettings(local_70);
  QSettings::allKeys();
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_b0 = local_80;
  if (*local_80 != -1) {
    if (*local_80 == 0) {
      QListData::detach((int)&local_b0);
      iVar1 = local_b0[2];
      if (iVar1 != local_b0[3]) {
        local_80 = local_80 + (long)local_80[2] * 2 + 4;
        piVar8 = local_b0 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_b0[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_80;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_80 = local_80 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
  }
  local_a8 = local_b0 + (long)local_b0[2] * 2 + 4;
  local_a0 = local_b0 + (long)local_b0[3] * 2 + 4;
  local_98 = 1;
  if (local_b0[2] != local_b0[3]) {
    do {
      local_b8 = *(QArrayData **)local_a8;
      if (1 < *(int *)local_b8 + 1U) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + 1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
      }
      if (local_98 != 0) {
        local_d8 = 0x80000000;
        local_e0 = 0;
        QSettings::value((QString *)local_d0,(QVariant *)local_58);
        QVariant::toString();
        QString::operator=(&local_90,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10061ed00;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_10061ed00:
        QVariant::~QVariant(local_d0);
        QVariant::~QVariant((QVariant *)&local_e0);
        if ((*(int *)(local_b8 + 4) != 0) && (*(int *)(local_90.field0_0x0 + 4) != 0)) {
          local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
          if (1 < *(int *)local_b8 + 1U) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + 1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_48,0xa529d0);
          QString::append(&local_e8);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10061ed9f;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10061ed9f:
          QString::append(&local_88);
          if (*(int *)local_e8.field0_0x0 != -1) {
            if (*(int *)local_e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
              local_31 = *(int *)local_e8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10061ede4;
            }
            QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
          }
LAB_10061ede4:
          QString::append(&local_88);
          QString::fromUtf8_helper((char *)&local_40,0xb21a30);
          QString::append(&local_88);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10061ee40;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
LAB_10061ee40:
        local_98 = 0;
      }
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061ee80;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10061ee80:
      local_a8 = local_a8 + 2;
      uVar7 = local_98 ^ 1;
      bVar9 = local_98 != 1;
      local_98 = uVar7;
    } while ((bVar9) && (local_a8 != local_a0));
  }
  FUN_100013180(&local_b0);
  FUN_10061e690(&local_88);
  local_f0 = (QArrayData *)local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_31 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  ClientInfo::setClientSettings(this);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061ef40;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10061ef40:
  pcVar3 = *(code **)(*param_1 + 0x170);
  FUN_100775140(&local_f8,0);
  (*pcVar3)(param_1,&local_f8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061ef9a;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10061ef9a:
  FUN_1006e2890(&local_100);
  local_108 = (QArrayData *)QString::fromAscii_helper("-client",7);
  FUN_100640510(param_1,&local_100,&local_108,0);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061f00c;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10061f00c:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061f042;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10061f042:
  cVar4 = FUN_1006d81f0(1);
  if (cVar4 == '\0') {
    FUN_1006e2b70(&local_110);
    if (*(int *)(local_110 + 4) != 0) {
      local_118 = (QArrayData *)QString::fromAscii_helper("-sandbox",8);
      FUN_100640510(param_1,&local_110,&local_118,0);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061f0d3;
        }
        QArrayData::deallocate(local_118,2,8);
      }
    }
LAB_10061f0d3:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f109;
      }
      QArrayData::deallocate(local_110,2,8);
    }
  }
LAB_10061f109:
  if (param_2 == 0) {
    FUN_10063a700(&local_120);
    ClientInfo::setHostInfo(this);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f163;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_10061f163:
    QProcess::systemEnvironment();
    pQVar6 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_128,local_130,(int)*(undefined8 *)(pQVar6 + 0x10) + (int)pQVar6
              );
    ClientInfo::setEnvironment(this);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f1e5;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_10061f1e5:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f210;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_10061f210:
    FUN_100013180(local_130);
    pcVar3 = *(code **)(*(long *)this.field0_0x0 + 0xa8);
    FUN_100642380(&local_138);
    (*pcVar3)(this.field0_0x0,&local_138);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f275;
      }
      QArrayData::deallocate(local_138,2,8);
    }
  }
LAB_10061f275:
  (**(code **)(*param_1 + 0xf0))(param_1,this.field0_0x0);
  if (param_2 == 6) {
    FUN_1006ec100(&local_140);
    if (*(int *)(local_140 + 4) != 0) {
      local_148 = (QArrayData *)PTR_shared_null_100ba20d0;
      FUN_100640510(param_1,&local_140,&local_148,0);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061f306;
        }
        QArrayData::deallocate(local_148,2,8);
      }
    }
LAB_10061f306:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f33c;
      }
      QArrayData::deallocate(local_140,2,8);
    }
  }
LAB_10061f33c:
  if (param_3 != '\0') {
    FUN_100774c10(&local_150);
    if (*(int *)(local_150 + 4) != 0) {
      local_158 = (QArrayData *)QString::fromAscii_helper("lsregister-dump.log",0x13);
      FUN_10061e780(param_1,&local_150,&local_158);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061f3c7;
        }
        QArrayData::deallocate(local_158,2,8);
      }
    }
LAB_10061f3c7:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061f3fd;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_10061f3fd:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061f433;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10061f433:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061f463;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10061f463:
  FUN_100013180(&local_80);
  QSettings::~QSettings(local_58);
  return;
}

