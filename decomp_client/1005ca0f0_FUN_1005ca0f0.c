
void FUN_1005ca0f0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  QLocale local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  QUrl local_20 [15];
  undefined1 local_11;
  
  CAbstractWizardActionHandler::wizardModel();
  lVar2 = CAbstractWizardModel::currentPage();
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0x10) != 0xb) {
    if (*(int *)(lVar2 + 0x10) != 0x15) {
LAB_1005ca1fd:
      CAbstractWizardActionHandler::wizardModel();
      plVar4 = (long *)CAbstractWizardModel::currentPage();
      uVar1 = (**(code **)(*plVar4 + 0x78))(plVar4);
      AppHelpUtils::openHelpTopic(uVar1,0);
      return;
    }
    uVar3 = CAbstractWizardActionHandler::wizardModel();
    lVar2 = FUN_1005c11d0(uVar3);
    if (*(int *)(lVar2 + 0x50) != 4) goto LAB_1005ca1fd;
  }
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://parallels.com/products/desktop/pdfm12-get-windows-steps-@LOCALE@",
                        0x47);
  QLocale::QLocale(local_38);
  FUN_100d3f730(&local_28,&local_30,local_38);
  QUrl::QUrl(local_20,&local_28,0);
  QDesktopServices::openUrl(local_20);
  QUrl::~QUrl(local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ca1bd;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ca1bd:
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

