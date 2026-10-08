
void FUN_100663cb0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  bool bVar1;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100662480(param_1,**(undefined4 **)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    }
    if (param_3 == 1) {
      FUN_1006623c0();
      return;
    }
    if (param_3 == 0) {
      bVar1 = (bool)CAbstractWizardPage::wizardModel();
      CContentModel::setBusy(bVar1);
      return;
    }
  }
  return;
}

