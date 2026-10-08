
/* Function Stack Size: 0x18 bytes */

void CMacCocoaApplicationDelegate::applicationDidFinishLaunching_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  CMacUserShortcutsStorage *this;
  undefined8 uVar4;
  long lVar5;
  
  AppHelpUtils::initializeHelp(0);
  if (DAT_102310a18 == (void *)0x0) {
    pvVar3 = operator_new(0x20);
    FUN_1007eff80(pvVar3);
    DAT_10226c4da = 1;
    DAT_102310a18 = pvVar3;
  }
  FUN_1007f0440(DAT_102310a18);
  puVar1 = PTR_m_instance_1021e1450;
  if (*(long *)PTR_m_instance_1021e1450 == 0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar1 = this;
    DAT_102274b30 = 1;
  }
  CMacUserShortcutsStorage::registerNotification();
  cVar2 = FUN_100d80680();
  if (cVar2 != '\0') {
    cVar2 = FUN_100d80630(1);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    if (cVar2 == '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSConnection_10226a940,
                         PTR_s_rootProxyForConnectionWithRegist_102269b90,
                         &cf_com_parallels_installer,0);
      lVar5 = (*(code *)puVar1)(uVar4,PTR_s_retain_102269a88);
      if (lVar5 != 0) {
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (lVar5,PTR_s_performSelector__102269300,
                   PTR_s_parallelsDesktopDidFinishLaunchi_102269b98);
      }
    }
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_CServicesProvider_10226a9a0,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
  (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_setServicesProvider__102269ba0,uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_release_1022699b8);
  _NSUpdateDynamicServices();
  return;
}

