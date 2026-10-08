
void * FUN_100995c30(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)0x0;
  switch(param_2) {
  case 2:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPMigrationMode");
    }
    pvVar1 = operator_new(0x50);
    FUN_1009999c0(pvVar1,param_3,param_3);
    break;
  case 3:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPConnectViaNetwork");
    }
    pvVar1 = operator_new(0x68);
    FUN_1009abb20(pvVar1,param_3,param_3);
    break;
  case 4:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'",
                    "CWPSearchVmOnExternalStorage");
    }
    pvVar1 = operator_new(0x58);
    FUN_1009bbb80(pvVar1,param_3,param_3);
    break;
  case 5:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPCollectPCInfo");
    }
    pvVar1 = operator_new(0x58);
    FUN_1009b4ad0(pvVar1,param_3,param_3);
    break;
  case 6:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPEnableAutoLogon");
    }
    pvVar1 = operator_new(0x60);
    FUN_1009b1640(pvVar1,param_3,param_3);
    break;
  case 7:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPExcludeDocsMigration");
    }
    pvVar1 = operator_new(0x50);
    FUN_1009a6950(pvVar1,param_3,param_3);
    break;
  case 8:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPSelectVmProfile");
    }
    pvVar1 = operator_new(0x50);
    FUN_10099a290(pvVar1,param_3,param_3);
    break;
  case 9:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPInstallDisk");
    }
    pvVar1 = operator_new(0x60);
    FUN_10099ab80(pvVar1,param_3,param_3);
    break;
  case 10:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPDestinationPath");
    }
    pvVar1 = operator_new(0x70);
    FUN_10099ef30(pvVar1,param_3,param_3);
    break;
  case 0xb:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPLicenseWarning");
    }
    pvVar1 = operator_new(0x68);
    FUN_1009a5e30(pvVar1,param_3,param_3);
    break;
  case 0xc:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPProgressDarkQml");
    }
    pvVar1 = operator_new(0x68);
    FUN_1009ab0d0(pvVar1,param_3,param_3);
    break;
  case 0xd:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPSummary");
    }
    pvVar1 = operator_new(0x50);
    FUN_1009b4930(pvVar1,param_3,param_3);
    break;
  case 0x10:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",3,"Create page: \'%s\'","CWPDocsMigrationMode");
    }
    pvVar1 = operator_new(0x50);
    FUN_1009a7600(pvVar1,param_3,param_3);
  }
  uVar2 = FUN_100990b40(param_3);
  FUN_1009980d0(uVar2,pvVar1);
  return pvVar1;
}

