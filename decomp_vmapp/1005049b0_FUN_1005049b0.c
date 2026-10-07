
void FUN_1005049b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = operator_new(0x70);
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *param_1 = puVar2;
  puVar1 = PTR_shared_null_100ba20d0;
  param_1[1] = PTR_shared_null_100ba20d0;
  auVar3._8_4_ = (int)puVar1;
  auVar3._0_8_ = puVar1;
  auVar3._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar3;
  param_1[5] = puVar1;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

