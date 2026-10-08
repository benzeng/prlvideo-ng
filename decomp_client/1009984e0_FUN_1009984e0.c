
undefined8 FUN_1009984e0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = CAbstractWizardPage::wizardModel();
  cVar1 = FUN_100990a60(uVar2);
  uVar2 = 0x72c2;
  if (cVar1 == '\0') {
    uVar2 = CAbstractWizardPage::wizardModel();
    uVar2 = FUN_100990b10(uVar2);
    cVar1 = FUN_100991a90(uVar2);
    uVar2 = 0x8181;
    if (cVar1 == '\0') {
      uVar2 = CAbstractWizardPage::wizardModel();
      uVar2 = FUN_100990b10(uVar2);
      cVar1 = FUN_100991af0(uVar2);
      uVar2 = 0x8183;
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

