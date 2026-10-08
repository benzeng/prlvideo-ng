
undefined8 FUN_100d1b050(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QDomNode local_78 [8];
  QDomNode local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("Network",7);
  QDomElement::elementsByTagName(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1b0bf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d1b0bf:
  iVar5 = QDomNodeList::length();
  bVar2 = true;
  if (iVar5 < 1) goto LAB_100d1bb42;
  QDomNodeList::item((int)local_58);
  QDomNode::toElement();
  QDomNode::~QDomNode(local_58);
  local_68 = (QArrayData *)QString::fromAscii_helper("Adapter",7);
  QDomElement::elementsByTagName(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1b157;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d1b157:
  lVar7 = 0;
  while( true ) {
    iVar5 = QDomNodeList::length();
    if (iVar5 <= lVar7) break;
    QDomNodeList::item((int)local_78);
    QDomNode::toElement();
    QDomNode::~QDomNode(local_78);
    local_88 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    QDomElement::attributeNode(&local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d1b1f8;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d1b1f8:
    cVar4 = QDomNode::isNull();
    if (cVar4 == '\0') {
      QDomAttr::value();
      local_98 = (QArrayData *)QString::fromAscii_helper("true",4);
      iVar5 = QString::compare(&local_90,&local_98,1);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1b288;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d1b288:
      if (iVar5 == 0) {
        local_a8 = (QArrayData *)QString::fromAscii_helper("cable",5);
        QDomElement::attributeNode(&local_a0);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d1b2f5;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100d1b2f5:
        cVar4 = QDomNode::isNull();
        if (cVar4 == '\0') {
          local_b8 = (QArrayData *)QString::fromAscii_helper("type",4);
          QDomElement::attributeNode(&local_b0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d1b370;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100d1b370:
          cVar4 = QDomNode::isNull();
          if (cVar4 == '\0') {
            local_c8 = (QArrayData *)QString::fromAscii_helper("MACAddress",10);
            QDomElement::attributeNode(&local_c0);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d1b3e8;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
LAB_100d1b3e8:
            cVar4 = QDomNode::isNull();
            if (cVar4 == '\0') {
              local_d8 = (QArrayData *)QString::fromAscii_helper("network%1",9);
              QString::arg(&local_d0,&local_d8,lVar7,0,10,0x20);
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b46e;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_100d1b46e:
              pcVar1 = *(code **)(*param_1 + 0x20);
              local_e0 = local_d0;
              if (1 < *(int *)local_d0 + 1U) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + 1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
              }
              local_e8 = (QArrayData *)QString::fromAscii_helper("enabled",7);
              local_f0 = (QArrayData *)QString::fromAscii_helper("true",4);
              (*pcVar1)(param_1,&local_e0,&local_e8,&local_f0);
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_31 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b51c;
                }
                QArrayData::deallocate(local_f0,2,8);
              }
LAB_100d1b51c:
              if (*(int *)local_e8 != -1) {
                if (*(int *)local_e8 != 0) {
                  LOCK();
                  *(int *)local_e8 = *(int *)local_e8 + -1;
                  local_31 = *(int *)local_e8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b552;
                }
                QArrayData::deallocate(local_e8,2,8);
              }
LAB_100d1b552:
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b588;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
LAB_100d1b588:
              pcVar1 = *(code **)(*param_1 + 0x20);
              local_f8 = local_d0;
              if (1 < *(int *)local_d0 + 1U) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + 1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
              }
              local_100 = (QArrayData *)QString::fromAscii_helper("connected",9);
              QDomAttr::value();
              (*pcVar1)(param_1,&local_f8,&local_100,&local_108);
              if (*(int *)local_108 != -1) {
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_31 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b635;
                }
                QArrayData::deallocate(local_108,2,8);
              }
LAB_100d1b635:
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b66b;
                }
                QArrayData::deallocate(local_100,2,8);
              }
LAB_100d1b66b:
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b6a1;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
LAB_100d1b6a1:
              pcVar1 = *(code **)(*param_1 + 0x20);
              local_110 = local_d0;
              if (1 < *(int *)local_d0 + 1U) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + 1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
              }
              local_118 = (QArrayData *)QString::fromAscii_helper("type",4);
              QDomAttr::value();
              (*pcVar1)(param_1,&local_110,&local_118,&local_120);
              if (*(int *)local_120 != -1) {
                if (*(int *)local_120 != 0) {
                  LOCK();
                  *(int *)local_120 = *(int *)local_120 + -1;
                  local_31 = *(int *)local_120 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b74e;
                }
                QArrayData::deallocate(local_120,2,8);
              }
LAB_100d1b74e:
              if (*(int *)local_118 != -1) {
                if (*(int *)local_118 != 0) {
                  LOCK();
                  *(int *)local_118 = *(int *)local_118 + -1;
                  local_31 = *(int *)local_118 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b784;
                }
                QArrayData::deallocate(local_118,2,8);
              }
LAB_100d1b784:
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b7ba;
                }
                QArrayData::deallocate(local_110,2,8);
              }
LAB_100d1b7ba:
              pcVar1 = *(code **)(*param_1 + 0x20);
              local_128 = local_d0;
              if (1 < *(int *)local_d0 + 1U) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + 1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
              }
              local_130 = (QArrayData *)QString::fromAscii_helper("address",7);
              QDomAttr::value();
              (*pcVar1)(param_1,&local_128,&local_130);
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_31 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b867;
                }
                QArrayData::deallocate(local_138,2,8);
              }
LAB_100d1b867:
              if (*(int *)local_130 != -1) {
                if (*(int *)local_130 != 0) {
                  LOCK();
                  *(int *)local_130 = *(int *)local_130 + -1;
                  local_31 = *(int *)local_130 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b89d;
                }
                QArrayData::deallocate(local_130,2,8);
              }
LAB_100d1b89d:
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_31 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1b8d3;
                }
                QArrayData::deallocate(local_128,2,8);
              }
LAB_100d1b8d3:
              local_140 = (QArrayData *)PTR_shared_null_1021e1288;
              cVar4 = FUN_100d1d6b0();
              if (cVar4 != '\0') {
                pcVar1 = *(code **)(*param_1 + 0x20);
                local_148 = local_d0;
                if (1 < *(int *)local_d0 + 1U) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + 1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                }
                local_150 = (QArrayData *)QString::fromAscii_helper("conntype",8);
                pQVar3 = local_140;
                if (1 < *(int *)local_140 + 1U) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + 1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                }
                (*pcVar1)(param_1,&local_148,&local_150);
                if (*(int *)pQVar3 != -1) {
                  if (*(int *)pQVar3 != 0) {
                    LOCK();
                    *(int *)pQVar3 = *(int *)pQVar3 + -1;
                    local_31 = *(int *)pQVar3 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d1b9b2;
                  }
                  QArrayData::deallocate(pQVar3,2,8);
                }
LAB_100d1b9b2:
                if (*(int *)local_150 != -1) {
                  if (*(int *)local_150 != 0) {
                    LOCK();
                    *(int *)local_150 = *(int *)local_150 + -1;
                    local_31 = *(int *)local_150 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d1b9e8;
                  }
                  QArrayData::deallocate(local_150,2,8);
                }
LAB_100d1b9e8:
                if (*(int *)local_148 != -1) {
                  if (*(int *)local_148 != 0) {
                    LOCK();
                    *(int *)local_148 = *(int *)local_148 + -1;
                    local_31 = *(int *)local_148 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d1ba1e;
                  }
                  QArrayData::deallocate(local_148,2,8);
                }
              }
LAB_100d1ba1e:
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 != 0) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1ba54;
                }
                QArrayData::deallocate(local_140,2,8);
              }
LAB_100d1ba54:
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d1ba8e;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
            }
LAB_100d1ba8e:
            QDomNode::~QDomNode((QDomNode *)&local_c0);
          }
          QDomNode::~QDomNode((QDomNode *)&local_b0);
        }
        QDomNode::~QDomNode((QDomNode *)&local_a0);
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1b170;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
LAB_100d1b170:
    QDomNode::~QDomNode((QDomNode *)&local_80);
    QDomNode::~QDomNode(local_70);
    lVar7 = lVar7 + 1;
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_60);
  bVar2 = false;
  QDomNode::~QDomNode(local_50);
LAB_100d1bb42:
  QDomNodeList::~QDomNodeList((QDomNodeList *)&local_40);
  uVar6 = 0x8000000;
  if (bVar2) {
    uVar6 = 0x811700a;
  }
  return uVar6;
}

