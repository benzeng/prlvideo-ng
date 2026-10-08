
undefined8 FUN_10018d860(undefined8 param_1,long param_2)

{
  char cVar1;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  if (*(int *)(param_2 + 100) != 3) goto LAB_10018d907;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_30,&local_38);
  cVar1 = QFileInfo::isDir();
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018d8e9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10018d8e9:
  if (cVar1 != '\0') {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    return param_1;
  }
LAB_10018d907:
  FUN_100109d60(param_1,*(undefined8 *)(param_2 + 0x80),1);
  return param_1;
}

