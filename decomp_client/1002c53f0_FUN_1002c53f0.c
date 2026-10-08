
void FUN_1002c53f0(CAbstractTask *param_1)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x87);
  *(undefined ***)this = &PTR_FUN_102272e00;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102208ad0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

