
long * FUN_100050e90(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int *local_50;
  int *local_48;
  int *local_40;
  uint local_38;
  undefined1 local_29;
  
  QMutex::lock();
  FUN_1000597d0(&local_50,param_2);
  local_48 = local_50 + (long)local_50[2] * 2 + 4;
  local_40 = local_50 + (long)local_50[3] * 2 + 4;
  local_38 = 1;
  if (local_50[2] != local_50[3]) {
    do {
      plVar2 = (long *)**(long **)local_48;
      *param_1 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_38 != 0) {
        iVar5 = 1;
        if (plVar2 == param_3) goto LAB_100050f65;
        local_38 = 0;
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_48 = local_48 + 2;
      uVar4 = local_38 ^ 1;
      bVar6 = local_38 != 1;
      local_38 = uVar4;
    } while ((bVar6) && (local_48 != local_40));
  }
  iVar5 = 2;
LAB_100050f65:
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_29 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100050f8f;
    }
    FUN_100059b00(&local_50,local_50);
  }
LAB_100050f8f:
  if (iVar5 == 2) {
    *param_1 = 0;
  }
  QMutex::unlock();
  return param_1;
}

