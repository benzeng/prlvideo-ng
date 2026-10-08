
bool FUN_10034ac90(long param_1)

{
  long lVar1;
  bool bVar2;
  QDateTime local_20;
  QDateTime local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    bVar2 = false;
  }
  else if (*(char *)(param_1 + 0x31) == '\0') {
    QDateTime::currentDateTime();
    FUN_10034ad30(&local_20,param_1);
    lVar1 = QDateTime::secsTo(&local_18);
    QDateTime::~QDateTime(&local_20);
    bVar2 = lVar1 < 18000;
    QDateTime::~QDateTime(&local_18);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

