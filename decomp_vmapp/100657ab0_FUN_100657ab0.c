
QString * FUN_100657ab0(QString *param_1)

{
  undefined *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  QString *this;
  undefined8 uVar4;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QDomNode local_d0 [8];
  QArrayData *local_c8;
  QDomNode local_c0 [8];
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QMapNodeBase *local_78;
  QDomNode local_70 [8];
  QArrayData *local_68;
  QDomDocument local_60 [8];
  QArrayData *local_58;
  QString local_50 [2];
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("/System/Library/CoreServices/SystemVersion.plist",0x30);
  QFile::QFile((QFile *)local_50,&local_40);
  cVar3 = QFile::open(local_50,1);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","pvsHostInfo",0,"CDspHostInfo::GetOSVersion() : Can not open a file %s",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100658241;
      }
      QArrayData::deallocate(local_58,1,8);
    }
    goto LAB_100658241;
  }
  QDomDocument::QDomDocument(local_60);
  cVar3 = QDomDocument::setContent((QIODevice *)local_60,local_50,(int *)0x0,(int *)0x0);
  if (cVar3 != '\0') {
    QDomDocument::documentElement();
    cVar3 = QDomNode::isNull();
    if (cVar3 == '\0') {
      local_78 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
      local_88 = (QArrayData *)QString::fromAscii_helper("dict",4);
      QDomNode::firstChildElement(&local_80);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100657bad;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100657bad:
      cVar3 = QDomNode::isNull();
      if (cVar3 == '\0') {
        local_98 = (QArrayData *)QString::fromAscii_helper("key",3);
        QDomNode::firstChildElement(&local_90);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100657c23;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100657c23:
        cVar3 = QDomNode::isNull();
        if (cVar3 == '\0') {
          local_a8 = (QArrayData *)puVar1;
          QDomNode::nextSiblingElement(&local_a0);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100657c8e;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100657c8e:
LAB_100657cb0:
          do {
            cVar3 = QDomNode::isNull();
            if (cVar3 != '\0') goto LAB_100657f50;
            QDomElement::text();
            this = (QString *)FUN_100037140(&local_78,&local_b0);
            QDomElement::text();
            QString::operator=(this,&local_b8);
            if (*(int *)local_b8.field0_0x0 != -1) {
              if (*(int *)local_b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                local_31 = *(int *)local_b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100657d3c;
              }
              QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
            }
LAB_100657d3c:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100657d86;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_100657d86:
            local_c8 = (QArrayData *)QString::fromAscii_helper("key",3);
            QDomNode::nextSiblingElement((QString *)local_c0);
            QDomElement::operator=((QDomElement *)&local_90,(QDomElement *)local_c0);
            QDomNode::~QDomNode(local_c0);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100657df9;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
LAB_100657df9:
            local_d8 = (QArrayData *)puVar1;
            QDomNode::nextSiblingElement((QString *)local_d0);
            QDomElement::operator=((QDomElement *)&local_a0,(QDomElement *)local_d0);
            QDomNode::~QDomNode(local_d0);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100657cb0;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
          } while( true );
        }
        goto LAB_1006581d6;
      }
      goto LAB_1006581e2;
    }
    goto LAB_10065822f;
  }
  QString::toUtf8();
  FUN_1008e3970("","pvsHostInfo",0,
                "GetOsVersionAsString(): Can not create XML document from file %s",
                local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100658238;
    }
    QArrayData::deallocate(local_68,1,8);
  }
  goto LAB_100658238;
LAB_100657f50:
  local_f8 = (QArrayData *)QString::fromAscii_helper("%1 %2(%3)",9);
  local_100 = (QArrayData *)QString::fromAscii_helper("ProductName",0xb);
  uVar4 = FUN_100037140(&local_78,&local_100);
  QString::arg(&local_f0,&local_f8,uVar4,0,0x20);
  local_108 = (QArrayData *)QString::fromAscii_helper("ProductUserVisibleVersion",0x19);
  uVar4 = FUN_100037140(&local_78,&local_108);
  QString::arg(&local_e8,&local_f0,uVar4,0,0x20);
  local_110 = (QArrayData *)QString::fromAscii_helper("ProductBuildVersion",0x13);
  uVar4 = FUN_100037140(&local_78,&local_110);
  QString::arg(&local_e0,&local_e8,uVar4,0,0x20);
  QString::operator=(param_1,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100658086;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100658086:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006580bc;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1006580bc:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006580f2;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1006580f2:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100658128;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100658128:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065815e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10065815e:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100658194;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100658194:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006581ca;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006581ca:
  QDomNode::~QDomNode((QDomNode *)&local_a0);
LAB_1006581d6:
  QDomNode::~QDomNode((QDomNode *)&local_90);
LAB_1006581e2:
  QDomNode::~QDomNode((QDomNode *)&local_80);
  pQVar2 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065822f;
    }
    if (*(long *)(local_78 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10065822f:
  QDomNode::~QDomNode(local_70);
LAB_100658238:
  QDomDocument::~QDomDocument(local_60);
LAB_100658241:
  QFile::~QFile((QFile *)local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

