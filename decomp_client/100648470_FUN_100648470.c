
void FUN_100648470(void)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar1 = QGuiApplication::clipboard();
  if (lVar1 != 0) {
    QTextEdit::toPlainText();
    QClipboard::setText(lVar1,&local_28,0);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

