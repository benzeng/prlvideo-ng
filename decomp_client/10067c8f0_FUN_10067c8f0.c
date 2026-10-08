
void FUN_10067c8f0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  QStringList *pQVar3;
  AnonymousUnion0 *pAVar4;
  int *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  Data_conflict local_298;
  undefined4 local_290;
  undefined1 local_288;
  CSlotInfo local_278;
  Data_conflict local_248;
  undefined4 local_240;
  undefined1 local_238;
  CSlotInfo local_228;
  Data_conflict local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  CSlotInfo local_1d8;
  Data_conflict local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  CSlotInfo local_188;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  CSlotInfo local_138;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [24];
  AnonymousUnion0 local_d0;
  Data_conflict local_c8;
  bool local_c0;
  QArrayData *local_b8;
  int *local_b0 [4];
  QVariant local_90 [2];
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 < 0) {
    iVar1 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar3 = (QStringList *)CWizardController::parentWidget();
    local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)0x80015239,pQVar3,(QStringList *)&local_30.field0,
               (CSlotInfo *)&local_38,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_21 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_38);
    pAVar4 = &local_30;
    goto LAB_10067d1f9;
  }
  if ((int)param_3 < -6) {
    if (param_3 == 0xfffffff5) {
LAB_10067c9f1:
      uVar2 = FUN_100dddcf0(param_2);
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "[REG_DIALOG] onUpdateAccountInfoFinished with result %s",uVar2);
      if (-7 < (int)param_3) {
        if ((param_3 == 0xfffffffa) || (param_3 == 0)) {
          FUN_100df99c0("[LICENSE]","prl_client_app",0,"Registration info updated successfully.");
          if (*(char *)(param_1 + 0x15d) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x15d) = 1;
          CAbstractWizardModel::finished((int)param_1);
          return;
        }
        goto LAB_10067ccf7;
      }
      if (param_3 == 0xfffffff5) {
        FUN_100df99c0("[LICENSE]","prl_client_app",0,"Account updated successfully.");
        local_b8 = (QArrayData *)QString::fromAscii_helper("1onSuccessMessageClosed()",0x19);
        local_c0 = 0x80000000;
        local_c8.field7 = 0;
        FUN_100a1c600(local_b0,param_1,&local_b8,&local_c8);
        QVariant::~QVariant((QVariant *)&local_c8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_21 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10067cada;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_10067cada:
        iVar1 = CMessageManager::instance();
        CAbstractWizardModel::wizardCtrl();
        pQVar3 = (QStringList *)CWizardController::parentWidget();
        local_d0.field1 = (Data *)PTR_shared_null_1021e15e8;
        local_e8._16_8_ = PTR_shared_null_1021e15e8;
        CMessageManager::showMessageBox
                  (iVar1,(QWidget *)0x3b90,pQVar3,(QStringList *)&local_d0.field0,
                   (CSlotInfo *)(local_e8 + 0x10),SUB81(local_b0,0));
        FUN_100039a80(local_e8 + 0x10);
        FUN_100039a80(&local_d0);
        QVariant::~QVariant(local_90);
        if (local_b0[0] == (int *)0x0) {
          return;
        }
        LOCK();
        *local_b0[0] = *local_b0[0] + -1;
        local_21 = *local_b0[0] != 0;
        UNLOCK();
        if ((bool)local_21) {
          return;
        }
        if (local_b0[0] == (int *)0x0) {
          return;
        }
        operator_delete(local_b0[0]);
        return;
      }
    }
    if (param_3 == 0xfffffff9) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Registration product failed. Key registered on another user.");
      iVar1 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_e8._8_8_ = PTR_shared_null_1021e15e8;
      local_e8._0_8_ = PTR_shared_null_1021e15e8;
      local_138.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_138._24_8_ = 0;
      local_138.field3_0x28 = 0;
      local_138.field2_0x1c.field0_0x0._4_8_ = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QWidget *)0x80015247,pQVar3,(QStringList *)(local_e8 + 8),
                 (CSlotInfo *)local_e8,(bool)((char)&local_138 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_108);
      if (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_138.field1_0x10.field0_0x0 = *(int *)local_138.field1_0x10.field0_0x0 + -1;
        local_21 = *(int *)local_138.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_138.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(local_e8);
      pAVar4 = (AnonymousUnion0 *)(local_e8 + 8);
      goto LAB_10067d1f9;
    }
  }
  else if ((param_3 == 0xfffffffa) || (param_3 == 0)) goto LAB_10067c9f1;
LAB_10067ccf7:
  if (param_3 < 0xfffffffe) {
    if (param_3 == 0xfffffff4) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Registration product failed. Account associated with this email already exist."
                   );
      iVar1 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_228.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_228.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_278.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_278._24_8_ = 0;
      local_278.field3_0x28 = 0;
      local_278.field2_0x1c.field0_0x0._4_8_ = 0;
      local_240 = 0x80000000;
      local_248.field7 = 0;
      local_238 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QWidget *)0x80015287,pQVar3,
                 (QStringList *)&local_228.field0_0x0.field0_0x0.field1_0x8,&local_228,
                 (bool)((char)&local_278 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_248);
      if (local_278.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_278.field1_0x10.field0_0x0 = *(int *)local_278.field1_0x10.field0_0x0 + -1;
        local_21 = *(int *)local_278.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_278.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_278.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(&local_228);
      pAVar4 = (AnonymousUnion0 *)&local_228.field0_0x0.field0_0x0.field1_0x8;
    }
    else if (param_3 == 0xfffffffb) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Registration product failed. Invalid e-mail format.");
      iVar1 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_1d8.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_1d8.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_228.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_228._24_8_ = 0;
      local_228.field3_0x28 = 0;
      local_228.field2_0x1c.field0_0x0._4_8_ = 0;
      local_1f0 = 0x80000000;
      local_1f8.field7 = 0;
      local_1e8 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QWidget *)0x80015240,pQVar3,
                 (QStringList *)&local_1d8.field0_0x0.field0_0x0.field1_0x8,&local_1d8,
                 (bool)((char)&local_228 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_1f8);
      if (local_228.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_228.field1_0x10.field0_0x0 = *(int *)local_228.field1_0x10.field0_0x0 + -1;
        local_21 = *(int *)local_228.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_228.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_228.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(&local_1d8);
      pAVar4 = (AnonymousUnion0 *)&local_1d8.field0_0x0.field0_0x0.field1_0x8;
    }
    else if (param_3 == 0xfffffffd) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Registration product failed. Trial key.");
      iVar1 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_188.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_188.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_1d8.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_1d8._24_8_ = 0;
      local_1d8.field3_0x28 = 0;
      local_1d8.field2_0x1c.field0_0x0._4_8_ = 0;
      local_1a0 = 0x80000000;
      local_1a8.field7 = 0;
      local_198 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QWidget *)0x80015345,pQVar3,
                 (QStringList *)&local_188.field0_0x0.field0_0x0.field1_0x8,&local_188,
                 (bool)((char)&local_1d8 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_1a8);
      if (local_1d8.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_1d8.field1_0x10.field0_0x0 = *(int *)local_1d8.field1_0x10.field0_0x0 + -1;
        local_21 = *(int *)local_1d8.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_1d8.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_1d8.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(&local_188);
      pAVar4 = (AnonymousUnion0 *)&local_188.field0_0x0.field0_0x0.field1_0x8;
    }
    else {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Registration product failed with code %d",param_3);
      iVar1 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_278.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_278.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_2b8 = (int *)0x0;
      uStack_2b0 = 0;
      local_2a0 = 0;
      local_2a8 = 0;
      local_290 = 0x80000000;
      local_298.field7 = 0;
      local_288 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QWidget *)0x80015241,pQVar3,
                 (QStringList *)&local_278.field0_0x0.field0_0x0.field1_0x8,&local_278,
                 SUB81(&local_2b8,0));
      QVariant::~QVariant((QVariant *)&local_298);
      if (local_2b8 != (int *)0x0) {
        LOCK();
        *local_2b8 = *local_2b8 + -1;
        local_21 = *local_2b8 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_2b8 != (int *)0x0)) {
          operator_delete(local_2b8);
        }
      }
      FUN_100039a80(&local_278);
      pAVar4 = (AnonymousUnion0 *)&local_278.field0_0x0.field0_0x0.field1_0x8;
    }
  }
  else {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "(!)Error: Registration product failed. Invalid key.");
    iVar1 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar3 = (QStringList *)CWizardController::parentWidget();
    local_138.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
    local_138.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_188.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_188._24_8_ = 0;
    local_188.field3_0x28 = 0;
    local_188.field2_0x1c.field0_0x0._4_8_ = 0;
    local_150 = 0x80000000;
    local_158.field7 = 0;
    local_148 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)0x80015242,pQVar3,
               (QStringList *)&local_138.field0_0x0.field0_0x0.field1_0x8,&local_138,
               (bool)((char)&local_188 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_158);
    if (local_188.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_188.field1_0x10.field0_0x0 = *(int *)local_188.field1_0x10.field0_0x0 + -1;
      local_21 = *(int *)local_188.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_188.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_188.field1_0x10.field0_0x0);
      }
    }
    FUN_100039a80(&local_138);
    pAVar4 = (AnonymousUnion0 *)&local_138.field0_0x0.field0_0x0.field1_0x8;
  }
LAB_10067d1f9:
  FUN_100039a80(pAVar4);
  return;
}

