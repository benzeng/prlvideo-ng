
void FUN_10012a0e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  *param_1 = PTR_vtable_1021e1810 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  param_1[2] = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  auVar4._8_4_ = (int)puVar1;
  auVar4._0_8_ = puVar1;
  auVar4._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 5) = auVar4;
  puVar3 = PTR_shared_null_1021e15e8;
  param_1[7] = PTR_shared_null_1021e15e8;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  puVar2 = PTR_shared_null_1021e12f0;
  param_1[10] = PTR_shared_null_1021e12f0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = puVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = puVar1;
  param_1[0xf] = puVar3;
  QDomDocument::QDomDocument((QDomDocument *)(param_1 + 0x10));
  param_1[0x11] = puVar2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}

