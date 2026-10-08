
void FUN_100328ba0(CSdkCommunicator *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  CSdkCommunicator::CSdkCommunicator(param_1,0,2);
  *(undefined **)param_1 = &DAT_1021efa10;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_2;
  return;
}

