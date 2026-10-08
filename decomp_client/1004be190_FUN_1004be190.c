
void FUN_1004be190(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar1 = FUN_10044e560();
  local_40 = (QArrayData *)
             QString::fromAscii_helper("Settings.VirtualPrintersInfo.UseHostPrinters",0x2c);
  FUN_1003e1800(&local_38,uVar1,&local_40,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004be214;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004be214:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58),0));
  return;
}

