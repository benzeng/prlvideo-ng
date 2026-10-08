
int FUN_1004230a0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = QComboBox::currentIndex();
  iVar2 = 0;
  if (uVar1 < 3) {
    iVar2 = uVar1 + 1;
  }
  return iVar2;
}

