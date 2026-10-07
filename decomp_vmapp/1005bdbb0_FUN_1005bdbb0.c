
void FUN_1005bdbb0(void)

{
  QDomNode local_98 [8];
  QString local_90;
  QDomNode local_88 [8];
  QArrayData *local_80;
  QString local_78;
  QDomNode local_70 [8];
  QString local_68;
  QDomNode local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QDomNode local_48 [8];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("Shot",4);
  QDomDocument::createElement(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bdc20;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005bdc20:
  QDomNode::appendChild(local_48);
  local_58 = (QArrayData *)QString::fromAscii_helper("GUID",4);
  QDomDocument::createElement(&local_50);
  QDomElement::operator=((QDomElement *)&local_38,(QDomElement *)&local_50);
  QDomNode::~QDomNode((QDomNode *)&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bdc9b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005bdc9b:
  QDomDocument::createTextNode(&local_68);
  QDomNode::appendChild(local_60);
  QDomNode::~QDomNode(local_60);
  QDomNode::~QDomNode((QDomNode *)&local_68);
  QDomNode::appendChild(local_70);
  QDomNode::~QDomNode(local_70);
  local_80 = (QArrayData *)QString::fromAscii_helper("ParentGUID",10);
  QDomDocument::createElement(&local_78);
  QDomElement::operator=((QDomElement *)&local_38,(QDomElement *)&local_78);
  QDomNode::~QDomNode((QDomNode *)&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bdd52;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005bdd52:
  QDomDocument::createTextNode(&local_90);
  QDomNode::appendChild(local_88);
  QDomNode::~QDomNode(local_88);
  QDomNode::~QDomNode((QDomNode *)&local_90);
  QDomNode::appendChild(local_98);
  QDomNode::~QDomNode(local_98);
  QDomNode::~QDomNode(local_48);
  QDomNode::~QDomNode((QDomNode *)&local_38);
  return;
}

