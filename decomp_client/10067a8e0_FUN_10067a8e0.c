
void FUN_10067a8e0(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  QStringList *pQVar3;
  AnonymousUnion0 *pAVar4;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [16];
  QArrayData *local_b0;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_58 [24];
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (-1 < param_2) {
    FUN_100679900(param_1,param_3,param_4,param_5);
    return;
  }
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x1b8))();
  }
  if (param_2 == -0x7ffffd8b) {
    return;
  }
  if (param_2 != -0x7ffb8fd9) {
    iVar2 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar3 = (QStringList *)CWizardController::parentWidget();
    puVar1 = PTR_shared_null_1021e15e8;
    local_a0.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_b0 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/account-@LOCALE@",0x29);
    QLocale::QLocale((QLocale *)(local_c0 + 8));
    FUN_100d3f730(&local_a8,&local_b0,local_c0 + 8);
    FUN_1000341d0(&local_a0,&local_a8);
    local_c0._0_8_ = puVar1;
    local_f8 = (int *)0x0;
    uStack_f0 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x80000000;
    local_d8.field7 = 0;
    local_c8 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015302,pQVar3,(QStringList *)&local_a0.field0,
               (CSlotInfo *)local_c0,SUB81(&local_f8,0));
    QVariant::~QVariant((QVariant *)&local_d8);
    if (local_f8 != (int *)0x0) {
      LOCK();
      *local_f8 = *local_f8 + -1;
      local_29 = *local_f8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_f8 != (int *)0x0)) {
        operator_delete(local_f8);
      }
    }
    FUN_100039a80(local_c0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10067ab57;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10067ab57:
    QLocale::~QLocale((QLocale *)(local_c0 + 8));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10067ab99;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10067ab99:
    pAVar4 = &local_a0;
    goto LAB_10067acd7;
  }
  iVar2 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar3 = (QStringList *)CWizardController::parentWidget();
  puVar1 = PTR_shared_null_1021e15e8;
  local_58._16_8_ = PTR_shared_null_1021e15e8;
  local_58._8_8_ = PTR_shared_null_1021e1288;
  if (param_3 == 2) {
    QString::fromUtf8_helper((char *)&local_40,0x1e0b1cd);
    QString::operator=((QString *)(local_58 + 8),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10067abfd;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else if (param_3 == 1) {
    QString::fromUtf8_helper((char *)&local_38,0x1e0b1c4);
    QString::operator=((QString *)(local_58 + 8),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10067abfd;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10067abfd:
  FUN_1000341d0(local_58 + 0x10,local_58 + 8);
  local_58._0_8_ = puVar1;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80047027,pQVar3,(QStringList *)(local_58 + 0x10),
             (CSlotInfo *)local_58,SUB81(&local_98,0));
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_29 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  FUN_100039a80(local_58);
  if (*(int *)local_58._8_8_ != -1) {
    if (*(int *)local_58._8_8_ != 0) {
      LOCK();
      *(int *)local_58._8_8_ = *(int *)local_58._8_8_ + -1;
      local_29 = *(int *)local_58._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067acd3;
    }
    QArrayData::deallocate((QArrayData *)local_58._8_8_,2,8);
  }
LAB_10067acd3:
  pAVar4 = (AnonymousUnion0 *)(local_58 + 0x10);
LAB_10067acd7:
  FUN_100039a80(pAVar4);
  return;
}

