
void FUN_100b770a0(long param_1,CVmEventParameter *param_2)

{
  uint uVar1;
  CVmEventParameter *pCVar2;
  int iVar3;
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
  QDateTime local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QDateTime local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QDateTime local_c8;
  QString local_c0;
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
  undefined1 local_29;
  
  if (param_2 == (CVmEventParameter *)0x0) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","pOutVmEvent","VzLicense.cpp",
                  0x918,"ToVmEvent");
    return;
  }
  pCVar2 = operator_new(0xd0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x74,"GetLicenseKey");
  }
  local_38 = *(QArrayData **)(param_1 + 8);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("vzlicense_original_license_key",0x1e);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_38,&local_40);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7719f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b7719f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b771cf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b771cf:
  pCVar2 = operator_new(0xd0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x74,"GetLicenseKey");
  }
  local_48 = *(QArrayData **)(param_1 + 8);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("vzlicense_serial_number",0x17);
  CVmEventParameter::CVmEventParameter(pCVar2,0,&local_48,&local_50);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b772aa;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b772aa:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b772da;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b772da:
  pCVar2 = operator_new(0xd0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1d3,"GetKeyNumber");
  }
  local_58 = *(QArrayData **)(param_1 + 0xc0);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("vzlicense_key_number",0x14);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_58,&local_60);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b773bb;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b773bb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b773eb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b773eb:
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    pCVar2 = operator_new(0xd0);
    local_70 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x1cd,"GetGracePeriod");
    }
    QString::arg(&local_68,&local_70,*(undefined4 *)(param_1 + 0x78),0,10,0x20);
    local_78 = (QArrayData *)QString::fromAscii_helper("vzlicense_graceperiod",0x15);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_68,&local_78);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b774f1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100b774f1:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b77523;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100b77523:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b77553;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100b77553:
  pCVar2 = operator_new(0xd0);
  local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1bb,"IsFile");
  }
  QString::arg(&local_80,&local_88,*(undefined1 *)(param_1 + 0x125),0,10,0x20);
  local_90 = (QArrayData *)QString::fromAscii_helper("vzlicense_file",0xe);
  CVmEventParameter::CVmEventParameter(pCVar2,6,&local_80,&local_90);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77660;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b77660:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77692;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b77692:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b776c2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b776c2:
  pCVar2 = operator_new(0xd0);
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1c1,"IsUnlimited");
  }
  QString::arg(&local_98,&local_a0,*(undefined1 *)(param_1 + 0x48),0,10,0x20);
  local_a8 = (QArrayData *)QString::fromAscii_helper("vzlicense_is_expiration_unlimited",0x21);
  CVmEventParameter::CVmEventParameter(pCVar2,6,&local_98,&local_a8);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b777d8;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b777d8:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77810;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b77810:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77846;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b77846:
  pCVar2 = operator_new(0xd0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x15c,"GetExpirationDate");
  }
  QDateTime::QDateTime(&local_c8,(QDateTime *)(param_1 + 0x50));
  local_d0 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_c0);
  QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
  local_d8 = (QArrayData *)QString::fromAscii_helper("vzlicense_expiration_date",0x19);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_b0,&local_d8);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b779a0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b779a0:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b779d8;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b779d8:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77a10;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b77a10:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77a48;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b77a48:
  QDateTime::~QDateTime(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77a8c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b77a8c:
  pCVar2 = operator_new(0xd0);
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x156,"GetStartDate");
  }
  QDateTime::QDateTime(&local_f8,(QDateTime *)(param_1 + 0x58));
  local_100 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_f0);
  QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
  local_108 = (QArrayData *)QString::fromAscii_helper("vzlicense_start_date",0x14);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_e0,&local_108);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77be6;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b77be6:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77c1e;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100b77c1e:
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77c56;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100b77c56:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77c8e;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b77c8e:
  QDateTime::~QDateTime(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77cd2;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b77cd2:
  pCVar2 = operator_new(0xd0);
  local_118 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x162,"GetUpdateDate");
  }
  QDateTime::QDateTime(&local_128,(QDateTime *)(param_1 + 0xe0));
  local_130 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_120);
  QString::arg(&local_110,&local_118,&local_120,0,0x20);
  local_138 = (QArrayData *)QString::fromAscii_helper("vzlicense_update_date",0x15);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_110,&local_138);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77e2f;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100b77e2f:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77e67;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b77e67:
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77e9f;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100b77e9f:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77ed7;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b77ed7:
  QDateTime::~QDateTime(&local_128);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b77f1b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b77f1b:
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    pCVar2 = operator_new(0xd0);
    local_148 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x122,"GetCpuLimit");
    }
    QString::arg(&local_140,&local_148,*(undefined4 *)(param_1 + 0x7c),0,10,0x20);
    local_150 = (QArrayData *)QString::fromAscii_helper("vzlicense_cpu_total",0x13);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_140,&local_150);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_29 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78039;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100b78039:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78071;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_100b78071:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b780a7;
      }
      QArrayData::deallocate(local_148,2,8);
    }
  }
LAB_100b780a7:
  if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
    pCVar2 = operator_new(0xd0);
    local_160 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    300,"GetMemoryLimit");
    }
    QString::arg(&local_158,&local_160,*(undefined4 *)(param_1 + 0x84),0,10,0x20);
    local_168 = (QArrayData *)QString::fromAscii_helper("vzlicense_max_memory",0x14);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_158,&local_168);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_29 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b781c8;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100b781c8:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78200;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100b78200:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_29 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78236;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_100b78236:
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    pCVar2 = operator_new(0xd0);
    local_178 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x131,"GetVtdAvailable");
    }
    QString::arg(&local_170,&local_178,*(undefined4 *)(param_1 + 0x88),0,10,0x20);
    local_180 = (QArrayData *)QString::fromAscii_helper("vzlicense_vtd_available",0x17);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_170,&local_180);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_29 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78357;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_100b78357:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_29 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b7838f;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100b7838f:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_29 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b783c5;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
LAB_100b783c5:
  if ((*(byte *)(param_1 + 0x28) & 0x10) != 0) {
    pCVar2 = operator_new(0xd0);
    local_190 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x142,"GetVmsLimit");
    }
    QString::arg(&local_188,&local_190,*(undefined4 *)(param_1 + 0xe8),0,10,0x20);
    local_198 = (QArrayData *)QString::fromAscii_helper("vzlicense_vms_total",0x13);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_188,&local_198);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_29 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b784e6;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_100b784e6:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_29 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b7851e;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100b7851e:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_29 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78554;
      }
      QArrayData::deallocate(local_190,2,8);
    }
  }
LAB_100b78554:
  if ((*(byte *)(param_1 + 0x28) & 0x40) != 0) {
    pCVar2 = operator_new(0xd0);
    local_1a8 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x13c,"GetMaxVzccUsers");
    }
    QString::arg(&local_1a0,&local_1a8,*(undefined8 *)(param_1 + 0x98),0,10,0x20);
    local_1b0 = (QArrayData *)QString::fromAscii_helper("vzlicense_max_vzcc_users",0x18);
    CVmEventParameter::CVmEventParameter(pCVar2,0x11,&local_1a0,&local_1b0);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_29 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78678;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_100b78678:
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_29 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b786b0;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_100b786b0:
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_29 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b786e6;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
  }
LAB_100b786e6:
  pCVar2 = operator_new(0xd0);
  FUN_100b677e0(&local_1b8,param_1);
  local_1c0 = (QArrayData *)QString::fromAscii_helper("vzlicense_product",0x11);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_1b8,&local_1c0);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_29 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7877e;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100b7877e:
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_29 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b787b4;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100b787b4:
  pCVar2 = operator_new(0xd0);
  local_1d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x179,"GetVersion");
  }
  local_1d8 = *(QArrayData **)(param_1 + 0x38);
  if (1 < *(int *)local_1d8 + 1U) {
    LOCK();
    *(int *)local_1d8 = *(int *)local_1d8 + 1;
    local_29 = *(int *)local_1d8 != 0;
    UNLOCK();
  }
  QString::arg(&local_1c8,&local_1d0,&local_1d8,0,0x20);
  local_1e0 = (QArrayData *)QString::fromAscii_helper("vzlicense_version",0x11);
  CVmEventParameter::CVmEventParameter(pCVar2,1,&local_1c8,&local_1e0);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_29 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b788e2;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100b788e2:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_29 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7891a;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100b7891a:
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_29 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78952;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100b78952:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_29 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78988;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100b78988:
  pCVar2 = operator_new(0xd0);
  local_1f0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1d9,"GetKeyNumberValue");
  }
  QString::arg(&local_1e8,&local_1f0,*(undefined8 *)(param_1 + 200),0,10,0x20);
  local_1f8 = (QArrayData *)QString::fromAscii_helper("vzlicense_key_number_value",0x1a);
  CVmEventParameter::CVmEventParameter(pCVar2,0x11,&local_1e8,&local_1f8);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_29 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78aa0;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100b78aa0:
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_29 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78ad8;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100b78ad8:
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_29 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78b0e;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100b78b0e:
  pCVar2 = operator_new(0xd0);
  local_208 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1a4,"GetPlatform");
  }
  uVar1 = *(int *)(param_1 + 0xa4) - 1;
  iVar3 = 0;
  if (uVar1 < 4) {
    iVar3 = *(int *)(&DAT_101cdc1d0 + (long)(int)uVar1 * 4);
  }
  QString::arg(&local_200,&local_208,(long)iVar3,0,10,0x20);
  local_210 = (QArrayData *)QString::fromAscii_helper("vzlicense_platform",0x12);
  CVmEventParameter::CVmEventParameter(pCVar2,0,&local_200,&local_210);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_29 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78c3b;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100b78c3b:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_29 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78c73;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100b78c73:
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_29 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b78ca9;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100b78ca9:
  if ((*(byte *)(param_1 + 0x29) & 2) != 0) {
    pCVar2 = operator_new(0xd0);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x17f,"GetHwId");
    }
    local_218 = *(QArrayData **)(param_1 + 0x60);
    if (1 < *(int *)local_218 + 1U) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + 1;
      local_29 = *(int *)local_218 != 0;
      UNLOCK();
    }
    local_220 = (QArrayData *)QString::fromAscii_helper("vzlicense_hardware_id",0x15);
    CVmEventParameter::CVmEventParameter(pCVar2,1,&local_218,&local_220);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_29 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78da5;
      }
      QArrayData::deallocate(local_220,2,8);
    }
LAB_100b78da5:
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_29 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78ddb;
      }
      QArrayData::deallocate(local_218,2,8);
    }
  }
LAB_100b78ddb:
  if ((*(byte *)(param_1 + 0x28) & 0x80) != 0) {
    pCVar2 = operator_new(0xd0);
    local_230 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x1df,"GetVolume");
    }
    QString::arg(&local_228,&local_230,(long)*(int *)(param_1 + 0x110),0,10,0x20);
    local_238 = (QArrayData *)QString::fromAscii_helper("vzlicense_is_volume",0x13);
    CVmEventParameter::CVmEventParameter(pCVar2,6,&local_228,&local_238);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_29 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78eff;
      }
      QArrayData::deallocate(local_238,2,8);
    }
LAB_100b78eff:
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_29 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78f37;
      }
      QArrayData::deallocate(local_228,2,8);
    }
LAB_100b78f37:
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_29 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b78f6d;
      }
      QArrayData::deallocate(local_230,2,8);
    }
  }
LAB_100b78f6d:
  if ((*(byte *)(param_1 + 0x29) & 0x10) != 0) {
    pCVar2 = operator_new(0xd0);
    local_248 = (QArrayData *)QString::fromAscii_helper("%1",2);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                    0x148,"IsRkuAllowed");
    }
    QString::arg(&local_240,&local_248,*(undefined4 *)(param_1 + 0xd8),0,10,0x20);
    local_250 = (QArrayData *)QString::fromAscii_helper("vzlicense_rku_allowed",0x15);
    CVmEventParameter::CVmEventParameter(pCVar2,6,&local_240,&local_250);
    CVmEvent::addEventParameter(param_2);
    if (*(int *)local_250 != -1) {
      if (*(int *)local_250 != 0) {
        LOCK();
        *(int *)local_250 = *(int *)local_250 + -1;
        local_29 = *(int *)local_250 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b79091;
      }
      QArrayData::deallocate(local_250,2,8);
    }
LAB_100b79091:
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_29 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b790c9;
      }
      QArrayData::deallocate(local_240,2,8);
    }
LAB_100b790c9:
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_29 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b790ff;
      }
      QArrayData::deallocate(local_248,2,8);
    }
  }
LAB_100b790ff:
  if ((*(byte *)(param_1 + 0x29) & 0x20) == 0) {
    return;
  }
  pCVar2 = operator_new(0xd0);
  local_260 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x14f,"IsHaAllowed");
  }
  QString::arg(&local_258,&local_260,*(undefined4 *)(param_1 + 0xdc),0,10,0x20);
  local_268 = (QArrayData *)QString::fromAscii_helper("vzlicense_ha_allowed",0x14);
  CVmEventParameter::CVmEventParameter(pCVar2,6,&local_258,&local_268);
  CVmEvent::addEventParameter(param_2);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_29 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b79223;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100b79223:
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_29 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7925b;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_100b7925b:
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      UNLOCK();
      if (*(int *)local_260 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_260,2,8);
  }
  return;
}

