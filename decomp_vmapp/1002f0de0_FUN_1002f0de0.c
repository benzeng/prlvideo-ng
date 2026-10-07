
undefined8 FUN_1002f0de0(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  undefined1 local_1ba [2];
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  void *local_168;
  void *pvStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  undefined1 local_109;
  undefined1 local_108 [40];
  int local_e0;
  uint local_d8;
  char local_d4;
  char local_cc [20];
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_68 [16];
  byte local_58;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] != 0) {
      ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  iVar7 = CVmDevice::getEmulatedType();
  FUN_100278b20(param_1,local_108);
  local_b0 = *(undefined4 *)(param_1 + 0x1f0);
  local_d8 = (uint)*(byte *)(param_2 + 0x31);
  if (*(byte *)(param_2 + 0x31) == 0) {
    if (iVar7 == 1) {
      QString::toUtf8();
      cVar6 = FUN_1006c62a0(local_118 + *(long *)(local_118 + 0x10));
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_109 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_109) goto LAB_1002f0f30;
        }
        QArrayData::deallocate(local_118,1,8);
      }
LAB_1002f0f30:
      if (cVar6 != '\0') {
        local_130 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
        QString::arg(&local_128,&local_130,param_2,0,0x20);
        QString::arg(&local_120,&local_128,param_2 + 8,0,0x20);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_109 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_109) goto LAB_1002f0fc8;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1002f0fc8:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_109 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_109) goto LAB_1002f1004;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1002f1004:
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        FUN_1000b5140(&local_148,&local_120);
        uVar9 = DAT_1011c3650;
        local_168 = (void *)0x0;
        pvStack_160 = (void *)0x0;
        local_158 = 0;
        FUN_10002ddb0(local_198,&local_148);
        FUN_10006a5d0(local_180,local_198);
        FUN_1000648b0(uVar9,0x80004015,&local_168,local_180);
        FUN_10006a680(local_180);
        FUN_10002d9d0(local_198);
        if (local_168 != (void *)0x0) {
          if (pvStack_160 != local_168) {
            pvStack_160 = (void *)((~((long)pvStack_160 + (-4 - (long)local_168)) &
                                   0xfffffffffffffffcU) + (long)pvStack_160);
          }
          operator_delete(local_168);
        }
        FUN_10002d9d0(&local_148);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_109 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_109) goto LAB_1002f1121;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
    }
LAB_1002f1121:
    QString::toUtf8();
    iVar8 = FUN_1002f2890(local_1a0 + *(long *)(local_1a0 + 0x10),local_68);
    if ((iVar8 != 0) || (local_e0 = 1, (local_58 & 0x80) == 0)) {
      local_e0 = 0;
    }
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_109 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_109) goto LAB_1002f1197;
      }
      QArrayData::deallocate(local_1a0,1,8);
    }
LAB_1002f1197:
    if ((iVar7 == 2) && (cVar6 = CVmGenericNetworkAdapter::isForceHostMacAddress(), cVar6 != '\0'))
    {
      local_e0 = 1;
    }
    QString::toUtf8();
    cVar6 = FUN_1006c4dc0(local_1a8 + *(long *)(local_1a8 + 0x10));
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_109 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_109) goto LAB_1002f1213;
      }
      QArrayData::deallocate(local_1a8,1,8);
    }
LAB_1002f1213:
    if (cVar6 != '\0') {
      if (0 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",1,"VMNET: interface %s looks like ethernet bridge",
                      local_1b0 + *(long *)(local_1b0 + 0x10));
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_109 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_109) goto LAB_1002f129e;
          }
          QArrayData::deallocate(local_1b0,1,8);
        }
      }
LAB_1002f129e:
      local_e0 = 1;
    }
    iVar8 = FUN_1007da300("devices.net.force_wifi",0);
    if ((iVar7 == 2) && (iVar8 != 0)) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",1,"forced wifi-like networking");
      }
      local_e0 = 1;
    }
    if ((local_e0 != 0) && (1 < DAT_1011b55f8)) {
      FUN_1008e3970("","LocalDevices",2,"bind to wifi, dhcp_use_host_mac is %d",(int)local_d4);
    }
    local_1b8 = (QArrayData *)PTR_shared_null_100ba20d0;
    QString::toUtf8();
    cVar6 = FUN_1006c1d20(local_1c8 + *(long *)(local_1c8 + 0x10),&local_1b8,local_1ba);
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_109 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_109) goto LAB_1002f13ba;
      }
      QArrayData::deallocate(local_1c8,1,8);
    }
LAB_1002f13ba:
    if (cVar6 != '\0') {
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",2,"bindAdapter: Adapter %s is a VLAN-interface.",
                      local_1d0 + *(long *)(local_1d0 + 0x10));
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_109 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_109) goto LAB_1002f143f;
          }
          QArrayData::deallocate(local_1d0,1,8);
        }
      }
LAB_1002f143f:
      QString::toUtf8();
      _strncpy(local_cc,(char *)(local_1d8 + *(long *)(local_1d8 + 0x10)),0x10);
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_109 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_109) goto LAB_1002f14aa;
        }
        QArrayData::deallocate(local_1d8,1,8);
      }
    }
LAB_1002f14aa:
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        local_109 = *(int *)local_1b8 != 0;
        UNLOCK();
        if ((bool)local_109) goto LAB_1002f14e6;
      }
      QArrayData::deallocate(local_1b8,2,8);
    }
  }
LAB_1002f14e6:
  plVar3 = *(long **)(param_1 + 0x170);
  pcVar4 = *(code **)(*plVar3 + 0x28);
  QString::toUtf8();
  uVar9 = 0;
  if (*(char *)(param_1 + 0x169) == '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0x160);
  }
  iVar7 = (*pcVar4)(plVar3,local_1e0 + *(long *)(local_1e0 + 0x10),uVar9,0x81000,local_108);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_109 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_109) goto LAB_1002f1574;
    }
    QArrayData::deallocate(local_1e0,1,8);
  }
LAB_1002f1574:
  _free(local_b8);
  if (iVar7 == 0) {
    uVar9 = 0;
    QString::operator=((QString *)(param_1 + 0x1b0),(QString *)(param_2 + 8));
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CNetDevice %d]\tCann\'t bind to %s: error %d",uVar1,
                  local_1e8 + *(long *)(local_1e8 + 0x10),iVar7);
    uVar9 = 0x80004009;
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_109 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_109) goto LAB_1002f1628;
      }
      QArrayData::deallocate(local_1e8,1,8);
    }
  }
LAB_1002f1628:
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

