
int FUN_1002734e0(void)

{
  int iVar1;
  int iVar2;
  QDateTime local_28 [8];
  QDateTime local_20 [8];
  
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_20,local_28,1);
  iVar2 = QDateTime::toTime_t();
  iVar1 = DAT_1011c3808;
  QDateTime::~QDateTime(local_20);
  QDateTime::~QDateTime(local_28);
  return iVar2 - iVar1;
}

