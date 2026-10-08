
void FUN_100d24bc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("Image",5);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d24c47;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d24c47:
  iVar5 = 0;
  do {
    iVar4 = QDomNodeList::length();
    if (iVar4 <= iVar5) {
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
      return;
    }
    QDomNodeList::item((int)local_58);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_58);
    cVar2 = QDomNode::isNull();
    if (cVar2 == '\0') {
      local_60 = (QArrayData *)QString::fromAscii_helper("uuid",4);
      cVar2 = QDomElement::hasAttribute((QString *)local_50);
      bVar3 = 1;
      if (cVar2 != '\0') {
        bVar3 = QDomElement::hasAttribute((QString *)local_50);
        bVar3 = bVar3 ^ 1;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d24d10;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100d24d10:
      if (bVar3 == 0) {
        local_70 = (QArrayData *)QString::fromAscii_helper("uuid",4);
        local_78 = (QArrayData *)PTR_shared_null_1021e1288;
        QDomElement::attribute(&local_68,(QString *)local_50);
        puVar1 = PTR_shared_null_1021e1288;
        QDomElement::attribute(&local_88,(QString *)local_50);
        FUN_100d25960(&local_80,param_4,&local_88);
        FUN_100d2b5e0(param_5,&local_68,param_3,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24dd3;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100d24dd3:
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24e03;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_100d24e03:
        if (*(int *)puVar1 != -1) {
          if (*(int *)puVar1 != 0) {
            LOCK();
            *(int *)puVar1 = *(int *)puVar1 + -1;
            local_31 = *(int *)puVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24e39;
          }
          QArrayData::deallocate((QArrayData *)puVar1,2,8);
        }
LAB_100d24e39:
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24e69;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100d24e69:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24e99;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100d24e99:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d24c60;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
    }
LAB_100d24c60:
    QDomNode::~QDomNode(local_50);
    iVar5 = iVar5 + 1;
  } while( true );
}

