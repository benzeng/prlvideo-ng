
void FUN_1000351d0(long param_1)

{
  Data *local_28;
  undefined1 local_1a;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    FUN_100034910();
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  FUN_100035f90(&local_28,param_1 + 0x18);
  FUN_100034a10(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QListData::dispose(local_28);
  }
  return;
}

