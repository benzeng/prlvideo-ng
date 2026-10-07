
void FUN_1000fb660(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  CVmEventParameter *pCVar5;
  CVmEventParameter *pCVar6;
  long lVar7;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  QArrayData *local_d0;
  long *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  long *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100118af0(&local_40,0x3e9,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb6d5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000fb6d5:
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  FUN_10011cf50(&local_50,lVar7);
  pCVar6 = (CVmEventParameter *)0x0;
  if (local_50 != (long *)0x0) {
    pCVar6 = (CVmEventParameter *)local_50[2];
  }
  pCVar5 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_58,0),(bool)((char)param_1 + 'p'));
  local_60 = (QArrayData *)QString::fromAscii_helper("vm_cfg",6);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_58,&local_60);
  CVmEvent::addEventParameter(pCVar6);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb78b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000fb78b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb7bb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000fb7bb:
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  FUN_10011cf50(&local_68,lVar7);
  pCVar6 = (CVmEventParameter *)0x0;
  if (local_68 != (long *)0x0) {
    pCVar6 = (CVmEventParameter *)local_68[2];
  }
  pCVar5 = operator_new(0xd0);
  CDispatcherConfig::getDispatcherSettings();
  bVar3 = (bool)CDispatcherSettings::getCommonPreferences();
  CBaseNode::toString(SUB81(&local_70,0),bVar3);
  local_78 = (QArrayData *)QString::fromAscii_helper("disp_common_prefs",0x11);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_70,&local_78);
  CVmEvent::addEventParameter(pCVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb8a5;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000fb8a5:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb8d5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000fb8d5:
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  FUN_10011cf50(&local_80,lVar7);
  pCVar6 = (CVmEventParameter *)0x0;
  if (local_80 != (long *)0x0) {
    pCVar6 = (CVmEventParameter *)local_80[2];
  }
  pCVar5 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_88,0),(bool)((char)param_1 + '\x10'));
  local_90 = (QArrayData *)QString::fromAscii_helper("vm_network_config_prefs",0x17);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_88,&local_90);
  CVmEvent::addEventParameter(pCVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb9bb;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000fb9bb:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb9eb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000fb9eb:
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  FUN_10011cf50(&local_98,lVar7);
  pCVar6 = (CVmEventParameter *)0x0;
  if (local_98 != (long *)0x0) {
    pCVar6 = (CVmEventParameter *)local_98[2];
  }
  pCVar5 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_a0,0),SUB81(*(undefined8 *)(param_1 + 0x300),0));
  local_a8 = (QArrayData *)QString::fromAscii_helper("host_hw_info",0xc);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_a0,&local_a8);
  CVmEvent::addEventParameter(pCVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbadd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000fbadd:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbb13;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000fbb13:
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmEncryption();
  cVar4 = CVmEncryption::isEnabled();
  if (cVar4 != '\0') {
    FUN_1008e3970("","vm",0,"The standalone prl_vm_app doesn\'t support encrypted vms");
  }
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  FUN_10011cf50(&local_b0,lVar7);
  pCVar6 = (CVmEventParameter *)0x0;
  if (local_b0 != (long *)0x0) {
    pCVar6 = (CVmEventParameter *)local_b0[2];
  }
  pCVar5 = operator_new(0xd0);
  puVar2 = PTR_shared_null_100ba20d0;
  local_b8 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (1 < *(int *)PTR_shared_null_100ba20d0 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + 1;
    local_31 = *(int *)puVar2 != 0;
    UNLOCK();
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("encrypted_vm_password_hash",0x1a);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_b8,&local_c0);
  CVmEvent::addEventParameter(pCVar6);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbc4c;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1000fbc4c:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbc82;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1000fbc82:
  if (local_b0 != (long *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  FUN_10011cf50(&local_d8);
  cVar4 = '\0';
  if (local_d8 != (long *)0x0) {
    cVar4 = (char)local_d8[2];
  }
  CBaseNode::toString(SUB81(&local_d0,0),(bool)(cVar4 + '\b'));
  local_e0 = (long *)0x0;
  FUN_100069140(&local_c8,0x3e9,&local_d0,&local_e0,0,1,0);
  if (local_e0 != (long *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbd7b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1000fbd7b:
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  FUN_1008e3970("","vm",0,"send the start command");
  local_e8 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  FUN_1007d3370(param_1,&local_e8);
  if (local_e8 != (long *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  local_f0 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  FUN_1007d33c0(param_1,param_1,&local_f0);
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
    }
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fbeaa;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_1000fbeaa:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

