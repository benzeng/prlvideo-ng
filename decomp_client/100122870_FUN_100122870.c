
bool FUN_100122870(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  bVar8 = false;
  FUN_100b01b20(&local_40,param_2,0);
  if (*(int *)(local_40.field0_0x0 + 4) == 0) goto LAB_100122ade;
  plVar1 = *(long **)(param_1 + 0x150);
  local_60 = (Data *)*plVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar6 * 8);
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
      lVar2 = *(long *)local_58;
      CHwHardDisk::getDeviceId();
      cVar3 = operator==(&local_68,&local_40);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012298c;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10012298c:
      if (cVar3 != '\0') {
        local_88 = *(Data **)(lVar2 + 0x98);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 == 0) {
            QListData::detach((int)&local_88);
            lVar5 = (long)*(int *)(local_88 + 8);
            lVar2 = *(long *)(lVar2 + 0x98);
            if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_88 + lVar5 * 8) &&
               (lVar6 = *(int *)(local_88 + 0xc) - lVar5,
               lVar6 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
              _memcpy(local_88 + lVar5 * 8 + 0x10,
                      (void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),lVar6 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + 1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
          }
        }
        local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
        local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
        if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
          do {
            local_70 = 1;
            iVar4 = CHwHddPartition::getType();
            iVar7 = 1;
            if (iVar4 == param_3) goto LAB_100122a60;
            local_80 = local_80 + 8;
          } while (local_80 != local_78);
        }
        local_70 = 1;
        iVar7 = 8;
LAB_100122a60:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100122a86;
          }
          QListData::dispose(local_88);
        }
LAB_100122a86:
        if (iVar7 != 8) goto LAB_100122aad;
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar7 = 2;
LAB_100122aad:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100122ad3;
    }
    QListData::dispose(local_60);
  }
LAB_100122ad3:
  bVar8 = iVar7 != 2;
LAB_100122ade:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return bVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return bVar8;
}

