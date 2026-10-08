
void FUN_1007e4730(CAbstractTask *param_1,undefined4 param_2)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0xac);
  *(undefined ***)this = &PTR_FUN_1022752c0;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_10222ef60;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

