
void FUN_1005d3570(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RCX;
  int iVar3;
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QArrayData *local_58;
  QDomNodeList local_50 [8];
  QString local_48;
  undefined *local_40;
  undefined1 local_31;
  
  QDomNode::firstChildElement(&local_48);
  local_40 = PTR_shared_null_100ba2188;
  FUN_10051afa0(in_RCX,&local_40);
  FUN_100013180(&local_40);
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    QDomNode::childNodes();
    for (iVar3 = 0; iVar2 = QDomNodeList::length(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      QDomNodeList::item((int)local_68);
      QDomNode::toElement();
      QDomElement::text();
      QDomNode::~QDomNode(local_60);
      QDomNode::~QDomNode(local_68);
      FUN_10000c490(in_RCX,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d35f0;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1005d35f0:
    }
    QDomNodeList::~QDomNodeList(local_50);
  }
  QDomNode::~QDomNode((QDomNode *)&local_48);
  return;
}

