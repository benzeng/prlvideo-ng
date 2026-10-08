
undefined1 FUN_100b41980(long param_1,QHostAddress *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  bool bVar7;
  QArrayData *local_70;
  QHostAddress local_68 [8];
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  undefined1 local_3d [6];
  undefined1 local_37 [6];
  undefined1 local_31;
  
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    local_60 = *(Data **)(param_1 + 0x98);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar4 = (long)*(int *)(local_60 + 8);
        lVar1 = *(long *)(param_1 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_60 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar5 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        if (*(long *)local_58 != 0) {
          CIPReservation::getIPAddress();
          cVar2 = QHostAddress::operator==(local_68,param_2);
          bVar7 = true;
          if (cVar2 == '\0') {
            CIPReservation::getMacAddress();
            FUN_100b40740(&local_70,local_37);
            FUN_100b40740(param_3,local_3d);
            iVar3 = _memcmp(local_37,local_3d,6);
            bVar7 = iVar3 == 0;
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b41af0;
              }
              QArrayData::deallocate(local_70,2,8);
            }
          }
LAB_100b41af0:
          QHostAddress::~QHostAddress(local_68);
          uVar6 = 1;
          if (bVar7) goto LAB_100b41b20;
        }
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    uVar6 = 0;
LAB_100b41b20:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return uVar6;
        }
        local_31 = 0;
      }
      QListData::dispose(local_60);
    }
  }
  return uVar6;
}

