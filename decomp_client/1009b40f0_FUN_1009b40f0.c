
void FUN_1009b40f0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long local_38;
  QVariant local_30;
  
  if (param_2 == 0x8000000) {
    lVar3 = FUN_1009983c0(param_1);
    lVar3 = *(long *)(lVar3 + 0x28);
    lVar5 = 0;
    if (lVar3 != 0) {
      (*DAT_102310a48)(lVar3);
      lVar5 = lVar3;
    }
    local_38 = 0;
    iVar2 = (*DAT_102310ab8)(lVar5,&local_38);
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAgent_GetAuthInfo","(hAgent, &hAuthInfo.GetHandle())",
                    "Pages/WPEnableAutoLogon.cpp",0x10a,"ProcessCheckCredentialsNotify");
    }
    cVar1 = FUN_1009b3a10(param_1,&local_38);
    if (cVar1 != '\0') {
      FUN_1009990c0(param_1);
    }
    if (local_38 != 0) {
      (*DAT_102310a50)();
    }
    local_38 = 0;
    if (lVar5 != 0) {
      (*DAT_102310a50)(lVar5);
    }
  }
  else {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Checking credentials for enabling autologon failed, errCode %X",param_2);
    pcVar4 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_30,"wrongPassword");
    QObject::setProperty(pcVar4,(QVariant *)"passwordState");
    QVariant::~QVariant(&local_30);
  }
  return;
}

