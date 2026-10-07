
void FUN_1005d31c0(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RCX;
  int iVar3;
  long lVar4;
  QDomNode local_78 [8];
  QDomNode local_70 [8];
  QArrayData *local_68;
  QDomNodeList local_60 [8];
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  QDomNode::firstChildElement(&local_58);
  FUN_1005d5510(in_RCX);
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    QDomNode::childNodes();
    for (iVar3 = 0; iVar2 = QDomNodeList::length(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      QDomNodeList::item((int)local_78);
      QDomNode::toElement();
      QDomElement::text();
      QDomNode::~QDomNode(local_70);
      QDomNode::~QDomNode(local_78);
      FUN_1007d6920(local_48,&local_68);
      FUN_1006028e0(in_RCX,local_48);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_49 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d3230;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1005d3230:
    }
    QDomNodeList::~QDomNodeList(local_60);
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  QDomNode::~QDomNode((QDomNode *)&local_58);
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

