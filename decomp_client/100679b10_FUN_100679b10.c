
void FUN_100679b10(long param_1)

{
  undefined8 uVar1;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  int *local_50 [4];
  QVariant local_30 [2];
  undefined1 local_11;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onSignOutQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x39);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  FUN_100a1c600(local_50,param_1,&local_58,&local_68);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100679baf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100679baf:
  CAbstractWizardModel::wizardCtrl();
  uVar1 = CWizardController::parentWidget();
  FUN_100622fa0(0x3c88,uVar1,local_50);
  QVariant::~QVariant(local_30);
  if (local_50[0] != (int *)0x0) {
    LOCK();
    *local_50[0] = *local_50[0] + -1;
    local_11 = *local_50[0] != 0;
    UNLOCK();
    if ((!(bool)local_11) && (local_50[0] != (int *)0x0)) {
      operator_delete(local_50[0]);
    }
  }
  return;
}

