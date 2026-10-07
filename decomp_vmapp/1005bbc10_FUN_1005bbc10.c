
undefined8 FUN_1005bbc10(undefined8 param_1,undefined8 param_2,QDomElement *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  QDomNode local_b8 [8];
  QDomNode local_b0 [8];
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QDomNode local_98 [8];
  QString local_90;
  QString local_88;
  QDomNode local_80 [8];
  QString local_78;
  QString local_70;
  QDomNode local_68 [8];
  QString local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QString local_48;
  QDomNodeList local_40 [15];
  undefined1 local_31;
  
  QDomNode::childNodes();
  FUN_1007d6a70(&local_48,param_2);
  iVar5 = 0;
  while( true ) {
    iVar2 = QDomNodeList::length();
    uVar4 = 0x80023000;
    if (iVar2 <= iVar5) break;
    QDomNodeList::item((int)local_58);
    QDomNode::firstChild();
    QDomNode::~QDomNode(local_58);
    QDomNodeList::item((int)local_68);
    QDomNode::nodeName();
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Shot",4);
    cVar1 = operator==(&local_60,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bbd17;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1005bbd17:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bbd47;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1005bbd47:
    QDomNode::~QDomNode(local_68);
    uVar3 = 4;
    if (cVar1 != '\0') {
      while( true ) {
        cVar1 = QDomNode::isNull();
        uVar3 = 0;
        if (cVar1 != '\0') break;
        cVar1 = QDomNode::isElement();
        if (cVar1 != '\0') {
          QDomNode::toElement();
          QDomElement::tagName();
          local_88.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GUID",4);
          cVar1 = operator==(&local_78,&local_88);
          if (cVar1 == '\0') {
            cVar1 = '\0';
          }
          else {
            QDomNode::toElement();
            QDomElement::text();
            cVar1 = operator==(&local_48,&local_90);
            if (cVar1 == '\0') {
              cVar1 = '\0';
            }
            else {
              QDomNodeList::item((int)local_a0);
              cVar1 = QDomNode::isElement();
              QDomNode::~QDomNode(local_a0);
            }
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bbe6e;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_1005bbe6e:
            QDomNode::~QDomNode(local_98);
          }
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bbeaa;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
LAB_1005bbeaa:
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bbeda;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_1005bbeda:
          QDomNode::~QDomNode(local_80);
          if (cVar1 != '\0') {
            QDomNodeList::item((int)local_b0);
            QDomNode::toElement();
            QDomElement::operator=(param_3,(QDomElement *)local_a8);
            QDomNode::~QDomNode(local_a8);
            uVar3 = 1;
            QDomNode::~QDomNode(local_b0);
            break;
          }
        }
        QDomNode::nextSibling();
        QDomNode::operator=(local_50,local_b8);
        QDomNode::~QDomNode(local_b8);
      }
    }
    QDomNode::~QDomNode(local_50);
    uVar4 = 0;
    if ((uVar3 | 4) != 4) break;
    iVar5 = iVar5 + 1;
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bbfaa;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005bbfaa:
  QDomNodeList::~QDomNodeList(local_40);
  return uVar4;
}

