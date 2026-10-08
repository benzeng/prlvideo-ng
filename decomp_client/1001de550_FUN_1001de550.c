
void FUN_1001de550(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QLocale local_c0 [8];
  undefined *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QString local_98;
  QVariant local_90;
  QVariant local_80;
  QString local_70;
  undefined1 local_68 [8];
  QLocale local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d3e840(local_68);
  FUN_100d3f450(local_60,local_68);
  QLocale::name();
  QLocale::~QLocale(local_60);
  FUN_100039a80(local_68);
  MacUtils::getBundlePath();
  cVar2 = MacUtils::canRunFromLocation(&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de5e2;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1001de5e2:
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_90,(QObject *)0x0);
    QString::number((int)&local_a0,0xc);
    QString::fromUtf8_helper((char *)&local_98,0x1dd9771);
    QString::append(&local_98);
    QVariant::QVariant(&local_b0,0);
    QSettings::value((QString *)&local_80,&local_90);
    iVar3 = QVariant::toInt((bool *)&local_80);
    QVariant::~QVariant(&local_80);
    QVariant::~QVariant(&local_b0);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_19 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001de6bd;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1001de6bd:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_19 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001de6f3;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1001de6f3:
    QSettings::~QSettings((QSettings *)&local_90);
    if ((iVar3 == 0xb) &&
       (iVar3 = QString::compare_helper
                          (local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),
                           "zh_TW",0xffffffff,1), iVar3 != 0)) {
      FUN_100df99c0("[AppController]","prl_client_app",0,"Force zh_CN localization");
      QString::fromUtf8_helper((char *)&local_48,0x1dd9782);
      QString::operator=(&local_50,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_19 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001de7a1;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
LAB_1001de7a1:
  if (DAT_102312178 == '\x01') {
    FUN_100df99c0("[AppController]","prl_client_app",0,"Default locale reinitialization");
  }
  else {
    DAT_102312178 = '\x01';
  }
  if (*(int *)(local_50.field0_0x0 + 4) == 0) {
    local_b8 = PTR_shared_null_1021e15e8;
    FUN_100d3f630(&local_b8);
    FUN_100039a80(&local_b8);
  }
  else {
    QLocale::QLocale(local_c0,&local_50);
    QLocale::setDefault(local_c0);
    QLocale::~QLocale(local_c0);
  }
  local_d0 = (QArrayData *)puVar1;
  FUN_100d3fd70(&local_c8,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de87e;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1001de87e:
  if ((DAT_102312188 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312188), iVar3 != 0)) {
    DAT_102312180 = puVar1;
    ___cxa_atexit(FUN_100054e40,&DAT_102312180,0x100000000);
    ___cxa_guard_release(&DAT_102312188);
  }
  if (*(int *)(DAT_102312180 + 4) != 0) {
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QResource::unregisterResource((QString *)&DAT_102312180,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_19 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001de922;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  }
LAB_1001de922:
  if ((DAT_102312198 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312198), iVar3 != 0)) {
    DAT_102312190 = puVar1;
    ___cxa_atexit(FUN_100054e40,&DAT_102312190,0x100000000);
    ___cxa_guard_release(&DAT_102312198);
  }
  if (*(int *)(DAT_102312190 + 4) != 0) {
    local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QResource::unregisterResource((QString *)&DAT_102312190,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_19 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001de9c6;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
  }
LAB_1001de9c6:
  local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
  if (1 < *(int *)local_c8 + 1U) {
    LOCK();
    *(int *)local_c8 = *(int *)local_c8 + 1;
    local_19 = *(int *)local_c8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1dd9c7a);
  QString::append(&local_e8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001dea3a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001dea3a:
  QString::operator=((QString *)&DAT_102312180,&local_e8);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_19 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001dea83;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1001dea83:
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  cVar2 = QResource::registerResource((QString *)&DAT_102312180,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_19 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001dead5;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1001dead5:
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("[AppController]","prl_client_app",0,
                  "!!! Can not load localized images from %s !!!",
                  local_f8 + *(long *)(local_f8 + 0x10));
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_19 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001debaa;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_1001debaa:
    QString::fromUtf8_helper((char *)&local_38,0x1e41978);
    QString::operator=((QString *)&DAT_102312180,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001debfc;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1001debfc:
    QString::fromUtf8_helper((char *)&local_30,0x1dd9cbc);
    QString::operator=((QString *)&DAT_102312190,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001dec51;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1001dec51:
    local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QResource::registerResource((QString *)&DAT_102312190,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_19 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001deca1;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_28,0x1e41978);
    QString::operator=((QString *)&DAT_102312190,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001deca1;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1001deca1:
  FUN_100d40de0(&local_108);
  FUN_100d402e0(&local_108);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_19 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001decef;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1001decef:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001ded25;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001ded25:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001ded55;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001ded55:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

