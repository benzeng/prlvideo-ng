
int FUN_100d3ad80(undefined8 param_1,QString *param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  QTypedArrayData<unsigned_short> *local_220;
  QTypedArrayData<unsigned_short> *local_218;
  QDomNode local_208 [8];
  QDomNode local_200 [8];
  QArrayData *local_1f8;
  QDomNode local_1f0 [8];
  QDomElement local_1e8 [8];
  QDomNode local_1e0 [8];
  QDomNode local_1d8 [8];
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QDomNode local_188 [8];
  QDomElement local_180 [8];
  QString local_178;
  QString local_170;
  QDomNode local_168 [8];
  QDomNode local_160 [8];
  QArrayData *local_158;
  QDomNode local_150 [8];
  QDomElement local_148 [8];
  QString local_140;
  QArrayData *local_138;
  QDomNode local_130 [8];
  QDomElement local_128 [8];
  QString local_120;
  QArrayData *local_118;
  QDomNode local_110 [8];
  QDomElement local_108 [8];
  QString local_100;
  QArrayData *local_f8;
  QDomNode local_f0 [8];
  QDomElement local_e8 [8];
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QDomElement local_c0 [8];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  void *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDomElement::tagName();
  iVar3 = QString::compare_helper
                    (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),
                     "SavedStateItem",0xffffffff,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3ae0c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d3ae0c:
  if (iVar3 != 0) {
    iVar3 = 2;
    goto LAB_100d3c08f;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("guid",4);
  local_68 = (QArrayData *)puVar1;
  QDomElement::attribute(&local_58,param_2);
  QString::operator=(&local_48,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3ae85;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d3ae85:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3aeb5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d3aeb5:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3aee5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d3aee5:
  if ((*(int *)(local_48.field0_0x0 + 4) == 0) &&
     (iVar3 = 7, param_3[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
  goto LAB_100d3c08f;
  QString::operator=(param_3,&local_48);
  local_78 = (QArrayData *)QString::fromAscii_helper("current",7);
  local_80 = (QArrayData *)puVar1;
  QDomElement::attribute(&local_70,param_2);
  QString::operator=(&local_48,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3af76;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100d3af76:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3afa6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d3afa6:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3afd6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d3afd6:
  if (*(int *)(local_48.field0_0x0 + 4) == 0) {
    FUN_100d38dc0(param_3,0);
  }
  else {
    QString::toLower();
    iVar3 = QString::compare_helper
                      (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),"yes",
                       0xffffffff,1);
    if (iVar3 == 0) {
      FUN_100d38dc0(param_3,1);
    }
    else {
      FUN_100d38dc0(param_3,0);
    }
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3b06b;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100d3b06b:
  local_98 = (QArrayData *)QString::fromAscii_helper("state",5);
  local_a0 = (QArrayData *)puVar1;
  QDomElement::attribute(&local_90,param_2);
  QString::operator=(&local_48,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3b0ed;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100d3b0ed:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3b123;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100d3b123:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3b159;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100d3b159:
  QString::toLower();
  iVar3 = QString::compare_helper
                    (local_a8 + *(long *)(local_a8 + 0x10),*(undefined4 *)(local_a8 + 4),"poweron",
                     0xffffffff,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3b1c9;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100d3b1c9:
  if (iVar3 == 0) {
    *(undefined4 *)((long)&param_3[6].field0_0x0 + 4) = 1;
  }
  else {
    QString::toLower();
    iVar3 = QString::compare_helper
                      (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),"pause",
                       0xffffffff,1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3b241;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100d3b241:
    if (iVar3 == 0) {
      *(undefined4 *)((long)&param_3[6].field0_0x0 + 4) = 2;
    }
    else {
      QString::toLower();
      iVar3 = QString::compare_helper
                        (local_b8 + *(long *)(local_b8 + 0x10),*(undefined4 *)(local_b8 + 4),
                         "suspend",0xffffffff,1);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d3b2b9;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100d3b2b9:
      if (iVar3 == 0) {
        *(undefined4 *)((long)&param_3[6].field0_0x0 + 4) = 3;
      }
      else {
        *(undefined4 *)((long)&param_3[6].field0_0x0 + 4) = 0;
      }
    }
  }
  QDomElement::QDomElement(local_c0);
  local_d0 = (QArrayData *)puVar1;
  QDomNode::firstChildElement(&local_c8);
  QDomElement::operator=(local_c0,(QDomElement *)&local_c8);
  QDomNode::~QDomNode((QDomNode *)&local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3b361;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100d3b361:
  cVar2 = QDomNode::isNull();
  iVar3 = 8;
  if (cVar2 == '\0') {
    QDomElement::tagName();
    iVar4 = QString::compare_helper
                      (local_d8 + *(long *)(local_d8 + 0x10),*(undefined4 *)(local_d8 + 4),"Name",
                       0xffffffff,1);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3b3ee;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100d3b3ee:
    if (iVar4 == 0) {
      QDomElement::text();
      QString::operator=(param_3 + 1,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d3b44f;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_100d3b44f:
      QDomNode::nextSibling();
      QDomNode::toElement();
      QDomElement::operator=(local_c0,local_e8);
      QDomNode::~QDomNode((QDomNode *)local_e8);
      QDomNode::~QDomNode(local_f0);
      cVar2 = QDomNode::isNull();
      iVar3 = 9;
      if (cVar2 == '\0') {
        QDomElement::tagName();
        iVar4 = QString::compare_helper
                          (local_f8 + *(long *)(local_f8 + 0x10),*(undefined4 *)(local_f8 + 4),
                           "DateTime",0xffffffff,1);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3b52d;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_100d3b52d:
        if (iVar4 == 0) {
          QDomElement::text();
          QString::operator=(param_3 + 2,&local_100);
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_31 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3b58e;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
LAB_100d3b58e:
          QDomNode::nextSibling();
          QDomNode::toElement();
          QDomElement::operator=(local_c0,local_108);
          QDomNode::~QDomNode((QDomNode *)local_108);
          QDomNode::~QDomNode(local_110);
          cVar2 = QDomNode::isNull();
          iVar3 = 10;
          if (cVar2 == '\0') {
            QDomElement::tagName();
            iVar4 = QString::compare_helper
                              (local_118 + *(long *)(local_118 + 0x10),
                               *(undefined4 *)(local_118 + 4),"Creator",0xffffffff,1);
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d3b66c;
              }
              QArrayData::deallocate(local_118,2,8);
            }
LAB_100d3b66c:
            if (iVar4 == 0) {
              QDomElement::text();
              QString::operator=(param_3 + 3,&local_120);
              if (*(int *)local_120.field0_0x0 != -1) {
                if (*(int *)local_120.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                  local_31 = *(int *)local_120.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d3b6cd;
                }
                QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
              }
LAB_100d3b6cd:
              QDomNode::nextSibling();
              QDomNode::toElement();
              QDomElement::operator=(local_c0,local_128);
              QDomNode::~QDomNode((QDomNode *)local_128);
              QDomNode::~QDomNode(local_130);
              cVar2 = QDomNode::isNull();
              iVar3 = 0xb;
              if (cVar2 == '\0') {
                QDomElement::tagName();
                iVar4 = QString::compare_helper
                                  (local_138 + *(long *)(local_138 + 0x10),
                                   *(undefined4 *)(local_138 + 4),"ScreenShot",0xffffffff,1);
                if (*(int *)local_138 != -1) {
                  if (*(int *)local_138 != 0) {
                    LOCK();
                    *(int *)local_138 = *(int *)local_138 + -1;
                    local_31 = *(int *)local_138 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d3b7ab;
                  }
                  QArrayData::deallocate(local_138,2,8);
                }
LAB_100d3b7ab:
                if (iVar4 == 0) {
                  QDomElement::text();
                  QString::operator=(param_3 + 4,&local_140);
                  if (*(int *)local_140.field0_0x0 != -1) {
                    if (*(int *)local_140.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                      local_31 = *(int *)local_140.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100d3b80c;
                    }
                    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
                  }
LAB_100d3b80c:
                  QDomNode::nextSibling();
                  QDomNode::toElement();
                  QDomElement::operator=(local_c0,local_148);
                  QDomNode::~QDomNode((QDomNode *)local_148);
                  QDomNode::~QDomNode(local_150);
                  cVar2 = QDomNode::isNull();
                  iVar3 = 0xc;
                  if (cVar2 == '\0') {
                    QDomElement::tagName();
                    iVar4 = QString::compare_helper
                                      (local_158 + *(long *)(local_158 + 0x10),
                                       *(undefined4 *)(local_158 + 4),"Description",0xffffffff,1);
                    if (*(int *)local_158 != -1) {
                      if (*(int *)local_158 != 0) {
                        LOCK();
                        *(int *)local_158 = *(int *)local_158 + -1;
                        local_31 = *(int *)local_158 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100d3b8ea;
                      }
                      QArrayData::deallocate(local_158,2,8);
                    }
LAB_100d3b8ea:
                    if (iVar4 == 0) {
                      QDomNode::firstChild();
                      QDomNode::toCDATASection();
                      QDomNode::~QDomNode(local_168);
                      cVar2 = QDomNode::isNull();
                      if (cVar2 == '\0') {
                        QDomNode::nodeValue();
                        QString::operator=(param_3 + 5,&local_178);
                        if (*(int *)local_178.field0_0x0 != -1) {
                          if (*(int *)local_178.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                            local_31 = *(int *)local_178.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100d3b9ee;
                          }
                          QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
                        }
                      }
                      else {
                        local_170.field0_0x0 =
                             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
                        QString::operator=(param_3 + 5,&local_170);
                        if (*(int *)local_170.field0_0x0 != -1) {
                          if (*(int *)local_170.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
                            local_31 = *(int *)local_170.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100d3b9ee;
                          }
                          QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
                        }
                      }
LAB_100d3b9ee:
                      QDomNode::nextSibling();
                      QDomNode::toElement();
                      QDomElement::operator=(local_c0,local_180);
                      QDomNode::~QDomNode((QDomNode *)local_180);
                      QDomNode::~QDomNode(local_188);
                      cVar2 = QDomNode::isNull();
                      if (cVar2 == '\0') {
                        QDomElement::tagName();
                        iVar3 = QString::compare_helper
                                          (local_190 + *(long *)(local_190 + 0x10),
                                           *(undefined4 *)(local_190 + 4),"Runtime",0xffffffff,1);
                        if (*(int *)local_190 != -1) {
                          if (*(int *)local_190 != 0) {
                            LOCK();
                            *(int *)local_190 = *(int *)local_190 + -1;
                            local_31 = *(int *)local_190 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100d3bac6;
                          }
                          QArrayData::deallocate(local_190,2,8);
                        }
LAB_100d3bac6:
                        if (iVar3 == 0) {
                          local_220 = param_3[7].field0_0x0;
                          local_218 = param_3[8].field0_0x0;
                          local_1a0 = (QArrayData *)puVar1;
                          QDomNode::firstChildElement(&local_198);
                          if (*(int *)local_1a0 != -1) {
                            if (*(int *)local_1a0 != 0) {
                              LOCK();
                              *(int *)local_1a0 = *(int *)local_1a0 + -1;
                              local_31 = *(int *)local_1a0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100d3bb3b;
                            }
                            QArrayData::deallocate(local_1a0,2,8);
                          }
LAB_100d3bb3b:
                          while (cVar2 = QDomNode::isNull(), cVar2 == '\0') {
                            QDomElement::tagName();
                            iVar3 = QString::compare_helper
                                              (local_1a8 + *(long *)(local_1a8 + 0x10),
                                               *(undefined4 *)(local_1a8 + 4),"Size",0xffffffff,1);
                            if (*(int *)local_1a8 != -1) {
                              if (*(int *)local_1a8 != 0) {
                                LOCK();
                                *(int *)local_1a8 = *(int *)local_1a8 + -1;
                                local_31 = *(int *)local_1a8 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_100d3bbc9;
                              }
                              QArrayData::deallocate(local_1a8,2,8);
                            }
LAB_100d3bbc9:
                            if (iVar3 == 0) {
                              QDomElement::text();
                              local_220 = (QTypedArrayData<unsigned_short> *)
                                          QString::toULongLong((bool *)&local_1b0,0);
                              if (*(int *)local_1b0 != -1) {
                                if (*(int *)local_1b0 != 0) {
                                  LOCK();
                                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                                  local_31 = *(int *)local_1b0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100d3be25;
                                }
                                QArrayData::deallocate(local_1b0,2,8);
                              }
                            }
                            else {
                              QDomElement::tagName();
                              iVar3 = QString::compare_helper
                                                (local_1b8 + *(long *)(local_1b8 + 0x10),
                                                 *(undefined4 *)(local_1b8 + 4),"OsVersion",
                                                 0xffffffff,1);
                              if (*(int *)local_1b8 != -1) {
                                if (*(int *)local_1b8 != 0) {
                                  LOCK();
                                  *(int *)local_1b8 = *(int *)local_1b8 + -1;
                                  local_31 = *(int *)local_1b8 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100d3bc41;
                                }
                                QArrayData::deallocate(local_1b8,2,8);
                              }
LAB_100d3bc41:
                              if (iVar3 == 0) {
                                QDomElement::text();
                                uVar5 = QString::toUInt((bool *)&local_1c0,0);
                                local_218 = (QTypedArrayData<unsigned_short> *)
                                            ((ulong)local_218 & 0xffffffff00000000 | (ulong)uVar5);
                                if (*(int *)local_1c0 != -1) {
                                  if (*(int *)local_1c0 != 0) {
                                    LOCK();
                                    *(int *)local_1c0 = *(int *)local_1c0 + -1;
                                    local_31 = *(int *)local_1c0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100d3be25;
                                  }
                                  QArrayData::deallocate(local_1c0,2,8);
                                }
                              }
                              else {
                                QDomElement::tagName();
                                iVar3 = QString::compare_helper
                                                  (local_1c8 + *(long *)(local_1c8 + 0x10),
                                                   *(undefined4 *)(local_1c8 + 4),"UnfinishedOp",
                                                   0xffffffff,1);
                                if (*(int *)local_1c8 != -1) {
                                  if (*(int *)local_1c8 != 0) {
                                    LOCK();
                                    *(int *)local_1c8 = *(int *)local_1c8 + -1;
                                    local_31 = *(int *)local_1c8 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100d3bcb8;
                                  }
                                  QArrayData::deallocate(local_1c8,2,8);
                                }
LAB_100d3bcb8:
                                if (iVar3 == 0) {
                                  QDomElement::text();
                                  lVar6 = QString::toInt((bool *)&local_1d0,0);
                                  local_218 = (QTypedArrayData<unsigned_short> *)
                                              ((ulong)local_218 & 0xffffffff | lVar6 << 0x20);
                                  if (*(int *)local_1d0 != -1) {
                                    if (*(int *)local_1d0 != 0) {
                                      LOCK();
                                      *(int *)local_1d0 = *(int *)local_1d0 + -1;
                                      local_31 = *(int *)local_1d0 != 0;
                                      UNLOCK();
                                      if ((bool)local_31) goto LAB_100d3be25;
                                    }
                                    QArrayData::deallocate(local_1d0,2,8);
                                  }
                                }
                              }
                            }
LAB_100d3be25:
                            QDomNode::nextSibling();
                            QDomNode::toElement();
                            QDomElement::operator=
                                      ((QDomElement *)&local_198,(QDomElement *)local_1d8);
                            QDomNode::~QDomNode(local_1d8);
                            QDomNode::~QDomNode(local_1e0);
                          }
                          param_3[7].field0_0x0 = local_220;
                          param_3[8].field0_0x0 = local_218;
                          QDomNode::nextSibling();
                          QDomNode::toElement();
                          QDomElement::operator=(local_c0,local_1e8);
                          QDomNode::~QDomNode((QDomNode *)local_1e8);
                          QDomNode::~QDomNode(local_1f0);
                          QDomNode::~QDomNode((QDomNode *)&local_198);
                        }
                      }
                      while( true ) {
                        cVar2 = QDomNode::isNull();
                        iVar3 = 0;
                        if (cVar2 != '\0') break;
                        QDomElement::tagName();
                        iVar3 = QString::compare_helper
                                          (local_1f8 + *(long *)(local_1f8 + 0x10),
                                           *(undefined4 *)(local_1f8 + 4),"SavedStateItem",
                                           0xffffffff,1);
                        if (*(int *)local_1f8 != -1) {
                          if (*(int *)local_1f8 != 0) {
                            LOCK();
                            *(int *)local_1f8 = *(int *)local_1f8 + -1;
                            local_31 = *(int *)local_1f8 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100d3bf89;
                          }
                          QArrayData::deallocate(local_1f8,2,8);
                        }
LAB_100d3bf89:
                        if (iVar3 == 0) {
                          pvVar7 = operator_new(0x58);
                          FUN_100d38710(pvVar7);
                          *(QString **)((long)pvVar7 + 0x48) = param_3;
                          local_40 = pvVar7;
                          if (*(char *)((long)&param_3[6].field0_0x0 + 1) == '\0') {
                            if ((*(char *)&param_3[6].field0_0x0 == '\0') ||
                               (*(char *)((long)pvVar7 + 0x31) != '\0')) {
                              pQVar8 = param_3[10].field0_0x0;
                              iVar3 = *(int *)(pQVar8 + 0xc);
                            }
                            else {
                              pQVar8 = param_3[10].field0_0x0;
                              iVar3 = *(int *)(pQVar8 + 0xc) + -1;
                            }
                            FUN_100d3cdf0(param_3 + 10,iVar3 - *(int *)(pQVar8 + 8),&local_40);
                            *(QString **)((long)pvVar7 + 0x48) = param_3;
                          }
                          iVar3 = FUN_100d3ad80(param_1,local_c0,pvVar7);
                          if (iVar3 != 0) break;
                        }
                        QDomNode::nextSibling();
                        QDomNode::toElement();
                        QDomElement::operator=(local_c0,(QDomElement *)local_200);
                        QDomNode::~QDomNode(local_200);
                        QDomNode::~QDomNode(local_208);
                      }
                      puVar1 = PTR_shared_null_1021e15e8;
                      if (*(int *)PTR_shared_null_1021e15e8 != -1) {
                        if (*(int *)PTR_shared_null_1021e15e8 != 0) {
                          LOCK();
                          *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1
                          ;
                          local_31 = *(int *)puVar1 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100d3c077;
                        }
                        QListData::dispose((Data *)PTR_shared_null_1021e15e8);
                      }
LAB_100d3c077:
                      QDomNode::~QDomNode(local_160);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  QDomNode::~QDomNode((QDomNode *)local_c0);
LAB_100d3c08f:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return iVar3;
}

