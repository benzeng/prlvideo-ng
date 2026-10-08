
byte FUN_1000d7c20(QString *param_1)

{
  byte bVar1;
  QDir local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    if (DAT_10230ffd0 < 1) {
      bVar1 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"Warning: attempt to delete special dir, path=\"%s\"",
                    local_28 + *(long *)(local_28 + 0x10));
      if (*(int *)local_28 == -1) {
        bVar1 = 0;
      }
      else {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return 0;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_28,1,8);
        bVar1 = 0;
      }
    }
  }
  else {
    FUN_100d9bbb0(param_1);
    QDir::QDir(local_30,param_1);
    bVar1 = QDir::exists();
    bVar1 = bVar1 ^ 1;
    QDir::~QDir(local_30);
  }
  return bVar1;
}

