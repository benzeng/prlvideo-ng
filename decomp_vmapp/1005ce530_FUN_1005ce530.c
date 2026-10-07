
undefined8 FUN_1005ce530(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  QDomNode::firstChild();
  FUN_1007d6a70(&local_28,param_1 + 0x50);
  QDomNode::setNodeValue(&local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ce5a2;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ce5a2:
  QDomNode::~QDomNode((QDomNode *)&local_20);
  return 0;
}

