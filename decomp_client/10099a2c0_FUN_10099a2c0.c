
undefined8 FUN_10099a2c0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QVariant local_30;
  
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_30);
  uVar1 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  FUN_100df99c0("","TransporterWizardModel",0,"Selected VM profile %d",uVar1);
  lVar3 = FUN_1009983c0(param_1);
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar4 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar4 = lVar3;
  }
  iVar2 = (*DAT_102310ca8)(lVar4,uVar1);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_SetVmProfileType","(migration, profile)",
                  "Pages/WPSelectVmProfile.cpp",0x3a,"Commit");
  }
  if (lVar4 != 0) {
    (*DAT_102310a50)(lVar4);
  }
  return 1;
}

