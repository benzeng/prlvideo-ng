
void FUN_1005c2a20(undefined8 param_1,QDomNode *param_2)

{
  QDomNode local_48 [8];
  QDomNode local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  QDomNode local_20 [15];
  undefined1 local_11;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("xml",3);
  local_38 = (QArrayData *)QString::fromAscii_helper("version=\"1.0\" encoding=\"UTF-8\"",0x1e);
  QDomDocument::createProcessingInstruction(&local_28,(QString *)param_2);
  QDomNode::QDomNode(local_20,(QDomNode *)&local_28);
  QDomNode::~QDomNode((QDomNode *)&local_28);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005c2ab0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005c2ab0:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005c2ae0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005c2ae0:
  QDomNode::firstChild();
  QDomNode::insertBefore(local_40,param_2);
  QDomNode::~QDomNode(local_40);
  QDomNode::~QDomNode(local_48);
  QDomNode::~QDomNode(local_20);
  return;
}

