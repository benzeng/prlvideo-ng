
void FUN_1000b6d50(long *param_1)

{
  long lVar1;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    (**(code **)(*param_1 + 0x78))(param_1);
    local_20 = (QArrayData *)param_1[4];
    lVar1 = param_1[6];
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_13 = *(int *)local_20 != 0;
      UNLOCK();
    }
    FUN_1000a7c50(lVar1,&local_20);
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
  }
  return;
}

