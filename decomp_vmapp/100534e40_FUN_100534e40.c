
QString * FUN_100534e40(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *pQVar2;
  QFileInfo local_48 [8];
  QDir local_40 [8];
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100534ebf;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100534ebf:
    QFileInfo::QFileInfo(local_48,param_1);
    QFileInfo::dir();
    QDir::absolutePath();
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100534f21;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_100534f21:
    QDir::~QDir(local_40);
    QFileInfo::~QFileInfo(local_48);
    pQVar1 = param_1->field0_0x0;
  }
  if (*(int *)(pQVar1 + 4) == 0) {
    return param_1;
  }
  QString::fromUtf8_helper((char *)&local_28,0xa02eac);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100534f91;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100534f91:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Windows Disks",0xd);
  QString::append(param_1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}

