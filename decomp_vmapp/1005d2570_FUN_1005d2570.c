
undefined8 * FUN_1005d2570(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1007d6870();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  local_68 = (QArrayData *)QString::fromAscii_helper("GUID",4);
  QDomNode::firstChildElement(&local_58);
  QDomElement::text();
  QDomNode::~QDomNode((QDomNode *)&local_58);
  FUN_1007d6920(&local_38,&local_60);
  param_1[1] = local_30;
  *param_1 = local_38;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_39 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d262c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005d262c:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_39 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d265c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d265c:
  local_78 = (QArrayData *)QString::fromAscii_helper("Index",5);
  QDomNode::firstChildElement(&local_50);
  QDomElement::text();
  QDomNode::~QDomNode((QDomNode *)&local_50);
  uVar2 = QString::toInt((bool *)&local_70,0);
  *(undefined4 *)(param_1 + 3) = uVar2;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_39 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d26da;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d26da:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_39 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d270a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d270a:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Timeout",7);
  QDomNode::firstChildElement(&local_48);
  QDomElement::text();
  QDomNode::~QDomNode((QDomNode *)&local_48);
  uVar4 = QString::toULongLong((bool *)&local_80,0);
  param_1[2] = uVar4;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_39 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d2789;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005d2789:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_39 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005d27b9;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005d27b9:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

