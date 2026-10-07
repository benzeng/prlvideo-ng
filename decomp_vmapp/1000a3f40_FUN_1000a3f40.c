
void FUN_1000a3f40(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_40,&local_48);
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a3fc6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000a3fc6:
  lVar1 = DAT_1011c3650;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getSwapDir();
  CDispCommonPreferences::getWorkspacePreferences();
  CDispWorkspacePreferences::getSwapPathForVMOnNetworkShares();
  FUN_1006e8080(&local_50,lVar1 + 0x18,&local_38,&local_58,&local_60,0,param_3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a405d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000a405d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a408d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000a408d:
  cVar2 = QString::endsWith(&local_50,0x5c,1);
  if ((cVar2 == '\0') && (cVar2 = QString::endsWith(&local_50,0x2f,1), cVar2 == '\0')) {
    QString::append(&local_50,0x2f);
  }
  QFileInfo::setFile(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a4105;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000a4105:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

