
undefined1
FUN_100d25fb0(undefined8 param_1,long *param_2,undefined4 param_3,QString *param_4,
             undefined4 *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  QArrayData *pQVar4;
  undefined1 uVar5;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("Image",5);
  QDomNode::firstChildElement(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d26025;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d26025:
  cVar3 = QDomNode::isNull();
  if (cVar3 == '\0') {
    pcVar1 = *(code **)(*param_2 + 0x18);
    local_60 = (QArrayData *)QString::fromAscii_helper("uuid",4);
    local_68 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_58,&local_40);
    (*pcVar1)(&local_50,param_2,&local_58,param_3);
    QString::operator=(param_4,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d26142;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100d26142:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d26172;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100d26172:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d261a2;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d261a2:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d261d2;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d261d2:
    *param_5 = 2;
  }
  else {
    local_78 = (QArrayData *)QString::fromAscii_helper("HostDrive",9);
    QDomNode::firstChildElement(&local_70);
    QDomElement::operator=((QDomElement *)&local_40,(QDomElement *)&local_70);
    QDomNode::~QDomNode((QDomNode *)&local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d260a1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d260a1:
    cVar3 = QDomNode::isNull();
    if (cVar3 != '\0') {
      uVar5 = 0;
      goto LAB_100d262c4;
    }
    pQVar4 = (QArrayData *)QString::fromAscii_helper("src",3);
    puVar2 = PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_80,&local_40);
    QString::operator=(param_4,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d26255;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100d26255:
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d2628b;
      }
      QArrayData::deallocate((QArrayData *)puVar2,2,8);
    }
LAB_100d2628b:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d262bb;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100d262bb:
    *param_5 = 1;
  }
  uVar5 = 1;
LAB_100d262c4:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  return uVar5;
}

