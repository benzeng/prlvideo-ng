
void FUN_1004795a0(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  
  piVar2 = operator_new(0x70);
  *piVar2 = 0;
  puVar1 = PTR_shared_null_100ba20d0;
  auVar3._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar3._0_8_ = PTR_shared_null_100ba20d0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(piVar2 + 2) = auVar3;
  *(undefined **)(piVar2 + 0x10) = puVar1;
  *(undefined **)(piVar2 + 0x12) = puVar1;
  QDateTime::QDateTime((QDateTime *)(piVar2 + 0x14));
  *(undefined **)(piVar2 + 0x18) = puVar1;
  piVar2[0x1a] = 0;
  *param_1 = piVar2;
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  piVar2 = (int *)*param_1;
  if (*piVar2 != 1) {
    FUN_100031c40(param_1);
    piVar2 = (int *)*param_1;
  }
  piVar2[0x16] = 0;
  return;
}

