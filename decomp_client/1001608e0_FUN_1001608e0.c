
undefined8 FUN_1001608e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  QArrayData *local_30;
  int local_28;
  undefined1 local_21;
  
  local_28 = 0;
  _PrlHndlList_GetItemsCount(*param_2,&local_28);
  uVar1 = 0;
  if (local_28 != 0) {
    uVar1 = _PrlSrv_ConfigureGenericPci(*(undefined8 *)(param_1 + 0x80),*param_2,0);
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar1 = FUN_10015c580(param_1,uVar1,0x842,&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return uVar1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return uVar1;
}

