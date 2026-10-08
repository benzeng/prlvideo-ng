
undefined1 FUN_100d2d580(undefined8 param_1,QString *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  QString local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  local_22 = 0;
  cVar2 = QDomNode::isNull();
  if (cVar2 != '\0') {
    return local_22;
  }
  cVar2 = QDomElement::hasAttribute(param_2);
  puVar1 = PTR_shared_null_1021e1288;
  if (cVar2 == '\0') {
    return local_22;
  }
  QDomElement::attribute(&local_30,param_2);
  uVar3 = QString::toUInt((bool *)&local_30,(int)&local_22);
  *param_4 = uVar3;
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d2d620;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d2d620:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return local_22;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return local_22;
}

