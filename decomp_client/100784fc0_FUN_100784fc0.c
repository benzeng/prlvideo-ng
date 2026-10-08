
void FUN_100784fc0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222ae90;
  puVar2 = operator_new(0x28);
  puVar1 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(puVar2 + 8) = auVar3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined1 **)(param_1 + 0x10) = puVar2;
  *puVar2 = 1;
  FUN_10085e480(param_1,1);
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x20) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x20) = 0;
    FUN_10085e4e0(param_1,0);
  }
  return;
}

