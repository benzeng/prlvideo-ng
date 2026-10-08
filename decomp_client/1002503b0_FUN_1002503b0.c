
undefined1 (*) [16] FUN_1002503b0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == (undefined8 *)0x0) {
    auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar2._0_8_ = PTR_shared_null_1021e1288;
    auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    *param_1 = auVar2;
  }
  else {
    piVar1 = (int *)*param_2;
    *(int **)*param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)param_2[1];
    *(int **)(*param_1 + 8) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

