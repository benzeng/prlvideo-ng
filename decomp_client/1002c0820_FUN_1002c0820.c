
void FUN_1002c0820(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  pCVar1 = operator_new(0x18);
  FUN_100071f00(pCVar1,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  *(undefined ***)param_1 = &PTR_FUN_102208770;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x38) = in_stack_00000018;
  *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
  *(undefined8 *)(param_1 + 0x28) = in_stack_00000008;
  return;
}

