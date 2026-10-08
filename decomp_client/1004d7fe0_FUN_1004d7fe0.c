
void FUN_1004d7fe0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar1 = FUN_10044e560();
  local_40 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.WinMaintenance.Enabled",0x25);
  FUN_1003e1800(&local_38,uVar1,&local_40,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d8064;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d8064:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50),0));
  return;
}

