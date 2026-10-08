
undefined8 FUN_100ac7a40(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  uint local_70 [3];
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  lVar1 = param_1 + 0x100;
  plVar3 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x910));
  if (*plVar3 != 0) {
    plVar3 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x910));
    *param_2 = *(undefined4 *)(*plVar3 + 0x48);
  }
  FUN_100ac8310(&local_60,param_1 + 0xaf0);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_100ac7b54:
    if (local_50 != local_48) {
      do {
        uVar2 = *(undefined4 *)local_50;
        lVar4 = FUN_100adbbf0(lVar1,uVar2);
        if (lVar4 == 0) {
          local_64 = 1;
          local_70[2] = uVar2;
          FUN_100ac84a0(param_2 + 2,local_70 + 2);
        }
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100ac7b49:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100ac7b49;
    }
    if (local_40 != 0) goto LAB_100ac7b54;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac7bd8;
    }
    QListData::dispose(local_58);
  }
LAB_100ac7bd8:
  iVar7 = *(int *)(param_1 + 0x900);
  if (iVar7 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x908);
    do {
      plVar3 = (long *)FUN_100adb590(lVar1,*puVar6);
      lVar4 = *plVar3;
      if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0x18) & 0x41) == 0)) &&
         (*(char *)(lVar4 + 0x56) == '\0')) {
        if (*(uint *)(lVar4 + 0x48) != 0) {
          local_70[1] = 0;
          local_70[0] = *(uint *)(lVar4 + 0x48);
          FUN_100ac84a0(param_2 + 2,local_70);
        }
      }
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 1;
}

