
void FUN_100221ca0(CAbstractTask *param_1,undefined8 param_2,undefined4 param_3)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x1e);
  *(undefined ***)this = &PTR_FUN_102271930;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102201810;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}

