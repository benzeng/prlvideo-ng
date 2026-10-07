
void FUN_1000c5d00(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_10008e910();
  *param_1 = &PTR_metaObject_100ba8eb0;
  _memset_pattern16(param_1 + 0x3a,&PTR_shared_null_100ba8f90,0x18);
  puVar1 = PTR_shared_null_100ba20d0;
  param_1[0x3d] = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 1;
  FUN_1000d31e0(param_1 + 0x41,param_2);
  param_1[0x56] = param_2;
  FUN_1000d6550(param_1 + 0x57);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((long)param_1 + 0x2ec) = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x65] = puVar1;
  QFileInfo::QFileInfo((QFileInfo *)(param_1 + 0x66));
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6b] = puVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_100beffd0;
    puVar3 = puVar2;
  }
  param_1[0x6d] = puVar3;
  FUN_1005a5020(param_1 + 0x6e);
  param_1[0x88] = puVar1;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x449) = 0;
  *(undefined4 *)((long)param_1 + 0x44c) = 1;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_100bf0038;
    puVar3 = puVar2;
  }
  param_1[0x8a] = puVar3;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  DAT_1011b69f0 = param_1;
  DAT_1011c3740 = param_1 + 0x41;
  FUN_1000c6120(param_1);
  QThread::start(param_1,7);
  return;
}

