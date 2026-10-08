
undefined8 FUN_1007912e0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = QLineEdit::isReadOnly();
  if (cVar1 == '\0') {
    uVar2 = QLineEdit::isUndoAvailable();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

