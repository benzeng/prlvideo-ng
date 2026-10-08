
undefined1 FUN_100d1e7a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QDomNode local_b0 [8];
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QArrayData *local_98;
  QString local_90;
  QDomNode local_88 [8];
  QDomDocument local_80 [8];
  undefined4 local_78;
  int local_74;
  QArrayData *local_70;
  QFile local_68 [16];
  QString local_58;
  undefined1 local_49;
  QUuid local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  FUN_100d1e430(&local_58);
  QFile::QFile(local_68,&local_58);
  cVar1 = QFile::open(local_68,1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    local_74 = -1;
    local_78 = 0xffffffff;
    QDomDocument::QDomDocument(local_80);
    cVar1 = QDomDocument::setContent
                      ((QIODevice *)local_80,SUB81(local_68,0),(QString *)0x1,(int *)&local_70,
                       &local_74);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      FUN_100b7c6f0(param_1);
      QDomDocument::documentElement();
      local_98 = (QArrayData *)QString::fromAscii_helper("MachineEntry",0xc);
      QDomElement::elementsByTagName(&local_90);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_49 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100d1e8bc;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d1e8bc:
      for (iVar4 = 0; iVar2 = QDomNodeList::length(), iVar4 < iVar2; iVar4 = iVar4 + 1) {
        QDomNodeList::item((int)local_a8);
        QDomNode::toElement();
        QDomNode::~QDomNode(local_a8);
        cVar1 = QDomNode::isNull();
        if (cVar1 == '\0') {
          local_b8 = (QArrayData *)QString::fromAscii_helper("uuid",4);
          QDomElement::attributeNode((QString *)local_b0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_49 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100d1e982;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100d1e982:
          cVar1 = QDomNode::isNull();
          if (cVar1 == '\0') {
            QDomAttr::value();
            QUuid::QUuid(local_48,&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_49 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100d1e9e7;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_100d1e9e7:
            cVar1 = QUuid::isNull();
            if (cVar1 == '\0') {
              local_d0 = (QArrayData *)QString::fromAscii_helper("src",3);
              QDomElement::attributeNode(&local_c8);
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_49 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100d1ea5c;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
LAB_100d1ea5c:
              cVar1 = QDomNode::isNull();
              if (cVar1 == '\0') {
                QDomAttr::value();
                QUuid::toString();
                FUN_1006f3070(param_1,&local_e0,&local_d8);
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_49 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1eae3;
                  }
                  QArrayData::deallocate(local_e0,2,8);
                }
LAB_100d1eae3:
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 != 0) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + -1;
                    local_49 = *(int *)local_d8 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1eb19;
                  }
                  QArrayData::deallocate(local_d8,2,8);
                }
              }
LAB_100d1eb19:
              QDomNode::~QDomNode((QDomNode *)&local_c8);
            }
          }
          QDomNode::~QDomNode(local_b0);
        }
        QDomNode::~QDomNode(local_a0);
      }
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_90);
      lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
      uVar3 = 1;
      QDomNode::~QDomNode(local_88);
    }
    QDomDocument::~QDomDocument(local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100d1eba4;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100d1eba4:
  QFile::~QFile(local_68);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100d1ebdd;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d1ebdd:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

