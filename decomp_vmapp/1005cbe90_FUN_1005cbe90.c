
undefined8 FUN_1005cbe90(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  bool bVar5;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (*param_2 == 0) {
    return 0x80021020;
  }
  lVar3 = *(long *)(*param_2 + 0x10);
  if (lVar3 == 0) {
    return 0x80021020;
  }
  lVar3 = ___dynamic_cast(lVar3,&PTR_vtable_10111e100,&PTR_vtable_10111e120,8);
  if (lVar3 == 0) {
    return 0x80021020;
  }
  QDomNode::toElement();
  pQVar4 = (QArrayData *)QString::fromAscii_helper("Protected",9);
  puVar1 = PTR_shared_null_100ba20d0;
  QDomElement::attribute(&local_28,&local_30);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cbf52;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1005cbf52:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_19 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005cbf82;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005cbf82:
  QDomNode::~QDomNode((QDomNode *)&local_30);
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    bVar5 = false;
  }
  else {
    iVar2 = QString::compare_helper
                      ((QArrayData *)(local_28.field0_0x0 + *(long *)(local_28.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_28.field0_0x0 + 4),"False",0xffffffff,1);
    bVar5 = iVar2 != 0;
  }
  *param_3 = bVar5;
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return 0;
}

