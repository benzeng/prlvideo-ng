
void FUN_1001af310(undefined8 param_1,QString *param_2,QString *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  QTypedArrayData<unsigned_short> *pQStack_230;
  QVariant local_210;
  Data_conflict local_200;
  QVariant local_1f8;
  Data_conflict local_1e8;
  QVariant local_1e0;
  Data_conflict local_1d0;
  QVariant local_1c8;
  Data_conflict local_1b8;
  QString local_1b0;
  QString local_1a8;
  int local_1a0;
  QString local_198;
  long local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  uint local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  QVariant local_148;
  QString local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  QVariant local_118;
  QString local_108;
  QString QStack_100;
  undefined4 local_f8;
  QString local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QString local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QString local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QVariant local_70;
  QString local_60;
  undefined *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar4 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001af39c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001af39c:
  puVar2 = PTR_shared_null_1021e1288;
  local_58 = PTR_shared_null_1021e15e8;
  if (0 < iVar4) {
    iVar5 = 0;
    auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar8._0_8_ = PTR_shared_null_1021e1288;
    auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_78 = (QArrayData *)QString::fromAscii_helper("Device Name",0xb);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      QSettings::value((QString *)&local_70,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_70);
      QVariant::~QVariant((QVariant *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af488;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1001af488:
      local_a8 = (QArrayData *)QString::fromAscii_helper("Device Id",9);
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      QSettings::value((QString *)&local_a0,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_a0);
      QVariant::~QVariant((QVariant *)&local_b8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af528;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1001af528:
      local_d8 = (QArrayData *)QString::fromAscii_helper("AssocVmId",9);
      local_e0 = 0x80000000;
      local_e8.field7 = 0;
      QSettings::value((QString *)&local_d0,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_d0);
      QVariant::~QVariant((QVariant *)&local_e8);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af5c8;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1001af5c8:
      cVar3 = operator==(&local_60,param_2);
      if (((cVar3 == '\0') || (cVar3 = FUN_1001aee90(&local_90,param_1), cVar3 == '\0')) ||
         (cVar3 = operator==(&local_c0,param_3), cVar3 == '\0')) {
        pQStack_230 = auVar8._8_8_;
        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        QStack_100.field0_0x0 = pQStack_230;
        local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QString::operator=(&local_108,&local_60);
        QString::operator=(&QStack_100,&local_90);
        local_120 = (QArrayData *)QString::fromAscii_helper("Action",6);
        local_128 = 0x80000000;
        local_130.field7 = 0;
        QSettings::value((QString *)&local_118,&local_48);
        local_f8 = QVariant::toInt((bool *)&local_118);
        QVariant::~QVariant(&local_118);
        QVariant::~QVariant((QVariant *)&local_130);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001af6f2;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1001af6f2:
        local_150 = (QArrayData *)QString::fromAscii_helper("AssocVmId",9);
        local_158 = 0x80000000;
        local_160.field7 = 0;
        QSettings::value((QString *)&local_148,&local_48);
        QVariant::toString();
        QString::operator=(&local_f0,&local_138);
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_31 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001af791;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_1001af791:
        QVariant::~QVariant(&local_148);
        QVariant::~QVariant((QVariant *)&local_160);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001af7db;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_1001af7db:
        FUN_1001b6000(&local_58,&local_108);
        FUN_1001b5ee0(&local_108);
      }
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af82d;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1001af82d:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af863;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1001af863:
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001af893;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1001af893:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  QSettings::endArray();
  local_168 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::remove((QString *)&local_48);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001af90f;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1001af90f:
  local_170 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::beginWriteArray((QString *)&local_48,(int)&local_170);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001af972;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1001af972:
  FUN_1001b6440(&local_190,&local_58);
  local_188 = (undefined8 *)(local_190 + 0x10 + (long)*(int *)(local_190 + 8) * 8);
  local_180 = (undefined8 *)(local_190 + 0x10 + (long)*(int *)(local_190 + 0xc) * 8);
  local_178 = 1;
  if (*(int *)(local_190 + 8) != *(int *)(local_190 + 0xc)) {
    do {
      puVar1 = (undefined8 *)*local_188;
      local_1b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar1;
      if (1 < *(int *)local_1b0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + 1;
        local_31 = *(int *)local_1b0.field0_0x0 != 0;
        UNLOCK();
      }
      local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1[1];
      if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
        local_31 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
      }
      local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1[3];
      if (1 < *(int *)local_198.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + 1;
        local_31 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
      }
      local_1a0 = *(int *)(puVar1 + 2);
      if (local_178 != 0) {
        QSettings::setArrayIndex((int)&local_48);
        local_1b8.field7 = QString::fromAscii_helper("Device Name",0xb);
        QVariant::QVariant(&local_1c8,&local_1b0);
        QSettings::setValue((QString *)&local_48,(QVariant *)&local_1b8);
        QVariant::~QVariant(&local_1c8);
        if (*(int *)local_1b8.field15 != -1) {
          if (*(int *)local_1b8.field15 != 0) {
            LOCK();
            *(int *)local_1b8.field15 = *(int *)local_1b8.field15 + -1;
            local_31 = *(int *)local_1b8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001afaf6;
          }
          QArrayData::deallocate((QArrayData *)local_1b8.field15,2,8);
        }
LAB_1001afaf6:
        local_1d0.field7 = QString::fromAscii_helper("Device Id",9);
        QVariant::QVariant(&local_1e0,&local_1a8);
        QSettings::setValue((QString *)&local_48,(QVariant *)&local_1d0);
        QVariant::~QVariant(&local_1e0);
        if (*(int *)local_1d0.field15 != -1) {
          if (*(int *)local_1d0.field15 != 0) {
            LOCK();
            *(int *)local_1d0.field15 = *(int *)local_1d0.field15 + -1;
            local_31 = *(int *)local_1d0.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001afb6d;
          }
          QArrayData::deallocate((QArrayData *)local_1d0.field15,2,8);
        }
LAB_1001afb6d:
        local_1e8.field7 = QString::fromAscii_helper("Action",6);
        QVariant::QVariant(&local_1f8,local_1a0);
        QSettings::setValue((QString *)&local_48,(QVariant *)&local_1e8);
        QVariant::~QVariant(&local_1f8);
        if (*(int *)local_1e8.field15 != -1) {
          if (*(int *)local_1e8.field15 != 0) {
            LOCK();
            *(int *)local_1e8.field15 = *(int *)local_1e8.field15 + -1;
            local_31 = *(int *)local_1e8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001afbe3;
          }
          QArrayData::deallocate((QArrayData *)local_1e8.field15,2,8);
        }
LAB_1001afbe3:
        local_200.field7 = QString::fromAscii_helper("AssocVmId",9);
        QVariant::QVariant(&local_210,&local_198);
        QSettings::setValue((QString *)&local_48,(QVariant *)&local_200);
        QVariant::~QVariant(&local_210);
        if (*(int *)local_200.field15 != -1) {
          if (*(int *)local_200.field15 != 0) {
            LOCK();
            *(int *)local_200.field15 = *(int *)local_200.field15 + -1;
            local_31 = *(int *)local_200.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001afc61;
          }
          QArrayData::deallocate((QArrayData *)local_200.field15,2,8);
        }
LAB_1001afc61:
        local_178 = 0;
      }
      FUN_1001b5ee0(&local_1b0);
      local_188 = local_188 + 1;
      uVar6 = local_178 ^ 1;
      bVar7 = local_178 != 1;
      local_178 = uVar6;
    } while ((bVar7) && (local_188 != local_180));
  }
  FUN_1001b5e30(&local_190);
  QSettings::endArray();
  FUN_1001b5e30(&local_58);
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

