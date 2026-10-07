
int FUN_1002f03f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  QDateTime local_38 [8];
  QDateTime local_30 [8];
  QDateTime local_28 [8];
  QDateTime local_20 [8];
  
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_20,local_28,1);
  iVar1 = QDateTime::toTime_t();
  iVar1 = iVar1 - *(int *)(param_1 + 0x18);
  QDateTime::~QDateTime(local_20);
  QDateTime::~QDateTime(local_28);
  if (iVar1 < 0) {
    QDateTime::currentDateTime();
    QDateTime::toTimeSpec(local_30,local_38,1);
    uVar2 = QDateTime::toTime_t();
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    QDateTime::~QDateTime(local_30);
    QDateTime::~QDateTime(local_38);
    iVar1 = 0;
  }
  return iVar1;
}

