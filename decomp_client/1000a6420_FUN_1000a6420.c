
undefined1 FUN_1000a6420(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined1 local_11;
  
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_40,uVar2);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar3 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_38 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar3 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  local_20 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
LAB_1000a64e2:
      QListData::dispose(local_40);
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if (!(bool)local_11) goto LAB_1000a64e2;
    }
    if (local_20 == 0) goto LAB_1000a6537;
  }
  for (; local_30 != local_28; local_30 = local_30 + 8) {
    if (*(long *)local_30 != 0) {
      uVar2 = FUN_10018c280();
      iVar1 = FUN_100319ae0(uVar2);
      uVar5 = 1;
      if (iVar1 == 3) goto LAB_1000a6539;
    }
    local_20 = 1;
  }
LAB_1000a6537:
  uVar5 = 0;
LAB_1000a6539:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar5;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return uVar5;
}

