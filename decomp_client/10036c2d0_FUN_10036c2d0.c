
void FUN_10036c2d0(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  Data *local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar3 = FUN_10018f4e0();
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)FUN_1007c65a0(lVar3);
  local_28 = (Data *)*plVar4;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_28);
      lVar5 = (long)*(int *)(local_28 + 8);
      lVar3 = *plVar4;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_28 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_28 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_28 + 0xc))
         ) {
        _memcpy(local_28 + lVar5 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  local_48 = local_28;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      if ((local_28 + (long)*(int *)(local_28 + 8) * 8 != local_48 + lVar3 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar3, lVar5 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,local_28 + (long)*(int *)(local_28 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      if (*(long *)local_40 != 0) {
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_1007c4730(*(long *)local_40,uVar7);
      }
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036c479;
    }
    QListData::dispose(local_48);
  }
LAB_10036c479:
  uVar7 = FUN_1001d50a0();
  uVar1 = FUN_1001d50e0(uVar7);
  FUN_10036c550(param_1,uVar1);
  uVar7 = FUN_100152280();
  uVar2 = FUN_100154d40(uVar7);
  FUN_10036b5e0(param_1,uVar2);
  FUN_10006bc40(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
  return;
}

