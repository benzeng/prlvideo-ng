
undefined8 * FUN_10064f4c0(undefined8 *param_1,undefined8 *param_2)

{
  QTextStream local_a0 [16];
  QDomNode local_90 [8];
  QArrayData *local_88;
  QString local_80;
  QDomNode local_78 [8];
  QString local_70;
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QDomNode local_40 [8];
  QDomElement local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  QDomDocument::QDomDocument((QDomDocument *)&local_30);
  QDomElement::QDomElement(local_38);
  QDomNode::QDomNode(local_40);
  local_50 = (QArrayData *)QString::fromAscii_helper("xml",3);
  local_58 = (QArrayData *)QString::fromAscii_helper("version=\"1.0\" encoding=\"UTF-8\"",0x1e);
  QDomDocument::createProcessingInstruction(&local_48,&local_30);
  QDomNode::operator=(local_40,(QDomNode *)&local_48);
  QDomNode::~QDomNode((QDomNode *)&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f579;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10064f579:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f5a9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10064f5a9:
  QDomNode::firstChild();
  QDomNode::insertBefore(local_60,(QDomNode *)&local_30);
  QDomNode::~QDomNode(local_60);
  QDomNode::~QDomNode(local_68);
  QDomDocument::createElement(&local_70);
  QDomElement::operator=(local_38,(QDomElement *)&local_70);
  QDomNode::~QDomNode((QDomNode *)&local_70);
  QDomNode::appendChild(local_78);
  QDomNode::~QDomNode(local_78);
  (**(code **)*param_2)(&local_80,param_2,&local_30,0);
  local_88 = (QArrayData *)QString::fromAscii_helper("id",2);
  QDomElement::setAttribute(&local_80,(longlong)&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f688;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10064f688:
  QDomNode::appendChild(local_90);
  QDomNode::~QDomNode(local_90);
  *param_1 = PTR_shared_null_100ba20d0;
  QTextStream::QTextStream(local_a0,param_1,3);
  QDomNode::save(&local_30,local_a0,3,1);
  QTextStream::flush();
  QTextStream::~QTextStream(local_a0);
  QDomNode::~QDomNode((QDomNode *)&local_80);
  QDomNode::~QDomNode(local_40);
  QDomNode::~QDomNode((QDomNode *)local_38);
  QDomDocument::~QDomDocument((QDomDocument *)&local_30);
  return param_1;
}

