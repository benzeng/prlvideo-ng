
void FUN_100660b40(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [40];
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = *(QArrayData **)(param_1 + 0x38);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_80.field0_0x0._0_1_ = *(int *)local_28 != 0;
    UNLOCK();
  }
  uVar2 = FUN_100748240();
  local_88 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
  uVar2 = FUN_100748290(uVar2,&local_88);
  FUN_100746cb0(&local_80,uVar2,&local_28);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100660bd3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100660bd3:
  puVar1 = PTR_shared_null_1021e1288;
  local_110 = PTR_shared_null_1021e1288;
  FUN_1002f6080(&local_108,&local_110);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100660c23;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100660c23:
  QString::operator=(&local_108,&local_80);
  QString::operator=(&local_100,&local_78);
  QString::operator=(&local_f8,&local_70);
  QString::operator=(&local_f0,&local_68);
  QString::operator=(&local_e8,&local_60);
  QString::operator=(&local_e0,&local_58);
  QString::operator=(&local_d8,&local_50);
  QString::operator=(&local_d0,&local_48);
  QString::operator=(&local_c8,&local_40);
  QString::operator=(&local_c0,&local_38);
  FUN_100283c40(local_b8,local_30);
  CAbstractWizardPage::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_100675fb0(uVar2,&local_108);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  FUN_100252c80(local_b0);
  FUN_100252e70(&local_108);
  FUN_100252e70(&local_80);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_108.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

