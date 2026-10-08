
void FUN_10009ce60(long param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::connect(&local_38,param_2,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                   "1onVmConfigurationChanged(const CVmConfiguration &)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
LAB_10009cebe:
    FUN_100df99c0("INVSC","prl_client_app",0,"Error: failed to connect vm slots");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar1 == '\0') goto LAB_10009cebe;
  }
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  cVar1 = CVmGuestSharing::isAutoMount();
  FUN_100188480(&local_40,param_2);
  pcVar2 = (char *)FUN_10009d580(param_1 + 0x10,&local_40);
  *pcVar2 = cVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009cf60;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009cf60:
  if (DAT_10230ffd0 < 2) {
    return;
  }
  FUN_100188480(&local_50,param_2);
  QString::toUtf8();
  pcVar2 = "false";
  if (cVar1 != '\0') {
    pcVar2 = "true";
  }
  FUN_100df99c0("INVSC","prl_client_app",2,"InvSharing: vmUuid=\"%s\", isAutoMount=%s",
                local_48 + *(long *)(local_48 + 0x10),pcVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009cff9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10009cff9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

