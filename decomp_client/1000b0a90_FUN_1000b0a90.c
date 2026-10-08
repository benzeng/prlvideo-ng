
void FUN_1000b0a90(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = (QArrayData *)*param_2;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  FUN_1007f6a70(param_1,&local_20);
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

