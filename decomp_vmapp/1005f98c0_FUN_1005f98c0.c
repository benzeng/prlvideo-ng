
void FUN_1005f98c0(undefined8 param_1)

{
  char cVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QFile local_30 [16];
  QString local_20;
  undefined1 local_11;
  
  FUN_1006002d0(&local_20,param_1);
  if (*(int *)(local_20.field0_0x0 + 4) == 0) {
    FUN_1008e3970("Backup","vdisk",0,"Unable to get path to disk descriptor");
    goto LAB_1005f99cd;
  }
  QFile::QFile(local_30,&local_20);
  cVar1 = QFile::remove();
  if (cVar1 == '\0') {
    QIODevice::errorString();
    QString::toUtf8();
    FUN_1008e3970("Backup","vdisk",0,"Unable to remove copy of disk descriptor, err = %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_11 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1005f9974;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1005f9974:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1005f99a4;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1005f99a4:
  QFile::~QFile(local_30);
LAB_1005f99cd:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

