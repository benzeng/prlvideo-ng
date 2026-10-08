
void FUN_100991b50(QObject *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar3;
  Connection local_48 [8];
  code *local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  
  uVar3 = (undefined4)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  if (param_2 == '\0') {
    if (param_1[0x50] != (QObject)0x0) {
      iVar1 = (*DAT_102310be8)(*(undefined8 *)(param_1 + 0x30),FUN_1009ba840,param_1 + 0x40);
      if (iVar1 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_UnregHandler",
                      "( GetMigrationHandle(), &PtaEvtHandler::PTA_EVENT_CALLBACK, &m_ptaEvtHandler )"
                      ,"TransporterWizardLogic.cpp",CONCAT44(uVar3,0xed),"TurnClientNotifications");
      }
      local_30 = FUN_1009bf9c0;
      local_28 = 0;
      local_40 = FUN_100991d40;
      local_38 = 0;
      QObject::disconnectImpl
                (param_1 + 0x40,&local_30,param_1,&local_40,
                 (QMetaObject *)&PTR_staticMetaObject_102234620);
      param_1[0x50] = (QObject)0x0;
    }
  }
  else if (param_1[0x50] == (QObject)0x0) {
    iVar1 = (*DAT_102310be0)(*(undefined8 *)(param_1 + 0x30),FUN_1009ba840,param_1 + 0x40);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_RegHandler",
                    "( GetMigrationHandle(), &PtaEvtHandler::PTA_EVENT_CALLBACK, &m_ptaEvtHandler )"
                    ,"TransporterWizardLogic.cpp",CONCAT44(uVar3,0xe3),"TurnClientNotifications");
    }
    local_30 = FUN_1009bf9c0;
    local_28 = 0;
    local_40 = FUN_100991d40;
    local_38 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_100995b40;
    *(code **)(puVar2 + 4) = FUN_100991d40;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_48,param_1 + 0x40,&local_30,param_1,&local_40,puVar2,2,0,
               &PTR_staticMetaObject_102234620);
    QMetaObject::Connection::~Connection(local_48);
    param_1[0x50] = (QObject)0x1;
  }
  return;
}

