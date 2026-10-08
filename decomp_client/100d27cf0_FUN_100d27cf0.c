
QString * FUN_100d27cf0(QString *param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QDomNode local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::documentElement();
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Global",6);
  QDomNode::firstChildElement(&local_40);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("MediaRegistry",0xd);
  QDomNode::firstChildElement(param_1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d27d94;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d27d94:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d27dcd;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d27dcd:
  QDomNode::~QDomNode(local_48);
  return param_1;
}

