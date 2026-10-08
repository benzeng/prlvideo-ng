
undefined8 FUN_100d19ec0(long *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("UART",4);
  QDomNode::firstChildElement(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d19f33;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d19f33:
  local_58 = (QArrayData *)QString::fromAscii_helper("Port",4);
  QDomElement::elementsByTagName(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d19f89;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d19f89:
  lVar4 = 0;
  do {
    iVar3 = QDomNodeList::length();
    if (iVar3 <= lVar4) {
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_50);
      QDomNode::~QDomNode((QDomNode *)&local_40);
      return 0x8000000;
    }
    QDomNodeList::item((int)local_68);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_68);
    local_78 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    QDomElement::attributeNode(&local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1a038;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d1a038:
    cVar2 = QDomNode::isNull();
    if (cVar2 == '\0') {
      QDomAttr::value();
      local_88 = (QArrayData *)QString::fromAscii_helper("true",4);
      iVar3 = QString::compare(&local_80,&local_88,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1a0b6;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100d1a0b6:
      if (iVar3 == 0) {
        local_98 = (QArrayData *)QString::fromAscii_helper("hostMode",8);
        QDomElement::attributeNode(&local_90);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1a123;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100d1a123:
        cVar2 = QDomNode::isNull();
        if (cVar2 == '\0') {
          local_a8 = (QArrayData *)QString::fromAscii_helper("path",4);
          QDomElement::attributeNode(&local_a0);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d1a19b;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100d1a19b:
          cVar2 = QDomNode::isNull();
          if (cVar2 == '\0') {
            local_b8 = (QArrayData *)QString::fromAscii_helper("serial%1",8);
            QString::arg(&local_b0,&local_b8,lVar4,0,10,0x20);
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a221;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_100d1a221:
            pcVar1 = *(code **)(*param_1 + 0x20);
            local_c0 = local_b0;
            if (1 < *(int *)local_b0 + 1U) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + 1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
            }
            local_c8 = (QArrayData *)QString::fromAscii_helper("enabled",7);
            local_d0 = (QArrayData *)QString::fromAscii_helper("true",4);
            (*pcVar1)(param_1,&local_c0,&local_c8,&local_d0);
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a2cf;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_100d1a2cf:
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a305;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
LAB_100d1a305:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a33b;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_100d1a33b:
            pcVar1 = *(code **)(*param_1 + 0x20);
            local_d8 = local_b0;
            if (1 < *(int *)local_b0 + 1U) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + 1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
            }
            local_e0 = (QArrayData *)QString::fromAscii_helper("type",4);
            QDomAttr::value();
            (*pcVar1)(param_1,&local_d8,&local_e0,&local_e8);
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a3e8;
              }
              QArrayData::deallocate(local_e8,2,8);
            }
LAB_100d1a3e8:
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a41e;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_100d1a41e:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a454;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100d1a454:
            pcVar1 = *(code **)(*param_1 + 0x20);
            local_f0 = local_b0;
            if (1 < *(int *)local_b0 + 1U) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + 1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
            }
            local_f8 = (QArrayData *)QString::fromAscii_helper("path",4);
            QDomAttr::value();
            (*pcVar1)(param_1,&local_f0,&local_f8);
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a501;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_100d1a501:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a537;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
LAB_100d1a537:
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_31 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a56d;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_100d1a56d:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1a5a3;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
LAB_100d1a5a3:
          QDomNode::~QDomNode((QDomNode *)&local_a0);
        }
        QDomNode::~QDomNode((QDomNode *)&local_90);
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d19fb0;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_100d19fb0:
    QDomNode::~QDomNode((QDomNode *)&local_70);
    QDomNode::~QDomNode(local_60);
    lVar4 = lVar4 + 1;
  } while( true );
}

