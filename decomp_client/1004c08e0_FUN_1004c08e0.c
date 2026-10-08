
void FUN_1004c08e0(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar4 = FUN_10044e460();
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar5 = FUN_10044e460(param_1);
  uVar5 = FUN_10018c280(uVar5);
  FUN_100319ae0(uVar5);
  uVar5 = *(undefined8 *)(param_1[7] + 0x18);
  pcVar1 = *(code **)(*param_1 + 0x1f8);
  uVar2 = FUN_10044e480(param_1);
  uVar3 = FUN_10044b4d0(param_1);
  (*pcVar1)(param_1,uVar2,uVar3);
  QWidget::setEnabled(SUB81(uVar5,0));
  uVar5 = FUN_10044e560(param_1);
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.MouseSync.Enabled",0x20);
  FUN_1003e1800(&local_48,uVar5,&local_50,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c09d8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004c09d8:
  uVar5 = FUN_10044e560(param_1);
  local_68 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.SmartMouse.Enabled",0x21);
  FUN_1003e1800(&local_60,uVar5,&local_68,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c0a4f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c0a4f:
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1[7] + 0x30),0));
  return;
}

