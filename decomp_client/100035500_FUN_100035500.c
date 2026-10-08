
void FUN_100035500(long param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int local_28;
  undefined1 local_19;
  
  QTimer::stop();
  lVar1 = param_1 + 0x18;
  FUN_1000362b0(&local_48,lVar1);
  local_40 = local_48;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar2 = local_40[2];
      if (iVar2 != local_40[3]) {
        local_48 = local_48 + (long)local_48[2] * 2 + 4;
        piVar6 = local_40 + (long)iVar2 * 2 + 4;
        lVar4 = (long)local_40[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_48;
          *(int **)piVar6 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_19 = *piVar3 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_48 = local_48 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_19 = *local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)local_40[2] * 2 + 4;
  local_30 = local_40 + (long)local_40[3] * 2 + 4;
  local_28 = 1;
  FUN_100036370(&local_48);
  if (local_28 != 0) {
    for (; local_38 != local_30; local_38 = local_38 + 2) {
      plVar5 = (long *)FUN_100036410(lVar1);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      local_28 = 1;
    }
  }
  FUN_100036370(&local_40);
  FUN_1000365c0(lVar1);
  FUN_1000351d0(param_1);
  return;
}

