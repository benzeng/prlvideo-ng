
void FUN_100693620(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  _func_void_Node_ptr *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined1 local_11;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
    uVar4 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar2 + 0x24);
    for (puVar3 = *(undefined8 **)(puVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar2 + 4)) * 8);
        puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar4) && (puVar3[2] == param_2)) {
        if (puVar3 != puVar2) {
          FUN_100694130(&local_48,puVar3 + 3);
          goto LAB_100693695;
        }
        break;
      }
    }
  }
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_100693695:
  FUN_100693fb0(&local_40,&local_48);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar5 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_38 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar5 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar6 * 8);
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
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10069374f;
    }
    QListData::dispose(local_40);
  }
LAB_10069374f:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10069377a;
    }
    QHashData::free_helper(local_48);
  }
LAB_10069377a:
  if (local_20 != 0) {
    for (; local_30 != local_28; local_30 = local_30 + 8) {
      FUN_100694910(*(undefined8 *)local_30);
      local_20 = 1;
    }
  }
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

