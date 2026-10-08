
void FUN_1000ddc60(long param_1,undefined8 param_2)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1000ae530(&local_28);
  if (*(int *)(local_28 + 4) != 0) {
    FUN_1000e5040(param_1 + 0x78,&local_28,param_2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

