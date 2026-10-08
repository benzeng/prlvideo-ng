
undefined4 * FUN_100d29990(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  QArrayData *pQVar8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  undefined4 local_84;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QDomNode local_68 [8];
  QString local_60;
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
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DVD",3);
  cVar2 = operator==(&local_40,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29a42;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d29a42:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29a72;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d29a72:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29aa2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d29aa2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29ad2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d29ad2:
  if (cVar2 == '\0') {
    return (undefined4 *)0x0;
  }
  QDomNode::parentNode();
  QDomNode::toElement();
  QDomNode::~QDomNode(local_68);
  cVar2 = QDomNode::isNull();
  puVar7 = (undefined4 *)0x0;
  if (cVar2 != '\0') goto LAB_100d29f47;
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
      if ((bool)local_31) goto LAB_100d29b76;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100d29b76:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29ba6;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100d29ba6:
  puVar7 = (undefined4 *)0x0;
  if (cVar2 == '\0') goto LAB_100d29f47;
  local_80 = (QArrayData *)puVar1;
  cVar2 = FUN_100d25fb0(param_1,param_2,1,&local_80,&local_84);
  puVar7 = (undefined4 *)0x0;
  if (cVar2 != '\0') {
    puVar7 = operator_new(0x20);
    local_98 = (QArrayData *)QString::fromAscii_helper("type",4);
    local_a0 = (QArrayData *)puVar1;
    QDomElement::attribute(&local_90,&local_60);
    uVar4 = FUN_100d27910(&local_90);
    local_b0 = (QArrayData *)QString::fromAscii_helper("port",4);
    local_b8 = (QArrayData *)puVar1;
    QDomElement::attribute(&local_a8,param_1);
    uVar5 = QString::toInt((bool *)&local_a8,0);
    pQVar8 = (QArrayData *)QString::fromAscii_helper("device",6);
    QDomElement::attribute(&local_c0,param_1);
    uVar6 = QString::toInt((bool *)&local_c0,0);
    uVar3 = FUN_100d26520(param_1);
    *puVar7 = uVar4;
    puVar7[1] = uVar5;
    puVar7[2] = uVar6;
    *(QArrayData **)(puVar7 + 4) = local_80;
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
    puVar7[6] = local_84;
    *(undefined1 *)(puVar7 + 7) = uVar3;
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29d5c;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100d29d5c:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29d92;
      }
      QArrayData::deallocate((QArrayData *)puVar1,2,8);
    }
LAB_100d29d92:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29dca;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_100d29dca:
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29e03;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_100d29e03:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29e39;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100d29e39:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29e72;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100d29e72:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29eab;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100d29eab:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29ee1;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100d29ee1:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d29f17;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_100d29f17:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d29f47;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d29f47:
  QDomNode::~QDomNode((QDomNode *)&local_60);
  return puVar7;
}

