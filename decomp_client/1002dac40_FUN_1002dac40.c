
void FUN_1002dac40(CAbstractTask *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CTaskGenericId *pCVar3;
  
  pCVar3 = operator_new(0x18);
  uVar1 = FUN_1002dabc0();
  uVar2 = FUN_1002dab50();
  FUN_1002dc7d0(pCVar3,uVar1,uVar2);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  *(undefined ***)param_1 = &PTR_FUN_10220a900;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  return;
}

