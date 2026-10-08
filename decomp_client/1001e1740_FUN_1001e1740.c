
void FUN_1001e1740(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined1 local_11;
  
  uVar1 = FUN_100152280();
  FUN_100154b10(&local_40,uVar1);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar2 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_38 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar2 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar3 * 8);
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
LAB_1001e1804:
      QListData::dispose(local_40);
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if (!(bool)local_11) goto LAB_1001e1804;
    }
    if (local_20 == 0) goto LAB_1001e1882;
  }
  for (; local_30 != local_28; local_30 = local_30 + 8) {
    uVar1 = FUN_10018c280(*(undefined8 *)local_30);
    uVar1 = FUN_100319d40(uVar1);
    FUN_10035b1b0(uVar1,param_2,0);
    local_20 = 1;
  }
LAB_1001e1882:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

