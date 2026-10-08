
void FUN_1002a9d80(QFutureInterfaceBase *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022729d8;
  cVar1 = QFutureInterfaceBase::derefT();
  if (cVar1 == '\0') {
    uVar2 = QFutureInterfaceBase::resultStoreBase();
    FUN_1002a9de0(uVar2);
  }
  QFutureInterfaceBase::~QFutureInterfaceBase(param_1);
  return;
}

