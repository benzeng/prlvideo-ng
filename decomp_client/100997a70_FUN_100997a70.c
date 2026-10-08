
void FUN_100997a70(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CAbstractWizardActionHandler::wizardModel();
  lVar1 = FUN_100990b00(uVar3);
  if ((*(byte *)(lVar1 + 0x20) & 0x18) != 0) {
    CAbstractWizardModel::pageFlow();
    iVar2 = CAbstractWizardPageFlow::getPrevPageId();
    if (iVar2 == -1) {
      CAbstractWizardModel::finished((int)uVar3);
      return;
    }
  }
  CAbstractWizardActionHandler::handleBack();
  return;
}

