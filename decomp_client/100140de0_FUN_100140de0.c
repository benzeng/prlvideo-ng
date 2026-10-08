
void FUN_100140de0(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (((((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0)) ||
       (*(long *)(param_1 + 0x38) == 0)) ||
      ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == 0 || (*(int *)(lVar3 + 4) == 0)))) ||
     (*(long *)(param_1 + 0x48) == 0)) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0x60)) {
    QTimer::stop();
    lVar3 = *(long *)(param_1 + 0x40);
    uVar4 = false;
    if (lVar3 == 0) goto LAB_100140e57;
  }
  uVar4 = false;
  if (*(int *)(lVar3 + 4) != 0) {
    uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  }
LAB_100140e57:
  QObject::blockSignals((bool)uVar4);
  iVar5 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  FUN_100140f50(param_1);
  QSpinBox::setValue(iVar5);
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
  iVar5 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    iVar5 = (int)*(undefined8 *)(param_1 + 0x38);
  }
  bVar1 = (bool)FUN_100140f50(param_1);
  CMemorySlider::setMemoryValue(iVar5,bVar1);
  uVar4 = false;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar4 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x38);
  }
  QObject::blockSignals((bool)uVar4);
  uVar2 = FUN_100140f50(param_1);
  FUN_1007fc030(param_1,uVar2);
  return;
}

