
undefined1 FUN_100111de0(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  lVar3 = FUN_10015a340();
  plVar1 = *(long **)(lVar3 + 0x150);
  local_38 = (Data *)*plVar1;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_38);
      lVar4 = (long)*(int *)(local_38 + 8);
      lVar3 = *plVar1;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_38 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_38 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  if (*(int *)(local_38 + 8) != *(int *)(local_38 + 0xc)) {
    do {
      local_20 = 1;
      cVar2 = FUN_100111b00(*(undefined8 *)local_30);
      uVar6 = 1;
      if (cVar2 != '\0') goto LAB_100111ea9;
      local_30 = local_30 + 8;
    } while (local_30 != local_28);
  }
  local_20 = 1;
  uVar6 = 0;
LAB_100111ea9:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar6;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return uVar6;
}

