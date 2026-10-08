
void FUN_100080890(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(int *)(lVar1 + 0x28) != *param_2) || (*(int *)(lVar1 + 0x2c) != param_2[1])) {
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)param_2;
    lVar1 = *(long *)(param_1 + 0x10);
    local_40 = *(Data **)(lVar1 + 0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        lVar2 = (long)*(int *)(local_40 + 8);
        lVar1 = *(long *)(lVar1 + 0x20);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_40 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_40 + 0xc))) {
          _memcpy(local_40 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
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
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      do {
        local_28 = 1;
        FUN_10008bf60(*(undefined8 *)local_38,param_2);
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
          return;
        }
        local_19 = 0;
      }
      QListData::dispose(local_40);
    }
  }
  return;
}

