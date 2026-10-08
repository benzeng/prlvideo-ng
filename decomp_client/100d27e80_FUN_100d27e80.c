
undefined1 FUN_100d27e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QDomNode local_68 [8];
  QString local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_d8 = (QArrayData *)QString::fromAscii_helper("HardDisks",9);
  QDomNode::firstChildElement(&local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d27f09;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100d27f09:
  cVar1 = QDomNode::isNull();
  if (cVar1 != '\0') {
    uVar3 = 0;
    goto LAB_100d28604;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("HardDisk",8);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d27f79;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d27f79:
  for (iVar4 = 0; iVar2 = QDomNodeList::length(), iVar4 < iVar2; iVar4 = iVar4 + 1) {
    QDomNodeList::item((int)local_58);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_58);
    QDomNode::parentNode();
    QDomNode::toElement();
    QDomNode::~QDomNode(local_68);
    local_78 = (QArrayData *)QString::fromAscii_helper("uuid",4);
    local_80 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_70,(QString *)local_50);
    local_98 = (QArrayData *)QString::fromAscii_helper("location",8);
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_90,(QString *)local_50);
    FUN_100d25960(&local_88,param_2,&local_90);
    QDomElement::tagName();
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("HardDisk",8)
    ;
    cVar1 = operator==(&local_b0,&local_b8);
    if (cVar1 == '\0') {
      local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    }
    else {
      local_c0 = (QArrayData *)QString::fromAscii_helper("uuid",4);
      local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
      QDomElement::attribute(&local_a8,&local_60);
    }
    FUN_100d2b1b0(param_3,&local_70,&local_88,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2818e;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_100d2818e:
    if (cVar1 != '\0') {
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d281d2;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d281d2:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d28210;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
LAB_100d28210:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d28246;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100d28246:
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d28280;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100d28280:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d282b0;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d282b0:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d282e6;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100d282e6:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2831c;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100d2831c:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d28352;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100d28352:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d28382;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100d28382:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d283b2;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100d283b2:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d27fa0;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d27fa0:
    QDomNode::~QDomNode((QDomNode *)&local_60);
    QDomNode::~QDomNode(local_50);
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
  local_e8 = (QArrayData *)QString::fromAscii_helper("DVDImages",9);
  QDomNode::firstChildElement(&local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28473;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100d28473:
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    local_f0 = (QArrayData *)QString::fromAscii_helper("location",8);
    FUN_100d24bc0(&local_e0,&local_f0,1,param_2,param_3);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d284fe;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100d284fe:
    local_100 = (QArrayData *)QString::fromAscii_helper("FloppyImages",0xc);
    QDomNode::firstChildElement(&local_f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d28562;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100d28562:
    cVar1 = QDomNode::isNull();
    if (cVar1 == '\0') {
      local_108 = (QArrayData *)QString::fromAscii_helper("location",8);
      FUN_100d24bc0(&local_f8,&local_108,2,param_2,param_3);
      uVar3 = 1;
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d285ec;
        }
        QArrayData::deallocate(local_108,2,8);
      }
    }
    else {
      uVar3 = 0;
    }
LAB_100d285ec:
    QDomNode::~QDomNode((QDomNode *)&local_f8);
  }
  else {
    uVar3 = 0;
  }
  QDomNode::~QDomNode((QDomNode *)&local_e0);
LAB_100d28604:
  QDomNode::~QDomNode((QDomNode *)&local_d0);
  return uVar3;
}

