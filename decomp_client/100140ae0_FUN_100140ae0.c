
void FUN_100140ae0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
       (*(long *)(param_1 + 0x38) != 0)) &&
      ((*(long *)(param_1 + 0x40) != 0 && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)))) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    CMemorySlider::memoryValue();
    QAbstractSlider::singleStep();
    uVar1 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar1 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    QObject::blockSignals((bool)uVar1);
    iVar2 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    QSpinBox::setValue(iVar2);
    uVar1 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar1 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    QObject::blockSignals((bool)uVar1);
    return;
  }
  return;
}

