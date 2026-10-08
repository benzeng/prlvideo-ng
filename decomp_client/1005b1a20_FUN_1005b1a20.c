
void FUN_1005b1a20(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  CAbstractWizardModel::pageFlow();
  cVar2 = CAbstractWizardPageFlow::canGoBack();
  if (cVar2 != '\0') {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goBack();
    return;
  }
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar1,0);
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1005b8750(uVar1);
  FUN_10083fee0(param_1,uVar3);
  return;
}

