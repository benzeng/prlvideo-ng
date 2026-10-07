
void FUN_100560e80(QString *param_1,QString *param_2)

{
  char cVar1;
  QString local_58 [2];
  QDir local_48 [8];
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,param_2);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100560ee2;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100560ee2:
  QFileInfo::dir();
  QDir::path();
  QDir::~QDir(local_48);
  cVar1 = QDir::exists(&local_30);
  if (cVar1 == '\0') {
    QDir::mkpath(&local_30);
  }
  QFile::QFile((QFile *)local_58,param_1);
  QFile::copy(local_58);
  QFile::~QFile((QFile *)local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100560f74;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100560f74:
  QDir::~QDir((QDir *)&local_30);
  QFileInfo::~QFileInfo(local_28);
  return;
}

