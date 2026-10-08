
void FUN_1002cda40(CAbstractTask *param_1,undefined8 param_2)

{
  CTaskGenericId *pCVar1;
  
  pCVar1 = operator_new(0x18);
  FUN_1002cf250(pCVar1,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  *(undefined ***)param_1 = &PTR_FUN_102209a20;
  FUN_100178f70(param_1 + 0x18,param_2);
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_100d6eeb0(param_1 + 0x60,0);
  CAbstractTask::setOption(param_1,4,1);
  return;
}

