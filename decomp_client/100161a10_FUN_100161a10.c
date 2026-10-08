
undefined8 FUN_100161a10(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar1 = _PrlSrv_GetCommonPrefs(*(undefined8 *)(param_1 + 0x80));
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_10015c580(param_1,uVar1,0x800,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

