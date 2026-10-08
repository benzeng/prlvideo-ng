
void FUN_10042b1e0(long param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  if (-1 < param_2) {
    if (((*(long *)(param_1 + 0xf8) == 0) || (*(int *)(*(long *)(param_1 + 0xf8) + 4) == 0)) ||
       (lVar1 = *(long *)(param_1 + 0x100), lVar1 == 0)) {
      return;
    }
    uVar2 = QAbstractButton::isChecked();
    CVmHardDisk::setDiskType(lVar1,uVar2);
    uVar2 = false;
    if ((*(long *)(param_1 + 0xf8) != 0) &&
       (uVar2 = false, *(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) {
      uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x100);
    }
    QAbstractButton::isChecked();
    CVmHardDisk::setSplitted((bool)uVar2);
    FUN_10042dd60(param_1);
  }
  FUN_10042d570(param_1,2);
  return;
}

