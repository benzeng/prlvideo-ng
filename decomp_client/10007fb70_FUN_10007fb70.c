
long FUN_10007fb70(long param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  QString local_78;
  CTaskGenericId local_70 [24];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar2 = FUN_10007f750(*(undefined8 *)(param_1 + 0x10));
  if ((lVar2 == 0) || (lVar3 = FUN_10008b9a0(lVar2), lVar3 == 0)) {
    local_58 = *(Data **)(param_1 + 0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar3 = (long)*(int *)(local_58 + 8);
        lVar2 = *(long *)(param_1 + 0x20);
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_58 + lVar3 * 8) &&
           (lVar5 = *(int *)(local_58 + 0xc) - lVar3,
           lVar5 != 0 && lVar3 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
                  ,lVar5 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    local_40 = 1;
    lVar2 = 0;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        lVar2 = *(long *)local_50;
        lVar3 = FUN_10008b9a0(lVar2);
        if (lVar3 != 0) {
          pCVar4 = (CTaskGenericId *)CTaskManager::instance();
          lVar3 = FUN_10008b9a0(lVar2);
          FUN_100081140(local_70,lVar3 + 0x10);
          CTaskManager::getTaskById(pCVar4);
          lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102202120);
          CTaskGenericId::~CTaskGenericId(local_70);
          if (lVar3 != 0) {
            local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x60);
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            cVar1 = operator==(&local_78,param_2);
            if (*(int *)local_78.field0_0x0 != -1) {
              if (*(int *)local_78.field0_0x0 != 0) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007fcf5;
              }
              QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
            }
LAB_10007fcf5:
            if (cVar1 != '\0') break;
          }
        }
        local_50 = local_50 + 8;
        local_40 = 1;
        lVar2 = 0;
      } while (local_50 != local_48);
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return lVar2;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
  }
  return lVar2;
}

