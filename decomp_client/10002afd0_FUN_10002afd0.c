
bool FUN_10002afd0(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  QDateTime local_28;
  
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    QDateTime::currentDateTime();
    lVar1 = QDateTime::secsTo((QDateTime *)(param_1 + 0x28));
    bVar3 = lVar1 < *(int *)(param_1 + 0x38);
    QDateTime::~QDateTime(&local_28);
  }
  return bVar3;
}

