
void FUN_1002cae70(CTaskGenericId *param_1,undefined8 param_2)

{
  void *pvVar1;
  QArrayData *local_38;
  undefined1 local_2e;
  
  FUN_1002c66b0(param_1,param_2,1);
  *(undefined ***)param_1 = &PTR_FUN_102209570;
  pvVar1 = operator_new(0x18);
  FUN_10015aab0(&local_38,param_2);
  FUN_1002cb0a0(pvVar1,&local_38);
  CAbstractTask::setId(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2e = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

