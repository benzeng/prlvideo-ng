
undefined8 FUN_10007b3d0(long param_1)

{
  QString QVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  CVmEventParameter *pCVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  CVmEventParameter *local_380;
  undefined8 *local_378;
  undefined8 *puStack_370;
  undefined8 *local_368;
  QArrayData *local_358;
  CVmEvent local_350 [224];
  QEvent local_270 [32];
  CVmGenericNetworkAdapter local_250 [408];
  QString local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  long local_88;
  long local_80;
  CBaseNode *local_78;
  QArrayData *local_70;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_10011a560(&local_40);
  cVar3 = (**(code **)(*(long *)local_40[2] + 0x10))();
  if (cVar3 == '\0') {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  lVar5 = 0;
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar5 = local_40[2];
    LOCK();
    plVar8 = local_40 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_1001323c0(&local_48,lVar5);
  FUN_100132480(&local_50,lVar5);
  FUN_100132540(&local_58,lVar5);
  if (*(int *)(local_48 + 4) != 0) {
    local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_90 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    CBaseNode::fromString
              ((CBaseNode *)(param_1 + 0x288),(QTypedArrayData<unsigned_short> *)&local_90,false,
               (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007b4e9;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10007b4e9:
    local_88 = param_1 + 0x28;
    local_80 = param_1 + 0x128;
    local_78 = (CBaseNode *)(param_1 + 0x288);
    FUN_1000b0980(*(undefined8 *)(param_1 + 0x20),&local_88);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007b540;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10007b540:
  if (*(int *)(local_50.field0_0x0 + 4) == 0) {
    iVar4 = FUN_1006d65a0();
    if ((iVar4 != 0) && (DAT_1011c3800 != 0)) {
      FUN_1002735a0();
    }
  }
  else {
    lVar5 = CVmConfiguration::getVmHardwareList();
    local_b0 = *(Data **)(lVar5 + 0x1d0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 == 0) {
        QListData::detach((int)&local_b0);
        lVar9 = (long)*(int *)(local_b0 + 8);
        lVar5 = *(long *)(lVar5 + 0x1d0);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_b0 + lVar9 * 8) &&
           (lVar10 = *(int *)(local_b0 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)(local_b0 + 0xc))) {
          _memcpy(local_b0 + lVar9 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar10 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
    }
    local_a8 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
    local_a0 = local_b0 + (long)*(int *)(local_b0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_b0 + 8) != *(int *)(local_b0 + 0xc)) {
      do {
        local_98 = 1;
        QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_a8;
        CVmGenericNetworkAdapter::getVirtualNetworkID();
        cVar3 = operator==(&local_b8,&local_50);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007b753;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_10007b753:
        if (cVar3 != '\0') {
          iVar4 = CVmDevice::getConnected();
          CVmGenericNetworkAdapter::CVmGenericNetworkAdapter
                    (local_250,(CVmGenericNetworkAdapter *)QVar1.field0_0x0);
          CVmEvent::CVmEvent(local_350);
          if (iVar4 == 1) {
            CVmDevice::setConnected((uint)local_250);
            FUN_10007bf60(QVar1.field0_0x0,local_250,local_350);
          }
          if (*(int *)(local_58 + 4) != 0) {
            local_358 = local_58;
            if (1 < *(int *)local_58 + 1U) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + 1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
            }
            CVmGenericNetworkAdapter::setVirtualNetworkID(QVar1);
            if (*(int *)local_358 != -1) {
              if (*(int *)local_358 != 0) {
                LOCK();
                *(int *)local_358 = *(int *)local_358 + -1;
                local_31 = *(int *)local_358 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007b81b;
              }
              QArrayData::deallocate(local_358,2,8);
            }
LAB_10007b81b:
            if (iVar4 == 1) {
              CVmDevice::setConnected((uint)QVar1.field0_0x0);
              FUN_10007bf60(local_250,QVar1.field0_0x0,local_350);
            }
          }
          local_378 = (undefined8 *)0x0;
          puStack_370 = (undefined8 *)0x0;
          local_368 = (undefined8 *)0x0;
          pCVar7 = operator_new(0xd0);
          CBaseNode::toString(SUB81(&local_388,0),(bool)((char)QVar1.field0_0x0 + '\x10'));
          local_390 = (QArrayData *)
                      QString::fromAscii_helper("vmcfg_vm_device_config_with_new_state",0x25);
          CVmEventParameter::CVmEventParameter(pCVar7,1,&local_388,&local_390);
          local_380 = pCVar7;
          if (puStack_370 == local_368) {
            FUN_10002da50(&local_378,&local_380);
          }
          else {
            *puStack_370 = pCVar7;
            puStack_370 = puStack_370 + 1;
          }
          if (*(int *)local_390 != -1) {
            if (*(int *)local_390 != 0) {
              LOCK();
              *(int *)local_390 = *(int *)local_390 + -1;
              local_31 = *(int *)local_390 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007b927;
            }
            QArrayData::deallocate(local_390,2,8);
          }
LAB_10007b927:
          if (*(int *)local_388 != -1) {
            if (*(int *)local_388 != 0) {
              LOCK();
              *(int *)local_388 = *(int *)local_388 + -1;
              local_31 = *(int *)local_388 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007b95d;
            }
            QArrayData::deallocate(local_388,2,8);
          }
LAB_10007b95d:
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          local_398 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            *(undefined4 *)(plVar8 + 1) = 1;
            plVar8[2] = 0;
            *plVar8 = (long)&PTR_FUN_100bef0d0;
            local_398 = plVar8;
          }
          FUN_100063770(uVar2,0x186bc,0,&local_378,0xbbb,&local_398);
          if (local_398 != (long *)0x0) {
            LOCK();
            plVar8 = local_398 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)(*local_398 + 0x10))();
            }
          }
          if (local_378 != (undefined8 *)0x0) {
            if (puStack_370 != local_378) {
              puStack_370 = (undefined8 *)
                            ((~((long)puStack_370 + (-8 - (long)local_378)) & 0xfffffffffffffff8U) +
                            (long)puStack_370);
            }
            operator_delete(local_378);
          }
          QEvent::~QEvent(local_270);
          CVmEventBase::~CVmEventBase((CVmEventBase *)local_350);
          CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_250);
        }
        local_a8 = local_a8 + 8;
      } while (local_a8 != local_a0);
    }
    local_98 = 1;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007ba9f;
      }
      QListData::dispose(local_b0);
    }
  }
LAB_10007ba9f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007bacf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10007bacf:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007baff;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10007baff:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007bb2f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10007bb2f:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return 1;
}

