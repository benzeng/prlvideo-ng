
void FUN_10029ba40(CAbstractTask *param_1)

{
  undefined *puVar1;
  CTaskGenericId *this;
  undefined1 auVar2 [16];
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x70);
  *(undefined ***)this = &PTR_FUN_102272880;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_1022074a0;
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  *(undefined **)(param_1 + 0x28) = puVar1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

