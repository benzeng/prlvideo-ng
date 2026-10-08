
undefined1 FUN_100d23d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QDomNode local_98 [8];
  QString local_90;
  QDomNode local_88 [8];
  QString local_80;
  QDomNode local_78 [8];
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_f8 = (QArrayData *)QString::fromAscii_helper("HardDisks",9);
  QDomNode::firstChildElement(&local_f0);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d23dc9;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100d23dc9:
  cVar1 = QDomNode::isNull();
  if (cVar1 != '\0') {
    uVar4 = 0;
    goto LAB_100d245d7;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("VirtualDiskImage",0x10);
  QDomElement::elementsByTagName(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d23e39;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d23e39:
  iVar5 = 0;
  while( true ) {
    iVar3 = QDomNodeList::length();
    if (iVar3 <= iVar5) break;
    QDomNodeList::item((int)local_78);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_78);
    QDomNode::parentNode();
    QDomNode::toElement();
    QDomNode::~QDomNode(local_88);
    QDomNode::parentNode();
    QDomNode::toElement();
    QDomNode::~QDomNode(local_98);
    local_a8 = (QArrayData *)QString::fromAscii_helper("uuid",4);
    local_b0 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_a0,&local_80);
    local_c8 = (QArrayData *)QString::fromAscii_helper("filePath",8);
    local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_c0,&local_70);
    FUN_100d25960(&local_b8,param_2,&local_c0);
    QDomElement::tagName();
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("HardDisk",8)
    ;
    cVar1 = operator==(&local_40,&local_48);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      QDomElement::tagName();
      local_58.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DiffHardDisk",0xc);
      cVar2 = operator==(&local_50,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d24034;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100d24034:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d24070;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
LAB_100d24070:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d240a0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100d240a0:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d240d0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100d240d0:
    if (cVar2 == '\0') {
      local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    }
    else {
      local_e0 = (QArrayData *)QString::fromAscii_helper("uuid",4);
      local_e8 = (QArrayData *)PTR_shared_null_1021e1288;
      QDomElement::attribute(&local_d8,&local_90);
    }
    FUN_100d2b1b0(param_3,&local_a0,&local_b8,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2419b;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100d2419b:
    if (cVar2 != '\0') {
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d241d6;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100d241d6:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d24210;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
    }
LAB_100d24210:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d24249;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100d24249:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2428a;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100d2428a:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d242c7;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100d242c7:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d24300;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100d24300:
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d24339;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100d24339:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d24373;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100d24373:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d23e60;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100d23e60:
    QDomNode::~QDomNode((QDomNode *)&local_90);
    QDomNode::~QDomNode((QDomNode *)&local_80);
    QDomNode::~QDomNode((QDomNode *)&local_70);
    iVar5 = iVar5 + 1;
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_60);
  local_108 = (QArrayData *)QString::fromAscii_helper("DVDImages",9);
  QDomNode::firstChildElement(&local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d24446;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100d24446:
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    local_110 = (QArrayData *)QString::fromAscii_helper("src",3);
    FUN_100d24bc0(&local_100,&local_110,1,param_2,param_3);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d244d1;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100d244d1:
    local_120 = (QArrayData *)QString::fromAscii_helper("FloppyImages",0xc);
    QDomNode::firstChildElement(&local_118);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d24535;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100d24535:
    cVar1 = QDomNode::isNull();
    if (cVar1 == '\0') {
      local_128 = (QArrayData *)QString::fromAscii_helper("src",3);
      FUN_100d24bc0(&local_118,&local_128,2,param_2,param_3);
      uVar4 = 1;
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d245bf;
        }
        QArrayData::deallocate(local_128,2,8);
      }
    }
    else {
      uVar4 = 0;
    }
LAB_100d245bf:
    QDomNode::~QDomNode((QDomNode *)&local_118);
  }
  else {
    uVar4 = 0;
  }
  QDomNode::~QDomNode((QDomNode *)&local_100);
LAB_100d245d7:
  QDomNode::~QDomNode((QDomNode *)&local_f0);
  return uVar4;
}

