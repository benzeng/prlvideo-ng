
void FUN_1000ead80(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_58._8_4_ = (int)PTR_shared_null_1021e1288;
  local_58._0_8_ = PTR_shared_null_1021e1288;
  local_58._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_48._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_48._0_8_ = PTR_shared_null_1021e15e8;
  local_48._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_60 = 0;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  FUN_1000eae70(param_2,param_3,local_58,&local_60,local_a8);
  FUN_1000c71c0(*(undefined8 *)(param_1 + 0x10),param_2,local_60,local_a8,local_58);
  FUN_1000b6e10(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xe0));
  FUN_1000e64e0(local_58);
  return;
}

