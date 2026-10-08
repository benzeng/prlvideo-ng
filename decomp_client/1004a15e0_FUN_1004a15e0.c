
void FUN_1004a15e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar2 = FUN_10044e660();
  cVar1 = FUN_1003bf280(uVar2);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_10044e560(param_1);
  local_40 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedApplications.FromWinToMac",0x2e);
  FUN_1003e1800(&local_38,uVar2,&local_40,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a167c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004a167c:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),0));
  return;
}

