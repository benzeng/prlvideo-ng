
undefined1 FUN_100634b80(void)

{
  undefined1 uVar1;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("\\.\\d+\\.gz",9);
  QRegExp::QRegExp((QRegExp *)&local_20,&local_28,1,0);
  uVar1 = QRegExp::exactMatch(&local_20);
  QRegExp::~QRegExp((QRegExp *)&local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

