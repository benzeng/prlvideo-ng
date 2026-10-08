
void FUN_10013fbb0(long param_1)

{
  undefined1 uVar1;
  
  if (((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
       (*(long *)(param_1 + 0x38) != 0)) &&
      ((*(long *)(param_1 + 0x40) != 0 && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)))) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::setEnabled(SUB81(*(long *)(param_1 + 0x38),0));
    uVar1 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar1 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    QWidget::setEnabled((bool)uVar1);
    QWidget::setEnabled(SUB81(param_1,0));
    return;
  }
  return;
}

