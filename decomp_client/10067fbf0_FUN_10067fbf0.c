
void FUN_10067fbf0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  int *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  Data_conflict local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_19;
  
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 < 0) {
    CAbstractWizardModel::wizardCtrl();
    uVar2 = CWizardController::parentWidget();
    local_58 = (int *)0x0;
    uStack_50 = 0;
    local_40 = 0;
    local_48 = 0;
    local_30 = 0x80000000;
    local_38.field7 = 0;
    local_28 = 1;
    FUN_100621ac0(param_2,uVar2,&local_58,0);
    QVariant::~QVariant((QVariant *)&local_38);
    if (local_58 == (int *)0x0) {
      return;
    }
    LOCK();
    *local_58 = *local_58 + -1;
    iVar1 = *local_58;
    UNLOCK();
    local_90[0] = local_58;
    goto joined_r0x00010067fd59;
  }
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDeactivateMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                        ,0x4c);
  QVariant::QVariant(&local_a8,param_2);
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10067fc97;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10067fc97:
  CAbstractWizardModel::wizardCtrl();
  uVar2 = CWizardController::parentWidget();
  FUN_100622fa0(0x3c71,uVar2,local_90);
  QVariant::~QVariant(local_70);
  if (local_90[0] == (int *)0x0) {
    return;
  }
  LOCK();
  *local_90[0] = *local_90[0] + -1;
  iVar1 = *local_90[0];
  UNLOCK();
joined_r0x00010067fd59:
  if ((iVar1 == 0) && (local_19 = 0, local_90[0] != (int *)0x0)) {
    operator_delete(local_90[0]);
  }
  return;
}

