
void FUN_1000f0360(QFutureInterfaceBase *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10226d138;
  cVar1 = QFutureInterfaceBase::derefT();
  if (cVar1 == '\0') {
    uVar2 = QFutureInterfaceBase::resultStoreBase();
    FUN_1000f03c0(uVar2);
  }
  QFutureInterfaceBase::~QFutureInterfaceBase(param_1);
  return;
}

