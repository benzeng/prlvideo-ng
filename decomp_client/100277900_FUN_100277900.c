
undefined8 * FUN_100277900(undefined8 *param_1)

{
  int iVar1;
  QDomNode local_30 [8];
  QDomNode local_28 [8];
  QString local_20;
  
  QDomElement::elementsByTagName(&local_20);
  iVar1 = QDomNodeList::length();
  if (iVar1 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    QDomNodeList::item((int)local_30);
    QDomNode::toElement();
    QDomElement::text();
    QDomNode::~QDomNode(local_28);
    QDomNode::~QDomNode(local_30);
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_20);
  return param_1;
}

