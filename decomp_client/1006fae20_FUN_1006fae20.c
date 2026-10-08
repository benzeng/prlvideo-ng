
void FUN_1006fae20(long param_1)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  FUN_100720b50(param_1 + 0x48);
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100852830(*(undefined8 *)(param_1 + 0x10),&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

