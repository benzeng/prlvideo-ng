
void FUN_10004cfb0(QString *param_1)

{
  QDir local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,
                    "Warning: attempt to delete special dir, path=\"%s\"",
                    local_28 + *(long *)(local_28 + 0x10));
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_28,1,8);
      }
    }
  }
  else {
    FUN_100d9bbb0(param_1);
    QDir::QDir(local_30,param_1);
    QDir::exists();
    QDir::~QDir(local_30);
  }
  return;
}

