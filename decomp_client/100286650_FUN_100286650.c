
void FUN_100286650(QFutureInterfaceBase *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022721c8;
  cVar1 = QFutureInterfaceBase::derefT();
  if (cVar1 == '\0') {
    uVar2 = QFutureInterfaceBase::resultStoreBase();
    FUN_1002866b0(uVar2);
  }
  QFutureInterfaceBase::~QFutureInterfaceBase(param_1);
  return;
}

