
void FUN_100140bf0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  if (((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
       (*(long *)(param_1 + 0x38) != 0)) &&
      ((*(long *)(param_1 + 0x40) != 0 && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)))) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QObject::blockSignals(SUB81(*(long *)(param_1 + 0x48),0));
    uVar4 = false;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar4 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x38);
    }
    QObject::blockSignals((bool)uVar4);
    iVar1 = QSpinBox::value();
    iVar5 = *(int *)(param_1 + 0x70);
    iVar2 = QAbstractSlider::singleStep();
    iVar3 = iVar1 % iVar2;
    if (iVar3 != 0) {
      iVar6 = iVar1 - iVar3;
      if (iVar3 < iVar2 / 2) {
        iVar1 = iVar6;
        if (iVar6 < iVar2) {
          iVar1 = iVar2;
        }
      }
      else {
        iVar1 = iVar6 + iVar2;
        if (iVar5 < iVar6 + iVar2) {
          iVar1 = iVar5;
        }
      }
    }
    iVar5 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    QSpinBox::setMinimum(iVar5);
    iVar5 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    QSpinBox::setMaximum(iVar5);
    iVar5 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x38);
    }
    CMemorySlider::setMemoryValue(iVar5,SUB41(iVar1,0));
    uVar4 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar4 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    QObject::blockSignals((bool)uVar4);
    uVar4 = false;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar4 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x38);
    }
    QObject::blockSignals((bool)uVar4);
    return;
  }
  return;
}

