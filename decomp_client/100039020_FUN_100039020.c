
void FUN_100039020(long param_1,long param_2)

{
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (param_2 != 0) {
    local_20 = *(QArrayData **)(param_2 + 0x20);
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_13 = *(int *)local_20 != 0;
      UNLOCK();
    }
    FUN_1000396d0(param_1 + 0x18,&local_20);
    FUN_100866890(*(undefined8 *)(param_1 + 0x10),&local_20,0);
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

