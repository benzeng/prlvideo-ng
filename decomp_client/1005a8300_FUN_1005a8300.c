
void FUN_1005a8300(CAbstractWizardModel *param_1,QObject *param_2,undefined4 param_3,
                  QObject *param_4)

{
  undefined8 uVar1;
  
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10221df60;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(QObject **)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1005a8440(param_1);
  return;
}

