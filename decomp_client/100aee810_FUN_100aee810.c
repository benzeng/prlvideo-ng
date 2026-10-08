
void FUN_100aee810(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x150);
  local_48 = (Data *)*plVar1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_48 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_48 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      lVar2 = *(long *)local_40;
      local_68 = *(Data **)(lVar2 + 0x98);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 == 0) {
          QListData::detach((int)&local_68);
          lVar3 = (long)*(int *)(local_68 + 8);
          lVar2 = *(long *)(lVar2 + 0x98);
          if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_68 + lVar3 * 8) &&
             (lVar4 = *(int *)(local_68 + 0xc) - lVar3,
             lVar4 != 0 && lVar3 <= *(int *)(local_68 + 0xc))) {
            _memcpy(local_68 + lVar3 * 8 + 0x10,
                    (void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),lVar4 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
        }
      }
      local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
      local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
      if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
        do {
          local_50 = 1;
          CHwHddPartition::setOsInfo(*(CHwOsInfo **)local_60);
          local_60 = local_60 + 8;
        } while (local_60 != local_58);
      }
      local_50 = 1;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100aee9c9;
        }
        QListData::dispose(local_68);
      }
LAB_100aee9c9:
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100aeea0c;
    }
    QListData::dispose(local_48);
  }
LAB_100aeea0c:
  FUN_100b02b20(param_1);
  return;
}

