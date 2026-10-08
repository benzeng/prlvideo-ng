
void FUN_1009adfe0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x61) = 1;
  uVar1 = FUN_1009983c0();
  cVar2 = FUN_100992ab0(uVar1);
  if (cVar2 != '\0') {
    FUN_1009ad2d0(param_1,1);
    uVar1 = FUN_1009983c0(param_1);
    FUN_1009929c0(uVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  CAbstractWizardPage::pageRolledBack(SUB81(param_1,0));
  return;
}

