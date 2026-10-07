
void FUN_100125950(long param_1,QString param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  QArrayData *pQVar4;
  long lVar5;
  QString *pQVar6;
  long lVar7;
  long lVar8;
  QString QVar9;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  Data *local_1a0;
  Data *local_198;
  Data *local_190;
  undefined4 local_188;
  QString local_180;
  undefined4 local_174;
  QArrayData *local_170;
  QString local_168;
  undefined4 local_15c;
  QArrayData *local_158;
  QString local_150;
  undefined4 local_144;
  QArrayData *local_140;
  QString local_138;
  undefined4 local_12c;
  QArrayData *local_128;
  QString local_120;
  undefined4 local_114;
  QArrayData *local_110;
  QString local_108;
  undefined4 local_fc;
  QArrayData *local_f8;
  QString local_f0;
  undefined4 local_e4;
  QArrayData *local_e0;
  QString local_d8;
  undefined4 local_cc;
  QArrayData *local_c8;
  QString local_c0;
  undefined4 local_b4;
  QArrayData *local_b0;
  QString local_a8;
  undefined4 local_9c;
  QArrayData *local_98;
  QString local_90;
  undefined4 local_84;
  QArrayData *local_80;
  QString local_78;
  undefined4 local_6c;
  QArrayData *local_68;
  QString local_60;
  undefined4 local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::getEventCode();
  CResult::setReturnCode((int)param_2.field0_0x0);
  CVmEventBase::getInitRequestId();
  CResult::setRequestId(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001259de;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001259de:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_48 = pQVar4;
  uVar2 = FUN_10011d510(param_1,&local_48);
  CResult::setOpCode(param_2.field0_0x0,uVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125a37;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100125a37:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_host_hardware_info",0x22);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125a9a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100125a9a:
  if (lVar5 != 0) {
    local_54 = 1;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_54);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125b01;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_100125b01:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_user_profile",0x1c);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125b64;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100125b64:
  if (lVar5 != 0) {
    local_6c = 9;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_6c);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125bcb;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_100125bcb:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_user_info",0x19);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125c2e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100125c2e:
  if (lVar5 != 0) {
    local_84 = 0x1c;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_84);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125c9e;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
LAB_100125c9e:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_98 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_host_common_info",0x20);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125d0d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100125d0d:
  if (lVar5 != 0) {
    local_9c = 10;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_9c);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125d83;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
  }
LAB_100125d83:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_b0 = (QArrayData *)
             QString::fromAscii_helper("ws_response_cmd_host_common_info_network_config",0x2f);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125df2;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100125df2:
  if (lVar5 != 0) {
    local_b4 = 0x1d;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_b4);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125e68;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
  }
LAB_100125e68:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_problem_report",0x1e);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125ed7;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100125ed7:
  if (lVar5 != 0) {
    local_cc = 0xb;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_cc);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100125f4d;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  }
LAB_100125f4d:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_get_snapshots_tree",0x22);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100125fbc;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100125fbc:
  if (lVar5 != 0) {
    local_e4 = 0x1f;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_e4);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100126032;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
  }
LAB_100126032:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_get_backups_tree",0x20);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001260a1;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1001260a1:
  if (lVar5 != 0) {
    local_fc = 0x20;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_fc);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_108);
    if (*(int *)local_108.field0_0x0 != -1) {
      if (*(int *)local_108.field0_0x0 != 0) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
        local_31 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100126117;
      }
      QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
    }
  }
LAB_100126117:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_110 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_net_service_status",0x22);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100126186;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100126186:
  if (lVar5 != 0) {
    local_114 = 0x19;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_114);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_120);
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001261fc;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
  }
LAB_1001261fc:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_128 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_login_event",0x1b);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012626b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10012626b:
  if (lVar5 != 0) {
    local_12c = 0x17;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_12c);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_138);
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001262e1;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
  }
LAB_1001262e1:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_login_event",0x1b);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100126350;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100126350:
  if (lVar5 != 0) {
    local_144 = 0x18;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_144);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_150);
    if (*(int *)local_150.field0_0x0 != -1) {
      if (*(int *)local_150.field0_0x0 != 0) {
        LOCK();
        *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
        local_31 = *(int *)local_150.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001263c6;
      }
      QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
    }
  }
LAB_1001263c6:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_158 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_security_info",0x1d);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100126435;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100126435:
  if (lVar5 != 0) {
    local_15c = 0x1b;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_15c);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_168);
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_31 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001264ab;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
  }
LAB_1001264ab:
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar9.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_170 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_get_perf_stats",0x1e);
  lVar5 = CVmEvent::getEventParameter(QVar9);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012651a;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10012651a:
  if (lVar5 != 0) {
    local_174 = 0x1e;
    pQVar6 = (QString *)FUN_1001340c0(param_2.field0_0x0 + 0x18,&local_174);
    CVmEventParameter::getParamValue();
    QString::operator=(pQVar6,&local_180);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100126590;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
  }
LAB_100126590:
  FUN_100127000(param_1,param_2.field0_0x0);
  FUN_100127230(param_1,param_2.field0_0x0);
  FUN_1001277a0(param_1,param_2.field0_0x0);
  FUN_100127b10(param_1,param_2.field0_0x0);
  FUN_100128020(param_1,param_2.field0_0x0);
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xf8);
  local_1a0 = (Data *)*plVar1;
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 == 0) {
      QListData::detach((int)&local_1a0);
      lVar7 = (long)*(int *)(local_1a0 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_1a0 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_1a0 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_1a0 + 0xc))) {
        _memcpy(local_1a0 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + 1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
    }
  }
  local_198 = local_1a0 + (long)*(int *)(local_1a0 + 8) * 8 + 0x10;
  local_190 = local_1a0 + (long)*(int *)(local_1a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_1a0 + 8) != *(int *)(local_1a0 + 0xc)) {
    do {
      local_188 = 1;
      CVmEventParameter::getParamName();
      iVar3 = QString::compare_helper
                        (local_1a8 + *(long *)(local_1a8 + 0x10),*(undefined4 *)(local_1a8 + 4),
                         "ws_response_cmd_standard_param",0xffffffff,1);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001266fb;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_1001266fb:
      if (iVar3 == 0) {
        CVmEventParameter::getParamValue();
        CResult::addParamToken(param_2);
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100126760;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
      }
LAB_100126760:
      local_198 = local_198 + 8;
    } while (local_198 != local_190);
  }
  local_188 = 1;
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001267b5;
    }
    QListData::dispose(local_1a0);
  }
LAB_1001267b5:
  FUN_100128240(param_1,param_2.field0_0x0);
  return;
}

