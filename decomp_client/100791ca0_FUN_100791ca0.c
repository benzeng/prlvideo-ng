
undefined8 FUN_100791ca0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = QTextEdit::isReadOnly();
  if (cVar1 == '\0') {
    QTextEdit::document();
    uVar2 = QTextDocument::isUndoAvailable();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

