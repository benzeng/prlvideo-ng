
void FUN_1002f6180(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined8 local_28;
  undefined1 local_1a;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_1a = *piVar1 != 0;
    UNLOCK();
  }
  local_28 = QDate::currentDate();
  QDate::toString(param_1 + 1,&local_28,0);
  puVar2 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  param_1[4] = puVar2;
  return;
}

