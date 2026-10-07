
undefined8 FUN_1005ccab0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QDomNode local_78 [8];
  QArrayData *local_70;
  QDomNode local_68 [8];
  QString local_60;
  QString local_58;
  QDomNode local_50 [8];
  QString local_48;
  QDomNode local_40 [15];
  undefined1 local_31;
  
  if (((*(long *)(param_2 + 10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_2 + 10) + 0x10), lVar2 == 0)) ||
     (lVar2 = ___dynamic_cast(lVar2,&PTR_vtable_10111e110,&PTR_vtable_10111e120,0), lVar2 == 0)) {
    uVar3 = 0x80021020;
  }
  else {
    QDomNode::firstChild();
    while( true ) {
      cVar1 = QDomNode::isNull();
      uVar3 = 0x80021008;
      if (cVar1 != '\0') break;
      cVar1 = QDomNode::isElement();
      if (cVar1 != '\0') {
        QDomNode::toElement();
        QDomElement::tagName();
        local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Type",4)
        ;
        cVar1 = operator==(&local_48,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005ccbb1;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1005ccbb1:
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005ccbe1;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1005ccbe1:
        QDomNode::~QDomNode(local_50);
        if (cVar1 != '\0') {
          QDomNode::firstChild();
          QDomNode::toText();
          FUN_10059c790(&local_70,*param_2);
          QDomNode::setNodeValue(&local_60);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005ccc9b;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_1005ccc9b:
          QDomNode::~QDomNode((QDomNode *)&local_60);
          uVar3 = 0;
          QDomNode::~QDomNode(local_68);
          break;
        }
      }
      QDomNode::nextSibling();
      QDomNode::operator=(local_40,local_78);
      QDomNode::~QDomNode(local_78);
    }
    QDomNode::~QDomNode(local_40);
  }
  return uVar3;
}

