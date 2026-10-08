
void FUN_100781b50(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  uint local_28;
  undefined1 local_19;
  
  local_40 = *(Data **)(param_1 + 0x18);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar4 = (long)*(int *)(local_40 + 8);
      lVar1 = *(long *)(param_1 + 0x18);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_40 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  if (*(int *)(local_40 + 8) == *(int *)(local_40 + 0xc)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\0';
    do {
      if ((local_28 == 0) || (cVar2 = FUN_1007821e0(*(undefined8 *)local_38), cVar2 == '\0')) {
        local_38 = local_38 + 8;
        local_28 = 1;
        cVar2 = cVar6;
      }
      else {
        local_38 = local_38 + 8;
        uVar3 = local_28 ^ 1;
        cVar6 = '\x01';
        bVar7 = local_28 == 1;
        cVar2 = '\x01';
        local_28 = uVar3;
        if (bVar7) break;
      }
      cVar6 = cVar2;
    } while (local_38 != local_30);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100781c7b;
    }
    QListData::dispose(local_40);
  }
LAB_100781c7b:
  if (*(char *)(param_1 + 0x20) != cVar6) {
    *(char *)(param_1 + 0x20) = cVar6;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Promo Blocker state changed %d");
      cVar6 = *(char *)(param_1 + 0x20);
    }
    FUN_10085d020(*(undefined8 *)(param_1 + 0x10),cVar6 != '\0');
  }
  return;
}

