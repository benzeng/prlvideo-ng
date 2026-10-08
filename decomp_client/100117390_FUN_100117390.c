
undefined1 FUN_100117390(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  undefined4 local_84;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  int local_38;
  undefined1 local_31;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 3) {
    iVar3 = *(int *)(&DAT_100e14cd4 + (long)(int)param_2 * 4);
    iVar6 = 0;
    do {
      local_38 = iVar6;
      FUN_100129840(param_3,&local_38);
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"wrong interface type requested.");
  }
  local_58 = *(Data **)(param_1 + 0x1b0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_1 + 0x1b0);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
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
      uVar2 = CVmClusteredDevice::getInterfaceType();
      if (uVar2 == param_2) {
        local_5c = CVmClusteredDevice::getStackIndex();
        FUN_1001298a0(param_3,&local_5c);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100117515;
    }
    QListData::dispose(local_58);
  }
LAB_100117515:
  local_80 = *(Data **)(param_1 + 0x1a8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar4 = (long)*(int *)(local_80 + 8);
      lVar1 = *(long *)(param_1 + 0x1a8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_80 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_80 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
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
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      uVar2 = CVmClusteredDevice::getInterfaceType();
      if (uVar2 == param_2) {
        local_84 = CVmClusteredDevice::getStackIndex();
        FUN_1001298a0(param_3,&local_84);
      }
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100117615;
    }
    QListData::dispose(local_80);
  }
LAB_100117615:
  if (param_2 == 1) {
    local_a8 = *(Data **)(param_1 + 0x200);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 == 0) {
        QListData::detach((int)&local_a8);
        lVar4 = (long)*(int *)(local_a8 + 8);
        lVar1 = *(long *)(param_1 + 0x200);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_a8 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_a8 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_a8 + 0xc))) {
          _memcpy(local_a8 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar5 * 8);
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
    if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
      do {
        local_90 = 1;
        iVar3 = CVmClusteredDevice::getInterfaceType();
        if (iVar3 == 1) {
          local_ac = CVmClusteredDevice::getStackIndex();
          FUN_1001298a0(param_3,&local_ac);
        }
        local_a0 = local_a0 + 8;
      } while (local_a0 != local_98);
    }
    local_90 = 1;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011774a;
      }
      QListData::dispose(local_a8);
    }
LAB_10011774a:
    local_b0 = DAT_100e15294;
    FUN_1001298a0(param_3,&local_b0);
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("Free %1 slot list:",0x12);
  EnumUtils::enumToString(&local_c8,param_2);
  QString::arg(&local_b8,&local_c0,&local_c8,0,0x20);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001177e7;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001177e7:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011781d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10011781d:
  local_e8 = (Data *)*param_3;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 == 0) {
      QListData::detach((int)&local_e8);
      lVar4 = (long)*(int *)(local_e8 + 8);
      lVar1 = *param_3;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_e8 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_e8 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_e8 + 0xc))
         ) {
        _memcpy(local_e8 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
    }
  }
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
    do {
      local_d0 = 1;
      iVar3 = *(int *)local_e0;
      local_f8 = (QArrayData *)QString::fromAscii_helper("\n%1",3);
      QString::arg(&local_f0,&local_f8,(long)iVar3,0,10,0x20);
      QString::append(&local_b8);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100117954;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100117954:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011798a;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_10011798a:
      local_e0 = local_e0 + 8;
    } while (local_e0 != local_d8);
  }
  local_d0 = 1;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001179df;
    }
    QListData::dispose(local_e8);
  }
LAB_1001179df:
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
    }
    FUN_100df99c0("","prl_client_app",3,"%s",local_100 + *(long *)(local_100 + 0x10));
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100117a91;
      }
      QArrayData::deallocate(local_100,1,8);
    }
  }
LAB_100117a91:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_b8.field0_0x0 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
  return 1;
}

