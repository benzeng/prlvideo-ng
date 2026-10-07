
undefined1 FUN_10006e130(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  CVmEventParameter *pCVar9;
  long lVar10;
  long lVar11;
  long *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  long *local_2a0;
  CVmEvent local_298 [8];
  undefined1 local_290 [216];
  QEvent local_1b8 [32];
  long *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  CVmEventParameter *local_180;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined8 *local_168;
  long *local_160;
  QArrayData *local_158;
  long *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmUsbDevice local_130 [240];
  long *local_40;
  undefined1 local_31;
  
  FUN_10011a560(&local_40);
  cVar3 = (**(code **)(*(long *)local_40[2] + 0x10))();
  if (cVar3 == '\0') {
    uVar4 = FUN_10006b4e0(param_1,param_2,0x80000366);
    goto LAB_10006e837;
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar10 = local_40[2];
    LOCK();
    plVar8 = local_40 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (lVar10 != 0) {
      iVar5 = FUN_100124560();
      if (iVar5 == 0xf) {
        CVmUsbDevice::CVmUsbDevice(local_130);
        FUN_1001246e0(&local_138,lVar10);
        FUN_10007f380(local_130,&local_138);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e22f;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_10006e22f:
        CVmUsbDevice::setConnectReason(local_130,0);
        local_148 = (QArrayData *)QString::fromAscii_helper("USB",3);
        FUN_10007f980(&local_140,local_130,&local_148);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e2a5;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_10006e2a5:
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_150 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          plVar8[2] = 0;
          *plVar8 = (long)&PTR_FUN_100bef0d0;
          local_150 = plVar8;
        }
        iVar5 = FUN_100090a80(uVar1,param_3,0xf,0,&local_140,&local_150);
        if (local_150 != (long *)0x0) {
          LOCK();
          plVar8 = local_150 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)(*local_150 + 0x10))();
          }
        }
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e368;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_10006e368:
        CVmUsbDevice::~CVmUsbDevice(local_130);
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = FUN_100124560(lVar10);
        uVar6 = FUN_100124620(lVar10);
        FUN_1001246e0(&local_158,lVar10);
        iVar5 = FUN_100090a80(uVar1,param_3,uVar7,uVar6,&local_158,param_2);
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e43f;
          }
          QArrayData::deallocate(local_158,2,8);
        }
      }
LAB_10006e43f:
      FUN_100119090(&local_160,param_2,iVar5);
      lVar11 = 0;
      if (local_160 != (long *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
        lVar11 = local_160[2];
        LOCK();
        plVar8 = local_160 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_160 + 0x10))();
        }
      }
      if (iVar5 < 0) {
        CVmEvent::CVmEvent(local_298);
        uVar7 = FUN_100124560(lVar10);
        FUN_1001246e0(&local_2a8,lVar10);
        FUN_100259440(&local_2a0,uVar7,&local_2a8);
        if (*(int *)local_2a8 != -1) {
          if (*(int *)local_2a8 != 0) {
            LOCK();
            *(int *)local_2a8 = *(int *)local_2a8 + -1;
            local_31 = *(int *)local_2a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e59f;
          }
          QArrayData::deallocate(local_2a8,2,8);
        }
LAB_10006e59f:
        lVar10 = 0;
        if (local_2a0 != (long *)0x0) {
          lVar10 = local_2a0[2];
        }
        FUN_10006ec80(lVar10,local_298);
        CVmEventBase::setEventCode((int)local_298);
        CBaseNode::toString(SUB81(&local_2b0,0),SUB81(local_290,0));
        FUN_100125480(lVar11,&local_2b0);
        if (*(int *)local_2b0 != -1) {
          if (*(int *)local_2b0 != 0) {
            LOCK();
            *(int *)local_2b0 = *(int *)local_2b0 + -1;
            local_31 = *(int *)local_2b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e628;
          }
          QArrayData::deallocate(local_2b0,2,8);
        }
LAB_10006e628:
        if (local_2a0 != (long *)0x0) {
          LOCK();
          plVar8 = local_2a0 + 1;
          lVar10 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)(*local_2a0 + 0x10))();
          }
        }
        QEvent::~QEvent(local_1b8);
        CVmEventBase::~CVmEventBase((CVmEventBase *)local_298);
      }
      else {
        local_178 = (undefined8 *)0x0;
        puStack_170 = (undefined8 *)0x0;
        local_168 = (undefined8 *)0x0;
        pCVar9 = operator_new(0xd0);
        FUN_1001246e0(&local_188,lVar10);
        local_190 = (QArrayData *)
                    QString::fromAscii_helper("vmcfg_vm_device_config_with_new_state",0x25);
        CVmEventParameter::CVmEventParameter(pCVar9,1,&local_188);
        local_180 = pCVar9;
        if (puStack_170 == local_168) {
          FUN_10002da50(&local_178,&local_180);
        }
        else {
          *puStack_170 = pCVar9;
          puStack_170 = puStack_170 + 1;
        }
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e6b6;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_10006e6b6:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006e6ec;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_10006e6ec:
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_198 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          plVar8[2] = 0;
          *plVar8 = (long)&PTR_FUN_100bef0d0;
          local_198 = plVar8;
        }
        FUN_100063770(uVar1,0x186bc,0,&local_178,0xbbb,&local_198);
        if (local_198 != (long *)0x0) {
          LOCK();
          plVar8 = local_198 + 1;
          lVar10 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)(*local_198 + 0x10))();
          }
        }
        if (local_178 != (undefined8 *)0x0) {
          if (puStack_170 != local_178) {
            puStack_170 = (undefined8 *)
                          ((~((long)puStack_170 + (-8 - (long)local_178)) & 0xfffffffffffffff8U) +
                          (long)puStack_170);
          }
          operator_delete(local_178);
        }
      }
      lVar10 = 0;
      if (local_160 != (long *)0x0) {
        lVar10 = local_160[2];
      }
      FUN_10011cf50(&local_2b8,lVar10);
      lVar10 = 0;
      if (local_2b8 != (long *)0x0) {
        lVar10 = local_2b8[2];
      }
      uVar4 = FUN_10006b660(param_1,param_2,lVar10);
      if (local_2b8 != (long *)0x0) {
        LOCK();
        plVar8 = local_2b8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*local_2b8 + 0x10))();
        }
      }
      if (local_160 != (long *)0x0) {
        LOCK();
        plVar8 = local_160 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*local_160 + 0x10))();
        }
      }
      goto LAB_10006e837;
    }
  }
  uVar4 = FUN_10006b4e0(param_1,param_2,0x80000366);
LAB_10006e837:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar4;
}

