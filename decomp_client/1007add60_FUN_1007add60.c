
void FUN_1007add60(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_38 [16];
  long local_28;
  
  local_28 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x68))
                    (*(long **)(param_1 + 0x110),&local_28,param_2,param_3);
  if (iVar1 == 4) {
    bVar2 = SUB81(*(undefined8 *)(param_1 + 0xe8),0);
    if (*(char *)(local_28 + 0x70) == '\0') {
      QWidget::setEnabled(bVar2);
      QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
      uVar3 = (undefined1)*(undefined8 *)(param_1 + 0xb8);
    }
    else {
      QWidget::setEnabled(bVar2);
      QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
      uVar3 = (undefined1)*(undefined8 *)(param_1 + 0xb8);
    }
    QWidget::setEnabled((bool)uVar3);
  }
  local_38 = FUN_1007a82d0(*(undefined8 *)(param_1 + 0x100),param_2,param_3);
  CMacScrollArea::ensureVisible(*(QRect **)(param_1 + 0xf8),(int)local_38);
  return;
}

