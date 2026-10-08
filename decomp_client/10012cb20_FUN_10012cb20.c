
long FUN_10012cb20(QString *param_1,long param_2,long param_3,char param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_R15;
  QString local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  QString local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  QString local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = *(Data **)(param_2 + 0x1e8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_2 + 0x1e8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
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
  bVar2 = true;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      unaff_R15 = *(long *)local_50;
      if ((param_4 == '\0') || (iVar4 = CVmDevice::getEnabled(), iVar4 == 1)) {
        CVmDevice::getSystemName();
        bVar3 = operator==(&local_60,param_1);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012cc5c;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_10012cc5c:
        if ((bVar3 & unaff_R15 != param_3) != 0) {
          bVar2 = false;
          goto LAB_10012cc92;
        }
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
    bVar2 = true;
  }
LAB_10012cc92:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012ccb8;
    }
    QListData::dispose(local_58);
  }
LAB_10012ccb8:
  if (!bVar2) {
    return unaff_R15;
  }
  local_80 = *(Data **)(param_2 + 0x1f8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar5 = (long)*(int *)(local_80 + 8);
      lVar1 = *(long *)(param_2 + 0x1f8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_80 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_80 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  bVar2 = true;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      lVar1 = *(long *)local_78;
      if ((param_4 == '\0') || (iVar4 = CVmDevice::getEnabled(), iVar4 == 1)) {
        CVmDevice::getSystemName();
        bVar3 = operator==(&local_88,param_1);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012cde1;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_10012cde1:
        if ((bVar3 & lVar1 != param_3) != 0) {
          bVar2 = false;
          unaff_R15 = lVar1;
          break;
        }
      }
      local_78 = local_78 + 8;
      local_68 = 1;
    } while (local_78 != local_70);
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012ce45;
    }
    QListData::dispose(local_80);
  }
LAB_10012ce45:
  if (bVar2) {
    local_a8 = *(Data **)(param_2 + 0x1d0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 == 0) {
        QListData::detach((int)&local_a8);
        lVar5 = (long)*(int *)(local_a8 + 8);
        lVar1 = *(long *)(param_2 + 0x1d0);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_a8 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_a8 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_a8 + 0xc))) {
          _memcpy(local_a8 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
    }
    local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
    local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
    local_90 = 1;
    unaff_R15 = 0;
    if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
      do {
        local_90 = 1;
        unaff_R15 = *(long *)local_a0;
        if (((param_4 == '\0') || (iVar4 = CVmDevice::getEnabled(), iVar4 == 1)) &&
           (iVar4 = CVmDevice::getEmulatedType(), iVar4 == 4)) {
          CVmDevice::getSystemName();
          bVar3 = operator==(&local_b0,param_1);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012cf8f;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_10012cf8f:
          if ((bVar3 & unaff_R15 != param_3) != 0) break;
        }
        local_a0 = local_a0 + 8;
        local_90 = 1;
        unaff_R15 = 0;
      } while (local_a0 != local_98);
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        UNLOCK();
        if (*(int *)local_a8 != 0) {
          return unaff_R15;
        }
        local_31 = 0;
      }
      QListData::dispose(local_a8);
    }
  }
  return unaff_R15;
}

