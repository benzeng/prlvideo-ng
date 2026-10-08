
bool FUN_10034c810(long param_1)

{
  long lVar1;
  bool bVar2;
  QDateTime local_20;
  QDateTime local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    bVar2 = false;
  }
  else {
    FUN_10034c640(&local_18,param_1);
    QDateTime::currentDateTime();
    lVar1 = QDateTime::secsTo(&local_18);
    if (lVar1 < 0x2a30) {
      lVar1 = FUN_10098ae20();
      bVar2 = *(int *)(lVar1 + 0x14) != 1;
    }
    else {
      bVar2 = false;
    }
    QDateTime::~QDateTime(&local_20);
    QDateTime::~QDateTime(&local_18);
  }
  return bVar2;
}

