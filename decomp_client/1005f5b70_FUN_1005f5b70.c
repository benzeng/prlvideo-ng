
void FUN_1005f5b70(long param_1,QString *param_2)

{
  QFileInfo local_40 [8];
  QDir local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  QFileInfo::QFileInfo(local_40,(QString *)(param_1 + 0x28));
  QFileInfo::dir();
  QDir::path();
  FUN_1005cdf70(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5bfa;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005f5bfa:
  QDir::~QDir(local_38);
  QFileInfo::~QFileInfo(local_40);
  QTimer::start();
  FUN_1005f4210(param_1);
  return;
}

