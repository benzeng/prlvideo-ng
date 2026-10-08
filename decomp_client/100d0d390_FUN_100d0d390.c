
undefined8 FUN_100d0d390(long *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  QArrayData *local_130;
  QArrayData *local_128;
  QDomNode local_120 [8];
  QDomNode local_118 [8];
  QArrayData *local_110;
  QArrayData *local_108;
  QDomNode local_100 [8];
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QDomNode local_c0 [8];
  QDomNode local_b8 [8];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
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
  
  local_48 = (QArrayData *)QString::fromAscii_helper("floppy",6);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d0d403;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d0d403:
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
        if ((bool)local_31) goto LAB_100d0d49e;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d0d49e:
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
          if ((bool)local_31) goto LAB_100d0d850;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100d0d850:
      local_80 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
      QString::arg(&local_78,&local_80,(long)iVar4,0,10,0x20);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d8b3;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100d0d8b3:
      QDomNodeList::item((int)local_90);
      local_98 = (QArrayData *)QString::fromAscii_helper("pathname",8);
      QDomNode::firstChildElement(&local_88);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d931;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d0d931:
      QDomNode::~QDomNode(local_90);
      local_a8 = (QArrayData *)QString::fromAscii_helper("absolute",8);
      QDomNode::firstChildElement(&local_a0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d9a2;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100d0d9a2:
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_b8);
      QDomNode::~QDomNode(local_c0);
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_c8 = local_78;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_d0 = (QArrayData *)QString::fromAscii_helper("fileName",8);
      local_d8 = local_b0;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_c8,&local_d0);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0da9c;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100d0da9c:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0dad2;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d0dad2:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0db08;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d0db08:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0db3e;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100d0db3e:
      QDomNode::~QDomNode((QDomNode *)&local_a0);
      QDomNode::~QDomNode((QDomNode *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d420;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      local_e8 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
      local_f0 = (QArrayData *)QString::fromAscii_helper("",0);
      QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d544;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100d0d544:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d57a;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100d0d57a:
      QDomNodeList::item((int)local_100);
      local_108 = (QArrayData *)QString::fromAscii_helper("auto_detect",0xb);
      QDomNode::firstChildElement(&local_f8);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d5fb;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100d0d5fb:
      QDomNode::~QDomNode(local_100);
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      QDomNode::~QDomNode(local_118);
      QDomNode::~QDomNode(local_120);
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_128 = local_e0;
      if (1 < *(int *)local_e0 + 1U) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
      }
      local_130 = (QArrayData *)QString::fromAscii_helper("autoDetect",10);
      pQVar2 = local_110;
      if (1 < *(int *)local_110 + 1U) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + 1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_128,&local_130);
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d704;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_100d0d704:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d73a;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_100d0d73a:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d770;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_100d0d770:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d7a6;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100d0d7a6:
      QDomNode::~QDomNode((QDomNode *)&local_f8);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0d420;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
    }
LAB_100d0d420:
    QDomNode::~QDomNode((QDomNode *)&local_50);
    iVar5 = iVar5 + 1;
  } while( true );
}

