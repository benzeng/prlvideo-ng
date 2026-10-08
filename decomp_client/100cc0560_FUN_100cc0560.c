
undefined8 * FUN_100cc0560(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  BootDevice *pBVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  BootDevice *local_e8;
  BootDevice *local_e0;
  BootDevice *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  undefined4 local_b8;
  BootDevice *local_b0;
  BootDevice *local_a8;
  BootDevice *local_a0;
  BootDevice *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  BootDevice *local_70;
  BootDevice *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  BootDevice *local_40;
  undefined1 local_31;
  
  lVar5 = CVmConfiguration::getVmHardwareList();
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_3;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"a",0xffffffff,1);
  if (iVar3 == 0) {
    bVar10 = *(int *)(*(long *)(lVar5 + 0x1a0) + 0xc) != *(int *)(*(long *)(lVar5 + 0x1a0) + 8);
    if (bVar10) {
      pBVar6 = operator_new(0xd8);
      BootDevice::BootDevice(pBVar6);
      *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
      *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
      *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
      *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
      *(undefined4 *)(pBVar6 + 0xac) = 3;
      *(undefined4 *)(pBVar6 + 0xa8) = 0;
      *(undefined4 *)(pBVar6 + 0xb0) = 0;
      pBVar6[0xb4] = (BootDevice)0x1;
      puVar2 = PTR_DAT_1021e1818;
      *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
      *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
      local_40 = pBVar6;
      FUN_100ccca10(param_1,&local_40);
    }
    uVar9 = (uint)bVar10;
    local_60 = *(Data **)(lVar5 + 0x1b0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar7 = (long)*(int *)(local_60 + 8);
        lVar1 = *(long *)(lVar5 + 0x1b0);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_60 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    puVar2 = PTR_DAT_1021e1818;
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        pBVar6 = operator_new(0xd8);
        uVar4 = CVmDevice::getIndex();
        BootDevice::BootDevice(pBVar6);
        *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
        *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
        *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
        *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
        *(undefined4 *)(pBVar6 + 0xac) = 6;
        *(undefined4 *)(pBVar6 + 0xa8) = uVar4;
        *(uint *)(pBVar6 + 0xb0) = uVar9;
        pBVar6[0xb4] = (BootDevice)0x1;
        *(undefined **)pBVar6 = puVar2 + 0x10;
        *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
        local_68 = pBVar6;
        FUN_100ccca10(param_1,&local_68);
        uVar9 = uVar9 + 1;
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc0a50;
      }
      QListData::dispose(local_60);
    }
LAB_100cc0a50:
    if (*(int *)(*(long *)(lVar5 + 0x1a8) + 0xc) == *(int *)(*(long *)(lVar5 + 0x1a8) + 8))
    goto LAB_100cc0fda;
    pBVar6 = operator_new(0xd8);
    BootDevice::BootDevice(pBVar6);
    *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
    *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
    *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
    *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
    *(undefined4 *)(pBVar6 + 0xac) = 5;
    *(undefined4 *)(pBVar6 + 0xa8) = 0;
    *(uint *)(pBVar6 + 0xb0) = uVar9;
    pBVar6[0xb4] = (BootDevice)0x1;
    puVar2 = PTR_DAT_1021e1818;
    *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
    *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
    local_70 = pBVar6;
    FUN_100ccca10(param_1,&local_70);
  }
  else {
    lVar1 = *param_3;
    iVar3 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"c",0xffffffff,1);
    if (iVar3 == 0) {
      local_90 = *(Data **)(lVar5 + 0x1b0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 == 0) {
          QListData::detach((int)&local_90);
          lVar7 = (long)*(int *)(local_90 + 8);
          lVar1 = *(long *)(lVar5 + 0x1b0);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_90 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_90 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_90 + 0xc))) {
            _memcpy(local_90 + lVar7 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
      }
      puVar2 = PTR_DAT_1021e1818;
      local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
      local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
      uVar9 = 0;
      if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
        uVar9 = 0;
        do {
          local_78 = 1;
          pBVar6 = operator_new(0xd8);
          uVar4 = CVmDevice::getIndex();
          BootDevice::BootDevice(pBVar6);
          *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
          *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
          *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
          *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
          *(undefined4 *)(pBVar6 + 0xac) = 6;
          *(undefined4 *)(pBVar6 + 0xa8) = uVar4;
          *(uint *)(pBVar6 + 0xb0) = uVar9;
          pBVar6[0xb4] = (BootDevice)0x1;
          *(undefined **)pBVar6 = puVar2 + 0x10;
          *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
          local_98 = pBVar6;
          FUN_100ccca10(param_1,&local_98);
          uVar9 = uVar9 + 1;
          local_88 = local_88 + 8;
        } while (local_88 != local_80);
      }
      local_78 = 1;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc0c59;
        }
        QListData::dispose(local_90);
      }
LAB_100cc0c59:
      if (*(int *)(*(long *)(lVar5 + 0x1a8) + 0xc) != *(int *)(*(long *)(lVar5 + 0x1a8) + 8)) {
        pBVar6 = operator_new(0xd8);
        BootDevice::BootDevice(pBVar6);
        *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
        *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
        *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
        *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
        *(undefined4 *)(pBVar6 + 0xac) = 5;
        *(undefined4 *)(pBVar6 + 0xa8) = 0;
        *(uint *)(pBVar6 + 0xb0) = uVar9;
        pBVar6[0xb4] = (BootDevice)0x1;
        puVar2 = PTR_DAT_1021e1818;
        *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
        *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
        local_a0 = pBVar6;
        FUN_100ccca10(param_1,&local_a0);
        uVar9 = uVar9 + 1;
      }
      if (*(int *)(*(long *)(lVar5 + 0x1a0) + 0xc) == *(int *)(*(long *)(lVar5 + 0x1a0) + 8))
      goto LAB_100cc0fda;
      pBVar6 = operator_new(0xd8);
      BootDevice::BootDevice(pBVar6);
      *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
      *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
      *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
      *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
      *(undefined4 *)(pBVar6 + 0xac) = 3;
      *(undefined4 *)(pBVar6 + 0xa8) = 0;
      *(uint *)(pBVar6 + 0xb0) = uVar9;
      pBVar6[0xb4] = (BootDevice)0x1;
      puVar2 = PTR_DAT_1021e1818;
      *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
      *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
      local_a8 = pBVar6;
      FUN_100ccca10(param_1,&local_a8);
    }
    else {
      lVar1 = *param_3;
      iVar3 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"d",0xffffffff,1
                        );
      uVar9 = 0;
      if (iVar3 != 0) goto LAB_100cc0fda;
      bVar10 = *(int *)(*(long *)(lVar5 + 0x1a8) + 0xc) != *(int *)(*(long *)(lVar5 + 0x1a8) + 8);
      if (bVar10) {
        pBVar6 = operator_new(0xd8);
        BootDevice::BootDevice(pBVar6);
        *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
        *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
        *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
        *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
        *(undefined4 *)(pBVar6 + 0xac) = 5;
        *(undefined4 *)(pBVar6 + 0xa8) = 0;
        *(undefined4 *)(pBVar6 + 0xb0) = 0;
        pBVar6[0xb4] = (BootDevice)0x1;
        puVar2 = PTR_DAT_1021e1818;
        *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
        *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
        local_b0 = pBVar6;
        FUN_100ccca10(param_1,&local_b0);
      }
      uVar9 = (uint)bVar10;
      local_d0 = *(Data **)(lVar5 + 0x1b0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 == 0) {
          QListData::detach((int)&local_d0);
          lVar7 = (long)*(int *)(local_d0 + 8);
          lVar1 = *(long *)(lVar5 + 0x1b0);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_d0 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_d0 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_d0 + 0xc))) {
            _memcpy(local_d0 + lVar7 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + 1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
        }
      }
      puVar2 = PTR_DAT_1021e1818;
      local_c8 = local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10;
      local_c0 = local_d0 + (long)*(int *)(local_d0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_d0 + 8) != *(int *)(local_d0 + 0xc)) {
        do {
          local_b8 = 1;
          pBVar6 = operator_new(0xd8);
          uVar4 = CVmDevice::getIndex();
          BootDevice::BootDevice(pBVar6);
          *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
          *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
          *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
          *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
          *(undefined4 *)(pBVar6 + 0xac) = 6;
          *(undefined4 *)(pBVar6 + 0xa8) = uVar4;
          *(uint *)(pBVar6 + 0xb0) = uVar9;
          pBVar6[0xb4] = (BootDevice)0x1;
          *(undefined **)pBVar6 = puVar2 + 0x10;
          *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
          local_d8 = pBVar6;
          FUN_100ccca10(param_1,&local_d8);
          uVar9 = uVar9 + 1;
          local_c8 = local_c8 + 8;
        } while (local_c8 != local_c0);
      }
      local_b8 = 1;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc0f20;
        }
        QListData::dispose(local_d0);
      }
LAB_100cc0f20:
      if (*(int *)(*(long *)(lVar5 + 0x1a0) + 0xc) == *(int *)(*(long *)(lVar5 + 0x1a0) + 8))
      goto LAB_100cc0fda;
      pBVar6 = operator_new(0xd8);
      BootDevice::BootDevice(pBVar6);
      *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
      *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
      *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
      *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
      *(undefined4 *)(pBVar6 + 0xac) = 3;
      *(undefined4 *)(pBVar6 + 0xa8) = 0;
      *(uint *)(pBVar6 + 0xb0) = uVar9;
      pBVar6[0xb4] = (BootDevice)0x1;
      puVar2 = PTR_DAT_1021e1818;
      *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
      *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
      local_e0 = pBVar6;
      FUN_100ccca10(param_1,&local_e0);
    }
  }
  uVar9 = uVar9 + 1;
LAB_100cc0fda:
  if (*(int *)(*(long *)(lVar5 + 0x1d0) + 0xc) != *(int *)(*(long *)(lVar5 + 0x1d0) + 8)) {
    pBVar6 = operator_new(0xd8);
    BootDevice::BootDevice(pBVar6);
    *(BootDevice **)(pBVar6 + 0xb8) = pBVar6 + 0xac;
    *(BootDevice **)(pBVar6 + 0xc0) = pBVar6 + 0xa8;
    *(BootDevice **)(pBVar6 + 200) = pBVar6 + 0xb0;
    *(BootDevice **)(pBVar6 + 0xd0) = pBVar6 + 0xb4;
    *(undefined4 *)(pBVar6 + 0xac) = 8;
    *(undefined4 *)(pBVar6 + 0xa8) = 0;
    *(uint *)(pBVar6 + 0xb0) = uVar9;
    pBVar6[0xb4] = (BootDevice)0x1;
    puVar2 = PTR_DAT_1021e1818;
    *(undefined **)pBVar6 = PTR_DAT_1021e1818 + 0x10;
    *(undefined **)(pBVar6 + 0x10) = puVar2 + 200;
    local_e8 = pBVar6;
    FUN_100ccca10(param_1,&local_e8);
  }
  return param_1;
}

