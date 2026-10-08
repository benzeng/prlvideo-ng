
undefined8 FUN_100d109d0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QDomNode local_178 [8];
  QDomNode local_170 [8];
  QArrayData *local_168;
  QArrayData *local_160;
  QDomNode local_158 [8];
  QString local_150;
  QDomNode local_148 [8];
  QDomNode local_140 [8];
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QDomNode local_120 [8];
  QDomNode local_118 [8];
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QDomNode local_f0 [8];
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QDomNode local_d0 [8];
  QDomNode local_c8 [8];
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QDomNode local_78 [8];
  QDomNode local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QDomNode local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("ethernet_adapter",0x10);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10a3f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d10a3f:
  QDomNodeList::item((int)local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("controller_count",0x10);
  QDomNode::firstChildElement(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10aa4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d10aa4:
  QDomNode::~QDomNode(local_58);
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  QDomNode::~QDomNode(local_70);
  QDomNode::~QDomNode(local_78);
  local_88 = (QArrayData *)QString::fromAscii_helper("network%1",9);
  local_90 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_80,&local_88,&local_90,0,0x20);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10b62;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100d10b62:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10b92;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d10b92:
  pcVar1 = *(code **)(*param_1 + 0x20);
  local_98 = (QArrayData *)local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("count",5);
  local_a8 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  (*pcVar1)(param_1,&local_98,&local_a0,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10c39;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100d10c39:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10c6f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100d10c6f:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10cac;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100d10cac:
  local_b8 = (QArrayData *)QString::fromAscii_helper("ethernet_controller",0x13);
  QDomElement::elementsByTagName(&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d10d10;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100d10d10:
  iVar2 = 0;
  while( true ) {
    iVar3 = QDomNodeList::length();
    if (iVar3 <= iVar2) break;
    QDomNodeList::item((int)local_d0);
    QDomNode::toElement();
    local_d8 = (QArrayData *)QString::fromAscii_helper("id",2);
    QDomElement::attributeNode(&local_c0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10de8;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100d10de8:
    QDomNode::~QDomNode(local_c8);
    QDomNode::~QDomNode(local_d0);
    QDomAttr::value();
    iVar3 = QString::toInt((bool *)&local_e0,0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10e56;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100d10e56:
    QDomNodeList::item((int)local_f0);
    local_f8 = (QArrayData *)QString::fromAscii_helper("virtual_network",0xf);
    QDomNode::firstChildElement(&local_e8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10ec8;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100d10ec8:
    QDomNode::~QDomNode(local_f0);
    local_108 = (QArrayData *)QString::fromAscii_helper("id",2);
    QDomNode::firstChildElement(&local_100);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10f37;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100d10f37:
    QDomNode::firstChild();
    QDomNode::toText();
    QDomCharacterData::data();
    QDomNode::~QDomNode(local_118);
    QDomNode::~QDomNode(local_120);
    local_130 = (QArrayData *)QString::fromAscii_helper("name",4);
    QDomNode::firstChildElement(&local_128);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10fe3;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100d10fe3:
    QDomNode::firstChild();
    QDomNode::toText();
    QDomCharacterData::data();
    QDomNode::~QDomNode(local_140);
    QDomNode::~QDomNode(local_148);
    QDomNodeList::item((int)local_158);
    local_160 = (QArrayData *)QString::fromAscii_helper("ethernet_card_address",0x15);
    QDomNode::firstChildElement(&local_150);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d110ad;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_100d110ad:
    QDomNode::~QDomNode(local_158);
    QDomNode::firstChild();
    QDomNode::toText();
    QDomCharacterData::data();
    QDomNode::~QDomNode(local_170);
    QDomNode::~QDomNode(local_178);
    local_188 = (QArrayData *)QString::fromAscii_helper("network%1",9);
    QString::arg(&local_180,&local_188,(long)iVar3,0,10,0x20);
    QString::operator=(&local_80,&local_180);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1118d;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_100d1118d:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d111c3;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100d111c3:
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_190 = (QArrayData *)local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    local_198 = (QArrayData *)QString::fromAscii_helper("id",2);
    local_1a0 = local_110;
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_190,&local_198,&local_1a0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1126d;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_100d1126d:
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d112a3;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_100d112a3:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d112d9;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_100d112d9:
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_1a8 = (QArrayData *)local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    local_1b0 = (QArrayData *)QString::fromAscii_helper("name",4);
    local_1b8 = local_138;
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_1a8,&local_1b0,&local_1b8);
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        local_31 = *(int *)local_1b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d11383;
      }
      QArrayData::deallocate(local_1b8,2,8);
    }
LAB_100d11383:
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d113b9;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_100d113b9:
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d113ef;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_100d113ef:
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_1c0 = (QArrayData *)local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    local_1c8 = (QArrayData *)QString::fromAscii_helper("address",7);
    local_1d0 = local_168;
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_1c0,&local_1c8,&local_1d0);
    if (*(int *)local_1d0 != -1) {
      if (*(int *)local_1d0 != 0) {
        LOCK();
        *(int *)local_1d0 = *(int *)local_1d0 + -1;
        local_31 = *(int *)local_1d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d11499;
      }
      QArrayData::deallocate(local_1d0,2,8);
    }
LAB_100d11499:
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d114cf;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
LAB_100d114cf:
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_31 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d11505;
      }
      QArrayData::deallocate(local_1c0,2,8);
    }
LAB_100d11505:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d11557;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100d11557:
    QDomNode::~QDomNode((QDomNode *)&local_150);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d11599;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100d11599:
    QDomNode::~QDomNode((QDomNode *)&local_128);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d10d3e;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100d10d3e:
    QDomNode::~QDomNode((QDomNode *)&local_100);
    QDomNode::~QDomNode((QDomNode *)&local_e8);
    QDomNode::~QDomNode((QDomNode *)&local_c0);
    iVar2 = iVar2 + 1;
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_b0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1167a;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100d1167a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d116aa;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d116aa:
  QDomNode::~QDomNode((QDomNode *)&local_50);
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
  return 0x8000000;
}

