
undefined1
FUN_1000736d0(long param_1,undefined8 *param_2,undefined1 param_3,CVmEventParameter *param_4)

{
  long *plVar1;
  char cVar2;
  CVmEventParameter *pCVar3;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
  cVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_2,&local_58,0);
  if (cVar2 == '\0') {
    if (DAT_1011b55f8 < 2) {
      return 0;
    }
    local_68 = (QArrayData *)*param_2;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",2,"Can\'t get statistic for client %s",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100073e6f;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100073e6f:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return 0;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
    return 0;
  }
  pCVar3 = operator_new(0xd0);
  local_70 = (QArrayData *)*param_2;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_29 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("conn_stats_connection_id",0x18);
  CVmEventParameter::CVmEventParameter(pCVar3,1,&local_70,&local_78);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000737a7;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000737a7:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000737d7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000737d7:
  pCVar3 = operator_new(0xd0);
  local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_80,&local_88,param_3,0,10,0x20);
  local_90 = (QArrayData *)QString::fromAscii_helper("conn_stats_is_connected",0x17);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_80,&local_90);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073893;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100073893:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000738c5;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000738c5:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000738f5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000738f5:
  pCVar3 = operator_new(0xd0);
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_98,&local_a0,uStack_40,0,10,0x20);
  local_a8 = (QArrayData *)QString::fromAscii_helper("conn_stats_bytes_received",0x19);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_98,&local_a8);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000739bd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000739bd:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000739f5;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000739f5:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073a2b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100073a2b:
  pCVar3 = operator_new(0xd0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_b0,&local_b8,local_48,0,10,0x20);
  local_c0 = (QArrayData *)QString::fromAscii_helper("conn_stats_bytes_sent",0x15);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_b0,&local_c0);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073af3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100073af3:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073b2b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100073b2b:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073b61;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100073b61:
  pCVar3 = operator_new(0xd0);
  local_d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_c8,&local_d0,uStack_50,0,10,0x20);
  local_d8 = (QArrayData *)QString::fromAscii_helper("conn_stats_packages_received",0x1c);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_c8,&local_d8);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073c29;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100073c29:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073c61;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100073c61:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073c97;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100073c97:
  pCVar3 = operator_new(0xd0);
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_e0,&local_e8,local_58,0,10,0x20);
  local_f0 = (QArrayData *)QString::fromAscii_helper("conn_stats_packages_sent",0x18);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_e0,&local_f0);
  CVmEvent::addEventParameter(param_4);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073d5f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100073d5f:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100073d97;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100073d97:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return 1;
}

