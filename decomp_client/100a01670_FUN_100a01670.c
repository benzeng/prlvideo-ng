
QDateTime * FUN_100a01670(QDateTime *param_1)

{
  char cVar1;
  int iVar2;
  QString local_48;
  QFileInfo local_40 [8];
  QDateTime local_38;
  QDateTime local_30;
  undefined1 local_21;
  
  QDateTime::currentDateTime();
  QDateTime::addDays((longlong)param_1);
  QDateTime::~QDateTime(&local_30);
  iVar2 = FUN_100d7e9e0();
  if (iVar2 != 1) {
    return param_1;
  }
  FUN_100d814b0(&local_48,0);
  QFileInfo::QFileInfo(local_40,&local_48);
  QFileInfo::created();
  QFileInfo::~QFileInfo(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a01713;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a01713:
  cVar1 = QDateTime::operator<(param_1,&local_38);
  if (cVar1 != '\0') {
    QDateTime::operator=(param_1,&local_38);
  }
  QDateTime::~QDateTime(&local_38);
  return param_1;
}

