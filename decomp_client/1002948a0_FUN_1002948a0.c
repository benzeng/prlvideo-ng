
void FUN_1002948a0(QFutureInterfaceBase *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ef6c8;
  cVar1 = QFutureInterfaceBase::derefT();
  if (cVar1 == '\0') {
    uVar2 = QFutureInterfaceBase::resultStoreBase();
    FUN_100294900(uVar2);
  }
  QFutureInterfaceBase::~QFutureInterfaceBase(param_1);
  return;
}

