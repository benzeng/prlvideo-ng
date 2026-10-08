
void FUN_100678e80(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  QStringList *pQVar3;
  AnonymousUnion0 *pAVar4;
  undefined4 local_1f8 [2];
  undefined1 local_1f0 [16];
  QString local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined4 local_1c0;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [16];
  QArrayData *local_190;
  QArrayData *local_188;
  AnonymousUnion0 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_138 [32];
  undefined8 local_118;
  bool local_110;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  bool local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [32];
  undefined8 local_78;
  bool local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (-1 < param_2) {
    *(undefined1 *)(param_1 + 0x15f) = 1;
    FUN_100679900(param_1,0,param_1 + 0x108,param_1 + 0x110);
    return;
  }
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 < -0x7ffb8ff8) {
    if (param_2 == -0x7ffb8ffe) {
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_98._8_8_ = PTR_shared_null_1021e15e8;
      local_98._0_8_ = PTR_shared_null_1021e15e8;
      local_e8._16_16_ = (undefined1  [16])0x0;
      local_c0 = 0;
      local_c8 = 0;
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      local_a8 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80015301,pQVar3,(QStringList *)(local_98 + 8),
                 (CSlotInfo *)local_98,(bool)((char)local_e8 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_b8);
      if ((QMetaObject *)local_e8._16_8_ != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_e8._16_8_ = *(int *)local_e8._16_8_ + -1;
        local_31 = *(int *)local_e8._16_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((QMetaObject *)local_e8._16_8_ != (QMetaObject *)0x0)) {
          operator_delete((void *)local_e8._16_8_);
        }
      }
      FUN_100039a80(local_98);
      pAVar4 = (AnonymousUnion0 *)(local_98 + 8);
      goto LAB_100679450;
    }
    if (param_2 == -0x7ffb8ffa) {
      *(undefined4 *)(param_1 + 0x178) = 2;
      CAbstractWizardModel::goToPage(param_1,3,1);
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_138._8_8_ = PTR_shared_null_1021e15e8;
      local_138._0_8_ = PTR_shared_null_1021e15e8;
      local_178 = (undefined1  [16])0x0;
      local_160 = 0;
      local_168 = 0;
      local_150 = 0x80000000;
      local_158.field7 = 0;
      local_148 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80015287,pQVar3,(QStringList *)(local_138 + 8),
                 (CSlotInfo *)local_138,SUB81(local_178,0));
      QVariant::~QVariant((QVariant *)&local_158);
      if ((int *)local_178._0_8_ != (int *)0x0) {
        LOCK();
        *(int *)local_178._0_8_ = *(int *)local_178._0_8_ + -1;
        local_31 = *(int *)local_178._0_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((int *)local_178._0_8_ != (int *)0x0)) {
          operator_delete((void *)local_178._0_8_);
        }
      }
      FUN_100039a80(local_138);
      pAVar4 = (AnonymousUnion0 *)(local_138 + 8);
      goto LAB_100679450;
    }
  }
  else {
    if (param_2 == -0x7ffb8fce) {
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_e8._8_8_ = PTR_shared_null_1021e15e8;
      local_e8._0_8_ = PTR_shared_null_1021e15e8;
      local_138._16_16_ = (undefined1  [16])0x0;
      local_110 = 0;
      local_118 = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80047032,pQVar3,(QStringList *)(local_e8 + 8),
                 (CSlotInfo *)local_e8,(bool)((char)local_138 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_108);
      if ((QMetaObject *)local_138._16_8_ != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_138._16_8_ = *(int *)local_138._16_8_ + -1;
        local_31 = *(int *)local_138._16_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((QMetaObject *)local_138._16_8_ != (QMetaObject *)0x0)) {
          operator_delete((void *)local_138._16_8_);
        }
      }
      FUN_100039a80(local_e8);
      pAVar4 = (AnonymousUnion0 *)(local_e8 + 8);
      goto LAB_100679450;
    }
    if (param_2 == -0x7ffb8ff8) {
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
      local_98._16_16_ = (undefined1  [16])0x0;
      local_70 = 0;
      local_78 = 0;
      local_60 = 0x80000000;
      local_68.field7 = 0;
      local_58 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80047008,pQVar3,(QStringList *)&local_40.field0,
                 (CSlotInfo *)&local_48,(bool)((char)local_98 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_68);
      if ((QMetaObject *)local_98._16_8_ != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
        local_31 = *(int *)local_98._16_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((QMetaObject *)local_98._16_8_ != (QMetaObject *)0x0)) {
          operator_delete((void *)local_98._16_8_);
        }
      }
      FUN_100039a80(&local_48);
      pAVar4 = &local_40;
      goto LAB_100679450;
    }
  }
  iVar2 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar3 = (QStringList *)CWizardController::parentWidget();
  puVar1 = PTR_shared_null_1021e15e8;
  local_180.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_190 = (QArrayData *)
              QString::fromAscii_helper("http://www.parallels.com/account-@LOCALE@",0x29);
  QLocale::QLocale((QLocale *)(local_1a0 + 8));
  FUN_100d3f730(&local_188,&local_190,local_1a0 + 8);
  FUN_1000341d0(&local_180,&local_188);
  local_1a0._0_8_ = puVar1;
  local_1d8 = (undefined1  [16])0x0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0x80000000;
  local_1b8.field7 = 0;
  local_1a8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015302,pQVar3,(QStringList *)&local_180.field0,
             (CSlotInfo *)local_1a0,SUB81(local_1d8,0));
  QVariant::~QVariant((QVariant *)&local_1b8);
  if ((int *)local_1d8._0_8_ != (int *)0x0) {
    LOCK();
    *(int *)local_1d8._0_8_ = *(int *)local_1d8._0_8_ + -1;
    local_31 = *(int *)local_1d8._0_8_ != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((int *)local_1d8._0_8_ != (int *)0x0)) {
      operator_delete((void *)local_1d8._0_8_);
    }
  }
  FUN_100039a80(local_1a0);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100679407;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100679407:
  QLocale::~QLocale((QLocale *)(local_1a0 + 8));
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100679449;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100679449:
  pAVar4 = &local_180;
LAB_100679450:
  FUN_100039a80(pAVar4);
  local_1f8[0] = 0;
  local_1f0._8_4_ = (int)PTR_shared_null_1021e1288;
  local_1f0._0_8_ = PTR_shared_null_1021e1288;
  local_1f0._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x100) = 0;
  QString::operator=((QString *)(param_1 + 0x108),(QString *)local_1f0);
  QString::operator=((QString *)(param_1 + 0x110),(QString *)(local_1f0 + 8));
  QString::operator=((QString *)(param_1 + 0x118),&local_1e0);
  FUN_10064e770(local_1f8);
  return;
}

