
void FUN_100179cf0(bool param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd080);
  if (lVar2 == 0) {
    return;
  }
  uVar3 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001547d0(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100179d81;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100179d81:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to update shared folder action.");
    return;
  }
  CVmSharedFolder::getPath();
  cVar1 = QFile::exists(&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100179dd0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100179dd0:
  if (cVar1 == '\0') {
    QAction::setEnabled(param_1);
  }
  else {
    QAction::setEnabled(param_1);
    cVar1 = CVmSharedFolder::isEnabled();
    if (cVar1 != '\0') {
      CVmHostSharing::isUserDefinedFoldersEnabled();
    }
  }
  QAction::setChecked(param_1);
  return;
}

