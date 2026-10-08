
bool FUN_100111b00(long param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  cVar2 = CHwHardDisk::isRemovable();
  if (cVar2 != '\0') {
    return false;
  }
  local_48 = *(Data **)(param_1 + 0x98);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      lVar1 = *(long *)(param_1 + 0x98);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
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
      lVar1 = *(long *)local_40;
      uVar3 = CHwHddPartition::getType();
      cVar2 = FUN_100ccffc0(uVar3);
      if (cVar2 != '\0') {
        uVar3 = CHwHddPartition::getType();
        cVar2 = FUN_100ccffa0(uVar3);
        iVar6 = 1;
        if (cVar2 == '\0') goto LAB_100111d3e;
      }
      local_68 = *(Data **)(lVar1 + 0xa8);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 == 0) {
          QListData::detach((int)&local_68);
          lVar4 = (long)*(int *)(local_68 + 8);
          lVar1 = *(long *)(lVar1 + 0xa8);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_68 + lVar4 * 8) &&
             (lVar5 = *(int *)(local_68 + 0xc) - lVar4,
             lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))) {
            _memcpy(local_68 + lVar4 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar5 * 8);
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
          if (*(long *)local_60 != 0) {
            uVar3 = CHwHddPartition::getType();
            cVar2 = FUN_100ccffc0(uVar3);
            if (cVar2 != '\0') {
              uVar3 = CHwHddPartition::getType();
              cVar2 = FUN_100ccffa0(uVar3);
              iVar6 = 1;
              if (cVar2 == '\0') goto LAB_100111cf1;
            }
          }
          local_60 = local_60 + 8;
        } while (local_60 != local_58);
      }
      local_50 = 1;
      iVar6 = 8;
LAB_100111cf1:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100111d17;
        }
        QListData::dispose(local_68);
      }
LAB_100111d17:
      if (iVar6 != 8) goto LAB_100111d3e;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  iVar6 = 2;
LAB_100111d3e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100111d64;
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
LAB_100111d64:
  return iVar6 != 2;
}

