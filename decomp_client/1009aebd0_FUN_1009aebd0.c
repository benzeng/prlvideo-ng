
void FUN_1009aebd0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined4 local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QHostAddress::toString();
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Connect to agent using IP \'%s\'",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009aec6b;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1009aec6b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009aec9b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009aec9b:
  lVar3 = FUN_1009983c0(param_1);
  lVar3 = *(long *)(lVar3 + 0x28);
  lVar5 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  local_4c = 0;
  iVar2 = (*DAT_102310aa0)(lVar5,&local_4c);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_IsConnected",
                  "(hAgent, &bConnected)","Pages/WPConnectViaNetwork.cpp",0x157,"connectByIp");
  }
  pcVar1 = DAT_102310a78;
  QHostAddress::toString();
  QString::toUtf8();
  iVar2 = (*pcVar1)(lVar5,1,local_58 + *(long *)(local_58 + 0x10),0,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009aed97;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1009aed97:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009aedc7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009aedc7:
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_HOST, QSTR2UTF8(ip.toString()), 0, 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x15b,"connectByIp");
  }
  local_64 = 0x656;
  iVar2 = (*DAT_102310a78)(lVar5,2,&local_64,4,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_PORT, &port, sizeof(port), 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x15d,"connectByIp");
  }
  local_68 = 2;
  iVar2 = (*DAT_102310a78)(lVar5,3,&local_68,4,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_SEC_LEVEL, &secLevel, sizeof(secLevel), 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x160,"connectByIp");
  }
  iVar2 = (*DAT_102310ab0)(lVar5);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_ResetSession"
                  ,"(hAgent)","Pages/WPConnectViaNetwork.cpp",0x163,"connectByIp");
  }
  local_70 = 0;
  iVar2 = (*DAT_102310ab8)(lVar5,&local_70);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get auth info error 0x%X",iVar2);
  }
  iVar2 = (*DAT_102310b50)(local_70);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAuthInfo_Clear",
                  "(hAuthInfo)","Pages/WPConnectViaNetwork.cpp",0x167,"connectByIp");
  }
  iVar2 = (*DAT_102310ac8)(local_70,1);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to set auth type error 0x%X",iVar2);
  }
  FUN_1009ac6c0(param_1,1);
  uVar4 = FUN_1009983c0(param_1);
  FUN_100992940(uVar4);
  FUN_1009bf300(param_1);
  if (local_70 != 0) {
    (*DAT_102310a50)();
  }
  local_70 = 0;
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return;
}

