
void FUN_1001b64e0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_30 [7];
  undefined1 local_29;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021fea30;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  cVar1 = FUN_10011cdc0(param_2);
  if (cVar1 != '\0') {
    FUN_10018c2b0(param_2);
    lVar2 = CVmConfiguration::getVmHardwareList();
    local_50 = *(Data **)(lVar2 + 0x1b0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_50);
        lVar3 = (long)*(int *)(local_50 + 8);
        lVar2 = *(long *)(lVar2 + 0x1b0);
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_50 + lVar3 * 8) &&
           (lVar4 = *(int *)(local_50 + 0xc) - lVar3,
           lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))) {
          _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
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
    if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
      do {
        local_38 = 1;
        CVmDevice::getSystemName();
        FUN_100062d00(param_1 + 0x10,&local_58,local_30);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1001b6629;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1001b6629:
        local_48 = local_48 + 8;
      } while (local_48 != local_40);
    }
    local_38 = 1;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_29 = 0;
      }
      QListData::dispose(local_50);
    }
  }
  return;
}

