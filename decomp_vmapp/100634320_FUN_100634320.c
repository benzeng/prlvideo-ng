
long * FUN_100634320(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  QDateTime local_40 [8];
  QDateTime local_38 [8];
  
  QDateTime::currentDateTime();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != *param_3) {
    do {
      QFileInfo::lastModified();
      cVar1 = QDateTime::operator<(local_38,local_40);
      QDateTime::~QDateTime(local_40);
      if (cVar1 == '\0') break;
      lVar2 = lVar2 + 8;
      *param_1 = lVar2;
    } while (lVar2 != *param_3);
  }
  QDateTime::~QDateTime(local_38);
  return param_1;
}

