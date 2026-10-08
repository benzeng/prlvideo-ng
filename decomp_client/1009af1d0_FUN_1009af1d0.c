
void FUN_1009af1d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  undefined4 local_54;
  QArrayData *local_50;
  long local_48;
  int local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = param_3;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,"Connect to agent via passcode");
  }
  lVar3 = FUN_1009983c0(param_1);
  lVar3 = *(long *)(lVar3 + 0x28);
  lVar5 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  local_3c = 0;
  iVar2 = (*DAT_102310aa0)(lVar5,&local_3c);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_IsConnected",
                  "(hAgent, &bConnected)","Pages/WPConnectViaNetwork.cpp",0x17d,"connectByPasscode",
                  param_5,param_4);
  }
  if (local_3c != 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",1,
                    "Unable to connect to agent via passcode, already connected.");
    }
    goto LAB_1009af796;
  }
  local_48 = 0;
  iVar2 = (*DAT_1023110d0)(lVar5,1,&local_48);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get \'passcode\' UDP plugin handle error 0x%X",iVar2);
  }
  iVar2 = (*DAT_1023110f8)(local_48,"");
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to set passcode value to UDP plugin error 0x%X",iVar2);
  }
  pcVar1 = DAT_102310a78;
  QString::toUtf8();
  iVar2 = (*pcVar1)(lVar5,1,local_50 + *(long *)(local_50 + 0x10),0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009af3c7;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1009af3c7:
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_HOST, QSTR2UTF8(listenAddr), 0, 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x18c,"connectByPasscode");
  }
  iVar2 = (*DAT_102310a78)(lVar5,2,&local_38,4,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_PORT, &listenPort, sizeof(listenPort), 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x18e,"connectByPasscode");
  }
  local_54 = 2;
  iVar2 = (*DAT_102310a78)(lVar5,3,&local_54,4,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_Configure",
                  "(hAgent, PTA_AGENT_PARAM_SEC_LEVEL, &secLevel, sizeof(secLevel), 0)",
                  "Pages/WPConnectViaNetwork.cpp",0x191,"connectByPasscode");
  }
  iVar2 = (*DAT_102310ab0)(lVar5);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_ResetSession"
                  ,"(hAgent)","Pages/WPConnectViaNetwork.cpp",0x194,"connectByPasscode");
  }
  local_60 = 0;
  iVar2 = (*DAT_102310ab8)(lVar5,&local_60);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get auth info error 0x%X",iVar2);
  }
  iVar2 = (*DAT_102310b50)(local_60);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAuthInfo_Clear",
                  "(hAuthInfo)","Pages/WPConnectViaNetwork.cpp",0x198,"connectByPasscode");
  }
  iVar2 = (*DAT_102310ac8)(local_60,4);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to set auth type error 0x%X",iVar2);
  }
  lVar3 = local_60;
  pcVar1 = DAT_102310b38;
  QString::toUtf8();
  iVar2 = (*pcVar1)(lVar3,local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009af692;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1009af692:
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to set auth digest value error 0x%X"
                  ,iVar2);
  }
  lVar3 = local_60;
  pcVar1 = DAT_102310b48;
  QString::toUtf8();
  iVar2 = (*pcVar1)(lVar3,local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009af712;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1009af712:
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to set auth salt value error 0x%X",
                  iVar2);
  }
  FUN_1009ac6c0(param_1,1);
  uVar4 = FUN_1009983c0(param_1);
  FUN_100992940(uVar4);
  FUN_1009bf300(param_1);
  if (local_60 != 0) {
    (*DAT_102310a50)();
  }
  local_60 = 0;
  if (local_48 != 0) {
    (*DAT_102310a50)();
  }
  local_48 = 0;
LAB_1009af796:
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return;
}

