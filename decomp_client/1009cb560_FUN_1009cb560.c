
void FUN_1009cb560(QThread *param_1,QThread param_2,QObject *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  QThread::QThread(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102236400;
  param_1[0x10] = param_2;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0x8000000;
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_10227e2a0;
    puVar2 = puVar1;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  return;
}

