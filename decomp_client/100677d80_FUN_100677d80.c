
void FUN_100677d80(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  uVar3 = FUN_1001d50a0();
  uVar4 = FUN_1001d50d0(uVar3);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  FUN_1001e1cc0(uVar4,uVar3);
  uVar1 = FUN_1006269e0(*(undefined4 *)(param_1 + 0x17c));
  uVar2 = FUN_1006268d0();
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  local_60 = (QArrayData *)QString::fromAscii_helper("1onCongratulationMessageClosed()",0x20);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  FUN_100a1c600(local_58,param_1,&local_60,&local_70);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100677e71;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100677e71:
  CAbstractWizardModel::wizardCtrl();
  uVar3 = CWizardController::parentWidget();
  FUN_100622920(uVar1,uVar3,local_58);
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  return;
}

