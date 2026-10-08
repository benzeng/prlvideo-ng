
undefined1 FUN_100d25100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QString *this;
  QArrayData *pQVar4;
  undefined1 uVar5;
  int iVar6;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QDomNode local_80 [8];
  QDomNode local_78 [8];
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QDomNode local_50 [8];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::documentElement();
  local_58 = (QArrayData *)QString::fromAscii_helper("Global",6);
  QDomNode::firstChildElement(&local_48);
  local_60 = (QArrayData *)QString::fromAscii_helper("MachineRegistry",0xf);
  QDomNode::firstChildElement(&local_40);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d251b9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d251b9:
  QDomNode::~QDomNode((QDomNode *)&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d251f2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d251f2:
  QDomNode::~QDomNode(local_50);
  cVar2 = QDomNode::isNull();
  if (cVar2 != '\0') {
    uVar5 = 0;
    goto LAB_100d25600;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("MachineEntry",0xc);
  QDomElement::elementsByTagName(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d25265;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d25265:
  for (iVar6 = 0; iVar3 = QDomNodeList::length(), iVar6 < iVar3; iVar6 = iVar6 + 1) {
    QDomNodeList::item((int)local_80);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_80);
    cVar2 = QDomNode::isNull();
    if (cVar2 == '\0') {
      local_88 = (QArrayData *)QString::fromAscii_helper("uuid",4);
      cVar2 = QDomElement::hasAttribute((QString *)local_78);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        local_90 = (QArrayData *)QString::fromAscii_helper("src",3);
        cVar2 = QDomElement::hasAttribute((QString *)local_78);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d25353;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
LAB_100d25353:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d25383;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100d25383:
      if (cVar2 != '\0') {
        local_a0 = (QArrayData *)QString::fromAscii_helper("uuid",4);
        local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
        QDomElement::attribute(&local_98,(QString *)local_78);
        this = (QString *)FUN_1006f3180(param_3,&local_98);
        pQVar4 = (QArrayData *)QString::fromAscii_helper("src",3);
        puVar1 = PTR_shared_null_1021e1288;
        QDomElement::attribute(&local_b8,(QString *)local_78);
        FUN_100d25960(&local_b0,param_2,&local_b8);
        QString::operator=(this,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d2548a;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100d2548a:
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d254c0;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_100d254c0:
        if (*(int *)puVar1 != -1) {
          if (*(int *)puVar1 != 0) {
            LOCK();
            *(int *)puVar1 = *(int *)puVar1 + -1;
            local_31 = *(int *)puVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d254f6;
          }
          QArrayData::deallocate((QArrayData *)puVar1,2,8);
        }
LAB_100d254f6:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d2552c;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_100d2552c:
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d25565;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100d25565:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d2559b;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100d2559b:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d25280;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
    }
LAB_100d25280:
    QDomNode::~QDomNode(local_78);
  }
  uVar5 = 1;
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_68);
LAB_100d25600:
  QDomNode::~QDomNode((QDomNode *)&local_40);
  return uVar5;
}

