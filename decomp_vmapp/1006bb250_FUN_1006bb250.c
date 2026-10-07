
undefined2 FUN_1006bb250(undefined8 param_1,QString *param_2)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QString local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar3 = CParallelsNetworkConfig::getOffmgmtServices();
  if (lVar3 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","services","netconfig.cpp",
                  0x5f7,"GetOffmgmtPortByService");
    uVar2 = 0;
  }
  else {
    local_50 = *(Data **)(lVar3 + 0x98);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_50);
        lVar4 = (long)*(int *)(local_50 + 8);
        lVar3 = *(long *)(lVar3 + 0x98);
        if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_50 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_50 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))) {
          _memcpy(local_50 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8)
                  ,lVar5 * 8);
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
    if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
      do {
        local_38 = 1;
        COffmgmtService::getName();
        cVar1 = operator==(&local_58,param_2);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006bb3ab;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1006bb3ab:
        if (cVar1 != '\0') {
          uVar2 = COffmgmtService::getPort();
          goto LAB_1006bb3d7;
        }
        local_48 = local_48 + 8;
      } while (local_48 != local_40);
    }
    local_38 = 1;
    uVar2 = 0;
LAB_1006bb3d7:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return uVar2;
        }
        local_29 = 0;
      }
      QListData::dispose(local_50);
    }
  }
  return uVar2;
}

