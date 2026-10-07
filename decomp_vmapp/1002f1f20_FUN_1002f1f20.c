
undefined8 FUN_1002f1f20(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  dispatch_queue_t pdVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  bool bVar10;
  long local_138;
  QArrayData *local_130;
  undefined4 local_128;
  undefined2 local_124;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  undefined1 local_e9;
  undefined1 local_e8 [16];
  undefined1 local_d8 [40];
  int local_b0;
  void *local_88;
  undefined1 local_78;
  long local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  if (*(long *)(param_1 + 0x1f8) == 0) {
    pdVar6 = _dispatch_queue_create((char *)0x0,(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(param_1 + 0x1f8) = pdVar6;
    if (pdVar6 == (dispatch_queue_t)0x0) {
      FUN_1008e3970("","LocalDevices",0,"vmnet: Failed to create dispatch queue.");
LAB_1002f2571:
      uVar9 = 0x80004009;
      goto LAB_1002f2576;
    }
  }
  FUN_100278b20(param_1,local_d8);
  iVar4 = CVmDevice::getEmulatedType();
  local_78 = iVar4 != 0;
  if (iVar4 == 0) {
    QString::fromUtf8_helper((char *)&local_f8,0xa1f64f);
    QString::operator=((QString *)(param_1 + 0x1b0),&local_f8);
    if (*(int *)local_f8.field0_0x0 != -1) {
      local_100.field0_0x0 = local_f8.field0_0x0;
      if (*(int *)local_f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
        iVar4 = *(int *)local_f8.field0_0x0;
        UNLOCK();
        goto joined_r0x0001002f2034;
      }
      goto LAB_1002f203d;
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_100,0xa1f63e);
    QString::operator=((QString *)(param_1 + 0x1b0),&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        iVar4 = *(int *)local_100.field0_0x0;
        UNLOCK();
joined_r0x0001002f2034:
        local_e9 = iVar4 != 0;
        if ((bool)local_e9) goto LAB_1002f204c;
      }
LAB_1002f203d:
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
  }
LAB_1002f204c:
  DAT_101117228 = FUN_1007da300("devices.net.vmnet.patch_mac",1);
  DAT_1011b9e68 = FUN_1007da300("devices.net.vmnet.store_mac",0);
  local_b0 = DAT_101117228;
  local_58 = *(undefined8 *)(param_1 + 0x1f8);
  local_68 = FUN_1002f27c0;
  local_60 = FUN_1002f2880;
  local_70 = param_1;
  CVmGenericNetworkAdapter::getVMNetUuid();
  FUN_1007d6bf0(&local_108,&local_50);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_e9 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_e9) goto LAB_1002f2110;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1002f2110:
  iVar4 = 0;
  do {
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    plVar2 = *(long **)(param_1 + 0x170);
    pcVar3 = *(code **)(*plVar2 + 0x28);
    QString::toUtf8();
    uVar9 = 0;
    if (*(char *)(param_1 + 0x169) == '\0') {
      uVar9 = *(undefined8 *)(param_1 + 0x160);
    }
    iVar5 = (*pcVar3)(plVar2,local_110 + *(long *)(local_110 + 0x10),uVar9,0x81000,local_d8);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_e9 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_e9) goto LAB_1002f21f2;
      }
      QArrayData::deallocate(local_110,1,8);
    }
LAB_1002f21f2:
    if (iVar5 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x150);
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[CNetDevice %d]\tCann\'t bind to %s: error %d",uVar1,
                    local_118 + *(long *)(local_118 + 0x10),iVar5);
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_e9 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_e9) goto LAB_1002f23f0;
        }
        QArrayData::deallocate(local_118,1,8);
      }
LAB_1002f23f0:
      _free(local_88);
      goto LAB_1002f2571;
    }
    QMutex::lock();
    lVar7 = FUN_1007d87f0();
    if (*(char *)(param_1 + 0xa4) == '\0') {
      do {
        uVar8 = FUN_1007d87f0();
        if ((lVar7 + 3000000U < uVar8) || (0x2d0370 < ((lVar7 + 3000000U) - uVar8) - 50000)) break;
        QWaitCondition::wait((QMutex *)(param_1 + 0x98),param_1 + 0x90);
      } while (*(char *)(param_1 + 0xa4) == '\0');
    }
    QMutex::unlock();
    if (*(char *)(param_1 + 0xa4) == '\0') {
      FUN_1008e3970("","LocalDevices",0,"[CNetDevice %d]\tBind timeout",
                    *(undefined4 *)(param_1 + 0x150));
      (**(code **)(**(long **)(param_1 + 0x170) + 0x20))();
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xa0);
      if (-1 < iVar5) {
        _free(local_88);
        CVmGenericNetworkAdapter::getVMNetUuid();
        FUN_1007d6bf0(&local_120,local_e8);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_e9 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_e9) goto LAB_1002f246b;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1002f246b:
        iVar4 = _memcmp(local_e8,(void *)(param_1 + 0xa5),0x10);
        bVar10 = iVar4 != 0;
        if (DAT_101117228 == 0) {
          local_124 = 0;
          local_128 = 0;
          CVmGenericNetworkAdapter::getMacAddress();
          FUN_1006b6c60(&local_130,&local_128);
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_e9 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_e9) goto LAB_1002f2506;
            }
            QArrayData::deallocate(local_130,2,8);
          }
LAB_1002f2506:
          iVar4 = _memcmp(&local_128,(void *)(param_1 + 0x1bc),6);
          if (iVar4 != 0) {
            bVar10 = true;
          }
        }
        uVar9 = 0;
        if (bVar10) {
          local_138 = param_1;
          FUN_1002f2960(param_1 + 0x68,&local_138);
        }
        lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_1002f2576;
      }
    }
    FUN_1008e3970("","LocalDevices",0,"[CNetDevice %d]\t try %d: av_bind err %d",
                  *(undefined4 *)(param_1 + 0x150),iVar4,iVar5);
    if (0 < iVar4) break;
    iVar4 = iVar4 + 1;
    local_48 = 0;
    local_50 = 0;
  } while( true );
  _free(local_88);
  uVar9 = 0x80004009;
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1002f2576:
  if (lVar7 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

