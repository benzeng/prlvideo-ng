
void FUN_1005c1980(long param_1)

{
  char cVar1;
  QDomNode local_b8 [8];
  QArrayData *local_b0;
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QDomNode local_70 [8];
  QDomNode local_68 [8];
  QDomNode local_60 [8];
  QDomNode local_58 [15];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QDomNode::QDomNode(local_58);
  QDomNode::operator=((QDomNode *)(param_1 + 0x48),local_58);
  QDomNode::~QDomNode(local_58);
  QDomNode::QDomNode(local_60);
  QDomNode::operator=((QDomNode *)(param_1 + 0x40),local_60);
  QDomNode::~QDomNode(local_60);
  FUN_1007ea1f0();
  QDomNode::firstChild();
  do {
    cVar1 = QDomNode::isNull();
    if (cVar1 != '\0') {
      QDomNode::~QDomNode(local_68);
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
    cVar1 = QDomNode::isElement();
    if (cVar1 != '\0') {
      QDomNode::toElement();
      QDomElement::tagName();
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Engine",6)
      ;
      cVar1 = operator==(&local_78,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_49 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005c1acc;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1005c1acc:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_49 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005c1afc;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1005c1afc:
      if (cVar1 == '\0') {
        QDomElement::tagName();
        local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Data",4)
        ;
        cVar1 = operator==(&local_90,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_49 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005c1bf2;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1005c1bf2:
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_49 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005c1c28;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1005c1c28:
        if (cVar1 != '\0') {
          QDomNode::operator=((QDomNode *)(param_1 + 0x48),local_68);
          goto LAB_1005c1c3f;
        }
      }
      else {
        QDomElement::text();
        FUN_1007d6920(&local_48,&local_88);
        *(undefined8 *)(param_1 + 0x58) = local_40;
        *(undefined8 *)(param_1 + 0x50) = local_48;
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_49 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005c1b60;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1005c1b60:
        QDomNode::operator=((QDomNode *)(param_1 + 0x40),local_68);
LAB_1005c1c3f:
        cVar1 = QDomNode::hasChildNodes();
        if (cVar1 == '\0') {
          local_b0 = (QArrayData *)QString::fromAscii_helper("",0);
          QDomDocument::createTextNode((QString *)local_a8);
          QDomNode::appendChild(local_a0);
          QDomNode::~QDomNode(local_a0);
          QDomNode::~QDomNode(local_a8);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_49 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1005c1ce0;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
      }
LAB_1005c1ce0:
      QDomNode::~QDomNode(local_70);
    }
    QDomNode::nextSibling();
    QDomNode::operator=(local_68,local_b8);
    QDomNode::~QDomNode(local_b8);
  } while( true );
}

