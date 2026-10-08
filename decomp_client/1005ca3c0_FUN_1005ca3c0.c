
void FUN_1005ca3c0(void)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  CAbstractWizardActionHandler::wizardModel();
  lVar1 = CAbstractWizardModel::currentPage();
  if (lVar1 != 0) {
    uVar2 = CAbstractWizardActionHandler::wizardModel();
    FUN_1005c11d0(uVar2);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    CVmCommonOptions::getOsType();
    EnumUtils::OsTypeToString((uint)&local_20);
    SocialUtils::openInBrowser(1,0,&local_20);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_12 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

