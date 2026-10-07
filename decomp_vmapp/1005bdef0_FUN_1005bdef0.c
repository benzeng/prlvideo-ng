
QDomNode * FUN_1005bdef0(QDomNode *param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QString local_50;
  QDomNode local_48 [8];
  QDomNode local_40 [15];
  undefined1 local_31;
  
  QDomDocument::documentElement();
  QDomNode::firstChild();
  QDomNode::~QDomNode(local_48);
  do {
    cVar1 = QDomNode::isNull();
    if (cVar1 != '\0') {
      QDomNode::QDomNode(param_1);
LAB_1005bdffb:
      QDomNode::~QDomNode(local_40);
      return param_1;
    }
    QDomNode::toElement();
    QDomElement::tagName();
    cVar1 = operator==(&local_50,param_3);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bdfa5;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1005bdfa5:
    QDomNode::~QDomNode(local_58);
    if (cVar1 != '\0') {
      QDomNode::QDomNode(param_1,local_40);
      goto LAB_1005bdffb;
    }
    QDomNode::nextSibling();
    QDomNode::operator=(local_40,local_60);
    QDomNode::~QDomNode(local_60);
  } while( true );
}

