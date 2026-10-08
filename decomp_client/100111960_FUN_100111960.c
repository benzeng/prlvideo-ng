
int FUN_100111960(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  CHwHddPartition local_130 [232];
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  cVar2 = CHwHardDisk::isRemovable();
  iVar6 = 0;
  if (cVar2 == '\0') {
    local_48 = *(Data **)(param_1 + 0x98);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 == 0) {
        QListData::detach((int)&local_48);
        lVar4 = (long)*(int *)(local_48 + 8);
        lVar1 = *(long *)(param_1 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_48 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))) {
          _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar5 * 8);
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
    iVar6 = 0;
    if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
      iVar6 = 0;
      do {
        local_30 = 1;
        CHwHddPartition::CHwHddPartition(local_130,*(CHwHddPartition **)local_40);
        iVar3 = FUN_1001117d0(local_130);
        CHwHddPartition::~CHwHddPartition(local_130);
        iVar6 = iVar3 + iVar6;
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
          return iVar6;
        }
        local_21 = 0;
      }
      QListData::dispose(local_48);
    }
  }
  return iVar6;
}

