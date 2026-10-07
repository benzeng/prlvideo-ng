
int FUN_1006a7d80(long param_1)

{
  int iVar1;
  undefined8 local_40;
  int local_38;
  QArrayData *local_30;
  undefined1 local_19;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x180))(*(long **)(param_1 + 8),&local_40);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x20) = local_38 << 9;
    *(undefined8 *)(param_1 + 0x18) = local_40;
    iVar1 = 0;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return iVar1;
}

