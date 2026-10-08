
undefined1 FUN_100791d00(void)

{
  char cVar1;
  undefined1 uVar2;
  QTextCursor local_18 [8];
  
  cVar1 = QTextEdit::isReadOnly();
  if (cVar1 == '\0') {
    QTextEdit::textCursor();
    uVar2 = QTextCursor::hasSelection();
    QTextCursor::~QTextCursor(local_18);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

