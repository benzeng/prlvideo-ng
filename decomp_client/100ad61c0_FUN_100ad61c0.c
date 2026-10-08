
void FUN_100ad61c0(long param_1,undefined8 *param_2,long param_3)

{
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  long lStack_30;
  undefined1 local_19;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (ulong)*(uint *)(param_1 + 0x910) << 0x20;
  lStack_30 = (ulong)CONCAT22(*(undefined2 *)(param_1 + 0x9b4),*(undefined2 *)(param_1 + 0x9b0)) <<
              0x20;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100ad1790(&local_50,&local_48,*(undefined4 *)(param_3 + 8));
  FUN_100ace560(*(undefined8 *)(param_1 + 0xf8),*param_2,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return;
}

