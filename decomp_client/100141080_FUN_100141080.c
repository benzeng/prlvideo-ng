
void FUN_100141080(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = false;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (uVar1 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  }
  QObject::blockSignals((bool)uVar1);
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  QSpinBox::setMinimum(iVar2);
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  QSpinBox::setMaximum(iVar2);
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  QSpinBox::setValue(iVar2);
  uVar1 = false;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (uVar1 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  }
  QObject::blockSignals((bool)uVar1);
  uVar1 = false;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar1 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x38);
  }
  QObject::blockSignals((bool)uVar1);
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
  }
  CMemorySlider::setMemoryValue(iVar2,SUB41(param_2,0));
  uVar1 = false;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar1 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x38);
  }
  QObject::blockSignals((bool)uVar1);
  FUN_1007fc030(param_1,param_2);
  return;
}

