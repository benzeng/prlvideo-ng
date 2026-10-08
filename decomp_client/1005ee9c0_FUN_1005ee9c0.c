
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1005ee9c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  CEULADialog *this;
  QWidget *pQVar3;
  undefined1 uVar4;
  long local_d8;
  QString local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  if (*(int *)(lVar1 + 0x50) == 8) {
    return 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return 1;
  }
  uVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  lVar1 = FUN_1005ee670(uVar2);
  if (lVar1 == 0) {
    CAbstractWizardPage::wizardCtrl();
    CWizardController::goBack();
    return 0;
  }
  CAppliance::getApplianceEULA();
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1005ccbb0(&local_30,local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eea6f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005eea6f:
  FUN_100036370(local_38);
  uVar4 = 1;
  if (*(int *)(local_30 + 4) == 0) goto LAB_1005eec04;
  FUN_1002ffd50(&local_c8);
  local_c8 = 0x20c00000336;
  local_c0 = 0;
  local_90 = 0;
  local_68 = 0;
  local_84 = _DAT_100e23b40;
  uStack_7c = _UNK_100e23b48;
  local_74 = 0xc;
  local_8c = 0x18;
  local_88 = 0x20;
  local_6c = 0;
  local_70 = 0xc;
  QMetaObject::tr((char *)&local_d0,"",0x1e05dda);
  QString::operator=(&local_48,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_21 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eeb50;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1005eeb50:
  this = operator_new(0x68);
  CAbstractWizardPage::wizardCtrl();
  pQVar3 = (QWidget *)CWizardController::parentWidget();
  CEULADialog::CEULADialog(this,(CEULADialogStyleOptions *)&local_c8,pQVar3);
  QWidget::setAttribute(this,0x37,1);
  CEULADialog::setEULAText((QString *)this);
  QObject::connect(&local_d8,this,"2finished( int )",param_1,"1onEULADialogFinished( int )",0);
  if (local_d8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d8);
  (**(code **)(*(long *)this + 0x1a0))(this);
  FUN_1002ffe20(&local_c8);
  uVar4 = 0;
LAB_1005eec04:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar4;
}

