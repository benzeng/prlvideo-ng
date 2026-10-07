
int FUN_100277320(long param_1,CVmGenericNetworkAdapter *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  QArrayData *pQVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  QString *pQVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_fffffffffffffbf8;
  undefined8 uStack_3f0;
  QArrayData *local_3e0;
  QArrayData *local_3d8;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  QArrayData *local_3c0;
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388 [16];
  undefined8 local_378;
  QArrayData *local_370;
  undefined1 local_368 [16];
  undefined8 *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  QString local_320;
  QString local_318;
  QString local_310;
  QString local_308;
  QString local_300;
  undefined1 local_2f8 [24];
  CVmGenericNetworkAdapter local_2e0 [408];
  undefined1 local_148 [16];
  undefined *local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined *local_128;
  undefined2 local_120;
  undefined1 local_118;
  undefined1 local_117;
  QArrayData *local_110;
  undefined1 local_108 [8];
  QString QStack_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined *local_e8;
  undefined2 local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d0 [24];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [16];
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffffbf8 >> 0x20);
  FUN_100278a20(&local_40,param_1);
  if (*(int *)(local_40 + 4) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    uVar8 = CVmDevice::getEmulatedType();
    uVar9 = CVmGenericNetworkAdapter::getBoundAdapterIndex();
    FUN_1008e3970("","LocalDevices",0,"[VMNET(%d) setConfig] emulated_type %d bound_idx %d",uVar1,
                  uVar8,CONCAT44(uVar11,uVar9));
  }
  if (*(int *)(param_1 + 0x1b8) == 4) {
    iVar10 = FUN_1002f1f20(param_1,param_2);
    uVar3 = DAT_1011c3650;
    if ((iVar10 < 0) && (DAT_1011b89d1 == '\0')) {
      DAT_1011b89d1 = '\x01';
      local_58 = (undefined1  [16])0x0;
      local_48 = 0;
      FUN_10006a060(local_70);
      FUN_1000648b0(uVar3,0x80004008,local_58,local_70);
      FUN_10006a680(local_70);
      uVar3 = local_58._0_8_;
      if ((void *)local_58._0_8_ != (void *)0x0) {
        if (local_58._8_8_ != local_58._0_8_) {
          local_58._8_8_ =
               (~(local_58._8_8_ + (-4 - local_58._0_8_)) & 0xfffffffffffffffcU) + local_58._8_8_;
        }
        operator_delete((void *)uVar3);
      }
    }
    goto LAB_1002782d1;
  }
  cVar6 = FUN_1006bc2e0();
  if (cVar6 != '\0') {
    local_80 = (QArrayData *)PTR_shared_null_100ba20d0;
    uVar13 = *(uint *)(param_1 + 0x1e8);
    QString::toUtf8();
    pQVar5 = local_88;
    lVar2 = *(long *)(local_88 + 0x10);
    QString::toUtf8();
    puVar14 = (undefined8 *)
              QString::sprintf((char *)&local_80,"/vz/tap_vm_stop.sh %d %s %s",(ulong)uVar13,
                               pQVar5 + lVar2,local_90 + *(long *)(local_90 + 0x10));
    local_78 = (QArrayData *)*puVar14;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100277506;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100277506:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100277536;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100277536:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100277566;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100277566:
    QString::toUtf8();
    iVar10 = _system((char *)(local_98 + *(long *)(local_98 + 0x10)));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002775be;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1002775be:
    FUN_1008e3970("","LocalDevices",0,"/vz/tap_vm_start.sh finished with rv %d",iVar10);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027760f;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_10027760f:
  local_a0 = PTR_shared_null_100ba2188;
  iVar10 = FUN_1006b3450(&local_a0,0,0);
  if (iVar10 < 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "[VMNET(%d) setConfig] Failed to create list of host network adapters: 0x%08x",
                  *(undefined4 *)(param_1 + 0x150),iVar10);
    uVar3 = DAT_1011c3650;
    local_b8 = (undefined1  [16])0x0;
    local_a8 = 0;
    FUN_10006a060(local_d0);
    FUN_1000648b0(uVar3,iVar10,local_b8,local_d0);
    FUN_10006a680(local_d0);
    uVar3 = local_b8._0_8_;
    if ((void *)local_b8._0_8_ != (void *)0x0) {
      if (local_b8._8_8_ != local_b8._0_8_) {
        local_b8._8_8_ =
             (~(local_b8._8_8_ + (-4 - local_b8._0_8_)) & 0xfffffffffffffffcU) + local_b8._8_8_;
      }
      operator_delete((void *)uVar3);
    }
  }
  else {
    cVar6 = FUN_1006bc2e0();
    puVar4 = PTR_shared_null_100ba20d0;
    if (cVar6 != '\0') {
      auVar16._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar16._0_8_ = PTR_shared_null_100ba20d0;
      auVar16._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      local_f8 = PTR_shared_null_100ba20d0;
      local_e8 = PTR_shared_null_100ba20d0;
      local_f0 = 0xffffffff;
      local_ec = 0;
      local_e0 = 0xffff;
      local_d8 = 0;
      local_d7 = 0;
      local_110 = (QArrayData *)PTR_shared_null_100ba20d0;
      _local_108 = auVar16;
      pQVar15 = (QString *)QString::sprintf((char *)&local_110,"bridge%d",0);
      QString::operator=((QString *)local_108,pQVar15);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100277700;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100277700:
      QString::operator=((QString *)(local_108 + 8),(QString *)local_108);
      local_f0 = 0x10000000;
      local_ec = 1;
      local_d8 = 1;
      FUN_10027a810(&local_a0,local_108);
      FUN_10027a4b0(local_108);
      uStack_3f0 = auVar16._8_8_;
      QStack_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)uStack_3f0;
      local_108 = (undefined1  [8])puVar4;
      local_f8 = puVar4;
      local_e8 = puVar4;
      local_f0 = 0xffffffff;
      local_ec = 0;
      local_e0 = 0xffff;
      local_d8 = 0;
      local_d7 = 0;
      local_110 = (QArrayData *)puVar4;
      pQVar15 = (QString *)QString::sprintf((char *)&local_110,"bridge%d",1);
      QString::operator=((QString *)local_108,pQVar15);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002777f9;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1002777f9:
      QString::operator=((QString *)(local_108 + 8),(QString *)local_108);
      local_f0 = 0x10000001;
      local_ec = 1;
      local_d8 = 1;
      FUN_10027a810(&local_a0,local_108);
      FUN_10027a4b0(local_108);
    }
    local_148._8_4_ = (int)PTR_shared_null_100ba20d0;
    local_148._0_8_ = PTR_shared_null_100ba20d0;
    local_148._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    local_138 = PTR_shared_null_100ba20d0;
    local_128 = PTR_shared_null_100ba20d0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_120 = 0xffff;
    local_118 = 0;
    local_117 = 0;
    uVar3 = *(undefined8 *)(DAT_1011c3698 + 0x110);
    CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_2e0,param_2);
    if (2 < DAT_1011b55f8) {
      FUN_1004135d0();
      uVar7 = FUN_100413890(uVar3,0);
      FUN_1008e3970("","LocalDevices",3,"[VMNET] isRestictedWebEnabled=%d",uVar7);
    }
    iVar10 = FUN_100060640();
    if (iVar10 != 0) {
      FUN_1004135d0();
      cVar6 = FUN_100413890(uVar3,0);
      if ((cVar6 != '\0') && (iVar10 = CVmDevice::getEmulatedType(), iVar10 != 0)) {
        FUN_1008e3970("","LocalDevices",0,
                      "[VMNET] Forcing Shared networking thanks to parental control");
        CVmDevice::setEmulatedType((uint)local_2e0);
      }
    }
    iVar10 = FUN_1006b9350(&local_a0,*(undefined8 *)(DAT_1011c3698 + 0x120),local_2e0,local_148);
    uVar11 = *(undefined4 *)(param_1 + 0x150);
    if (iVar10 < 0) {
      FUN_1008e3970("","LocalDevices",0,
                    "[VMNET(%d) setConfig] Adapter to connect to Virtual Network Card was not found: 0x%08x"
                    ,uVar11,iVar10);
      FUN_10006a060(local_2f8);
      FUN_10006a860(local_2f8,*(undefined4 *)(param_1 + 0x150),0);
      if (*(int *)(local_40 + 4) == 0) {
        local_300.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        iVar12 = CVmDevice::getEmulatedType();
        if (iVar12 == 0) {
          FUN_1006b3e40(&local_310,1,1);
          QString::operator=(&local_300,&local_310);
          if (*(int *)local_310.field0_0x0 != -1) {
            if (*(int *)local_310.field0_0x0 != 0) {
              LOCK();
              *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
              local_31 = *(int *)local_310.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002781e7;
            }
            QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
          }
        }
        else if (iVar12 == 3) {
          uVar13 = CVmGenericNetworkAdapter::getBoundAdapterIndex();
          FUN_1006b3e40(&local_318,uVar13 & 0xfffffff,1);
          QString::operator=(&local_300,&local_318);
          if (*(int *)local_318.field0_0x0 != -1) {
            if (*(int *)local_318.field0_0x0 != 0) {
              LOCK();
              *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
              local_31 = *(int *)local_318.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002781e7;
            }
            QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
          }
        }
        else if (iVar12 == 1) {
          FUN_1006b3e40(&local_308,0,1);
          QString::operator=(&local_300,&local_308);
          if (*(int *)local_308.field0_0x0 != -1) {
            if (*(int *)local_308.field0_0x0 != 0) {
              LOCK();
              *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
              local_31 = *(int *)local_308.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002781e7;
            }
            QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
          }
        }
        else {
          CVmGenericNetworkAdapter::getBoundAdapterName();
          QString::operator=(&local_300,&local_320);
          if (*(int *)local_320.field0_0x0 != -1) {
            if (*(int *)local_320.field0_0x0 != 0) {
              LOCK();
              *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
              local_31 = *(int *)local_320.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002781e7;
            }
            QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
          }
        }
LAB_1002781e7:
        FUN_10006a120(local_2f8,&local_300,1);
        if (*(int *)local_300.field0_0x0 != -1) {
          if (*(int *)local_300.field0_0x0 != 0) {
            LOCK();
            *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
            local_31 = *(int *)local_300.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100278235;
          }
          QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
        }
      }
      else {
        FUN_10006a120(local_2f8,&local_40,1);
      }
LAB_100278235:
      local_338 = (undefined1  [16])0x0;
      local_328 = 0;
      FUN_1000648b0(DAT_1011c3650,iVar10,local_338,local_2f8);
      uVar3 = local_338._0_8_;
      if ((void *)local_338._0_8_ != (void *)0x0) {
        if (local_338._8_8_ != local_338._0_8_) {
          local_338._8_8_ =
               (~(local_338._8_8_ + (-4 - local_338._0_8_)) & 0xfffffffffffffffcU) + local_338._8_8_
          ;
        }
        operator_delete((void *)uVar3);
      }
      FUN_10006a680(local_2f8);
    }
    else {
      QString::toUtf8();
      pQVar5 = local_340;
      lVar2 = *(long *)(local_340 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[VMNET(%d) setConfig] bind to %s %s",uVar11,pQVar5 + lVar2,
                    local_348 + *(long *)(local_348 + 0x10));
      if (*(int *)local_348 != -1) {
        if (*(int *)local_348 != 0) {
          LOCK();
          *(int *)local_348 = *(int *)local_348 + -1;
          local_31 = *(int *)local_348 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100277a20;
        }
        QArrayData::deallocate(local_348,1,8);
      }
LAB_100277a20:
      if (*(int *)local_340 != -1) {
        if (*(int *)local_340 != 0) {
          LOCK();
          *(int *)local_340 = *(int *)local_340 + -1;
          local_31 = *(int *)local_340 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100277a56;
        }
        QArrayData::deallocate(local_340,1,8);
      }
LAB_100277a56:
      *(undefined1 *)(param_1 + 0x1c3) = local_117;
      iVar10 = FUN_1002f0de0(param_1,local_148);
      if (iVar10 < 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x150);
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",0,
                      "[VMNET(%d) setConfig] Error 0x%08x binding to the adapter %s: Parallels networking error!"
                      ,uVar11,iVar10,local_350 + *(long *)(local_350 + 0x10));
        if (*(int *)local_350 != -1) {
          if (*(int *)local_350 != 0) {
            LOCK();
            *(int *)local_350 = *(int *)local_350 + -1;
            local_31 = *(int *)local_350 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100277e43;
          }
          QArrayData::deallocate(local_350,1,8);
        }
LAB_100277e43:
        local_368 = (undefined1  [16])0x0;
        local_358 = (undefined8 *)0x0;
        local_370 = (QArrayData *)PTR_shared_null_100ba20d0;
        QString::setNum((ulonglong)&local_370,*(int *)(param_1 + 0x150));
        if ((undefined8 *)local_368._8_8_ == local_358) {
          FUN_1000b5140(local_368,&local_370);
          puVar14 = (undefined8 *)local_368._8_8_;
        }
        else {
          *(QArrayData **)local_368._8_8_ = local_370;
          if (1 < *(int *)local_370 + 1U) {
            LOCK();
            *(int *)local_370 = *(int *)local_370 + 1;
            local_31 = *(int *)local_370 != 0;
            UNLOCK();
          }
          puVar14 = (undefined8 *)(local_368._8_8_ + 8);
          local_368._8_8_ = puVar14;
        }
        if (puVar14 == local_358) {
          FUN_1000b5140(local_368,local_148 + 8);
        }
        else {
          *puVar14 = local_148._8_8_;
          if (1 < *(int *)local_148._8_8_ + 1U) {
            LOCK();
            *(int *)local_148._8_8_ = *(int *)local_148._8_8_ + 1;
            local_31 = *(int *)local_148._8_8_ != 0;
            UNLOCK();
            puVar14 = (undefined8 *)local_368._8_8_;
          }
          local_368._8_8_ = puVar14 + 1;
        }
        uVar3 = DAT_1011c3650;
        local_388 = (undefined1  [16])0x0;
        local_378 = 0;
        FUN_10002ddb0(local_3b8,local_368);
        FUN_10006a5d0(local_3a0,local_3b8);
        FUN_1000648b0(uVar3,iVar10,local_388,local_3a0);
        FUN_10006a680(local_3a0);
        FUN_10002d9d0(local_3b8);
        uVar3 = local_388._0_8_;
        if ((void *)local_388._0_8_ != (void *)0x0) {
          if (local_388._8_8_ != local_388._0_8_) {
            local_388._8_8_ =
                 (~(local_388._8_8_ + (-4 - local_388._0_8_)) & 0xfffffffffffffffcU) +
                 local_388._8_8_;
          }
          operator_delete((void *)uVar3);
        }
        if (*(int *)local_370 != -1) {
          if (*(int *)local_370 != 0) {
            LOCK();
            *(int *)local_370 = *(int *)local_370 + -1;
            local_31 = *(int *)local_370 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002780ab;
          }
          QArrayData::deallocate(local_370,2,8);
        }
LAB_1002780ab:
        FUN_10002d9d0(local_368);
      }
      else {
        uVar11 = CVmDevice::getEmulatedType();
        *(undefined4 *)(param_1 + 0x1e8) = uVar11;
        cVar6 = FUN_1006bc2e0();
        iVar10 = 0;
        if (cVar6 != '\0') {
          local_3c8 = (QArrayData *)PTR_shared_null_100ba20d0;
          uVar13 = *(uint *)(param_1 + 0x1e8);
          QString::toUtf8();
          lVar2 = *(long *)(local_3d0 + 0x10);
          QString::toUtf8();
          puVar14 = (undefined8 *)
                    QString::sprintf((char *)&local_3c8,"/vz/tap_vm_start.sh %d %s %s",(ulong)uVar13
                                     ,local_3d0 + lVar2,local_3d8 + *(long *)(local_3d8 + 0x10));
          local_3c0 = (QArrayData *)*puVar14;
          if (1 < *(int *)local_3c0 + 1U) {
            LOCK();
            *(int *)local_3c0 = *(int *)local_3c0 + 1;
            local_31 = *(int *)local_3c0 != 0;
            UNLOCK();
          }
          if (*(int *)local_3d8 != -1) {
            if (*(int *)local_3d8 != 0) {
              LOCK();
              *(int *)local_3d8 = *(int *)local_3d8 + -1;
              local_31 = *(int *)local_3d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100277b64;
            }
            QArrayData::deallocate(local_3d8,1,8);
          }
LAB_100277b64:
          if (*(int *)local_3d0 != -1) {
            if (*(int *)local_3d0 != 0) {
              LOCK();
              *(int *)local_3d0 = *(int *)local_3d0 + -1;
              local_31 = *(int *)local_3d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100277b9a;
            }
            QArrayData::deallocate(local_3d0,1,8);
          }
LAB_100277b9a:
          if (*(int *)local_3c8 != -1) {
            if (*(int *)local_3c8 != 0) {
              LOCK();
              *(int *)local_3c8 = *(int *)local_3c8 + -1;
              local_31 = *(int *)local_3c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100277bd0;
            }
            QArrayData::deallocate(local_3c8,2,8);
          }
LAB_100277bd0:
          QString::toUtf8();
          iVar12 = _system((char *)(local_3e0 + *(long *)(local_3e0 + 0x10)));
          if (*(int *)local_3e0 != -1) {
            if (*(int *)local_3e0 != 0) {
              LOCK();
              *(int *)local_3e0 = *(int *)local_3e0 + -1;
              local_31 = *(int *)local_3e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100277c2b;
            }
            QArrayData::deallocate(local_3e0,1,8);
          }
LAB_100277c2b:
          iVar10 = 0;
          FUN_1008e3970("","LocalDevices",0,"/vz/tap_vm_start.sh finished with rv %d",iVar12);
          if (*(int *)local_3c0 != -1) {
            if (*(int *)local_3c0 != 0) {
              LOCK();
              *(int *)local_3c0 = *(int *)local_3c0 + -1;
              local_31 = *(int *)local_3c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002782ad;
            }
            QArrayData::deallocate(local_3c0,2,8);
          }
        }
      }
    }
LAB_1002782ad:
    CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_2e0);
    FUN_10027a4b0(local_148);
  }
  FUN_10027a3f0(&local_a0);
LAB_1002782d1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar10;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return iVar10;
}

