
void FUN_100d30930(long param_1,undefined8 param_2)

{
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  FUN_100094f70(param_2);
  FUN_100d30c50(&local_40,param_1 + 8);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  if (local_40[2] != local_40[3]) {
    do {
      local_28 = 1;
      FUN_1000341d0(param_2,*local_38 + 8);
      local_38 = local_38 + 1;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_100d30b30(&local_40,local_40);
  }
  return;
}

