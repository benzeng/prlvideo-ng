
bool FUN_100719630(uint param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = QKeySequence::count();
  if (iVar1 == 1) {
    iVar1 = QKeySequence::operator[](param_1);
    bVar2 = true;
    if (iVar1 != 0x2000000) {
      iVar1 = QKeySequence::operator[](param_1);
      if (iVar1 != 0x4000000) {
        iVar1 = QKeySequence::operator[](param_1);
        if (iVar1 != 0x8000000) {
          iVar1 = QKeySequence::operator[](param_1);
          bVar2 = iVar1 == 0x10000000;
        }
      }
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

