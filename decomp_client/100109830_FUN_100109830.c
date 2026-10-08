
undefined8 FUN_100109830(QString *param_1)

{
  QDir local_38 [8];
  QString local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,param_1);
  QFileInfo::dir();
  QDir::path();
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001098a2;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1001098a2:
  QDir::~QDir(local_38);
  QFileInfo::~QFileInfo(local_28);
  return 1;
}

