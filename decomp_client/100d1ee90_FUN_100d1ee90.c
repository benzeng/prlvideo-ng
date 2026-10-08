
undefined8 FUN_100d1ee90(undefined8 param_1,QDomElement *param_2,char param_3)

{
  long lVar1;
  bool bVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  int local_12c;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QDomNode local_a0 [8];
  QDomNode local_98 [8];
  QDomNode local_90 [8];
  QDomNode local_88 [8];
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QDomNodeList local_60 [8];
  QDomElement local_58 [15];
  undefined1 local_49;
  QUuid local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QDomElement::QDomElement(local_58,param_2);
  QDomNodeList::QDomNodeList(local_60);
  if (param_3 == '\0') {
    local_70 = (QArrayData *)QString::fromAscii_helper("HardDisk",8);
  }
  else {
    local_70 = (QArrayData *)QString::fromAscii_helper("DiffHardDisk",0xc);
  }
  QDomElement::elementsByTagName(&local_68);
  QDomNodeList::operator=(local_60,(QDomNodeList *)&local_68);
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100d1ef59;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d1ef59:
  if ((param_3 != '\0') && (iVar5 = QDomNodeList::length(), iVar5 == 0)) {
    local_80 = (QArrayData *)QString::fromAscii_helper("HardDisk",8);
    QDomElement::elementsByTagName(&local_78);
    QDomNodeList::operator=(local_60,(QDomNodeList *)&local_78);
    QDomNodeList::~QDomNodeList((QDomNodeList *)&local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100d1efd7;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100d1efd7:
  local_12c = 0;
  do {
    iVar5 = QDomNodeList::length();
    if (iVar5 <= local_12c) {
      QDomNodeList::~QDomNodeList(local_60);
      lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
      QDomNode::~QDomNode((QDomNode *)local_58);
      if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return 1;
    }
    QDomNodeList::item((int)local_90);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_90);
    cVar4 = QDomNode::isNull();
    if (cVar4 == '\0') {
      QDomNode::parentNode();
      QDomNode::toElement();
      QDomNode::~QDomNode(local_a0);
      cVar4 = QDomNode::isNull();
      if (cVar4 == '\0') {
        QDomElement::tagName();
        local_b0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("HardDisk",8);
        cVar4 = operator==(&local_a8,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_49 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100d1f117;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100d1f117:
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_49 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100d1f14d;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_100d1f14d:
        if (cVar4 == param_3) goto LAB_100d1f15d;
      }
      else if (param_3 == '\0') {
LAB_100d1f15d:
        local_c0 = (QArrayData *)QString::fromAscii_helper("uuid",4);
        QDomElement::attributeNode(&local_b8);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_49 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100d1f1c1;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100d1f1c1:
        cVar4 = QDomNode::isNull();
        if (cVar4 == '\0') {
          QDomAttr::value();
          QUuid::QUuid(local_48,&local_c8);
          if (*(int *)local_c8.field0_0x0 != -1) {
            if (*(int *)local_c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
              local_49 = *(int *)local_c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100d1f22e;
            }
            QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
          }
LAB_100d1f22e:
          cVar4 = QUuid::isNull();
          if (cVar4 == '\0') {
            local_d8 = (QArrayData *)QString::fromAscii_helper("location",8);
            local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
            QDomElement::attribute(&local_d0,(QString *)local_88);
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_49 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100d1f2b8;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_100d1f2b8:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_49 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100d1f2ee;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100d1f2ee:
            if (*(int *)(local_d0.field0_0x0 + 4) == 0) {
              local_f0 = (QArrayData *)QString::fromAscii_helper("VirtualDiskImage",0x10);
              QDomNode::firstChildElement(&local_e8);
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_49 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100d1f363;
                }
                QArrayData::deallocate(local_f0,2,8);
              }
LAB_100d1f363:
              cVar4 = QDomNode::isNull();
              bVar2 = true;
              if (cVar4 == '\0') {
                local_100 = (QArrayData *)QString::fromAscii_helper("filePath",8);
                local_108 = (QArrayData *)PTR_shared_null_1021e1288;
                QDomElement::attribute(&local_f8,&local_e8);
                QString::operator=(&local_d0,&local_f8);
                if (*(int *)local_f8.field0_0x0 != -1) {
                  if (*(int *)local_f8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                    local_49 = *(int *)local_f8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1f40b;
                  }
                  QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
                }
LAB_100d1f40b:
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_49 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1f441;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_100d1f441:
                bVar2 = false;
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_49 = *(int *)local_100 != 0;
                    UNLOCK();
                    bVar2 = false;
                    if ((bool)local_49) goto LAB_100d1f479;
                  }
                  QArrayData::deallocate(local_100,2,8);
                  bVar2 = false;
                }
              }
LAB_100d1f479:
              QDomNode::~QDomNode((QDomNode *)&local_e8);
              if ((!bVar2) && (*(int *)(local_d0.field0_0x0 + 4) != 0)) goto LAB_100d1f49e;
            }
            else {
LAB_100d1f49e:
              if (1 < DAT_10230ffd0) {
                QDomAttr::value();
                QString::toLocal8Bit();
                pQVar3 = local_110;
                lVar1 = *(long *)(local_110 + 0x10);
                QString::toUtf8();
                FUN_100df99c0("","VmConfigParser",2,"VBX: HDD %s - %s",pQVar3 + lVar1,
                              local_120 + *(long *)(local_120 + 0x10));
                if (*(int *)local_120 != -1) {
                  if (*(int *)local_120 != 0) {
                    LOCK();
                    *(int *)local_120 = *(int *)local_120 + -1;
                    local_49 = *(int *)local_120 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1f55a;
                  }
                  QArrayData::deallocate(local_120,1,8);
                }
LAB_100d1f55a:
                if (*(int *)local_110 != -1) {
                  if (*(int *)local_110 != 0) {
                    LOCK();
                    *(int *)local_110 = *(int *)local_110 + -1;
                    local_49 = *(int *)local_110 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1f590;
                  }
                  QArrayData::deallocate(local_110,1,8);
                }
LAB_100d1f590:
                if (*(int *)local_118 != -1) {
                  if (*(int *)local_118 != 0) {
                    LOCK();
                    *(int *)local_118 = *(int *)local_118 + -1;
                    local_49 = *(int *)local_118 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_100d1f5c6;
                  }
                  QArrayData::deallocate(local_118,2,8);
                }
              }
LAB_100d1f5c6:
              QUuid::toString();
              FUN_1006f3070(param_1,&local_128,&local_d0);
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_49 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100d1f626;
                }
                QArrayData::deallocate(local_128,2,8);
              }
            }
LAB_100d1f626:
            if (*(int *)local_d0.field0_0x0 != -1) {
              if (*(int *)local_d0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                local_49 = *(int *)local_d0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100d1f670;
              }
              QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
            }
          }
        }
LAB_100d1f670:
        QDomNode::~QDomNode((QDomNode *)&local_b8);
      }
      QDomNode::~QDomNode(local_98);
    }
    QDomNode::~QDomNode(local_88);
    local_12c = local_12c + 1;
  } while( true );
}

