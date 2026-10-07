
undefined8
FUN_1005cd9d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QDomNode local_38 [15];
  undefined1 local_29;
  
  FUN_1005c2bd0(local_38,param_1);
  local_50 = (QArrayData *)QString::fromAscii_helper("Disk_size",9);
  QDomNode::firstChildElement(&local_48);
  QDomNode::firstChild();
  local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_58,&local_60,param_2,0,10,0x20);
  QDomNode::setNodeValue(&local_40);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdaa0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cdaa0:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdad0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005cdad0:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  QDomNode::~QDomNode((QDomNode *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdb12;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cdb12:
  local_78 = (QArrayData *)QString::fromAscii_helper("Cylinders",9);
  QDomNode::firstChildElement(&local_70);
  QDomNode::firstChild();
  local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_80,&local_88,param_4,0,10,0x20);
  QDomNode::setNodeValue(&local_68);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdbb5;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005cdbb5:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdbe5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005cdbe5:
  QDomNode::~QDomNode((QDomNode *)&local_68);
  QDomNode::~QDomNode((QDomNode *)&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdc27;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005cdc27:
  local_a0 = (QArrayData *)QString::fromAscii_helper("Heads",5);
  QDomNode::firstChildElement(&local_98);
  QDomNode::firstChild();
  local_b0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_a8,&local_b0,param_3,0,10,0x20);
  QDomNode::setNodeValue(&local_90);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdcee;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005cdcee:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdd24;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005cdd24:
  QDomNode::~QDomNode((QDomNode *)&local_90);
  QDomNode::~QDomNode((QDomNode *)&local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdd72;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005cdd72:
  local_c8 = (QArrayData *)QString::fromAscii_helper("Sectors",7);
  QDomNode::firstChildElement(&local_c0);
  QDomNode::firstChild();
  local_d8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_d0,&local_d8,param_5,0,10,0x20);
  QDomNode::setNodeValue(&local_b8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cde39;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005cde39:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cde6f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1005cde6f:
  QDomNode::~QDomNode((QDomNode *)&local_b8);
  QDomNode::~QDomNode((QDomNode *)&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cdebd;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005cdebd:
  QDomNode::~QDomNode(local_38);
  return 0;
}

