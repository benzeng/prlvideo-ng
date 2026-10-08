
void FUN_10064b4d0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10063f730();
  if (*(char *)(lVar1 + 0x161) == '\0') {
    uVar2 = FUN_10063f730(param_1);
    FUN_100676100(uVar2);
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

