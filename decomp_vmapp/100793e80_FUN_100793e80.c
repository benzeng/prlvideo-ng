
bool FUN_100793e80(ulong param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  bool bVar9;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  if (param_3 < param_2) {
    return false;
  }
  uVar7 = param_1;
  local_40 = param_2;
  local_3c = param_3;
  local_38 = param_4;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForWrite();
    uVar7 = param_1 | 1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (*(int *)((long)puVar2 + 0x14) == 0x14) {
    bVar9 = false;
    goto LAB_1007940df;
  }
  if (*(uint *)(puVar2 + 4) != 0) {
    uVar4 = *(uint *)((long)puVar2 + 0x24) ^ param_2;
    uVar4 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ param_3;
    for (puVar1 = *(undefined8 **)(puVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar2 + 4)) * 8);
        puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      if (((*(uint *)(puVar1 + 1) == uVar4) && (*(uint *)((long)puVar1 + 0xc) == param_2)) &&
         (*(uint *)(puVar1 + 2) == param_3)) {
        if (puVar1 != puVar2) {
          bVar9 = false;
          goto LAB_1007940df;
        }
        break;
      }
    }
  }
  FUN_100794b40(&local_68);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_10079401a:
    if (local_58 != local_50) {
      iVar8 = 1;
      do {
        if ((*(uint *)local_58 <= param_2 && param_2 <= *(uint *)(local_58 + 4)) ||
           (param_3 <= *(uint *)(local_58 + 4) && *(uint *)local_58 <= param_3)) goto LAB_100794071;
        local_58 = local_58 + 8;
        local_48 = 1;
      } while (local_58 != local_50);
    }
    iVar8 = 4;
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_100794009:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100794009;
    }
    iVar8 = 4;
    if (local_48 != 0) goto LAB_10079401a;
  }
LAB_100794071:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100794097;
    }
    QListData::dispose(local_60);
  }
LAB_100794097:
  bVar9 = iVar8 == 4;
  if (bVar9) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    puVar2 = (undefined8 *)FUN_100794c80(param_1 + 0x18,&local_40);
    *puVar2 = CONCAT44(param_5,param_4);
    puVar3 = (undefined4 *)FUN_100794820(param_1 + 0x20,&local_38);
    *puVar3 = param_4;
  }
LAB_1007940df:
  if ((uVar7 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return bVar9;
}

