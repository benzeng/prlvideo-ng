
undefined8 FUN_100298940(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  cVar1 = CVmFullScreen::isUseAllDisplays();
  if (cVar1 == *(char *)(param_1 + 0x2a)) {
    return 0x3bfa;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("{EF5CD91C-8F87-4534-9EB1-036480853C57}",0x26);
  if (*(char *)(param_1 + 0x2a) == '\0') {
    pcVar4 = "0";
  }
  else {
    pcVar4 = "1";
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(pcVar4,1);
  lVar2 = FUN_100198ac0(uVar3,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100298a39;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100298a39:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100298a69;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100298a69:
  uVar3 = 0x80000016;
  if (lVar2 != 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar3 = 0;
    QObject::connect(&local_40,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1toogleUseAllDisplaysInFullScreenFinished(PRL_RESULT)",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return uVar3;
}

