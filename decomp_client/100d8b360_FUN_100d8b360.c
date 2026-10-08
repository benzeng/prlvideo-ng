
QString * FUN_100d8b360(QString *param_1)

{
  QDir local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  FUN_100d8f590();
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    return param_1;
  }
  QDir::QDir(local_38,param_1);
  QDir::absoluteFilePath(&local_30);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d8b3d9;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d8b3d9:
  QDir::~QDir(local_38);
  return param_1;
}

