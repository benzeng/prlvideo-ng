
void FUN_1002c8fd0(CTaskGenericId *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4
                  ,undefined8 *param_5)

{
  int *piVar1;
  void *pvVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1002c66b0(param_1,param_2,1);
  *(undefined ***)param_1 = &PTR_FUN_102208e50;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x50) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_5;
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  pvVar2 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_1002c9910(pvVar2,&local_40,param_3,param_4);
  CAbstractTask::setId(param_1);
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
  return;
}

