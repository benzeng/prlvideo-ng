
void FUN_1004a3700(QObject *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc2530;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc25b8;
  *(undefined8 *)(param_1 + 0x38) = DAT_1011c3698;
  QMutex::QMutex((QMutex *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x60),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x88),0);
  *(undefined **)(param_1 + 0x90) = PTR_shared_null_100ba20d8;
  QMutex::QMutex((QMutex *)(param_1 + 0x98),0);
  *(undefined **)(param_1 + 0xa0) = PTR_shared_null_100ba20d0;
  param_1[0xa8] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    lVar3 = CVmSettings::getVmTools();
    if (lVar3 != 0) {
      CVmTools::getVmSharedApplications();
      lVar3 = CVmSharedApplications::getWebApplications();
      if (lVar3 != 0) {
        cVar1 = CVmTools::isIsolatedVm();
        if (cVar1 == '\0') {
          uVar2 = WebApplications::getEmailClient();
          *(undefined4 *)(param_1 + 0x68) = uVar2;
          uVar2 = WebApplications::getWebBrowser();
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          *(undefined4 *)(param_1 + 0x70) = uVar2;
          uVar2 = WebApplications::getFtpClient();
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = WebApplications::getRemoteAccess();
          *(undefined4 *)(param_1 + 0x78) = uVar2;
          *(undefined4 *)(param_1 + 0x7c) = uVar2;
          uVar2 = WebApplications::getRss();
          *(undefined4 *)(param_1 + 0x80) = uVar2;
          uVar2 = WebApplications::getNewsgroups();
          *(undefined4 *)(param_1 + 0x84) = uVar2;
        }
      }
    }
  }
  DAT_100bf928d = DAT_100bf928d | 1;
  DAT_100bf9274 = param_1;
  FUN_1004c0790(param_1 + 0x10,0x8220,0x8221);
  return;
}

