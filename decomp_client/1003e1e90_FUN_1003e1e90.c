
void FUN_1003e1e90(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  QObject *param_5)

{
  CVmConfiguration *this;
  CVmConfiguration *pCVar1;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1021f2040;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  this = operator_new(0xf8);
  pCVar1 = (CVmConfiguration *)FUN_10018c2b0(param_4);
  CVmConfiguration::CVmConfiguration(this,pCVar1);
  *(CVmConfiguration **)(param_1 + 0x20) = this;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x80000000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x78),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x78) = &PTR_metaObject_102275410;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0x88),0xe);
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_1022729d8;
  QFutureInterfaceBase::refT();
  return;
}

