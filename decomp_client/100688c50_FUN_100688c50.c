
void FUN_100688c50(void)

{
  long lVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  CAbstractWizardActionHandler::wizardModel();
  lVar1 = CAbstractWizardModel::currentPage();
  if (lVar1 != 0) {
    local_20 = (QArrayData *)PTR_shared_null_1021e1288;
    SocialUtils::openInBrowser(1,1,&local_20);
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

