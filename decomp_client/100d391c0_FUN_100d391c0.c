
void FUN_100d391c0(undefined8 param_1,undefined8 param_2,QString *param_3,undefined8 *param_4,
                  char param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  QString QVar4;
  int iVar5;
  QDomNode local_258 [8];
  QDomNode local_250 [8];
  QDomNode local_248 [8];
  QDomNode local_240 [8];
  QArrayData *local_238;
  QArrayData *local_230;
  QString local_228;
  QArrayData *local_220;
  QString local_218;
  QDomNode local_210 [8];
  QDomNode local_208 [8];
  QArrayData *local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QArrayData *local_1e8;
  QString local_1e0;
  QDomNode local_1d8 [8];
  QDomNode local_1d0 [8];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QDomNode local_1a0 [8];
  QArrayData *local_198;
  QString local_190;
  QDomNode local_188 [8];
  QDomNode local_180 [8];
  QArrayData *local_178;
  QString local_170;
  QArrayData *local_168;
  QString local_160;
  QDomNode local_158 [8];
  QDomNode local_150 [8];
  QArrayData *local_148;
  QString local_140;
  QArrayData *local_138;
  QString local_130;
  QDomNode local_128 [8];
  QDomNode local_120 [8];
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QDomNode local_f8 [8];
  QDomNode local_f0 [8];
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QDomNode local_c8 [8];
  QDomNode local_c0 [8];
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_4 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)((long)param_4 + 0x31) != '\0') {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("guid",4);
  local_48 = (QArrayData *)*param_4;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QDomElement::setAttribute(param_3,&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3926b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d3926b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3929b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d3929b:
  if (*(char *)(param_4 + 6) != '\0') {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("current",7);
    local_58 = (QArrayData *)QString::fromAscii_helper("yes",3);
    QDomElement::setAttribute(param_3,&local_50);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3930f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100d3930f:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3933f;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100d3933f:
  iVar5 = *(int *)((long)param_4 + 0x34);
  if (iVar5 == 3) {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("state",5);
    local_88 = (QArrayData *)QString::fromAscii_helper("suspend",7);
    QDomElement::setAttribute(param_3,&local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3944e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d3944e:
    if (*(int *)local_80.field0_0x0 != -1) {
      QVar4.field0_0x0 = local_80.field0_0x0;
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        iVar5 = *(int *)local_80.field0_0x0;
        UNLOCK();
joined_r0x000100d39471:
        local_31 = iVar5 != 0;
        if ((bool)local_31) goto LAB_100d395bf;
      }
LAB_100d395b0:
      QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
    }
  }
  else if (iVar5 == 2) {
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("state",5);
    local_78 = (QArrayData *)QString::fromAscii_helper("pause",5);
    QDomElement::setAttribute(param_3,&local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d393be;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d393be:
    if (*(int *)local_70.field0_0x0 != -1) {
      QVar4.field0_0x0 = local_70.field0_0x0;
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        iVar5 = *(int *)local_70.field0_0x0;
        UNLOCK();
        goto joined_r0x000100d39471;
      }
      goto LAB_100d395b0;
    }
  }
  else if (iVar5 == 1) {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("state",5);
    local_68 = (QArrayData *)QString::fromAscii_helper("poweron",7);
    QDomElement::setAttribute(param_3,&local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d394e7;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d394e7:
    if (*(int *)local_60.field0_0x0 != -1) {
      QVar4.field0_0x0 = local_60.field0_0x0;
      if (*(int *)local_60.field0_0x0 == 0) goto LAB_100d395b0;
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      iVar5 = *(int *)local_60.field0_0x0;
      UNLOCK();
      goto joined_r0x000100d39471;
    }
  }
  else {
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("state",5);
    local_98 = (QArrayData *)QString::fromAscii_helper("poweroff",8);
    QDomElement::setAttribute(param_3,&local_90);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d39589;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100d39589:
    if (*(int *)local_90.field0_0x0 != -1) {
      QVar4.field0_0x0 = local_90.field0_0x0;
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        iVar5 = *(int *)local_90.field0_0x0;
        UNLOCK();
        goto joined_r0x000100d39471;
      }
      goto LAB_100d395b0;
    }
  }
LAB_100d395bf:
  local_a8 = (QArrayData *)QString::fromAscii_helper("Name",4);
  QDomDocument::createElement(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39627;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100d39627:
  local_b8 = (QArrayData *)param_4[1];
  if (1 < *(int *)local_b8 + 1U) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_31 = *(int *)local_b8 != 0;
    UNLOCK();
  }
  QDomDocument::createTextNode(&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39693;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100d39693:
  QDomNode::appendChild(local_c0);
  QDomNode::~QDomNode(local_c0);
  QDomNode::appendChild(local_c8);
  QDomNode::~QDomNode(local_c8);
  local_d8 = (QArrayData *)QString::fromAscii_helper("DateTime",8);
  QDomDocument::createElement(&local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39743;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100d39743:
  local_e8 = (QArrayData *)param_4[2];
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_31 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QDomDocument::createTextNode(&local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d397af;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100d397af:
  QDomNode::appendChild(local_f0);
  QDomNode::~QDomNode(local_f0);
  QDomNode::appendChild(local_f8);
  QDomNode::~QDomNode(local_f8);
  local_108 = (QArrayData *)QString::fromAscii_helper("Creator",7);
  QDomDocument::createElement(&local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3985f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100d3985f:
  local_118 = (QArrayData *)param_4[3];
  if (1 < *(int *)local_118 + 1U) {
    LOCK();
    *(int *)local_118 = *(int *)local_118 + 1;
    local_31 = *(int *)local_118 != 0;
    UNLOCK();
  }
  QDomDocument::createTextNode(&local_110);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d398cb;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100d398cb:
  QDomNode::appendChild(local_120);
  QDomNode::~QDomNode(local_120);
  QDomNode::appendChild(local_128);
  QDomNode::~QDomNode(local_128);
  local_138 = (QArrayData *)QString::fromAscii_helper("ScreenShot",10);
  QDomDocument::createElement(&local_130);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3997b;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100d3997b:
  local_148 = (QArrayData *)param_4[4];
  if (1 < *(int *)local_148 + 1U) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + 1;
    local_31 = *(int *)local_148 != 0;
    UNLOCK();
  }
  QDomDocument::createTextNode(&local_140);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d399e7;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100d399e7:
  QDomNode::appendChild(local_150);
  QDomNode::~QDomNode(local_150);
  QDomNode::appendChild(local_158);
  QDomNode::~QDomNode(local_158);
  local_168 = (QArrayData *)QString::fromAscii_helper("Description",0xb);
  QDomDocument::createElement(&local_160);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39a97;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100d39a97:
  local_178 = (QArrayData *)param_4[5];
  if (1 < *(int *)local_178 + 1U) {
    LOCK();
    *(int *)local_178 = *(int *)local_178 + 1;
    local_31 = *(int *)local_178 != 0;
    UNLOCK();
  }
  QDomDocument::createCDATASection(&local_170);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39b03;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100d39b03:
  QDomNode::appendChild(local_180);
  QDomNode::~QDomNode(local_180);
  QDomNode::appendChild(local_188);
  QDomNode::~QDomNode(local_188);
  if (param_5 == '\0') goto LAB_100d3a09a;
  local_198 = (QArrayData *)QString::fromAscii_helper("Runtime",7);
  QDomDocument::createElement(&local_190);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39bbc;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100d39bbc:
  QDomNode::appendChild(local_1a0);
  QDomNode::~QDomNode(local_1a0);
  local_1b0 = (QArrayData *)QString::fromAscii_helper("Size",4);
  QDomDocument::createElement(&local_1a8);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39c46;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100d39c46:
  local_1c8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_1c0,&local_1c8,param_4[7],0,10,0x20);
  QDomDocument::createTextNode(&local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39cd3;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100d39cd3:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39d09;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100d39d09:
  QDomNode::appendChild(local_1d0);
  QDomNode::~QDomNode(local_1d0);
  QDomNode::appendChild(local_1d8);
  QDomNode::~QDomNode(local_1d8);
  QDomNode::~QDomNode((QDomNode *)&local_1b8);
  QDomNode::~QDomNode((QDomNode *)&local_1a8);
  local_1e8 = (QArrayData *)QString::fromAscii_helper("OsVersion",9);
  QDomDocument::createElement(&local_1e0);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39dd5;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100d39dd5:
  local_200 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_1f8,&local_200,*(undefined4 *)(param_4 + 8),0,10,0x20);
  QDomDocument::createTextNode(&local_1f0);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39e61;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100d39e61:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39e97;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100d39e97:
  QDomNode::appendChild(local_208);
  QDomNode::~QDomNode(local_208);
  QDomNode::appendChild(local_210);
  QDomNode::~QDomNode(local_210);
  QDomNode::~QDomNode((QDomNode *)&local_1f0);
  QDomNode::~QDomNode((QDomNode *)&local_1e0);
  local_220 = (QArrayData *)QString::fromAscii_helper("UnfinishedOp",0xc);
  QDomDocument::createElement(&local_218);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_31 = *(int *)local_220 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39f63;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_100d39f63:
  local_238 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_230,&local_238,(long)param_4[8] >> 0x20,0,10,0x20);
  QDomDocument::createTextNode(&local_228);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d39ff4;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100d39ff4:
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3a02a;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100d3a02a:
  QDomNode::appendChild(local_240);
  QDomNode::~QDomNode(local_240);
  QDomNode::appendChild(local_248);
  QDomNode::~QDomNode(local_248);
  QDomNode::~QDomNode((QDomNode *)&local_228);
  QDomNode::~QDomNode((QDomNode *)&local_218);
  QDomNode::~QDomNode((QDomNode *)&local_190);
LAB_100d3a09a:
  if (*(int *)(param_4[10] + 8) < *(int *)(param_4[10] + 0xc)) {
    iVar5 = 0;
    do {
      FUN_100d39100(local_250);
      uVar3 = 0;
      if (iVar5 < *(int *)(param_4[10] + 0xc) - *(int *)(param_4[10] + 8)) {
        puVar2 = (undefined8 *)FUN_100d3cd40(param_4 + 10,iVar5,extraout_RDX,0);
        uVar3 = *puVar2;
      }
      FUN_100d391c0(param_1,param_2,local_250,uVar3,param_5);
      cVar1 = QDomNode::hasChildNodes();
      if (cVar1 != '\0') {
        QDomNode::appendChild(local_258);
        QDomNode::~QDomNode(local_258);
      }
      QDomNode::~QDomNode(local_250);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_4[10] + 0xc) - *(int *)(param_4[10] + 8));
  }
  QDomNode::~QDomNode((QDomNode *)&local_170);
  QDomNode::~QDomNode((QDomNode *)&local_160);
  QDomNode::~QDomNode((QDomNode *)&local_140);
  QDomNode::~QDomNode((QDomNode *)&local_130);
  QDomNode::~QDomNode((QDomNode *)&local_110);
  QDomNode::~QDomNode((QDomNode *)&local_100);
  QDomNode::~QDomNode((QDomNode *)&local_e0);
  QDomNode::~QDomNode((QDomNode *)&local_d0);
  QDomNode::~QDomNode((QDomNode *)&local_b0);
  QDomNode::~QDomNode((QDomNode *)&local_a0);
  return;
}

