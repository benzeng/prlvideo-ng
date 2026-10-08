
void FUN_100a182c0(CAbstractTask *param_1,CTaskGenericId *param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  CAbstractTask::CAbstractTask(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102237830;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  *(undefined **)(param_1 + 0x50) = puVar1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x60) = PTR_shared_null_1021e12f0;
  return;
}

