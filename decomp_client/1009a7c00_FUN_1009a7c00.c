
void FUN_1009a7c00(QString *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = DAT_102310d90;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar4 = FUN_1009983c0();
  iVar3 = FUN_10099dc60(uVar5,lVar4 + 0x30,&local_30);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetVmName, getPTLogic()->GetMigrationHandle(), vmName)",
                  "Pages/WPProgress.cpp",0x48,"Initialize");
  }
  CAbstractWizardPage::setTitle(param_1);
  uVar5 = FUN_1009983c0(param_1);
  uVar5 = FUN_100991a80(uVar5);
  QObject::connect(&local_38,uVar5,"2sMigrationStateChanged( int )",param_1,
                   "1onMigrationStageChanged( int )",2);
  if (local_38 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar5 = FUN_1009983c0(param_1);
  uVar5 = FUN_100991a80(uVar5);
  QObject::connect(&local_40,uVar5,"2sNotifyProgress( MigrationNotification, int, int )",param_1,
                   "1onProgressNotify( MigrationNotification, int, int )",2);
  if ((cVar2 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  *(undefined4 *)&param_1[10].field0_0x0 = 0;
  pcVar1 = DAT_102310df0;
  lVar4 = FUN_1009983c0(param_1);
  iVar3 = (*pcVar1)(*(undefined8 *)(lVar4 + 0x30));
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAMigration_Migrate"
                  ,"( getPTLogic()->GetMigrationHandle() )","Pages/WPProgress.cpp",0x5b,"Initialize"
                 );
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

