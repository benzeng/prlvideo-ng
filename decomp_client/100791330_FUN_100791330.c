
bool FUN_100791330(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = QLineEdit::isReadOnly();
  if (cVar1 == '\0') {
    cVar1 = QLineEdit::hasSelectedText();
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      iVar2 = QLineEdit::echoMode();
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

