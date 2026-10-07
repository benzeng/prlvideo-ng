
undefined8
FUN_1005cd720(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  QDomNode local_70 [8];
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QString local_58;
  QString local_50;
  QDomNode local_48 [8];
  QDomNode local_40 [15];
  undefined1 local_31;
  
  uVar3 = 0x80021020;
  if (((*(long *)(param_2 + 0x28) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar2 != 0)) &&
     (lVar2 = ___dynamic_cast(lVar2,&PTR_vtable_10111e110,&PTR_vtable_10111e120,0,param_5,param_6,
                              param_2), lVar2 != 0)) {
    QDomNode::firstChild();
    while (cVar1 = QDomNode::isNull(), cVar1 == '\0') {
      cVar1 = QDomNode::isElement();
      if (cVar1 != '\0') {
        QDomNode::toElement();
        QDomElement::tagName();
        local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("File",4)
        ;
        cVar1 = operator==(&local_50,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005cd832;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1005cd832:
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005cd862;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1005cd862:
        iVar4 = 4;
        if (cVar1 != '\0') {
          QDomNode::firstChild();
          QDomNode::toText();
          QDomNode::setNodeValue((QString *)local_60);
          QDomNode::~QDomNode(local_60);
          iVar4 = 2;
          QDomNode::~QDomNode(local_68);
        }
        QDomNode::~QDomNode(local_48);
        if (iVar4 != 4) break;
      }
      QDomNode::nextSibling();
      QDomNode::operator=(local_40,local_70);
      QDomNode::~QDomNode(local_70);
    }
    QDomNode::~QDomNode(local_40);
    uVar3 = 0;
  }
  return uVar3;
}

