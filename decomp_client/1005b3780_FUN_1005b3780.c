
void FUN_1005b3780(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if ((*(uint *)(lVar1 + 0x50) & 0xfffffffe) == 2) {
    FUN_1005b25a0(param_1);
    return;
  }
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goNext();
  return;
}

