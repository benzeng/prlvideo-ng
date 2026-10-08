
undefined1 FUN_100d2d420(void)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QString local_28;
  undefined1 local_19;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Memory",6);
  QDomNode::firstChildElement(&local_28);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("RAMSize",7);
  uVar1 = FUN_100d2d580();
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d2d4ae;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100d2d4ae:
  QDomNode::~QDomNode((QDomNode *)&local_28);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return uVar1;
}

