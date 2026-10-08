
void FUN_1002f6080(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_23 = *piVar1 != 0;
    UNLOCK();
  }
  puVar2 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar3;
  *(undefined1 (*) [16])(param_1 + 3) = auVar3;
  *(undefined1 (*) [16])(param_1 + 5) = auVar3;
  *(undefined1 (*) [16])(param_1 + 7) = auVar3;
  param_1[9] = puVar2;
  param_1[10] = PTR_shared_null_1021e15d0;
  local_30 = puVar2;
  FUN_1002f6180(param_1 + 0xb,&local_30);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_22 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

