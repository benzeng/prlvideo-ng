
void FUN_10018a9e0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Data *local_158;
  Data *local_150;
  Data *local_148;
  undefined4 local_140;
  Data *local_138;
  Data *local_130;
  Data *local_128;
  undefined4 local_120;
  Data *local_118;
  Data *local_110;
  Data *local_108;
  undefined4 local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  undefined4 local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Creating device action sets for VM %s...",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018aa83;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_10018aa83:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018aab3;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10018aab3:
  lVar3 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar3 + 0x1e0) + 0xc) != *(int *)(*(long *)(lVar3 + 0x1e0) + 8)) {
    puVar4 = (undefined8 *)FUN_100190dc0(lVar3 + 0x1e0,0);
    FUN_10018f1b0(param_1,*puVar4);
  }
  local_58 = *(Data **)(lVar3 + 0x1a8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar6 = *(long *)(lVar3 + 0x1a8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar1 = *(undefined8 *)local_50;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018abda;
    }
    QListData::dispose(local_58);
  }
LAB_10018abda:
  local_78 = *(Data **)(lVar3 + 0x1d0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar5 = (long)*(int *)(local_78 + 8);
      lVar6 = *(long *)(lVar3 + 0x1d0);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_78 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_78 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      uVar1 = *(undefined8 *)local_70;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018acca;
    }
    QListData::dispose(local_78);
  }
LAB_10018acca:
  local_98 = *(Data **)(lVar3 + 0x1a0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_98);
      lVar5 = (long)*(int *)(local_98 + 8);
      lVar6 = *(long *)(lVar3 + 0x1a0);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_98 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_98 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    do {
      local_80 = 1;
      uVar1 = *(undefined8 *)local_90;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_90 = local_90 + 8;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018add6;
    }
    QListData::dispose(local_98);
  }
LAB_10018add6:
  local_b8 = *(Data **)(lVar3 + 0x1b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_b8);
      lVar5 = (long)*(int *)(local_b8 + 8);
      lVar6 = *(long *)(lVar3 + 0x1b8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_b8 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_b8 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_b8 + 0xc))
         ) {
        _memcpy(local_b8 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
  local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
    do {
      local_a0 = 1;
      uVar1 = *(undefined8 *)local_b0;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_b0 = local_b0 + 8;
    } while (local_b0 != local_a8);
  }
  local_a0 = 1;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018aeec;
    }
    QListData::dispose(local_b8);
  }
LAB_10018aeec:
  local_d8 = *(Data **)(lVar3 + 0x1c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 == 0) {
      QListData::detach((int)&local_d8);
      lVar5 = (long)*(int *)(local_d8 + 8);
      lVar6 = *(long *)(lVar3 + 0x1c8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_d8 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_d8 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_d8 + 0xc))
         ) {
        _memcpy(local_d8 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + 1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
    }
  }
  local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
  local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
    do {
      local_c0 = 1;
      uVar1 = *(undefined8 *)local_d0;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_d0 = local_d0 + 8;
    } while (local_d0 != local_c8);
  }
  local_c0 = 1;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018b00c;
    }
    QListData::dispose(local_d8);
  }
LAB_10018b00c:
  if (*(int *)(*(long *)(lVar3 + 0x1d8) + 0xc) != *(int *)(*(long *)(lVar3 + 0x1d8) + 8)) {
    puVar4 = (undefined8 *)FUN_100190e70(lVar3 + 0x1d8,0);
    uVar1 = *puVar4;
    iVar2 = CVmDevice::getEnabled();
    if (iVar2 == 1) {
      FUN_10018f1b0(param_1,uVar1);
    }
  }
  local_f8 = *(Data **)(lVar3 + 0x1b0);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 == 0) {
      QListData::detach((int)&local_f8);
      lVar5 = (long)*(int *)(local_f8 + 8);
      lVar6 = *(long *)(lVar3 + 0x1b0);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_f8 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_f8 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_f8 + 0xc))
         ) {
        _memcpy(local_f8 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
    }
  }
  local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
  local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_f8 + 8) != *(int *)(local_f8 + 0xc)) {
    do {
      local_e0 = 1;
      uVar1 = *(undefined8 *)local_f0;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_f0 = local_f0 + 8;
    } while (local_f0 != local_e8);
  }
  local_e0 = 1;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018b15c;
    }
    QListData::dispose(local_f8);
  }
LAB_10018b15c:
  local_118 = *(Data **)(lVar3 + 0x1e8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 == 0) {
      QListData::detach((int)&local_118);
      lVar5 = (long)*(int *)(local_118 + 8);
      lVar6 = *(long *)(lVar3 + 0x1e8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_118 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_118 + 0xc) - lVar5,
         lVar7 != 0 && lVar5 <= *(int *)(local_118 + 0xc))) {
        _memcpy(local_118 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
    }
  }
  local_110 = local_118 + (long)*(int *)(local_118 + 8) * 8 + 0x10;
  local_108 = local_118 + (long)*(int *)(local_118 + 0xc) * 8 + 0x10;
  if (*(int *)(local_118 + 8) != *(int *)(local_118 + 0xc)) {
    do {
      local_100 = 1;
      uVar1 = *(undefined8 *)local_110;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_110 = local_110 + 8;
    } while (local_110 != local_108);
  }
  local_100 = 1;
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018b27c;
    }
    QListData::dispose(local_118);
  }
LAB_10018b27c:
  local_138 = *(Data **)(lVar3 + 0x1f8);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 == 0) {
      QListData::detach((int)&local_138);
      lVar5 = (long)*(int *)(local_138 + 8);
      lVar6 = *(long *)(lVar3 + 0x1f8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_138 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_138 + 0xc) - lVar5,
         lVar7 != 0 && lVar5 <= *(int *)(local_138 + 0xc))) {
        _memcpy(local_138 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
    }
  }
  local_130 = local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10;
  local_128 = local_138 + (long)*(int *)(local_138 + 0xc) * 8 + 0x10;
  if (*(int *)(local_138 + 8) != *(int *)(local_138 + 0xc)) {
    do {
      local_120 = 1;
      uVar1 = *(undefined8 *)local_130;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_130 = local_130 + 8;
    } while (local_130 != local_128);
  }
  local_120 = 1;
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018b39c;
    }
    QListData::dispose(local_138);
  }
LAB_10018b39c:
  local_158 = *(Data **)(lVar3 + 0x200);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 == 0) {
      QListData::detach((int)&local_158);
      lVar6 = (long)*(int *)(local_158 + 8);
      lVar3 = *(long *)(lVar3 + 0x200);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_158 + lVar6 * 8) &&
         (lVar5 = *(int *)(local_158 + 0xc) - lVar6,
         lVar5 != 0 && lVar6 <= *(int *)(local_158 + 0xc))) {
        _memcpy(local_158 + lVar6 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + 1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
    }
  }
  local_150 = local_158 + (long)*(int *)(local_158 + 8) * 8 + 0x10;
  local_148 = local_158 + (long)*(int *)(local_158 + 0xc) * 8 + 0x10;
  if (*(int *)(local_158 + 8) != *(int *)(local_158 + 0xc)) {
    do {
      local_140 = 1;
      uVar1 = *(undefined8 *)local_150;
      iVar2 = CVmDevice::getEnabled();
      if (iVar2 == 1) {
        FUN_10018f1b0(param_1,uVar1);
      }
      local_150 = local_150 + 8;
    } while (local_150 != local_148);
  }
  local_140 = 1;
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018b4bc;
    }
    QListData::dispose(local_158);
  }
LAB_10018b4bc:
  FUN_100805040(param_1);
  return;
}

