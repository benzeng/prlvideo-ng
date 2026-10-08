
void FUN_100493b10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar2 = FUN_10044e560();
  local_38 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.ClipboardSync.Enabled",0x24);
  FUN_1003e1800(&local_30,uVar2,&local_38,0);
  QVariant::toBool();
  QWidget::setEnabled(SUB81(uVar1,0));
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

