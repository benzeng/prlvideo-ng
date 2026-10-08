
undefined8 * FUN_10011da10(undefined8 *param_1,long param_2)

{
  long lVar1;
  CHwHddPartition *pCVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  CHwHddPartition local_248 [232];
  Data *local_160;
  Data *local_158;
  Data *local_150;
  undefined4 local_148;
  CHwHddPartition local_140 [232];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  cVar3 = CHwHardDisk::isRemovable();
  if (cVar3 != '\0') goto LAB_10011dcef;
  local_58 = *(Data **)(param_2 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_2 + 0x98);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      pCVar2 = *(CHwHddPartition **)local_50;
      CHwHddPartition::CHwHddPartition(local_140,pCVar2);
      uVar4 = CHwHddPartition::getType();
      cVar3 = FUN_100ccffc0(uVar4);
      CHwHddPartition::~CHwHddPartition(local_140);
      if (cVar3 != '\0') {
        iVar7 = 1;
        CHwHddPartition::getSystemName();
        goto LAB_10011dcbc;
      }
      local_160 = *(Data **)(pCVar2 + 0xa8);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 == 0) {
          QListData::detach((int)&local_160);
          lVar5 = (long)*(int *)(local_160 + 8);
          lVar1 = *(long *)(pCVar2 + 0xa8);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_160 + lVar5 * 8) &&
             (lVar6 = *(int *)(local_160 + 0xc) - lVar5,
             lVar6 != 0 && lVar5 <= *(int *)(local_160 + 0xc))) {
            _memcpy(local_160 + lVar5 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar6 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + 1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
        }
      }
      local_158 = local_160 + (long)*(int *)(local_160 + 8) * 8 + 0x10;
      local_150 = local_160 + (long)*(int *)(local_160 + 0xc) * 8 + 0x10;
      local_148 = 1;
      iVar7 = 8;
      if (*(int *)(local_160 + 8) != *(int *)(local_160 + 0xc)) {
        do {
          local_148 = 1;
          if (*(CHwHddPartition **)local_158 != (CHwHddPartition *)0x0) {
            CHwHddPartition::CHwHddPartition(local_248,*(CHwHddPartition **)local_158);
            uVar4 = CHwHddPartition::getType();
            cVar3 = FUN_100ccffc0(uVar4);
            CHwHddPartition::~CHwHddPartition(local_248);
            if (cVar3 != '\0') {
              iVar7 = 1;
              CHwHddPartition::getSystemName();
              break;
            }
          }
          local_158 = local_158 + 8;
          local_148 = 1;
        } while (local_158 != local_150);
      }
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011dc7c;
        }
        QListData::dispose(local_160);
      }
LAB_10011dc7c:
      if (iVar7 != 8) goto LAB_10011dcbc;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  iVar7 = 2;
LAB_10011dcbc:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_10011dce2;
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
LAB_10011dce2:
  if (iVar7 != 2) {
    return param_1;
  }
LAB_10011dcef:
  *param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

