
byte FUN_10042dc80(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    bVar2 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xf8) + 4) == 0) {
    bVar2 = 0;
  }
  else if (*(long *)(param_1 + 0x100) == 0) {
    bVar2 = 0;
  }
  else {
    cVar1 = QAbstractButton::isChecked();
    iVar4 = CVmHardDisk::getDiskType();
    bVar2 = 1;
    if ((bool)cVar1 == (iVar4 == 1)) {
      bVar2 = QAbstractButton::isChecked();
      bVar3 = CVmHardDisk::isSplitted();
      bVar2 = bVar2 ^ bVar3;
    }
  }
  return bVar2;
}

