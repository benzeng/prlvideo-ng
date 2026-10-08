
void FUN_100286490(QFutureInterfaceBase *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102272168;
  cVar1 = QFutureInterfaceBase::derefT();
  if (cVar1 == '\0') {
    uVar2 = QFutureInterfaceBase::resultStoreBase();
    FUN_1002864f0(uVar2);
  }
  QFutureInterfaceBase::~QFutureInterfaceBase(param_1);
  return;
}

