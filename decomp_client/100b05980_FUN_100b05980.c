
void FUN_100b05980(long *param_1,QString *param_2,long param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_10012a0e0();
  puVar2 = PTR_vtable_1021e17b0;
  *param_1 = (long)(PTR_vtable_1021e17b0 + 0x10);
  puVar1 = PTR_shared_null_1021e15e8;
  auVar3._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar3._0_8_ = PTR_shared_null_1021e15e8;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x13) = auVar3;
  param_1[0x15] = (long)puVar1;
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar4;
  (**(code **)(puVar2 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1,0);
  QString::operator=((QString *)(param_1 + 0x16),param_2);
  param_1[0x18] = param_3;
  *(undefined4 *)(param_1 + 0x1a) = param_5;
  *(undefined4 *)((long)param_1 + 0xd4) = param_8;
  *(undefined4 *)(param_1 + 0x1b) = param_4;
  *(undefined4 *)((long)param_1 + 0xdc) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  return;
}

