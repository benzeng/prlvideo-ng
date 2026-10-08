
void FUN_1003b6570(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  undefined4 local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  undefined4 local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar1 = CVmConfiguration::getVmHardwareList();
  switch(param_2) {
  case 5:
    local_40 = *(Data **)(lVar1 + 0x1a8);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        lVar2 = (long)*(int *)(local_40 + 8);
        lVar1 = *(long *)(lVar1 + 0x1a8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_40 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_40 + 0xc))) {
          _memcpy(local_40 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      do {
        local_28 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_38);
        local_38 = local_38 + 8;
      } while (local_38 != local_30);
    }
    local_28 = 1;
    if (*(int *)local_40 == -1) {
      return;
    }
    pDVar4 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 6:
    local_60 = *(Data **)(lVar1 + 0x1b0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar2 = (long)*(int *)(local_60 + 8);
        lVar1 = *(long *)(lVar1 + 0x1b0);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_60 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_58);
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    if (*(int *)local_60 == -1) {
      return;
    }
    pDVar4 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  default:
    goto switchD_1003b65a2_caseD_7;
  case 8:
    local_c0 = *(Data **)(lVar1 + 0x1d0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 == 0) {
        QListData::detach((int)&local_c0);
        lVar2 = (long)*(int *)(local_c0 + 8);
        lVar1 = *(long *)(lVar1 + 0x1d0);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_c0 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_c0 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_c0 + 0xc))) {
          _memcpy(local_c0 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_19 = *(int *)local_c0 != 0;
        UNLOCK();
      }
    }
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
      do {
        local_a8 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_b8);
        local_b8 = local_b8 + 8;
      } while (local_b8 != local_b0);
    }
    local_a8 = 1;
    if (*(int *)local_c0 == -1) {
      return;
    }
    pDVar4 = local_c0;
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      if (*(int *)local_c0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 10:
    local_80 = *(Data **)(lVar1 + 0x1b8);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 == 0) {
        QListData::detach((int)&local_80);
        lVar2 = (long)*(int *)(local_80 + 8);
        lVar1 = *(long *)(lVar1 + 0x1b8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_80 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_80 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_80 + 0xc))) {
          _memcpy(local_80 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_19 = *(int *)local_80 != 0;
        UNLOCK();
      }
    }
    local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
    local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
    if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
      do {
        local_68 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_78);
        local_78 = local_78 + 8;
      } while (local_78 != local_70);
    }
    local_68 = 1;
    if (*(int *)local_80 == -1) {
      return;
    }
    pDVar4 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 0xb:
    local_a0 = *(Data **)(lVar1 + 0x1c8);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 == 0) {
        QListData::detach((int)&local_a0);
        lVar2 = (long)*(int *)(local_a0 + 8);
        lVar1 = *(long *)(lVar1 + 0x1c8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_a0 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_a0 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_a0 + 0xc))) {
          _memcpy(local_a0 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_19 = *(int *)local_a0 != 0;
        UNLOCK();
      }
    }
    local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
    local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
      do {
        local_88 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_98);
        local_98 = local_98 + 8;
      } while (local_98 != local_90);
    }
    local_88 = 1;
    if (*(int *)local_a0 == -1) {
      return;
    }
    pDVar4 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 0x11:
    local_100 = *(Data **)(lVar1 + 0x1f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 == 0) {
        QListData::detach((int)&local_100);
        lVar2 = (long)*(int *)(local_100 + 8);
        lVar1 = *(long *)(lVar1 + 0x1f8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_100 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_100 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_100 + 0xc))) {
          _memcpy(local_100 + lVar2 * 8 + 0x10,
                  (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_19 = *(int *)local_100 != 0;
        UNLOCK();
      }
    }
    local_f8 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
    local_f0 = local_100 + (long)*(int *)(local_100 + 0xc) * 8 + 0x10;
    if (*(int *)(local_100 + 8) != *(int *)(local_100 + 0xc)) {
      do {
        local_e8 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_f8);
        local_f8 = local_f8 + 8;
      } while (local_f8 != local_f0);
    }
    local_e8 = 1;
    if (*(int *)local_100 == -1) {
      return;
    }
    pDVar4 = local_100;
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      if (*(int *)local_100 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 0x12:
    local_120 = *(Data **)(lVar1 + 0x200);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 == 0) {
        QListData::detach((int)&local_120);
        lVar2 = (long)*(int *)(local_120 + 8);
        lVar1 = *(long *)(lVar1 + 0x200);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_120 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_120 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_120 + 0xc))) {
          _memcpy(local_120 + lVar2 * 8 + 0x10,
                  (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + 1;
        local_19 = *(int *)local_120 != 0;
        UNLOCK();
      }
    }
    local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
    local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
    if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
      do {
        local_108 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_118);
        local_118 = local_118 + 8;
      } while (local_118 != local_110);
    }
    local_108 = 1;
    if (*(int *)local_120 == -1) {
      return;
    }
    pDVar4 = local_120;
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      if (*(int *)local_120 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 0x14:
    local_e0 = *(Data **)(lVar1 + 0x1e8);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 == 0) {
        QListData::detach((int)&local_e0);
        lVar2 = (long)*(int *)(local_e0 + 8);
        lVar1 = *(long *)(lVar1 + 0x1e8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_e0 + lVar2 * 8) &&
           (lVar3 = *(int *)(local_e0 + 0xc) - lVar2,
           lVar3 != 0 && lVar2 <= *(int *)(local_e0 + 0xc))) {
          _memcpy(local_e0 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_19 = *(int *)local_e0 != 0;
        UNLOCK();
      }
    }
    local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
    local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
      do {
        local_c8 = 1;
        CVmDevice::setIndex((uint)*(undefined8 *)local_d8);
        local_d8 = local_d8 + 8;
      } while (local_d8 != local_d0);
    }
    local_c8 = 1;
    if (*(int *)local_e0 == -1) {
      return;
    }
    pDVar4 = local_e0;
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  QListData::dispose(pDVar4);
switchD_1003b65a2_caseD_7:
  return;
}

