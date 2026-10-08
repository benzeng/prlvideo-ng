
undefined1 FUN_100d1fea0(undefined8 param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QDomNode local_d8 [8];
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
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
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  FUN_100d1e430(&local_58);
  QFile::QFile(local_68,&local_58);
  cVar2 = QFile::open(local_68,1);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    local_74 = -1;
    local_78 = 0xffffffff;
    QDomDocument::QDomDocument(local_80);
    cVar2 = QDomDocument::setContent
                      ((QIODevice *)local_80,SUB81(local_68,0),(QString *)0x1,(int *)&local_70,
                       &local_74);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_100b7c6f0(param_1);
      QDomDocument::documentElement();
      local_98 = (QArrayData *)QString::fromAscii_helper("Image",5);
      QDomElement::elementsByTagName(&local_90);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_49 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100d1ffb5;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d1ffb5:
      for (iVar5 = 0; iVar3 = QDomNodeList::length(), iVar5 < iVar3; iVar5 = iVar5 + 1) {
        QDomNodeList::item((int)local_a8);
        QDomNode::toElement();
        QDomNode::~QDomNode(local_a8);
        cVar2 = QDomNode::isNull();
        if (cVar2 == '\0') {
          local_b8 = (QArrayData *)QString::fromAscii_helper("uuid",4);
          QDomElement::attributeNode(&local_b0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_49 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100d20081;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100d20081:
          cVar2 = QDomNode::isNull();
          if (cVar2 == '\0') {
            QDomAttr::value();
            QUuid::QUuid(local_48,&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_49 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100d200ee;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_100d200ee:
            cVar2 = QUuid::isNull();
            if (cVar2 == '\0') {
              local_d0 = (QArrayData *)QString::fromAscii_helper("location",8);
              QDomElement::attributeNode(&local_c8);
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_49 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100d20163;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
LAB_100d20163:
              cVar2 = QDomNode::isNull();
              if (cVar2 != '\0') {
                local_e0 = (QArrayData *)QString::fromAscii_helper("src",3);
                QDomElement::attributeNode((QString *)local_d8);
                QDomAttr::operator=((QDomAttr *)&local_c8,(QDomAttr *)local_d8);
                QDomNode::~QDomNode(local_d8);
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_49 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d20201;
                  }
                  QArrayData::deallocate(local_e0,2,8);
                }
              }
LAB_100d20201:
              cVar2 = QDomNode::isNull();
              if (cVar2 == '\0') {
                QDomAttr::value();
                if (1 < DAT_10230ffd0) {
                  QDomAttr::value();
                  QString::toLocal8Bit();
                  pQVar1 = local_f0;
                  lVar6 = *(long *)(local_f0 + 0x10);
                  QString::toUtf8();
                  FUN_100df99c0("","VmConfigParser",2,"VBX: CD %s - %s",pQVar1 + lVar6,
                                local_100 + *(long *)(local_100 + 0x10));
                  if (*(int *)local_100 != -1) {
                    if (*(int *)local_100 != 0) {
                      LOCK();
                      *(int *)local_100 = *(int *)local_100 + -1;
                      local_49 = *(int *)local_100 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_100d202eb;
                    }
                    QArrayData::deallocate(local_100,1,8);
                  }
LAB_100d202eb:
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_49 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_100d20328;
                    }
                    QArrayData::deallocate(local_f0,1,8);
                  }
LAB_100d20328:
                  if (*(int *)local_f8 != -1) {
                    if (*(int *)local_f8 != 0) {
                      LOCK();
                      *(int *)local_f8 = *(int *)local_f8 + -1;
                      local_49 = *(int *)local_f8 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_100d2035e;
                    }
                    QArrayData::deallocate(local_f8,2,8);
                  }
                }
LAB_100d2035e:
                QUuid::toString();
                FUN_1006f3070(param_1,&local_108,&local_e8);
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_49 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d203ba;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_100d203ba:
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_49 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d203f0;
                  }
                  QArrayData::deallocate(local_e8,2,8);
                }
              }
LAB_100d203f0:
              QDomNode::~QDomNode((QDomNode *)&local_c8);
            }
          }
          QDomNode::~QDomNode((QDomNode *)&local_b0);
        }
        QDomNode::~QDomNode(local_a0);
      }
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_90);
      lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
      uVar4 = 1;
      QDomNode::~QDomNode(local_88);
    }
    QDomDocument::~QDomDocument(local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100d2047f;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100d2047f:
  QFile::~QFile(local_68);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100d204b8;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d204b8:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

