
undefined1
FUN_100112b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar3 = FUN_10015a340();
  plVar1 = *(long **)(lVar3 + 0x150);
  local_50 = (Data *)*plVar1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      lVar3 = *plVar1;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_50 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_50 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      cVar2 = FUN_100114200(*(undefined8 *)local_48,param_2,param_3,param_4);
      uVar6 = 1;
      if (cVar2 != '\0') goto LAB_100112c52;
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  uVar6 = 0;
LAB_100112c52:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar6;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return uVar6;
}

