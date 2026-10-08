
QString * FUN_1009aa1c0(QString *param_1,long param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1009aa360(param_1,param_2,*(undefined4 *)(param_2 + 0x10));
  if (*(int *)(param_2 + 0x14) == 2) {
    FUN_100d313f0(param_2 + 0x18);
    FUN_1009aa3e0(&local_38);
    QString::append(param_1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_30,0x1e23b58);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return param_1;
}

