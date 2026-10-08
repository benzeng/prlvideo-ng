
void FUN_10009d100(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar2 = QObject::sender();
  if ((lVar2 == 0) ||
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0), lVar2 == 0)) {
    uVar4 = QObject::sender();
    FUN_100df99c0("INVSC","prl_client_app",0,
                  "Error: signal sender=%p is invalid for slot onVmConfigurationChanged()",uVar4);
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  cVar1 = CVmGuestSharing::isAutoMount();
  FUN_100188480(&local_38,lVar2);
  pcVar3 = (char *)FUN_10009d580(param_1 + 0x10,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009d1c3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10009d1c3:
  if ((*pcVar3 != '\0') || (cVar1 != '\x01')) goto LAB_10009d29e;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("INVSC","prl_client_app",2,"InvSharing: executing \"FinderShowConnectedServers\"")
    ;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("true",4);
  QString::arg(&local_40,&DAT_102310888,&local_48,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009d265;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10009d265:
  FUN_100d6fb50(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10009d29e;
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009d29e:
  *pcVar3 = cVar1;
  return;
}

