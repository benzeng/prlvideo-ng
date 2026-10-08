
long FUN_1001547d0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar2 = 0;
  if (*(int *)(*param_2 + 4) != 0) {
    FUN_100062ec0(&local_40,param_1 + 0x10);
    local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
    local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
    local_28 = 1;
    lVar2 = 0;
    if (local_40[2] != local_40[3]) {
      do {
        local_28 = 1;
        lVar1 = *(long *)*local_38;
        lVar2 = 0;
        if ((lVar1 != 0) && (lVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
          lVar2 = ((long *)*local_38)[1];
        }
        lVar1 = FUN_10015cb20(lVar2,param_2);
        if (lVar1 != 0) break;
        local_38 = local_38 + 1;
        local_28 = 1;
        lVar2 = 0;
      } while (local_38 != local_30);
    }
    if (*local_40 != -1) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 + -1;
        UNLOCK();
        if (*local_40 != 0) {
          return lVar2;
        }
        local_19 = 0;
      }
      FUN_100063050(&local_40,local_40);
    }
  }
  return lVar2;
}

