
undefined8 FUN_1005ce270(void)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  QString local_20;
  undefined1 local_11;
  
  QDomNode::firstChild();
  QByteArray::toHex();
  lVar1 = 0;
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_30 + 4));
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper((char *)pQVar2,(int)lVar1);
  QDomNode::setNodeValue(&local_20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ce303;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005ce303:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ce333;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1005ce333:
  QDomNode::~QDomNode((QDomNode *)&local_20);
  return 0;
}

