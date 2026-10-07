
void FUN_1005c2610(long param_1)

{
  QArrayData *pQVar1;
  QString local_30;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  FUN_1007ea1f0(param_1 + 0x50);
  QDomNode::firstChild();
  local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  QDomNode::setNodeValue(&local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005c2681;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005c2681:
  QDomNode::~QDomNode((QDomNode *)&local_20);
  QDomNode::firstChild();
  pQVar1 = (QArrayData *)QString::fromAscii_helper("",0);
  QDomNode::setNodeValue(&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005c26e9;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005c26e9:
  QDomNode::~QDomNode((QDomNode *)&local_30);
  return;
}

