
CAbstractTask * FUN_10023a540(QObject *param_1,undefined4 param_2)

{
  CAbstractTask *pCVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pCVar1 = (CAbstractTask *)0x0;
  switch(param_2) {
  case 0:
    pCVar1 = operator_new(0x48);
    CAbstractTask::CAbstractTask(pCVar1,(CTaskGenericId *)0x0);
    *(undefined ***)pCVar1 = &PTR_FUN_102202fa0;
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    *(undefined8 *)(pCVar1 + 0x18) = uVar2;
    *(QObject **)(pCVar1 + 0x20) = param_1;
    *(undefined2 *)(pCVar1 + 0x34) = 0;
    *(undefined4 *)(pCVar1 + 0x30) = 0;
    *(undefined8 *)(pCVar1 + 0x28) = 0;
    *(undefined **)(pCVar1 + 0x38) = PTR_shared_null_1021e15e8;
    *(undefined4 *)(pCVar1 + 0x40) = 0xffffffff;
    puVar3 = &DAT_102203578;
    break;
  case 1:
    pCVar1 = operator_new(0x48);
    CAbstractTask::CAbstractTask(pCVar1,(CTaskGenericId *)0x0);
    *(undefined ***)pCVar1 = &PTR_FUN_102202fa0;
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    *(undefined8 *)(pCVar1 + 0x18) = uVar2;
    *(QObject **)(pCVar1 + 0x20) = param_1;
    *(undefined4 *)(pCVar1 + 0x28) = 1;
    *(undefined2 *)(pCVar1 + 0x34) = 0;
    *(undefined8 *)(pCVar1 + 0x2c) = 0;
    *(undefined **)(pCVar1 + 0x38) = PTR_shared_null_1021e15e8;
    *(undefined4 *)(pCVar1 + 0x40) = 0xffffffff;
    puVar3 = &DAT_1022030b8;
    break;
  case 2:
    pCVar1 = operator_new(0x48);
    CAbstractTask::CAbstractTask(pCVar1,(CTaskGenericId *)0x0);
    *(undefined ***)pCVar1 = &PTR_FUN_102202fa0;
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    *(undefined8 *)(pCVar1 + 0x18) = uVar2;
    *(QObject **)(pCVar1 + 0x20) = param_1;
    *(undefined4 *)(pCVar1 + 0x28) = 2;
    *(undefined2 *)(pCVar1 + 0x34) = 0;
    *(undefined8 *)(pCVar1 + 0x2c) = 0;
    *(undefined **)(pCVar1 + 0x38) = PTR_shared_null_1021e15e8;
    *(undefined4 *)(pCVar1 + 0x40) = 0xffffffff;
    *(undefined ***)pCVar1 = &PTR_FUN_1022031f8;
    *(undefined4 *)(pCVar1 + 0x44) = 0xffffffff;
    return pCVar1;
  case 3:
    pCVar1 = operator_new(0x48);
    CAbstractTask::CAbstractTask(pCVar1,(CTaskGenericId *)0x0);
    *(undefined ***)pCVar1 = &PTR_FUN_102202fa0;
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    *(undefined8 *)(pCVar1 + 0x18) = uVar2;
    *(QObject **)(pCVar1 + 0x20) = param_1;
    *(undefined4 *)(pCVar1 + 0x28) = 3;
    *(undefined2 *)(pCVar1 + 0x34) = 0;
    *(undefined8 *)(pCVar1 + 0x2c) = 0;
    *(undefined **)(pCVar1 + 0x38) = PTR_shared_null_1021e15e8;
    *(undefined4 *)(pCVar1 + 0x40) = 0xffffffff;
    puVar3 = &DAT_102203318;
    break;
  case 4:
    pCVar1 = operator_new(0x48);
    CAbstractTask::CAbstractTask(pCVar1,(CTaskGenericId *)0x0);
    *(undefined ***)pCVar1 = &PTR_FUN_102202fa0;
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    *(undefined8 *)(pCVar1 + 0x18) = uVar2;
    *(QObject **)(pCVar1 + 0x20) = param_1;
    *(undefined4 *)(pCVar1 + 0x28) = 4;
    *(undefined2 *)(pCVar1 + 0x34) = 0;
    *(undefined8 *)(pCVar1 + 0x2c) = 0;
    *(undefined **)(pCVar1 + 0x38) = PTR_shared_null_1021e15e8;
    *(undefined4 *)(pCVar1 + 0x40) = 0xffffffff;
    puVar3 = &DAT_102203448;
    break;
  default:
    goto switchD_10023a565_default;
  }
  *(undefined **)pCVar1 = puVar3 + 0x10;
switchD_10023a565_default:
  return pCVar1;
}

