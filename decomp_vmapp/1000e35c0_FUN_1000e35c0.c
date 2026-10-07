
void FUN_1000e35c0(QString *param_1)

{
  char cVar1;
  QArrayData *local_38;
  QFile local_30 [23];
  undefined1 local_19;
  
  QFile::QFile(local_30,param_1);
  cVar1 = QFile::open(local_30,2);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"NVRAMSave: Couldn\'t create NVRAM file: %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000e3669;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    QFile::resize((longlong)local_30);
    FUN_1000e36d0(local_30);
  }
LAB_1000e3669:
  QFile::~QFile(local_30);
  return;
}

