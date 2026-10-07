
undefined8 FUN_1005cc0c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*param_2 == 0) {
    return 0x80021020;
  }
  lVar1 = *(long *)(*param_2 + 0x10);
  if (lVar1 == 0) {
    return 0x80021020;
  }
  lVar1 = ___dynamic_cast(lVar1,&PTR_vtable_10111e100,&PTR_vtable_10111e120,8);
  if (lVar1 == 0) {
    return 0x80021020;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("End",3);
  QDomNode::firstChildElement(&local_38);
  QDomNode::firstChild();
  local_50 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_48,&local_50,param_4,0,10,0x20);
  QDomNode::setNodeValue(&local_30);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005cc1b9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005cc1b9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005cc1e9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cc1e9:
  QDomNode::~QDomNode((QDomNode *)&local_30);
  QDomNode::~QDomNode((QDomNode *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}

