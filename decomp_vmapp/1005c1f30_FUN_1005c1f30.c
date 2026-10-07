
void FUN_1005c1f30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  QDomNode local_d0 [8];
  QArrayData *local_c8;
  QString local_c0;
  QDomNode local_b8 [8];
  QArrayData *local_b0;
  QString local_a8;
  QDomNode local_a0 [8];
  QString local_98;
  QDomNode local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QDomNode local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QDomNode local_40 [8];
  QDomElement local_38 [15];
  undefined1 local_29;
  
  QDomElement::QDomElement(local_38);
  QDomNode::QDomNode(local_40);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_58 = (QArrayData *)QString::fromAscii_helper("Encryption",10);
  QDomDocument::createElement(&local_50);
  QDomElement::operator=(local_38,(QDomElement *)&local_50);
  QDomNode::~QDomNode((QDomNode *)&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c1fd7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005c1fd7:
  QDomNode::appendChild(local_60);
  QDomNode::operator=(local_40,local_60);
  QDomNode::~QDomNode(local_60);
  local_70 = (QArrayData *)QString::fromAscii_helper("Engine",6);
  QDomDocument::createElement(&local_68);
  QDomElement::operator=(local_38,(QDomElement *)&local_68);
  QDomNode::~QDomNode((QDomNode *)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c2068;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005c2068:
  local_80 = (QArrayData *)QString::fromAscii_helper("%1",2);
  FUN_1007d6bb0(&local_88,param_3);
  QString::arg(&local_78,&local_80,&local_88,0,0x20);
  QString::operator=(&local_48,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c20df;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005c20df:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c210f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005c210f:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c213f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005c213f:
  QDomDocument::createTextNode(&local_98);
  QDomNode::appendChild(local_90);
  QDomNode::~QDomNode(local_90);
  QDomNode::~QDomNode((QDomNode *)&local_98);
  QDomNode::appendChild(local_a0);
  QDomNode::operator=((QDomNode *)(param_1 + 0x40),local_a0);
  QDomNode::~QDomNode(local_a0);
  local_b0 = (QArrayData *)QString::fromAscii_helper("Data",4);
  QDomDocument::createElement(&local_a8);
  QDomElement::operator=(local_38,(QDomElement *)&local_a8);
  QDomNode::~QDomNode((QDomNode *)&local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c2231;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005c2231:
  local_c8 = (QArrayData *)QString::fromAscii_helper("",0);
  QDomDocument::createTextNode(&local_c0);
  QDomNode::appendChild(local_b8);
  QDomNode::~QDomNode(local_b8);
  QDomNode::~QDomNode((QDomNode *)&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c22c1;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005c22c1:
  QDomNode::appendChild(local_d0);
  QDomNode::operator=((QDomNode *)(param_1 + 0x48),local_d0);
  QDomNode::~QDomNode(local_d0);
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x58) = param_3[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c2330;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005c2330:
  QDomNode::~QDomNode(local_40);
  QDomNode::~QDomNode((QDomNode *)local_38);
  return;
}

