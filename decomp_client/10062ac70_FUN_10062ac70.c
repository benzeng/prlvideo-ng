
void FUN_10062ac70(CTaskGenericId *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  void *pvVar2;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1002c66b0(param_1,param_2,1);
  *(undefined ***)param_1 = &PTR_FUN_102221a40;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x48) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  pvVar2 = operator_new(0x18);
  FUN_10015aab0(&local_38,param_2);
  FUN_10062b130(pvVar2,&local_38);
  CAbstractTask::setId(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

