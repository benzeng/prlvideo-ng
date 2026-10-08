
undefined8 FUN_100d0f8e0(long *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QDomNode local_e8 [8];
  QDomNode local_e0 [8];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QDomNode local_c8 [8];
  QDomNode local_c0 [8];
  QDomElement local_b8 [8];
  QDomNode local_b0 [8];
  QDomNode local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QDomNode local_90 [8];
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("parallel_port",0xd);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d0f953;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d0f953:
  iVar5 = 0;
  do {
    iVar4 = QDomNodeList::length();
    if (iVar4 <= iVar5) {
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
      return 0x8000000;
    }
    QDomNodeList::item((int)local_60);
    QDomNode::toElement();
    local_68 = (QArrayData *)QString::fromAscii_helper("id",2);
    QDomElement::attributeNode(&local_50);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d0f9ee;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d0f9ee:
    QDomNode::~QDomNode(local_58);
    QDomNode::~QDomNode(local_60);
    cVar3 = QDomNode::isNull();
    if (cVar3 == '\0') {
      QDomAttr::value();
      iVar4 = QString::toInt((bool *)&local_70,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fa62;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100d0fa62:
      local_80 = (QArrayData *)QString::fromAscii_helper("parallel%1",10);
      QString::arg(&local_78,&local_80,(long)iVar4,0,10,0x20);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fac5;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100d0fac5:
      QDomNodeList::item((int)local_90);
      local_98 = (QArrayData *)QString::fromAscii_helper("port_type",9);
      QDomNode::firstChildElement(&local_88);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fb42;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d0fb42:
      QDomNode::~QDomNode(local_90);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_a8);
      QDomNode::~QDomNode(local_b0);
      QDomElement::QDomElement(local_b8);
      iVar4 = QString::toInt((bool *)&local_a0,0);
      if (iVar4 == 1) {
        QDomNodeList::item((int)local_c8);
        local_d0 = (QArrayData *)QString::fromAscii_helper("port_name",9);
        QDomNode::firstChildElement((QString *)local_c0);
        QDomElement::operator=(local_b8,(QDomElement *)local_c0);
        QDomNode::~QDomNode(local_c0);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0fc43;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_100d0fc43:
        QDomNode::~QDomNode(local_c8);
      }
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_e0);
      QDomNode::~QDomNode(local_e8);
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_f0 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_f8 = (QArrayData *)QString::fromAscii_helper("portName",8);
      local_100 = local_d8;
      if (1 < *(int *)local_d8 + 1U) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + 1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_f0,&local_f8,&local_100);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fd50;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100d0fd50:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fd86;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100d0fd86:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fdbc;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100d0fdbc:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_108 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_110 = (QArrayData *)QString::fromAscii_helper("portType",8);
      pQVar2 = local_a0;
      if (1 < *(int *)local_a0 + 1U) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_108,&local_110);
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fe71;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_100d0fe71:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fea7;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100d0fea7:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0fedd;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100d0fedd:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ff13;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100d0ff13:
      QDomNode::~QDomNode((QDomNode *)local_b8);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ff55;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d0ff55:
      QDomNode::~QDomNode((QDomNode *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0f970;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_100d0f970:
    QDomNode::~QDomNode((QDomNode *)&local_50);
    iVar5 = iVar5 + 1;
  } while( true );
}

