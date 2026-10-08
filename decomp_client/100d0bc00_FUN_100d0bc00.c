
undefined8 FUN_100d0bc00(long *param_1)

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
  
  local_48 = (QArrayData *)QString::fromAscii_helper("scsi_controller",0xf);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d0bc73;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d0bc73:
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
        if ((bool)local_31) goto LAB_100d0bd0f;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d0bd0f:
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
        if ((bool)local_31) goto LAB_100d0bd6f;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100d0bd6f:
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
        if ((bool)local_31) goto LAB_100d0bdee;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d0bdee:
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
          if ((bool)local_31) goto LAB_100d0bebe;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100d0bebe:
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
          if ((bool)local_31) goto LAB_100d0bf3d;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100d0bf3d:
      QDomNodeList::item((int)local_c8);
      local_d0 = (QArrayData *)QString::fromAscii_helper("drive_type",10);
      QDomNode::firstChildElement(&local_c0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0bfb2;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d0bfb2:
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
          if ((bool)local_31) goto LAB_100d0c04d;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100d0c04d:
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
          if ((bool)local_31) goto LAB_100d0c0da;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100d0c0da:
      QDomNode::~QDomNode(local_f8);
      local_110 = (QArrayData *)QString::fromAscii_helper("relative",8);
      QDomNode::firstChildElement((QString *)local_108);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c151;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100d0c151:
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
            if ((bool)local_31) goto LAB_100d0c23d;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_100d0c23d:
        QFileInfo::QFileInfo(local_148,&local_130);
        QFileInfo::fileName();
        QString::lastIndexOf(&local_130,&local_150,0xffffffff,1);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0c2be;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_100d0c2be:
        QString::mid((int)&local_158,(int)&local_130);
        QString::operator=(&local_130,&local_158);
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_31 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0c316;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_100d0c316:
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
            if ((bool)local_31) goto LAB_100d0c390;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
LAB_100d0c390:
        QFileInfo::~QFileInfo(local_148);
      }
      QString::operator=(&local_118,&local_130);
      local_178 = (QArrayData *)QString::fromAscii_helper("scsi%1:%2",9);
      QString::arg(&local_170,&local_178,(long)iVar3,0,10,0x20);
      QString::arg(&local_168,&local_170,(long)iVar4,0,10,0x20);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c44c;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_100d0c44c:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c482;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_100d0c482:
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
          if ((bool)local_31) goto LAB_100d0c51d;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100d0c51d:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c553;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_100d0c553:
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
          if ((bool)local_31) goto LAB_100d0c601;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100d0c601:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c637;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_100d0c637:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c66d;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_100d0c66d:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c6ae;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_100d0c6ae:
      QFileInfo::~QFileInfo(local_138);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0c6ec;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_100d0c6ec:
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_31 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0be22;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
LAB_100d0be22:
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

