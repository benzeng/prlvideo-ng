
undefined8 FUN_1005cc330(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  QDomNode local_d8 [8];
  QString local_d0;
  QDomNode local_c8 [8];
  QArrayData *local_c0;
  QString local_b8;
  QDomNode local_b0 [8];
  QArrayData *local_a8;
  QString local_a0;
  QDomNode local_98 [8];
  QArrayData *local_90;
  QString local_88;
  QDomNode local_80 [8];
  QArrayData *local_78;
  QString local_70;
  QDomNode local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QDomNode local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*param_2 == 0) {
    return 0x80021020;
  }
  lVar2 = *(long *)(*param_2 + 0x10);
  if (lVar2 == 0) {
    return 0x80021020;
  }
  lVar2 = ___dynamic_cast(lVar2,&PTR_vtable_10111e100,&PTR_vtable_10111e120,8);
  if (lVar2 == 0) {
    return 0x80021020;
  }
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  plVar4 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)&PTR_FUN_10111e168;
    plVar3[1] = (long)&PTR_FUN_10111e188;
    QDomNode::QDomNode((QDomNode *)(plVar3 + 2));
    plVar4 = plVar3;
  }
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar3 == (long *)0x0) {
    if (plVar4 == (long *)0x0) {
      return 0x80000002;
    }
    (**(code **)(*plVar4 + 8))();
    return 0x80000002;
  }
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = (long)plVar4;
  *plVar3 = (long)&PTR_FUN_10111e208;
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (plVar3 == (long *)0x0) {
    return 0x80000002;
  }
  uVar5 = 0x80000002;
  if (plVar3[2] == 0) goto LAB_1005cc810;
  local_48 = (QArrayData *)QString::fromAscii_helper("Image",5);
  QDomDocument::createElement(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc4a4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005cc4a4:
  QDomNode::appendChild(local_50);
  local_60 = (QArrayData *)QString::fromAscii_helper("GUID",4);
  QDomDocument::createElement(&local_58);
  QDomElement::operator=((QDomElement *)&local_40,(QDomElement *)&local_58);
  QDomNode::~QDomNode((QDomNode *)&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc52a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005cc52a:
  FUN_1007d6a70(&local_78,param_3 + 6);
  QDomDocument::createTextNode(&local_70);
  QDomNode::appendChild(local_68);
  QDomNode::~QDomNode(local_68);
  QDomNode::~QDomNode((QDomNode *)&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc59b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005cc59b:
  QDomNode::appendChild(local_80);
  QDomNode::~QDomNode(local_80);
  local_90 = (QArrayData *)QString::fromAscii_helper("Type",4);
  QDomDocument::createElement(&local_88);
  QDomElement::operator=((QDomElement *)&local_40,(QDomElement *)&local_88);
  QDomNode::~QDomNode((QDomNode *)&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc62c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005cc62c:
  FUN_10059c790(&local_a8,*param_3);
  QDomDocument::createTextNode(&local_a0);
  QDomNode::appendChild(local_98);
  QDomNode::~QDomNode(local_98);
  QDomNode::~QDomNode((QDomNode *)&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc6b7;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005cc6b7:
  QDomNode::appendChild(local_b0);
  QDomNode::~QDomNode(local_b0);
  local_c0 = (QArrayData *)QString::fromAscii_helper("File",4);
  QDomDocument::createElement(&local_b8);
  QDomElement::operator=((QDomElement *)&local_40,(QDomElement *)&local_b8);
  QDomNode::~QDomNode((QDomNode *)&local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cc757;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005cc757:
  QDomDocument::createTextNode(&local_d0);
  QDomNode::appendChild(local_c8);
  QDomNode::~QDomNode(local_c8);
  QDomNode::~QDomNode((QDomNode *)&local_d0);
  QDomNode::appendChild(local_d8);
  QDomNode::~QDomNode(local_d8);
  QDomNode::operator=((QDomNode *)(plVar4 + 2),local_50);
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  plVar4 = *(long **)(param_3 + 10);
  *(long **)(param_3 + 10) = plVar3;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  QDomNode::~QDomNode(local_50);
  uVar5 = 0;
  QDomNode::~QDomNode((QDomNode *)&local_40);
LAB_1005cc810:
  LOCK();
  plVar4 = plVar3 + 1;
  lVar2 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return uVar5;
}

