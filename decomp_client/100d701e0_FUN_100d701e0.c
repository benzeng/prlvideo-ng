
undefined1 FUN_100d701e0(undefined8 *param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined1 uVar5;
  int iVar6;
  QDomNode local_180 [8];
  QDomNode local_178 [8];
  QDomNode local_170 [8];
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QDomNode local_150 [8];
  QDomNode local_148 [8];
  QArrayData *local_140;
  QArrayData *local_138;
  QDomNode local_130 [8];
  QDomNode local_128 [8];
  QDomNode local_120 [8];
  QString local_118;
  QArrayData *local_110;
  QString local_108;
  QDomNode local_100 [8];
  QDomNode local_f8 [8];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QDomElement local_e0 [8];
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QArrayData *local_68;
  undefined *local_60;
  QFileInfo local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    return 0;
  }
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  cVar2 = QString::endsWith(&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d70272;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d70272:
  if (cVar2 != '\0') {
    QString::left((int)&local_50);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d702c9;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100d702c9:
  QFileInfo::QFileInfo(local_58,&local_40);
  QFileInfo::filePath();
  local_60 = PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d70332;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d70332:
  do {
    QFileInfo::path();
    QFileInfo::QFileInfo(local_70,&local_78);
    QFileInfo::operator=(local_58,local_70);
    QFileInfo::~QFileInfo(local_70);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d703a9;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100d703a9:
    QFileInfo::filePath();
    FUN_1000341d0(&local_60,&local_80);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d703ef;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100d703ef:
    cVar2 = QFileInfo::isRoot();
    puVar1 = PTR_shared_null_1021e1288;
  } while (cVar2 == '\0');
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_90 = (QArrayData *)QString::fromAscii_helper("isexcluded -X",0xd);
  cVar2 = FUN_100d713e0(&local_90,&local_60,&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7046e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100d7046e:
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    QDomDocument::QDomDocument((QDomDocument *)&local_98);
    QDomDocument::setContent(&local_98,&local_88,(int *)0x0,(int *)0x0);
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    local_c0 = (QArrayData *)QString::fromAscii_helper("plist",5);
    QDomNode::firstChildElement(&local_b8);
    local_c8 = (QArrayData *)QString::fromAscii_helper("array",5);
    QDomNode::firstChildElement(&local_b0);
    local_d0 = (QArrayData *)QString::fromAscii_helper("dict",4);
    QDomNode::firstChildElement(&local_a8);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d70578;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100d70578:
    QDomNode::~QDomNode((QDomNode *)&local_b0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d705ba;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100d705ba:
    QDomNode::~QDomNode((QDomNode *)&local_b8);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d705fc;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100d705fc:
    uVar5 = 0;
    do {
      cVar2 = QDomNode::isNull();
      if (cVar2 != '\0') break;
      local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_e8 = (QArrayData *)QString::fromAscii_helper("key",3);
      QDomNode::firstChildElement((QString *)local_e0);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d706ae;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100d706ae:
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      iVar3 = QString::compare_helper
                        (local_f0 + *(long *)(local_f0 + 0x10),*(undefined4 *)(local_f0 + 4),"Path",
                         0xffffffff,1);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7074b;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100d7074b:
      QDomNode::~QDomNode(local_f8);
      QDomNode::~QDomNode(local_100);
      if (iVar3 == 0) {
        local_110 = (QArrayData *)QString::fromAscii_helper("string",6);
        QDomNode::nextSiblingElement(&local_108);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d707d1;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100d707d1:
        QDomNode::firstChild();
        QDomNode::toText();
        QDomCharacterData::data();
        QString::operator=(&local_d8,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d7084a;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_100d7084a:
        QDomNode::~QDomNode(local_120);
        QDomNode::~QDomNode(local_128);
        QDomNode::~QDomNode((QDomNode *)&local_108);
      }
      local_138 = (QArrayData *)QString::fromAscii_helper("key",3);
      QDomNode::nextSiblingElement((QString *)local_130);
      QDomElement::operator=(local_e0,(QDomElement *)local_130);
      QDomNode::~QDomNode(local_130);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d708e0;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100d708e0:
      QDomNode::firstChild();
      QDomNode::toText();
      QDomCharacterData::data();
      iVar3 = QString::compare_helper
                        (local_140 + *(long *)(local_140 + 0x10),*(undefined4 *)(local_140 + 4),
                         "IsExcluded",0xffffffff,1);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7096d;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_100d7096d:
      QDomNode::~QDomNode(local_148);
      QDomNode::~QDomNode(local_150);
      if (iVar3 == 0) {
        local_160 = (QArrayData *)QString::fromAscii_helper("integer",7);
        QDomNode::nextSiblingElement(&local_158);
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d709ea;
          }
          QArrayData::deallocate(local_160,2,8);
        }
LAB_100d709ea:
        QDomNode::firstChild();
        QDomNode::toText();
        QDomCharacterData::data();
        iVar3 = QString::toInt((bool *)&local_168,0);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d70a6e;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_100d70a6e:
        QDomNode::~QDomNode(local_170);
        QDomNode::~QDomNode(local_178);
        iVar6 = 5;
        if (iVar3 != 0) {
          QString::operator=(&local_a0,&local_d8);
          uVar5 = 1;
          iVar6 = 0;
        }
        QDomNode::~QDomNode((QDomNode *)&local_158);
        if (iVar6 == 0) goto LAB_100d70ae0;
      }
      else {
LAB_100d70ae0:
        pQVar4 = (QArrayData *)QString::fromAscii_helper("dict",4);
        QDomNode::nextSiblingElement((QString *)local_180);
        QDomElement::operator=((QDomElement *)&local_a8,(QDomElement *)local_180);
        QDomNode::~QDomNode(local_180);
        iVar6 = 0;
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d70b64;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
LAB_100d70b64:
      QDomNode::~QDomNode((QDomNode *)local_e0);
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d70ba9;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_100d70ba9:
    } while (iVar6 == 0);
    if (param_2 != (QString *)0x0) {
      QString::operator=(param_2,&local_a0);
    }
    QDomNode::~QDomNode((QDomNode *)&local_a8);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d70c13;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100d70c13:
    QDomDocument::~QDomDocument((QDomDocument *)&local_98);
  }
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d70c5a;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100d70c5a:
  FUN_100039a80(&local_60);
  QFileInfo::~QFileInfo(local_58);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar5;
}

