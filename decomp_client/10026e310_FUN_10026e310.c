
void FUN_10026e310(CAbstractTask *param_1)

{
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x53);
  *(undefined ***)this = &PTR_FUN_10226c710;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102205970;
  param_1[0x38] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1001ce0e0(DAT_102310918);
  return;
}

