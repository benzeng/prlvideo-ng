
long * FUN_100051010(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int local_5c;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_1000597d0(&local_58,param_2);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  local_5c = 2;
  if (local_58[2] != local_58[3]) {
    do {
      plVar2 = (long *)**(long **)local_50;
      *param_1 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_40 != 0) {
        if (plVar2 == param_3) {
          local_5c = 1;
          FUN_1000585e0(param_2,param_1);
          break;
        }
        local_40 = 0;
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar5 = local_40 == 1;
      local_40 = uVar4;
      if ((bVar5) || (local_50 == local_48)) break;
    } while( true );
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005112c;
    }
    FUN_100059b00(&local_58,local_58);
  }
LAB_10005112c:
  if (local_5c == 2) {
    *param_1 = 0;
  }
  QMutex::unlock();
  return param_1;
}

