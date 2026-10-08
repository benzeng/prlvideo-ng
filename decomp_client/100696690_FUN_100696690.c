
void FUN_100696690(void)

{
  void *pvVar1;
  undefined4 local_40 [2];
  undefined *local_38;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  pvVar1 = operator_new(0x30);
  local_40[0] = 100;
  local_38 = PTR_shared_null_1021e1288;
  local_30._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_30._0_8_ = PTR_shared_null_1021e15e8;
  local_30._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_20 = 0;
  FUN_1002dce60(pvVar1,local_40);
  FUN_1002748b0(local_40);
  CAbstractTask::execute();
  return;
}

