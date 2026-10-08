
bool FUN_10002ab20(long param_1)

{
  long lVar1;
  bool bVar2;
  QDateTime local_20;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    QDateTime::currentDateTime();
    lVar1 = QDateTime::secsTo((QDateTime *)(param_1 + 0x28));
    if (lVar1 < *(int *)(param_1 + 0x3c)) {
      bVar2 = false;
    }
    else {
      lVar1 = QDateTime::secsTo((QDateTime *)(param_1 + 0x30));
      bVar2 = *(int *)(param_1 + 0x40) <= lVar1;
    }
    QDateTime::~QDateTime(&local_20);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

