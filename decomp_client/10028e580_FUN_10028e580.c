
void FUN_10028e580(CAbstractTask *param_1)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x67);
  *(undefined ***)this = &PTR_FUN_102272570;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102206960;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15e8;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

