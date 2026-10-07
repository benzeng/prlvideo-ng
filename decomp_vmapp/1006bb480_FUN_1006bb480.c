
undefined8 * FUN_1006bb480(undefined8 *param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  lVar2 = CParallelsNetworkConfig::getOffmgmtServices();
  if (lVar2 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","services","netconfig.cpp",
                  0x606,"GetOffmgmtServiceByPort");
  }
  else {
    local_48 = *(Data **)(lVar2 + 0x98);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 == 0) {
        QListData::detach((int)&local_48);
        lVar4 = (long)*(int *)(local_48 + 8);
        lVar2 = *(long *)(lVar2 + 0x98);
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_48 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_48 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))) {
          _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
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
    if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
      do {
        local_30 = 1;
        sVar1 = COffmgmtService::getPort();
        if (sVar1 == param_3) {
          COffmgmtService::getName();
          if (*(int *)local_48 == -1) {
            return param_1;
          }
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            UNLOCK();
            if (*(int *)local_48 != 0) {
              return param_1;
            }
            local_21 = 0;
          }
          QListData::dispose(local_48);
          return param_1;
        }
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
        if ((bool)local_21) goto LAB_1006bb5eb;
      }
      QListData::dispose(local_48);
    }
  }
LAB_1006bb5eb:
  uVar3 = QString::fromAscii_helper("",0);
  *param_1 = uVar3;
  return param_1;
}

