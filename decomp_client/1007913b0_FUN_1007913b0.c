
bool FUN_1007913b0(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = QLineEdit::hasSelectedText();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    iVar2 = QLineEdit::echoMode();
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

