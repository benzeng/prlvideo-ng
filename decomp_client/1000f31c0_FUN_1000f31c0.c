
char FUN_1000f31c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_30,&local_38);
  cVar1 = QDir::mkpath(&local_30);
  QDir::~QDir((QDir *)&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f322f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000f322f:
  if (cVar1 == '\0') {
    cVar1 = '\x03';
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"QDir::mkpath() err, folderPath=\"%s\"",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return '\x03';
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
  else {
    iVar2 = FUN_1000f2d70(param_1,8);
    cVar1 = (iVar2 != 0) * '\x03';
  }
  return cVar1;
}

