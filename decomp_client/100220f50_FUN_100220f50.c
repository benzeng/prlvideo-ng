
undefined8 FUN_100220f50(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  CTaskGenericId local_70 [24];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar7);
  if (iVar2 < 0x30000005) {
    if (iVar2 == 0x30000001) {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018c2b0(uVar7);
      lVar3 = CVmConfiguration::getVmHardwareList();
      local_58 = *(Data **)(lVar3 + 0x1b0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 == 0) {
          QListData::detach((int)&local_58);
          lVar5 = (long)*(int *)(local_58 + 8);
          lVar3 = *(long *)(lVar3 + 0x1b0);
          if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar5 * 8) &&
             (lVar6 = *(int *)(local_58 + 0xc) - lVar5,
             lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))) {
            _memcpy(local_58 + lVar5 * 8 + 0x10,
                    (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
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
      if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
        do {
          local_40 = 1;
          pCVar4 = (CTaskGenericId *)CTaskManager::instance();
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x20);
          }
          FUN_100188480(&local_78,uVar7);
          CVmDevice::getSystemName();
          CVmDevice::getUserFriendlyName();
          FUN_1001f7d40(local_70,&local_78,&local_80,&local_88);
          cVar1 = CTaskManager::isTaskRunning(pCVar4);
          CTaskGenericId::~CTaskGenericId(local_70);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100221151;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_100221151:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100221181;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_100221181:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002211b1;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_1002211b1:
          if (cVar1 != '\0') {
            if (*(int *)local_58 == -1) {
              return 0x30000008;
            }
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              UNLOCK();
              if (*(int *)local_58 != 0) {
                return 0x30000008;
              }
              local_31 = 0;
            }
            QListData::dispose(local_58);
            return 0x30000008;
          }
          local_50 = local_50 + 8;
        } while (local_50 != local_48);
      }
      local_40 = 1;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) {
            return 0x30000002;
          }
          local_31 = 0;
        }
        QListData::dispose(local_58);
        return 0x30000002;
      }
    }
  }
  else if (iVar2 < 0x3000000d) {
    if (iVar2 == 0x30000005) {
      return 0x3000000d;
    }
    if (iVar2 == 0x30000009) {
      return 0x30000010;
    }
  }
  else {
    if (iVar2 == 0x30000010) {
      return 0x30000010;
    }
    if (iVar2 == 0x3000000d) {
      return 0x3000000d;
    }
  }
  return 0x30000002;
}

