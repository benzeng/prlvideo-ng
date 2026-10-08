
undefined8 FUN_100d0e180(long *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QDomNode local_1d8 [8];
  QDomNode local_1d0 [8];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QDomNode local_1b8 [8];
  QString local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QDomNode local_148 [8];
  QDomNode local_140 [8];
  QArrayData *local_138;
  QArrayData *local_130;
  QDomNode local_128 [8];
  QDomNode local_120 [8];
  QArrayData *local_118;
  QDomNode local_110 [8];
  QDomNode local_108 [8];
  QArrayData *local_100;
  QDomNode local_f8 [8];
  QDomNode local_f0 [8];
  QDomElement local_e8 [8];
  QDomNode local_e0 [8];
  QDomNode local_d8 [8];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QDomNode local_c0 [8];
  QString local_b8;
  QDomNode local_b0 [8];
  QDomNode local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QDomNode local_90 [8];
  QDomNode local_88 [8];
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
  
  local_48 = (QArrayData *)QString::fromAscii_helper("serial_port",0xb);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d0e1f3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d0e1f3:
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
        if ((bool)local_31) goto LAB_100d0e28e;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d0e28e:
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
          if ((bool)local_31) goto LAB_100d0e640;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100d0e640:
      local_80 = (QArrayData *)QString::fromAscii_helper("serial%1",8);
      QString::arg(&local_78,&local_80,(long)iVar4,0,10,0x20);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e6a3;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100d0e6a3:
      QDomNodeList::item((int)local_90);
      local_98 = (QArrayData *)QString::fromAscii_helper("port_type",9);
      QDomNode::firstChildElement((QString *)local_88);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e71c;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d0e71c:
      QDomNode::~QDomNode(local_90);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_a8);
      QDomNode::~QDomNode(local_b0);
      QDomNodeList::item((int)local_c0);
      local_c8 = (QArrayData *)QString::fromAscii_helper("connect_immediately",0x13);
      QDomNode::firstChildElement(&local_b8);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e7e6;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d0e7e6:
      QDomNode::~QDomNode(local_c0);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_d8);
      QDomNode::~QDomNode(local_e0);
      QDomElement::QDomElement(local_e8);
      iVar4 = QString::toInt((bool *)&local_a0,0);
      if (iVar4 == 1) {
        QDomNodeList::item((int)local_f8);
        local_100 = (QArrayData *)QString::fromAscii_helper("port_name",9);
        QDomNode::firstChildElement((QString *)local_f0);
        QDomElement::operator=(local_e8,(QDomElement *)local_f0);
        QDomNode::~QDomNode(local_f0);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0e8fa;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100d0e8fa:
        QDomNode::~QDomNode(local_f8);
      }
      else {
        iVar4 = QString::toInt((bool *)&local_a0,0);
        if (iVar4 == 2) {
          QDomNodeList::item((int)local_110);
          local_118 = (QArrayData *)QString::fromAscii_helper("text_file_path",0xe);
          QDomNode::firstChildElement((QString *)local_108);
          QDomElement::operator=(local_e8,(QDomElement *)local_108);
          QDomNode::~QDomNode(local_108);
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_31 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d0e9bb;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_100d0e9bb:
          QDomNode::~QDomNode(local_110);
        }
        else {
          iVar4 = QString::toInt((bool *)&local_a0,0);
          if (iVar4 == 3) {
            QDomNodeList::item((int)local_128);
            local_130 = (QArrayData *)QString::fromAscii_helper("pipe_name",9);
            QDomNode::firstChildElement((QString *)local_120);
            QDomElement::operator=(local_e8,(QDomElement *)local_120);
            QDomNode::~QDomNode(local_120);
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_31 = *(int *)local_130 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d0ea7c;
              }
              QArrayData::deallocate(local_130,2,8);
            }
LAB_100d0ea7c:
            QDomNode::~QDomNode(local_128);
          }
        }
      }
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_140);
      QDomNode::~QDomNode(local_148);
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_150 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_158 = (QArrayData *)QString::fromAscii_helper("portName",8);
      local_160 = local_138;
      if (1 < *(int *)local_138 + 1U) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + 1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_150,&local_158,&local_160);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0eb8b;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_100d0eb8b:
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ebc1;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100d0ebc1:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ebf7;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100d0ebf7:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_168 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_170 = (QArrayData *)QString::fromAscii_helper("portType",8);
      local_178 = local_a0;
      if (1 < *(int *)local_a0 + 1U) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_168,&local_170,&local_178);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0eca1;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_100d0eca1:
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ecd7;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_100d0ecd7:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ed0d;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_100d0ed0d:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_180 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_188 = (QArrayData *)QString::fromAscii_helper("connectImmediately",0x12);
      local_190 = local_d0;
      if (1 < *(int *)local_d0 + 1U) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + 1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_180,&local_188);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0edb7;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_100d0edb7:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0eded;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100d0eded:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ee23;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_100d0ee23:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ee66;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100d0ee66:
      QDomNode::~QDomNode((QDomNode *)local_e8);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0eea8;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d0eea8:
      QDomNode::~QDomNode((QDomNode *)&local_b8);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0eeea;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d0eeea:
      QDomNode::~QDomNode(local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e210;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      local_1a0 = (QArrayData *)QString::fromAscii_helper("serial%1",8);
      local_1a8 = (QArrayData *)QString::fromAscii_helper("",0);
      QString::arg(&local_198,&local_1a0,&local_1a8,0,0x20);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e334;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_100d0e334:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e36a;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100d0e36a:
      QDomNodeList::item((int)local_1b8);
      local_1c0 = (QArrayData *)QString::fromAscii_helper("connect_immediately",0x13);
      QDomNode::firstChildElement(&local_1b0);
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e3e4;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_100d0e3e4:
      QDomNode::~QDomNode(local_1b8);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_1d0);
      QDomNode::~QDomNode(local_1d8);
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_1e0 = local_198;
      if (1 < *(int *)local_198 + 1U) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + 1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
      }
      local_1e8 = (QArrayData *)QString::fromAscii_helper("connectImmediately",0x12);
      pQVar2 = local_1c8;
      if (1 < *(int *)local_1c8 + 1U) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + 1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_1e0,&local_1e8);
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e4f3;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_100d0e4f3:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e529;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_100d0e529:
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e562;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_100d0e562:
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e598;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_100d0e598:
      QDomNode::~QDomNode((QDomNode *)&local_1b0);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0e210;
        }
        QArrayData::deallocate(local_198,2,8);
      }
    }
LAB_100d0e210:
    QDomNode::~QDomNode((QDomNode *)&local_50);
    iVar5 = iVar5 + 1;
  } while( true );
}

