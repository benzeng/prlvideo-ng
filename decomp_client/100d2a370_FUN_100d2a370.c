
undefined4 * FUN_100d2a370(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  QArrayData *pQVar6;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  undefined4 local_84;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  cVar2 = QDomNode::isNull();
  if (cVar2 != '\0') {
    return (undefined4 *)0x0;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("type",4);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QDomElement::attribute(&local_40,param_1);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Floppy",6);
  cVar2 = operator==(&local_40,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a422;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d2a422:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a452;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d2a452:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a482;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d2a482:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a4b2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d2a4b2:
  if (cVar2 == '\0') {
    return (undefined4 *)0x0;
  }
  QDomNode::parentNode();
  QDomNode::toElement();
  QDomNode::~QDomNode(local_68);
  cVar2 = QDomNode::isNull();
  puVar5 = (undefined4 *)0x0;
  if (cVar2 != '\0') goto LAB_100d2a812;
  QDomElement::tagName();
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("StorageController",0x11);
  cVar2 = operator==(&local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a556;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100d2a556:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a586;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100d2a586:
  puVar5 = (undefined4 *)0x0;
  if (cVar2 == '\0') goto LAB_100d2a812;
  local_80 = (QArrayData *)puVar1;
  cVar2 = FUN_100d25fb0(param_1,param_2,2,&local_80,&local_84);
  puVar5 = (undefined4 *)0x0;
  if (cVar2 != '\0') {
    puVar5 = operator_new(0x18);
    local_98 = (QArrayData *)QString::fromAscii_helper("port",4);
    local_a0 = (QArrayData *)puVar1;
    QDomElement::attribute(&local_90,param_1);
    uVar3 = QString::toInt((bool *)&local_90,0);
    pQVar6 = (QArrayData *)QString::fromAscii_helper("device",6);
    QDomElement::attribute(&local_a8,param_1);
    uVar4 = QString::toInt((bool *)&local_a8,0);
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    *(QArrayData **)(puVar5 + 2) = local_80;
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
    puVar5[4] = local_84;
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a6ce;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_100d2a6ce:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a704;
      }
      QArrayData::deallocate((QArrayData *)puVar1,2,8);
    }
LAB_100d2a704:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a73d;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_100d2a73d:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a776;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100d2a776:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a7ac;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100d2a7ac:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2a7e2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_100d2a7e2:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2a812;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d2a812:
  QDomNode::~QDomNode(local_60);
  return puVar5;
}

