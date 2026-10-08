
QString * FUN_100d23870(QString *param_1)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  QString local_20;
  undefined1 local_11;
  
  QDomDocument::documentElement();
  pQVar2 = (QArrayData *)QString::fromAscii_helper("version",7);
  puVar1 = PTR_shared_null_1021e1288;
  QDomElement::attribute(param_1,&local_20);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_11 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d238e9;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100d238e9:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d23919;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d23919:
  QDomNode::~QDomNode((QDomNode *)&local_20);
  return param_1;
}

