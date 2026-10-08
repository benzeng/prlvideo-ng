
void FUN_1007e4030(long *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QFile local_38 [23];
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Unmount finished %d, %d",param_2,param_3);
  }
  FileDownloadInfo::destinationFilePath();
  QFile::QFile(local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e40c4;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007e40c4:
  cVar1 = QFile::remove();
  if (cVar1 != '\0') goto LAB_1007e4174;
  FileDownloadInfo::destinationFilePath();
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Failed to remove %s",local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e4144;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1007e4144:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e4174;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007e4174:
  (**(code **)(*param_1 + 0xb0))(param_1,(int)param_1[0xe]);
  QFile::~QFile(local_38);
  return;
}

