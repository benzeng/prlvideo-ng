
undefined8 FUN_100d0a840(long *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QString local_158;
  QArrayData *local_150;
  QFileInfo local_148 [8];
  QString local_140;
  QFileInfo local_138 [8];
  QString local_130;
  QDomNode local_128 [8];
  QDomNode local_120 [8];
  QString local_118;
  QArrayData *local_110;
  QDomNode local_108 [8];
  QArrayData *local_100;
  QDomNode local_f8 [8];
  QString local_f0;
  QDomNode local_e8 [8];
  QDomNode local_e0 [8];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QDomNode local_c8 [8];
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QString local_98;
  QArrayData *local_90;
  QDomNode local_88 [8];
  QDomNode local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("ide_controller",0xe);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d0a8b3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d0a8b3:
  iVar7 = 0;
  do {
    iVar3 = QDomNodeList::length();
    if (iVar3 <= iVar7) {
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
        if ((bool)local_31) goto LAB_100d0a94f;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d0a94f:
    QDomNode::~QDomNode(local_58);
    QDomNode::~QDomNode(local_60);
    QDomAttr::value();
    iVar3 = QString::toInt((bool *)&local_70,0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d0a9af;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100d0a9af:
    QDomNodeList::item((int)local_88);
    QDomNode::toElement();
    local_90 = (QArrayData *)QString::fromAscii_helper("location",8);
    QDomElement::elementsByTagName(&local_78);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d0aa2e;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d0aa2e:
    QDomNode::~QDomNode(local_80);
    QDomNode::~QDomNode(local_88);
    iVar6 = 0;
    while( true ) {
      iVar4 = QDomNodeList::length();
      if (iVar4 <= iVar6) break;
      QDomNodeList::item((int)local_a8);
      QDomNode::toElement();
      local_b0 = (QArrayData *)QString::fromAscii_helper("id",2);
      QDomElement::attributeNode(&local_98);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0aafe;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100d0aafe:
      QDomNode::~QDomNode(local_a0);
      QDomNode::~QDomNode(local_a8);
      QDomAttr::value();
      iVar4 = QString::toInt((bool *)&local_b8,0);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ab7d;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100d0ab7d:
      QDomNodeList::item((int)local_c8);
      local_d0 = (QArrayData *)QString::fromAscii_helper("drive_type",10);
      QDomNode::firstChildElement(&local_c0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0abf2;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d0abf2:
      QDomNode::~QDomNode(local_c8);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      uVar5 = QString::toInt((bool *)&local_d8,0);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ac8d;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100d0ac8d:
      QDomNode::~QDomNode(local_e0);
      QDomNode::~QDomNode(local_e8);
      QDomNodeList::item((int)local_f8);
      local_100 = (QArrayData *)QString::fromAscii_helper("pathname",8);
      QDomNode::firstChildElement(&local_f0);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ad1a;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100d0ad1a:
      QDomNode::~QDomNode(local_f8);
      local_110 = (QArrayData *)QString::fromAscii_helper("relative",8);
      QDomNode::firstChildElement((QString *)local_108);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0ad91;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100d0ad91:
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_120);
      QDomNode::~QDomNode(local_128);
      local_130.field0_0x0 = local_118.field0_0x0;
      if (1 < *(int *)local_118.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
      }
      QFileInfo::QFileInfo(local_138,&local_118);
      cVar2 = QFileInfo::isRelative();
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x50))(&local_140);
        QString::operator=(&local_130,&local_140);
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_31 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0ae7d;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_100d0ae7d:
        QFileInfo::QFileInfo(local_148,&local_130);
        QFileInfo::fileName();
        QString::lastIndexOf(&local_130,&local_150,0xffffffff,1);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0aefe;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_100d0aefe:
        QString::mid((int)&local_158,(int)&local_130);
        QString::operator=(&local_130,&local_158);
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_31 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0af56;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_100d0af56:
        local_160.field0_0x0 = local_130.field0_0x0;
        if (1 < *(int *)local_130.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_160);
        QString::operator=(&local_130,&local_160);
        if (*(int *)local_160.field0_0x0 != -1) {
          if (*(int *)local_160.field0_0x0 != 0) {
            LOCK();
            *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
            local_31 = *(int *)local_160.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0afd0;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
LAB_100d0afd0:
        QFileInfo::~QFileInfo(local_148);
      }
      QString::operator=(&local_118,&local_130);
      local_178 = (QArrayData *)QString::fromAscii_helper("ide%1:%2",8);
      QString::arg(&local_170,&local_178,(long)iVar3,0,10,0x20);
      QString::arg(&local_168,&local_170,(long)iVar4,0,10,0x20);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b08c;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_100d0b08c:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b0c2;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_100d0b0c2:
      pcVar1 = *(code **)(*param_1 + 0x30);
      local_180 = local_168;
      if (1 < *(int *)local_168 + 1U) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
      }
      local_188 = (QArrayData *)QString::fromAscii_helper("type",4);
      (*pcVar1)(param_1,&local_180,&local_188,uVar5,10);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b15d;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100d0b15d:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b193;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_100d0b193:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_190 = local_168;
      if (1 < *(int *)local_168 + 1U) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
      }
      local_198 = (QArrayData *)QString::fromAscii_helper("fileName",8);
      local_1a0 = (QArrayData *)local_118.field0_0x0;
      if (1 < *(int *)local_118.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_190,&local_198,&local_1a0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b241;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100d0b241:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b277;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_100d0b277:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b2ad;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_100d0b2ad:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b2ee;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_100d0b2ee:
      QFileInfo::~QFileInfo(local_138);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0b32c;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_100d0b32c:
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_31 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0aa62;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
LAB_100d0aa62:
      QDomNode::~QDomNode(local_108);
      QDomNode::~QDomNode((QDomNode *)&local_f0);
      QDomNode::~QDomNode((QDomNode *)&local_c0);
      QDomNode::~QDomNode((QDomNode *)&local_98);
      iVar6 = iVar6 + 1;
    }
    QDomNodeList::~QDomNodeList((QDomNodeList *)&local_78);
    QDomNode::~QDomNode((QDomNode *)&local_50);
    iVar7 = iVar7 + 1;
  } while( true );
}

