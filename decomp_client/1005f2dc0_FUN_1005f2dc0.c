
void FUN_1005f2dc0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    plVar2 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x20))();
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_1005e7870(param_1 + 0x18);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

