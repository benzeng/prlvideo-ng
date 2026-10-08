
undefined8 FUN_100d11fd0(long *param_1)

{
  code *pcVar1;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QDomNode local_70 [8];
  QDomNode local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QDomNode local_50 [8];
  QDomNode local_48 [8];
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("mouse",5);
  QDomElement::elementsByTagName(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d12038;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d12038:
  QDomNodeList::item((int)local_50);
  QDomNode::toElement();
  local_58 = (QArrayData *)QString::fromAscii_helper("allow",5);
  QDomNode::firstChildElement(&local_40);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d120b0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d120b0:
  QDomNode::~QDomNode(local_48);
  QDomNode::~QDomNode(local_50);
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  QDomNode::~QDomNode(local_68);
  QDomNode::~QDomNode(local_70);
  pcVar1 = *(code **)(*param_1 + 0x20);
  local_78 = (QArrayData *)QString::fromAscii_helper("mouse",5);
  local_80 = (QArrayData *)QString::fromAscii_helper("allow",5);
  local_88 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_21 = *(int *)local_60 != 0;
    UNLOCK();
  }
  (*pcVar1)(param_1,&local_78,&local_80,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d12186;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d12186:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d121b6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d121b6:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d121e6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d121e6:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d12216;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d12216:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_30);
  return 0x8000000;
}

