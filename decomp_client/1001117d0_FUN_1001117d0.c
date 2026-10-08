
uint FUN_1001117d0(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  CHwHddPartition local_130 [232];
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  uVar3 = CHwHddPartition::getType();
  bVar2 = FUN_100ccffc0(uVar3);
  local_48 = *(Data **)(param_1 + 0xa8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar5 = (long)*(int *)(local_48 + 8);
      lVar1 = *(long *)(param_1 + 0xa8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  uVar7 = (uint)bVar2;
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      CHwHddPartition::CHwHddPartition(local_130,*(CHwHddPartition **)local_40);
      iVar4 = FUN_1001117d0(local_130);
      CHwHddPartition::~CHwHddPartition(local_130);
      uVar7 = iVar4 + uVar7;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return uVar7;
}

