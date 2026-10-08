
void FUN_100677fa0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    uVar2 = FUN_10016f500();
    cVar1 = FUN_10061c2b0(uVar2,0x20b0);
    if (cVar1 == '\0') {
      cVar1 = FUN_10061c5c0(uVar2);
      if (((cVar1 != '\0') && (*(char *)(param_1 + 0x15f) != '\0')) &&
         (*(int *)(param_1 + 0x78) == 0)) {
        CAbstractWizardModel::wizardCtrl();
        CWizardController::goNext();
        return;
      }
    }
    if (*(char *)(param_1 + 0x15d) == '\0') {
      *(undefined1 *)(param_1 + 0x15d) = 1;
      CAbstractWizardModel::finished((int)param_1);
      return;
    }
  }
  return;
}

