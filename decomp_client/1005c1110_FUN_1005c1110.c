
void FUN_1005c1110(CAbstractWizardModel *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221e3a0;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  CAbstractWizardModel::~CAbstractWizardModel(param_1);
  return;
}

