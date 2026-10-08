
QString * FUN_100d272e0(QString *param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QDomNode local_50 [8];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::documentElement();
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Machine",7);
  QDomNode::firstChildElement(&local_48);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Hardware",8);
  QDomNode::firstChildElement(&local_40);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("FloppyDrive",0xb);
  QDomNode::firstChildElement(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d273ae;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100d273ae:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d273e7;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d273e7:
  QDomNode::~QDomNode((QDomNode *)&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d27420;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d27420:
  QDomNode::~QDomNode(local_50);
  return param_1;
}

