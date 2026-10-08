
undefined8 FUN_100d1c2b0(long *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QDomNode local_80 [8];
  QDomNode local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("SharedFolder",0xc);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1c323;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d1c323:
  local_58 = (QArrayData *)QString::fromAscii_helper("sharedfolder%1",0xe);
  local_60 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1c393;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d1c393:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1c3c3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d1c3c3:
  pcVar1 = *(code **)(*param_1 + 0x30);
  local_68 = (QArrayData *)local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("count",5);
  uVar3 = QDomNodeList::length();
  (*pcVar1)(param_1,&local_68,&local_70,uVar3,10);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1c451;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d1c451:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1c481;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d1c481:
  for (lVar5 = 0; iVar4 = QDomNodeList::length(), lVar5 < iVar4; lVar5 = lVar5 + 1) {
    QDomNodeList::item((int)local_80);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_80);
    local_90 = (QArrayData *)QString::fromAscii_helper("hostPath",8);
    QDomElement::attributeNode(&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1c534;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d1c534:
    cVar2 = QDomNode::isNull();
    if (cVar2 == '\0') {
      local_a0 = (QArrayData *)QString::fromAscii_helper("writable",8);
      QDomElement::attributeNode(&local_98);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c5a9;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d1c5a9:
      local_b0 = (QArrayData *)QString::fromAscii_helper("name",4);
      QDomElement::attributeNode(&local_a8);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c60d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100d1c60d:
      local_c0 = (QArrayData *)QString::fromAscii_helper("sharedfolder%1",0xe);
      QString::arg(&local_b8,&local_c0,lVar5,0,10,0x20);
      QString::operator=(&local_50,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c691;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_100d1c691:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c6c7;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100d1c6c7:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_c8 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_d0 = (QArrayData *)QString::fromAscii_helper("path",4);
      QDomAttr::value();
      (*pcVar1)(param_1,&local_c8,&local_d0);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c771;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100d1c771:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c7a7;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d1c7a7:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1c7e0;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d1c7e0:
      cVar2 = QDomNode::isNull();
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(*param_1 + 0x20);
        local_e0 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_e8 = (QArrayData *)QString::fromAscii_helper("name",4);
        QDomAttr::value();
        (*pcVar1)(param_1,&local_e0,&local_e8);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1c8a1;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_100d1c8a1:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1c8d7;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100d1c8d7:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1c910;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
LAB_100d1c910:
      cVar2 = QDomNode::isNull();
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(*param_1 + 0x20);
        local_f8 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_100 = (QArrayData *)QString::fromAscii_helper("writable",8);
        QDomAttr::value();
        (*pcVar1)(param_1,&local_f8,&local_100);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1c9d1;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100d1c9d1:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1ca07;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100d1ca07:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1ca40;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
LAB_100d1ca40:
      QDomNode::~QDomNode((QDomNode *)&local_a8);
      QDomNode::~QDomNode((QDomNode *)&local_98);
    }
    QDomNode::~QDomNode((QDomNode *)&local_88);
    QDomNode::~QDomNode(local_78);
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1cac8;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d1cac8:
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
  return 0x8000000;
}

