
undefined8 FUN_100998400(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = CAbstractWizardPage::wizardModel();
  cVar1 = FUN_100990a80(uVar2);
  if (cVar1 != '\0') {
    uVar2 = CAbstractWizardPage::wizardModel();
    uVar2 = FUN_100990b10(uVar2);
    cVar1 = FUN_100991a90(uVar2);
    uVar2 = 0x72d1;
    if (cVar1 == '\0') {
      uVar2 = CAbstractWizardPage::wizardModel();
      uVar2 = FUN_100990b10(uVar2);
      cVar1 = FUN_100991af0(uVar2);
      uVar2 = 0x72c2;
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  uVar2 = FUN_1009984e0(param_1);
  return uVar2;
}

