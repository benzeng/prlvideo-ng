
int FUN_1005516e0(long param_1)

{
  byte bVar1;
  int iVar2;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  iVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1000ff290(&local_40,*(long *)(param_1 + 0x10) + 0x10);
    local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
    iVar2 = 0;
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      iVar2 = 0;
      do {
        local_28 = 1;
        bVar1 = FUN_100551820(*(undefined8 *)local_38);
        iVar2 = (uint)bVar1 + iVar2;
        local_38 = local_38 + 8;
      } while (local_38 != local_30);
    }
    local_28 = 1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return iVar2;
        }
        local_19 = 0;
      }
      FUN_1005596c0(&local_40,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                    local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
      QListData::dispose(local_40);
    }
  }
  return iVar2;
}

