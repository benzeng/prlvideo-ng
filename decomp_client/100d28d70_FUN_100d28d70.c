
undefined4 * FUN_100d28d70(QString *param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 *puVar8;
  QArrayData *pQVar9;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QDomNode local_68 [8];
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  cVar3 = QDomNode::isNull();
  if (cVar3 != '\0') {
    return (undefined4 *)0x0;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("type",4);
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QDomElement::attribute(&local_40,param_1);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("HardDisk",8);
  cVar3 = operator==(&local_40,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28e22;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d28e22:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28e52;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d28e52:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28e82;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d28e82:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28eb5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d28eb5:
  if (param_2 == (long *)0x0 || cVar3 != '\x01') {
    return (undefined4 *)0x0;
  }
  QDomNode::parentNode();
  QDomNode::toElement();
  QDomNode::~QDomNode(local_68);
  cVar3 = QDomNode::isNull();
  puVar8 = (undefined4 *)0x0;
  if (cVar3 != '\0') goto LAB_100d29452;
  QDomElement::tagName();
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("StorageController",0x11);
  cVar3 = operator==(&local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28f5f;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100d28f5f:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28f8f;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100d28f8f:
  puVar8 = (undefined4 *)0x0;
  if (cVar3 == '\0') goto LAB_100d29452;
  local_88 = (QArrayData *)QString::fromAscii_helper("Image",5);
  QDomNode::firstChildElement(&local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d28fef;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d28fef:
  cVar3 = QDomNode::isNull();
  puVar8 = (undefined4 *)0x0;
  if (cVar3 == '\0') {
    pcVar1 = *(code **)(*param_2 + 0x10);
    local_98 = (QArrayData *)QString::fromAscii_helper("uuid",4);
    local_a0 = (QArrayData *)puVar2;
    QDomElement::attribute(&local_90,&local_80);
    lVar7 = (*pcVar1)(param_2,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2908c;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100d2908c:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d290c2;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100d290c2:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d290f8;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100d290f8:
    if (lVar7 == 0) {
      puVar8 = (undefined4 *)0x0;
      FUN_100df99c0("","VBoxVmModel",0,"VBox: Could not get disk descriptor");
    }
    else {
      puVar8 = operator_new(0x18);
      local_b0 = (QArrayData *)QString::fromAscii_helper("type",4);
      local_b8 = (QArrayData *)puVar2;
      QDomElement::attribute(&local_a8,&local_60);
      uVar4 = FUN_100d27910(&local_a8);
      local_c8 = (QArrayData *)QString::fromAscii_helper("port",4);
      local_d0 = (QArrayData *)puVar2;
      QDomElement::attribute(&local_c0,param_1);
      uVar5 = QString::toInt((bool *)&local_c0,0);
      pQVar9 = (QArrayData *)QString::fromAscii_helper("device",6);
      QDomElement::attribute(&local_d8,param_1);
      uVar6 = QString::toInt((bool *)&local_d8,0);
      *puVar8 = uVar4;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      *(long *)(puVar8 + 4) = lVar7;
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d29261;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_100d29261:
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          local_31 = *(int *)puVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d29297;
        }
        QArrayData::deallocate((QArrayData *)puVar2,2,8);
      }
LAB_100d29297:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d292d7;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_100d292d7:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d2930f;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_100d2930f:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d29345;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d29345:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d2937d;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d2937d:
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d293b5;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100d293b5:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d293eb;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100d293eb:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d29449;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
  }
LAB_100d29449:
  QDomNode::~QDomNode((QDomNode *)&local_80);
LAB_100d29452:
  QDomNode::~QDomNode((QDomNode *)&local_60);
  return puVar8;
}

