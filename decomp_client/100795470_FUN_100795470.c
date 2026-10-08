
long FUN_100795470(long param_1,ulong param_2,QString *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  QString local_68;
  int *local_60;
  long *local_58;
  long *local_50;
  undefined4 local_48;
  int *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(uint *)(plVar1 + 4) == 0) {
    return 0;
  }
  uVar5 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar1 + 0x24);
  plVar4 = *(long **)(plVar1[1] + ((ulong)uVar5 % (ulong)*(uint *)(plVar1 + 4)) * 8);
  plVar6 = plVar4;
  if (plVar4 == plVar1) {
    return 0;
  }
  while ((*(uint *)(plVar6 + 1) != uVar5 || (plVar6[2] != param_2))) {
    plVar6 = (long *)*plVar6;
    if (plVar6 == plVar1) {
      return 0;
    }
  }
  lVar8 = 0;
  if (plVar6 == plVar1) {
    return 0;
  }
  if (*(int *)((long)plVar1 + 0x14) != 0) {
    do {
      if ((*(uint *)(plVar4 + 1) == uVar5) && (plVar4[2] == param_2)) {
        if (plVar4 != plVar1) {
          FUN_100797cb0(&local_40,plVar4 + 3);
          goto LAB_100795537;
        }
        break;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != plVar1);
  }
  local_40 = (int *)PTR_shared_null_1021e15e8;
LAB_100795537:
  FUN_100797cb0(&local_60,&local_40);
  local_58 = (long *)(local_60 + (long)local_60[2] * 2 + 4);
  local_50 = (long *)(local_60 + (long)local_60[3] * 2 + 4);
  if (local_60[2] != local_60[3]) {
    iVar7 = 1;
    do {
      local_48 = 1;
      lVar2 = *(long *)*local_58;
      if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
         (lVar8 = ((long *)*local_58)[1], lVar8 != 0)) {
        CAppliance::getApplianceId();
        cVar3 = operator==(&local_68,param_3);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007955e4;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1007955e4:
        if (cVar3 != '\0') goto LAB_10079560c;
      }
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar7 = 2;
LAB_10079560c:
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100795636;
    }
    FUN_100797e40(&local_60,local_60);
  }
LAB_100795636:
  if (iVar7 == 2) {
    lVar8 = 0;
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return lVar8;
      }
      local_31 = 0;
    }
    FUN_100797e40(&local_40,local_40);
  }
  return lVar8;
}

