
undefined1 FUN_10063d6d0(void)

{
  char cVar1;
  undefined1 uVar2;
  QDateTime local_30;
  QDateTime local_28;
  
  cVar1 = CDownloadedKeyInfo::isActiveHere();
  if ((cVar1 != '\0') && (cVar1 = CDownloadedKeyInfo::isActiveHere(), cVar1 == '\0')) {
    return 1;
  }
  cVar1 = CDownloadedKeyInfo::isActiveHere();
  if ((cVar1 == '\0') && (cVar1 = CDownloadedKeyInfo::isActiveHere(), cVar1 != '\0')) {
    return 0;
  }
  CDownloadedKeyInfo::getGracePeriodStartDate();
  CDownloadedKeyInfo::getGracePeriodStartDate();
  uVar2 = QDateTime::operator<(&local_28,&local_30);
  QDateTime::~QDateTime(&local_30);
  QDateTime::~QDateTime(&local_28);
  return uVar2;
}

