
void FUN_10098e890(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  void *local_48;
  void *local_40;
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x28) + 0xc) == *(int *)(*(long *)(param_1 + 0x28) + 8)) {
    local_40 = operator_new(0x58);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100990350(local_40,0,uVar5,param_1);
    plVar1 = (long *)(param_1 + 0x28);
    FUN_10098f970(plVar1,&local_40);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar3 = FUN_100991a90(uVar5);
    if (cVar3 != '\0') {
      local_48 = operator_new(0x58);
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_100990350(local_48,1,uVar5,param_1);
      FUN_10098f970(plVar1,&local_48);
    }
    local_68 = (Data *)*plVar1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_68);
        lVar4 = (long)*(int *)(local_68 + 8);
        lVar2 = *plVar1;
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_68 + lVar4 * 8) &&
           (lVar6 = *(int *)(local_68 + 0xc) - lVar4,
           lVar6 != 0 && lVar4 <= *(int *)(local_68 + 0xc))) {
          _memcpy(local_68 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      do {
        local_50 = 1;
        uVar5 = *(undefined8 *)local_60;
        QObject::connect((Connection *)&local_70,uVar5,"2batteryStateChanged(BatteryState)",param_1,
                         "1processBatteryStates()",0);
        if (local_70 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_70);
        FUN_100990360(uVar5);
        local_60 = local_60 + 8;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_68);
    }
  }
  return;
}

