
undefined8 FUN_10026a3e0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    FUN_100df99c0("","prl_client_app",3,"Cannot revert to snapshot. The last snapshot is gone.");
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_1001990a0(uVar1,0x3f4,param_1 + 0x48,&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10026a469;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10026a469:
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

