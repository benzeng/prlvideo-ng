
bool FUN_100791410(void)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  QArrayData *local_20;
  undefined1 local_11;
  
  cVar1 = QLineEdit::isReadOnly();
  if (cVar1 == '\0') {
    uVar2 = QGuiApplication::clipboard();
    QClipboard::text(&local_20,uVar2,0);
    bVar3 = *(int *)(local_20 + 4) != 0;
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return bVar3;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

