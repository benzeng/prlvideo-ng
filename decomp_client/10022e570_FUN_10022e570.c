
void FUN_10022e570(CAbstractTask *param_1,QObject *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102202460;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}

