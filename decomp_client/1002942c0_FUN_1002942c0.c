
undefined8 FUN_1002942c0(long param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  Data *local_30;
  undefined1 local_21;
  
  if (DAT_1023109b0 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100751470(pvVar1);
    DAT_102271388 = 1;
    DAT_1023109b0 = pvVar1;
  }
  FUN_100753710(&local_30,DAT_1023109b0);
  local_50 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_50);
      lVar2 = (long)*(int *)(local_50 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_50 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10015bf80(uVar4,*(undefined8 *)local_48,0);
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100294406;
    }
    QListData::dispose(local_50);
  }
LAB_100294406:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return 0;
}

