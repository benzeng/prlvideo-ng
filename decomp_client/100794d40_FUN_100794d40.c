
void FUN_100794d40(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  QArrayData *local_40;
  ulong local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(uint *)(plVar2 + 4) == 0) {
    return;
  }
  uVar4 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar2 + 0x24);
  plVar1 = *(long **)(plVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar2 + 4)) * 8);
  if (plVar1 == plVar2) {
    return;
  }
  while ((*(uint *)(plVar1 + 1) != uVar4 || (plVar1[2] != param_2))) {
    plVar1 = (long *)*plVar1;
    if (plVar1 == plVar2) {
      return;
    }
  }
  if (plVar1 == plVar2) {
    return;
  }
  local_38 = param_2;
  plVar2 = (long *)FUN_1007974d0(param_1 + 0x10,&local_38);
  lVar3 = *plVar2;
  iVar5 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0xc) == iVar5) {
    return;
  }
  do {
    plVar1 = *(long **)(lVar3 + 0x10 + (long)iVar5 * 8);
    lVar3 = *plVar1;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) && (plVar1[1] != 0)) {
      CAppliance::getApplianceId();
      FUN_1007958e0(param_1,param_2,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100794e50;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_100794e50:
    lVar3 = *plVar2;
    iVar5 = *(int *)(lVar3 + 8);
    if (*(int *)(lVar3 + 0xc) == iVar5) {
      return;
    }
  } while( true );
}

