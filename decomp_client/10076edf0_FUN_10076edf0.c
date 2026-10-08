
void FUN_10076edf0(CAbstractWizardModel *param_1,undefined4 param_2,undefined4 param_3,
                  QObject *param_4)

{
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10222a070;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10076eec0(param_1);
  return;
}

