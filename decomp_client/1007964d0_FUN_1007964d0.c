
long FUN_1007964d0(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int *local_30;
  undefined1 local_22;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(uint *)(plVar1 + 4) == 0) {
    return 0;
  }
  uVar4 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar1 + 0x24);
  plVar3 = *(long **)(plVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar1 + 4)) * 8);
  plVar5 = plVar3;
  if (plVar3 == plVar1) {
    return 0;
  }
  while ((*(uint *)(plVar5 + 1) != uVar4 || (plVar5[2] != param_2))) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == plVar1) {
      return 0;
    }
  }
  if (plVar5 == plVar1) {
    return 0;
  }
  if (*(int *)((long)plVar1 + 0x14) != 0) {
    do {
      if ((*(uint *)(plVar3 + 1) == uVar4) && (plVar3[2] == param_2)) {
        if (plVar3 != plVar1) {
          FUN_100797cb0(&local_30,plVar3 + 3);
          goto LAB_100796597;
        }
        break;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar1);
  }
  local_30 = (int *)PTR_shared_null_1021e15e8;
LAB_100796597:
  if ((param_3 < 0) || (local_30[3] - local_30[2] <= param_3)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Appliance index is out of the range.");
    lVar6 = 0;
  }
  else {
    lVar2 = **(long **)(local_30 + ((long)local_30[2] + (long)param_3) * 2 + 4);
    lVar6 = 0;
    if ((lVar2 != 0) && (lVar6 = 0, *(int *)(lVar2 + 4) != 0)) {
      lVar6 = (*(long **)(local_30 + ((long)local_30[2] + (long)param_3) * 2 + 4))[1];
    }
  }
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return lVar6;
      }
      local_22 = 0;
    }
    FUN_100797e40(&local_30,local_30);
  }
  return lVar6;
}

