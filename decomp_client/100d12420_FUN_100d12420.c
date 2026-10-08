
undefined8 FUN_100d12420(long *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QDomNode local_d0 [8];
  QDomNode local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QDomNode local_b0 [8];
  QString local_a8;
  QDomNode local_a0 [8];
  QDomNode local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QDomNode local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("shared_folder",0xd);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1248f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d1248f:
  local_58 = (QArrayData *)QString::fromAscii_helper("shfolder%1",10);
  local_60 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d124ff;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d124ff:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1252f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d1252f:
  pcVar1 = *(code **)(*param_1 + 0x30);
  local_68 = (QArrayData *)local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("count",5);
  uVar3 = QDomNodeList::length();
  (*pcVar1)(param_1,&local_68,&local_70,uVar3,10);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d125b2;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d125b2:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d125e9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d125e9:
  lVar5 = 0;
  while( true ) {
    iVar4 = QDomNodeList::length();
    if (iVar4 <= lVar5) break;
    QDomNodeList::item((int)local_80);
    local_88 = (QArrayData *)QString::fromAscii_helper("location",8);
    QDomNode::firstChildElement(&local_78);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12684;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d12684:
    QDomNode::~QDomNode(local_80);
    QDomNode::firstChild();
    QDomNode::toText();
    QDomCharacterData::data();
    QDomNode::~QDomNode(local_98);
    QDomNode::~QDomNode(local_a0);
    QDomNodeList::item((int)local_b0);
    local_b8 = (QArrayData *)QString::fromAscii_helper("persistent",10);
    QDomNode::firstChildElement(&local_a8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1274e;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100d1274e:
    QDomNode::~QDomNode(local_b0);
    QDomNode::firstChild();
    QDomNode::toText();
    QDomCharacterData::data();
    QDomNode::~QDomNode(local_c8);
    QDomNode::~QDomNode(local_d0);
    local_e0 = (QArrayData *)QString::fromAscii_helper("shfolder%1",10);
    QString::arg(&local_d8,&local_e0,lVar5,0,10,0x20);
    QString::operator=(&local_50,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12827;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100d12827:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1285d;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100d1285d:
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_e8 = (QArrayData *)local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    local_f0 = (QArrayData *)QString::fromAscii_helper("location",8);
    local_f8 = local_90;
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_e8,&local_f0,&local_f8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1290f;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100d1290f:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12945;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100d12945:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1297b;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100d1297b:
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_100 = (QArrayData *)local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    local_108 = (QArrayData *)QString::fromAscii_helper("persistent",10);
    pQVar2 = local_c0;
    if (1 < *(int *)local_c0 + 1U) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
    }
    (*pcVar1)(param_1,&local_100,&local_108);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12a2f;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_100d12a2f:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12a65;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100d12a65:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12a9e;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100d12a9e:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12adc;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100d12adc:
    QDomNode::~QDomNode((QDomNode *)&local_a8);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d12610;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d12610:
    QDomNode::~QDomNode((QDomNode *)&local_78);
    lVar5 = lVar5 + 1;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d12b93;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d12b93:
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
  return 0x8000000;
}

