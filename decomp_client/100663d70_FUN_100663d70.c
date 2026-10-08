
int FUN_100663d70(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 3) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      if (iVar2 < 3) {
        if (iVar2 == 2) {
          FUN_100662480(param_1,*(undefined4 *)param_4[1],param_4[2]);
        }
        else if (iVar2 == 1) {
          FUN_1006623c0(param_1);
        }
        else if (iVar2 == 0) {
          bVar1 = (bool)CAbstractWizardPage::wizardModel();
          CContentModel::setBusy(bVar1);
        }
      }
    }
    iVar2 = iVar2 + -3;
  }
  return iVar2;
}

