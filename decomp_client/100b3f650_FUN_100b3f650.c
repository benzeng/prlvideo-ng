
undefined8 FUN_100b3f650(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  uVar5 = 0;
  if (param_1 != 0) {
    local_50 = *(Data **)(param_1 + 0x98);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_50);
        lVar3 = (long)*(int *)(local_50 + 8);
        lVar1 = *(long *)(param_1 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_50 + lVar3 * 8) &&
           (lVar4 = *(int *)(local_50 + 0xc) - lVar3,
           lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))) {
          _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar4 * 8);
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
    local_38 = 1;
    uVar5 = 0;
    if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
      do {
        local_38 = 1;
        uVar5 = *(undefined8 *)local_48;
        CVirtualNetwork::getNetworkID();
        cVar2 = operator==(&local_58,param_2);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b3f75b;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100b3f75b:
        if (cVar2 != '\0') break;
        local_48 = local_48 + 8;
        local_38 = 1;
        uVar5 = 0;
      } while (local_48 != local_40);
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return uVar5;
        }
        local_29 = 0;
      }
      QListData::dispose(local_50);
    }
  }
  return uVar5;
}

