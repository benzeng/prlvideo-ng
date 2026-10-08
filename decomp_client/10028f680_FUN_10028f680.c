
undefined8 FUN_10028f680(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  CSlotInfo local_108;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [32];
  QString local_98;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("ProductUpdate",0xd);
  QSettings::beginGroup((QString *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f6eb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10028f6eb:
  local_50 = (QArrayData *)QString::fromAscii_helper("UpdateType",10);
  QVariant::QVariant(&local_60,-1);
  QSettings::value((QString *)&local_48,&local_30);
  uVar1 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f773;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10028f773:
  local_80 = (QArrayData *)QString::fromAscii_helper("UpdateToVersion",0xf);
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QVariant::QVariant(&local_90,&local_98);
  QSettings::value((QString *)&local_78,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_19 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f819;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10028f819:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f849;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10028f849:
  local_b8._24_8_ = QString::fromAscii_helper("UpdateType",10);
  QSettings::remove((QString *)&local_30);
  if (*(int *)local_b8._24_8_ != -1) {
    if (*(int *)local_b8._24_8_ != 0) {
      LOCK();
      *(int *)local_b8._24_8_ = *(int *)local_b8._24_8_ + -1;
      local_19 = *(int *)local_b8._24_8_ != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f8a7;
    }
    QArrayData::deallocate((QArrayData *)local_b8._24_8_,2,8);
  }
LAB_10028f8a7:
  local_b8._16_8_ = QString::fromAscii_helper("UpdateToVersion",0xf);
  QSettings::remove((QString *)&local_30);
  if (*(int *)local_b8._16_8_ != -1) {
    if (*(int *)local_b8._16_8_ != 0) {
      LOCK();
      *(int *)local_b8._16_8_ = *(int *)local_b8._16_8_ + -1;
      local_19 = *(int *)local_b8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028f905;
    }
    QArrayData::deallocate((QArrayData *)local_b8._16_8_,2,8);
  }
LAB_10028f905:
  uVar3 = 0x3bfa;
  if ((uVar1 < 2) &&
     (iVar2 = QString::compare_helper
                        (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                         "12.2.1-41615",0xffffffff,1), iVar2 == 0)) {
    if (uVar1 == 0) {
      iVar2 = CMessageManager::instance();
      local_b8._8_8_ = PTR_shared_null_1021e15e8;
      local_b8._0_8_ = PTR_shared_null_1021e15e8;
      local_108.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_108._24_8_ = 0;
      local_108.field3_0x28 = 0;
      local_108.field2_0x1c.field0_0x0._4_8_ = 0;
      local_d0 = 0x80000000;
      local_d8.field7 = 0;
      local_c8 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x3c28,(QStringList *)0x0,(QStringList *)(local_b8 + 8),
                 (CSlotInfo *)local_b8,(bool)((char)&local_108 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_d8);
      if (local_108.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_108.field1_0x10.field0_0x0 = *(int *)local_108.field1_0x10.field0_0x0 + -1;
        local_19 = *(int *)local_108.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_108.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_108.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(local_b8);
      uVar3 = 0;
      FUN_100039a80(local_b8 + 8);
    }
    else {
      iVar2 = CMessageManager::instance();
      local_108.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_108.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_130 = 0;
      local_138 = 0;
      local_120 = 0x80000000;
      local_128.field7 = 0;
      local_118 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x3c29,(QStringList *)0x0,
                 (QStringList *)&local_108.field0_0x0.field0_0x0.field1_0x8,&local_108,
                 SUB81(&local_148,0));
      QVariant::~QVariant((QVariant *)&local_128);
      if (local_148 != (int *)0x0) {
        LOCK();
        *local_148 = *local_148 + -1;
        local_19 = *local_148 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_148 != (int *)0x0)) {
          operator_delete(local_148);
        }
      }
      FUN_100039a80(&local_108);
      uVar3 = 0;
      FUN_100039a80(&local_108.field0_0x0.field0_0x0.field1_0x8);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10028fb27;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10028fb27:
  QSettings::~QSettings((QSettings *)&local_30);
  return uVar3;
}

