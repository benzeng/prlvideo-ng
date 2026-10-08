
undefined8 FUN_100d10480(long *param_1)

{
  code *pcVar1;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QDomNode local_88 [8];
  QDomNode local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("sound",5);
  QDomElement::elementsByTagName(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d104ed;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d104ed:
  QDomNodeList::item((int)local_58);
  QDomNode::toElement();
  local_60 = (QArrayData *)QString::fromAscii_helper("sound_adapter",0xd);
  QDomNode::firstChildElement(&local_48);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d10568;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d10568:
  QDomNode::~QDomNode(local_50);
  QDomNode::~QDomNode(local_58);
  local_70 = (QArrayData *)QString::fromAscii_helper("enable",6);
  QDomNode::firstChildElement(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d105d3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d105d3:
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  QDomNode::~QDomNode(local_80);
  QDomNode::~QDomNode(local_88);
  pcVar1 = *(code **)(*param_1 + 0x20);
  local_90 = (QArrayData *)QString::fromAscii_helper("sound",5);
  local_98 = (QArrayData *)QString::fromAscii_helper("enable",6);
  local_a0 = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_29 = *(int *)local_78 != 0;
    UNLOCK();
  }
  (*pcVar1)(param_1,&local_90,&local_98,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d106af;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100d106af:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d106e5;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100d106e5:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d1071b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100d1071b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d1074b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d1074b:
  QDomNode::~QDomNode((QDomNode *)&local_68);
  QDomNode::~QDomNode((QDomNode *)&local_48);
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_38);
  return 0x8000000;
}

