
undefined8 FUN_10015f670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  FUN_10018c250(&local_30);
  uVar1 = _PrlVm_MigrateCancel(local_30);
  FUN_100188480(&local_38,param_2);
  uVar1 = FUN_10015c580(param_1,uVar1,0x7ec,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10015f6eb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10015f6eb:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return uVar1;
}

