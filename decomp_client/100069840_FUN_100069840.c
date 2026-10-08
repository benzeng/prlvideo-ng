
void FUN_100069840(CAbstractTask *param_1,QList *param_2)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x99);
  *(undefined ***)this = &PTR_FUN_10226c630;
  CAbstractTask::CAbstractTask(param_1,param_2,this);
  *(undefined ***)param_1 = &PTR_FUN_10220a220;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

