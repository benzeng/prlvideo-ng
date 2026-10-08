
void FUN_10037f8a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_28 = PTR_shared_null_1021e1288;
  FUN_10037efc0(param_1,2,&local_28,0);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_1a = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

