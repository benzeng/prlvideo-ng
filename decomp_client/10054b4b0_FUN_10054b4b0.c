
void FUN_10054b4b0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    uVar3 = 0;
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar2 = *(long *)(lVar1 + 0x38);
    if ((lVar2 != 0) && (uVar3 = 0, *(int *)(lVar2 + 4) != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
    }
    FUN_1001609d0(uVar3);
    return;
  }
  return;
}

