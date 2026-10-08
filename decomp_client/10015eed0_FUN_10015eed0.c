
undefined8 FUN_10015eed0(undefined8 param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  long local_20;
  undefined1 local_11;
  
  FUN_10018c250(&local_20);
  uVar1 = _PrlVm_Unreg(local_20);
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_10015c580(param_1,uVar1,0x7f2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10015ef40;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10015ef40:
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return uVar1;
}

