
long * FUN_1007c6410(long *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_100ba2188;
  local_40 = (Data *)PTR_shared_null_100ba2188;
  local_48 = (Data *)PTR_shared_null_100ba2188;
  if (param_2 == 0) {
    *param_1 = (long)PTR_shared_null_100ba2188;
    if ((int)*(undefined8 *)puVar2 != -1) {
      if ((int)*(undefined8 *)puVar2 == 0) {
        QListData::detach((int)param_1);
        lVar1 = *param_1;
        lVar3 = (long)*(int *)(lVar1 + 8);
        if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != (Data *)(lVar1 + lVar3 * 8)) &&
           (lVar4 = *(int *)(lVar1 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(lVar1 + 0xc))) {
          _memcpy((void *)(lVar1 + 0x10 + lVar3 * 8),
                  local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,lVar4 * 8);
        }
      }
      else {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + 1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
      }
    }
  }
  else {
    do {
      local_50 = param_2;
      if (param_3 == 0) {
        if (*(int *)(param_2 + 4) == 2) {
          FUN_1007cdf50(&local_40,&local_50);
        }
        else {
LAB_1007c64a0:
          FUN_1007cdf50(&local_48,&local_50);
        }
      }
      else {
        if ((param_3 != 1) || (*(int *)(param_2 + 4) != 0x1e)) goto LAB_1007c64a0;
        FUN_1007cdf50(&local_40,&local_50);
      }
      param_2 = *(long *)(param_2 + 0x28);
    } while (param_2 != 0);
    *param_1 = (long)local_40;
    local_50 = param_2;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)param_1);
        lVar1 = *param_1;
        lVar3 = (long)*(int *)(lVar1 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != (Data *)(lVar1 + lVar3 * 8)) &&
           (lVar4 = *(int *)(lVar1 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(lVar1 + 0xc))) {
          _memcpy((void *)(lVar1 + 0x10 + lVar3 * 8),
                  local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,lVar4 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    FUN_1007ce120(param_1,&local_48);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c65ae;
    }
    QListData::dispose(local_48);
  }
LAB_1007c65ae:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

