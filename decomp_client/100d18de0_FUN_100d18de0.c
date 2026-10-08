
undefined8 FUN_100d18de0(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QDomNode local_40 [8];
  QDomNode local_38 [8];
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("USBController",0xd);
  QDomElement::elementsByTagName(&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d18e46;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d18e46:
  iVar4 = QDomNodeList::length();
  bVar2 = true;
  if (iVar4 < 1) goto LAB_100d1909c;
  QDomNodeList::item((int)local_40);
  QDomNode::toElement();
  QDomNode::~QDomNode(local_40);
  cVar3 = QDomNode::isNull();
  bVar2 = true;
  if (cVar3 == '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    QDomElement::attributeNode(&local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d18eed;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100d18eed:
    cVar3 = QDomNode::isNull();
    bVar2 = true;
    if (cVar3 == '\0') {
      QDomAttr::value();
      local_60 = (QArrayData *)QString::fromAscii_helper("true",4);
      iVar4 = QString::compare(&local_58,&local_60,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_19 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100d18f69;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100d18f69:
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*param_1 + 0x20);
        local_68 = (QArrayData *)QString::fromAscii_helper("usb",3);
        local_70 = (QArrayData *)QString::fromAscii_helper("enabled",7);
        local_78 = (QArrayData *)QString::fromAscii_helper("true",4);
        (*pcVar1)(param_1,&local_68,&local_70,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_19 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100d18ff8;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100d18ff8:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_19 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100d19028;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100d19028:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_19 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100d19058;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_100d19058:
      bVar2 = false;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100d1908a;
        }
        QArrayData::deallocate(local_58,2,8);
        bVar2 = false;
      }
    }
LAB_100d1908a:
    QDomNode::~QDomNode((QDomNode *)&local_48);
  }
  QDomNode::~QDomNode(local_38);
LAB_100d1909c:
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_28);
  uVar5 = 0x811700e;
  if (!bVar2) {
    uVar5 = 0x8000000;
  }
  return uVar5;
}

