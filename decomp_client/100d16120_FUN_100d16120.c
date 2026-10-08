
void FUN_100d16120(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined *puVar3;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = (long)&PTR_FUN_10225b360;
  piVar1 = (int *)*param_2;
  param_1[1] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = 0x1010101;
  puVar3 = PTR_shared_null_1021e1288;
  param_1[3] = (long)PTR_shared_null_1021e1288;
  param_1[4] = (long)puVar3;
  param_1[5] = (long)puVar3;
  FUN_100d163e0(param_1);
  if (*(int *)(param_1[1] + 4) != 0) {
    pcVar2 = *(code **)(*param_1 + 0x40);
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar2)(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return;
}

