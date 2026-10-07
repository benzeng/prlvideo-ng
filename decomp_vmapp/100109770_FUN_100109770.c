
void FUN_100109770(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  
  *param_1 = &PTR_FUN_10110d070;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[2] = PTR_shared_null_100ba20d0;
  FUN_1007d6870(param_1 + 3);
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 5) = auVar2;
  return;
}

