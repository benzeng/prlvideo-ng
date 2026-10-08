
long * FUN_10039faa0(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  int local_28;
  undefined1 local_19;
  
  FUN_10039f4d0(&local_48,param_1);
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_40 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
LAB_10039fb65:
      QListData::dispose(local_48);
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_10039fb65;
    }
    plVar4 = (long *)0x0;
    if (local_28 == 0) goto LAB_10039fbb5;
  }
  plVar4 = (long *)0x0;
  if (local_38 != local_30) {
    do {
      plVar4 = *(long **)local_38;
      iVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4);
      if (iVar1 == param_2) break;
      local_38 = local_38 + 8;
      local_28 = 1;
      plVar4 = (long *)0x0;
    } while (local_38 != local_30);
  }
LAB_10039fbb5:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return plVar4;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
  return plVar4;
}

