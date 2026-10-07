
void FUN_1005f9af0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_1005f7b70();
  *param_1 = &PTR_FUN_100bc7e68;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1007d6870(param_1 + 0x20);
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x25] = 0xff;
  auVar1._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar1._0_8_ = PTR_shared_null_100ba2188;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x26) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar1;
  return;
}

