
int FUN_1005ba470(undefined8 param_1,QString *param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QDomNode local_78 [8];
  QString local_70;
  QString local_68;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QDomElement local_50 [8];
  QDomNode local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  QDomNode::QDomNode(local_48);
  QDomElement::QDomElement(local_50);
  iVar3 = FUN_1005b9950(param_1,param_2);
  if (-1 < iVar3) {
    if (param_3->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      QString::operator=(param_3,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ba50e;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1005ba50e:
    QMutex::lock();
    QDomNode::firstChild();
    QDomNode::operator=(local_48,local_58);
    QDomNode::~QDomNode(local_58);
    iVar3 = -0x7ffdd000;
    while (cVar2 = QDomNode::isNull(), cVar2 == '\0') {
      cVar2 = QDomNode::isElement();
      if (cVar2 != '\0') {
        QDomNode::toElement();
        QDomElement::operator=(local_50,(QDomElement *)local_60);
        QDomNode::~QDomNode(local_60);
        QDomElement::tagName();
        cVar2 = operator==(&local_68,param_2);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005ba5e7;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1005ba5e7:
        if (cVar2 != '\0') {
          QDomElement::text();
          QString::operator=(param_3,&local_70);
          iVar3 = 0;
          if (*(int *)local_70.field0_0x0 == -1) break;
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          break;
        }
      }
      QDomNode::nextSibling();
      QDomNode::operator=(local_48,local_78);
      QDomNode::~QDomNode(local_78);
    }
    QMutex::unlock();
  }
  QDomNode::~QDomNode((QDomNode *)local_50);
  QDomNode::~QDomNode(local_48);
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 == -1) {
    return iVar3;
  }
  if (*(int *)PTR_shared_null_100ba20d0 != 0) {
    LOCK();
    *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_1005ba6c0;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
LAB_1005ba6c0:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar3;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
  return iVar3;
}

