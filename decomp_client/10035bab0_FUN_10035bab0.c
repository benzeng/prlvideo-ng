
void FUN_10035bab0(long param_1)

{
  long lVar1;
  int *local_48;
  long *local_40;
  long *local_38;
  undefined4 local_30;
  int *local_28;
  undefined1 local_19;
  
  FUN_10006b440(&local_28,*(long *)(param_1 + 0x18) + 0x40);
  FUN_10006b440(&local_48,&local_28);
  local_40 = (long *)(local_48 + (long)local_48[2] * 2 + 4);
  local_38 = (long *)(local_48 + (long)local_48[3] * 2 + 4);
  if (local_48[2] != local_48[3]) {
    do {
      local_30 = 1;
      lVar1 = *(long *)*local_40;
      if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) && (((long *)*local_40)[1] != 0)) {
        FUN_10035b750(param_1);
      }
      local_40 = local_40 + 1;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_19 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10035bb75;
    }
    FUN_10006b5d0(&local_48,local_48);
  }
LAB_10035bb75:
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      if (*local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_10006b5d0(&local_28,local_28);
  }
  return;
}

