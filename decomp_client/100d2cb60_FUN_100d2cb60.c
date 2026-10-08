
void FUN_100d2cb60(undefined8 *param_1,QDomDocument *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  QArrayData *pQVar5;
  bool bVar6;
  QString local_58;
  QArrayData *local_50;
  QDomNode local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_10225b4b0;
  lVar2 = *param_3;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  QDomDocument::QDomDocument((QDomDocument *)(param_1 + 2),param_2);
  QDomElement::QDomElement((QDomElement *)(param_1 + 3));
  QDomElement::QDomElement((QDomElement *)(param_1 + 4));
  if ((param_1[1] == 0) || (*(long *)(param_1[1] + 0x10) == 0)) {
    plVar3 = operator_new(0x28);
    *plVar3 = (long)&PTR_FUN_10230f6c0;
    FUN_100d2af40(plVar3 + 1);
    plVar3[4] = (long)PTR_shared_null_1021e12f0;
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    bVar6 = plVar4 == (long *)0x0;
    if (bVar6) {
      plVar4 = (long *)0x0;
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    else {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = (long)plVar3;
      *plVar4 = (long)&PTR_FUN_10230f530;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar3 = (long *)param_1[1];
    param_1[1] = plVar4;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (!bVar6) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  QDomDocument::documentElement();
  local_50 = (QArrayData *)QString::fromAscii_helper("Machine",7);
  QDomNode::firstChildElement(&local_40);
  QDomElement::operator=((QDomElement *)(param_1 + 3),(QDomElement *)&local_40);
  QDomNode::~QDomNode((QDomNode *)&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2cd0f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d2cd0f:
  QDomNode::~QDomNode(local_48);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("Hardware",8);
  QDomNode::firstChildElement(&local_58);
  QDomElement::operator=((QDomElement *)(param_1 + 4),(QDomElement *)&local_58);
  QDomNode::~QDomNode((QDomNode *)&local_58);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

