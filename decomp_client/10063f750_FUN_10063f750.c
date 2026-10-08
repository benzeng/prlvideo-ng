
undefined4 FUN_10063f750(void)

{
  undefined4 uVar1;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  CDeclarativeWizardProxyPage::sourcePage();
  QObject::property((char *)&local_40);
  QVariant::~QVariant(&local_40);
  if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "sourcePage()->property(\"helpTopic\").isValid()",
                  "License/Pages/CLicenseProxyPage.cpp",0x35,"helpTopic");
  }
  CDeclarativeWizardProxyPage::sourcePage();
  QObject::property((char *)&local_58);
  QVariant::toString();
  uVar1 = Help::helpTopicFromString(&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063f833;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10063f833:
  QVariant::~QVariant(&local_58);
  return uVar1;
}

