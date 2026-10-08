
void FUN_100602010(CAbstractWizardModel *param_1,CVmConfiguration *param_2,
                  CAbstractWizardModel param_3,QObject *param_4)

{
  CVmConfiguration *this;
  undefined8 uVar1;
  
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102220c20;
  this = operator_new(0xf8);
  CVmConfiguration::CVmConfiguration(this,param_2);
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(CVmConfiguration **)(param_1 + 0x28) = this;
  param_1[0x30] = param_3;
  param_1[0x31] = (CAbstractWizardModel)0x0;
  FUN_1006020e0(param_1);
  return;
}

