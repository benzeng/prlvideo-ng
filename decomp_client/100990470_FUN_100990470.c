
void FUN_100990470(CAbstractWizardModel *param_1,undefined8 *param_2,QObject *param_3)

{
  int *piVar1;
  
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102233d00;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  piVar1 = (int *)param_2[1];
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QPalette::QPalette((QPalette *)(param_1 + 0x30),(QPalette *)(param_2 + 2));
  *(undefined8 *)(param_1 + 0x40) = param_2[4];
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (DAT_102313718 == '\0') {
    FUN_1009bd770();
    FUN_1009bd840();
    FUN_1007f1400();
    FUN_1007f08a0();
    DAT_102313718 = '\x01';
  }
  return;
}

