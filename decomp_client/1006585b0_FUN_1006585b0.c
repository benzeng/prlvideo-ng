
void FUN_1006585b0(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  long local_30;
  undefined1 local_21;
  
  param_1 = param_1 + 0x110;
  local_30 = param_2;
  if ((param_2 != 0) && (plVar2 = (long *)FUN_10065dff0(param_1,&local_30), *plVar2 != 0)) {
    puVar3 = (undefined8 *)FUN_10065dff0(param_1,&local_30);
    FUN_100624950(param_2,*puVar3);
    return;
  }
  FUN_10065e120(&local_58,param_1);
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_50 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
LAB_1006586ba:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1006586ba;
    }
    if (local_38 == 0) goto LAB_100658716;
  }
  if (local_48 != local_40) {
    do {
      uVar1 = *(undefined8 *)local_48;
      local_60 = uVar1;
      puVar3 = (undefined8 *)FUN_10065dff0(param_1,&local_60);
      FUN_100624950(uVar1,*puVar3);
      local_48 = local_48 + 8;
      local_38 = 1;
    } while (local_48 != local_40);
  }
LAB_100658716:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}

