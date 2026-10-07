
QString * FUN_1006f9040(QString *param_1,QString *param_2)

{
  char cVar1;
  QString local_40;
  QString local_38;
  QString local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QFileInfo::QFileInfo(local_28,param_2);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QFileInfo::absoluteFilePath();
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006f915c;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
    goto LAB_1006f915c;
  }
  QFileInfo::canonicalFilePath();
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f90bb;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006f90bb:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QFileInfo::absoluteFilePath();
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006f915c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1006f915c:
  QFileInfo::~QFileInfo(local_28);
  return param_1;
}

