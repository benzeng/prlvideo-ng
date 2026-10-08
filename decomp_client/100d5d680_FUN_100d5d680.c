
void FUN_100d5d680(char *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  long lVar7;
  QArrayData *pQVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  QString local_218;
  QDomNode local_210 [8];
  QDomNode local_208 [8];
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QDomNode local_1e8 [8];
  QDomNode local_1e0 [8];
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QDomNode local_1c0 [8];
  QDomNode local_1b8 [8];
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QString local_178;
  QString local_170;
  QArrayData *local_168;
  QDomNode local_160 [8];
  QArrayData *local_158;
  QDomNode local_150 [8];
  QDomNode local_148 [8];
  QDomNode local_140 [8];
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QDomNode local_120 [8];
  QDomNode local_118 [8];
  QDomNode local_110 [8];
  QString local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("%1/sources/install.wim",0x16);
  iVar4 = -1;
  if (param_1 != (char *)0x0) {
    sVar6 = _strlen(param_1);
    iVar4 = (int)sVar6;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
  QString::arg(&local_60,&local_68,&local_70,0,0x20);
  QFile::QFile((QFile *)local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5d726;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d5d726:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5d756;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d5d756:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5d786;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d5d786:
  cVar1 = QFile::open(local_58,1);
  if (cVar1 == '\0') {
    local_80 = (QArrayData *)QString::fromAscii_helper("%1/sources/boot.wim",0x13);
    iVar4 = -1;
    if (param_1 != (char *)0x0) {
      sVar6 = _strlen(param_1);
      iVar4 = (int)sVar6;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
    QString::arg(&local_78,&local_80,&local_88,0,0x20);
    QFile::setFileName(local_58);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d5d828;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d5d828:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d5d858;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d5d858:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d5d888;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100d5d888:
    cVar1 = QFile::open(local_58,1);
    if (cVar1 == '\0') goto LAB_100d5e770;
  }
  lVar7 = QFile::size();
  cVar1 = (**(code **)(local_58[0].field0_0x0 + 0x88))(local_58,lVar7 + -0x10000);
  if (cVar1 == '\0') goto LAB_100d5e770;
  QIODevice::read((longlong)&local_90);
  if (0xffff < *(int *)(local_90 + 4)) {
    (**(code **)(local_58[0].field0_0x0 + 0x70))(local_58);
    local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("<WIM>",5);
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("</WIM>",6);
    iVar3 = *(int *)(local_90 + 4);
    iVar4 = *(int *)(local_98.field0_0x0 + 4) * 2;
    uVar11 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (iVar4 < iVar3) {
      uVar9 = 0xffffffff;
      lVar7 = 0;
      uVar11 = 0xffffffff;
      do {
        uVar10 = (uint)lVar7;
        if (((int)uVar11 < 0) && ((int)(iVar4 + uVar10) < iVar3)) {
          QString::fromUtf16((ushort *)&local_b0,
                             (int)local_90 + (int)*(undefined8 *)(local_90 + 0x10) + uVar10);
          QString::normalized(&local_a8,&local_b0,1,0);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5d9f7;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_100d5d9f7:
          bVar2 = operator==(&local_a8,&local_98);
          if (bVar2 != 0) {
            uVar11 = uVar10;
          }
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5da4a;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_100d5da4a:
          if (((int)uVar9 < 0 & bVar2) == 1) {
LAB_100d5da79:
            if ((int)(uVar10 + *(int *)(local_a0.field0_0x0 + 4) * 2) <= *(int *)(local_90 + 4)) {
              QString::fromUtf16((ushort *)&local_c0,
                                 (int)local_90 + (int)*(undefined8 *)(local_90 + 0x10) + uVar10);
              QString::normalized(&local_b8,&local_c0,1,0);
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d5daf3;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
LAB_100d5daf3:
              cVar1 = operator==(&local_b8,&local_a0);
              iVar4 = 0;
              if (cVar1 != '\0') {
                uVar9 = uVar10 + *(int *)(local_a0.field0_0x0 + 4) * 2;
                iVar4 = -2;
              }
              if (*(int *)local_b8.field0_0x0 != -1) {
                if (*(int *)local_b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                  local_31 = *(int *)local_b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d5db55;
                }
                QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
              }
LAB_100d5db55:
              if (iVar4 != 0) break;
            }
          }
        }
        else if ((int)uVar9 < 0) goto LAB_100d5da79;
        lVar7 = lVar7 + 1;
        iVar3 = *(int *)(local_90 + 4);
        iVar4 = *(int *)(local_98.field0_0x0 + 4) * 2;
      } while (lVar7 < iVar3 + *(int *)(local_98.field0_0x0 + 4) * -2);
    }
    if (((int)uVar11 <= (int)uVar9) && (-1 < (int)(uVar9 | uVar11))) {
      QString::fromUtf16((ushort *)&local_d0,
                         uVar11 + (int)*(undefined8 *)(local_90 + 0x10) + (int)local_90);
      QString::normalized(&local_c8,&local_d0,1);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d5dc0e;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d5dc0e:
      QDomDocument::QDomDocument((QDomDocument *)&local_d8);
      cVar1 = QDomDocument::setContent(&local_d8,&local_c8,(int *)0x0,(int *)0x0);
      if (cVar1 != '\0') {
        local_f0 = (QArrayData *)QString::fromAscii_helper("WIM",3);
        QDomNode::firstChildElement(&local_e8);
        local_f8 = (QArrayData *)QString::fromAscii_helper("IMAGE",5);
        QDomNode::firstChildElement(&local_e0);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d5dcdc;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_100d5dcdc:
        QDomNode::~QDomNode((QDomNode *)&local_e8);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d5dd1e;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_100d5dd1e:
        local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
LAB_100d5dd60:
        do {
          cVar1 = QDomNode::isNull();
          if (cVar1 != '\0') goto LAB_100d5e137;
          local_128 = (QArrayData *)QString::fromAscii_helper("NAME",4);
          QDomNode::firstChildElement((QString *)local_120);
          QDomNode::firstChild();
          QDomNode::toText();
          QDomCharacterData::data();
          QString::operator=(&local_100,&local_108);
          if (*(int *)local_108.field0_0x0 != -1) {
            if (*(int *)local_108.field0_0x0 != 0) {
              LOCK();
              *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
              local_31 = *(int *)local_108.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5de1d;
            }
            QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
          }
LAB_100d5de1d:
          QDomNode::~QDomNode(local_110);
          QDomNode::~QDomNode(local_118);
          QDomNode::~QDomNode(local_120);
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5de6b;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_100d5de6b:
          local_130 = (QArrayData *)local_100.field0_0x0;
          if (1 < *(int *)local_100.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
          }
          local_40 = (QArrayData *)QString::fromAscii_helper("Server 2016 Technical Preview 4",0x1f)
          ;
          iVar4 = QString::indexOf(&local_130,&local_40,0,1);
          if (iVar4 == -1) {
            bVar12 = false;
          }
          else {
            local_48 = (QArrayData *)QString::fromAscii_helper("SERVERSTANDARD",0xe);
            iVar4 = QString::indexOf(&local_130,&local_48,0,1);
            bVar12 = iVar4 != -1;
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d5df23;
              }
              QArrayData::deallocate(local_48,2,8);
            }
          }
LAB_100d5df23:
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5df53;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_100d5df53:
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_31 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5df89;
            }
            QArrayData::deallocate(local_130,2,8);
          }
LAB_100d5df89:
          if (!bVar12) {
            FUN_1000341d0(param_2 + 0x20,&local_100);
            local_158 = (QArrayData *)QString::fromAscii_helper("DISPLAYNAME",0xb);
            QDomNode::firstChildElement((QString *)local_150);
            QDomNode::firstChild();
            QDomNode::toText();
            QDomCharacterData::data();
            FUN_1000341d0(param_2 + 0x28,&local_138);
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_31 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d5e04e;
              }
              QArrayData::deallocate(local_138,2,8);
            }
LAB_100d5e04e:
            QDomNode::~QDomNode(local_140);
            QDomNode::~QDomNode(local_148);
            QDomNode::~QDomNode(local_150);
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_31 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d5e0a0;
              }
              QArrayData::deallocate(local_158,2,8);
            }
          }
LAB_100d5e0a0:
          local_168 = (QArrayData *)QString::fromAscii_helper("IMAGE",5);
          QDomNode::nextSiblingElement((QString *)local_160);
          QDomElement::operator=((QDomElement *)&local_e0,(QDomElement *)local_160);
          QDomNode::~QDomNode(local_160);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d5dd60;
            }
            QArrayData::deallocate(local_168,2,8);
          }
        } while( true );
      }
      goto LAB_100d5e68c;
    }
    goto LAB_100d5e6ce;
  }
LAB_100d5e73a:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e770;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100d5e770:
  QFile::~QFile((QFile *)local_58);
  return;
LAB_100d5e137:
  local_188 = (QArrayData *)QString::fromAscii_helper("WIM",3);
  QDomNode::firstChildElement(&local_180);
  local_190 = (QArrayData *)QString::fromAscii_helper("IMAGE",5);
  QDomNode::firstChildElement(&local_178);
  local_198 = (QArrayData *)QString::fromAscii_helper("WINDOWS",7);
  QDomNode::firstChildElement(&local_170);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e20f;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100d5e20f:
  QDomNode::~QDomNode((QDomNode *)&local_178);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e251;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100d5e251:
  QDomNode::~QDomNode((QDomNode *)&local_180);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e293;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100d5e293:
  local_1a8 = (QArrayData *)QString::fromAscii_helper("VERSION",7);
  QDomNode::firstChildElement(&local_1a0);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e302;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100d5e302:
  local_1d0 = (QArrayData *)QString::fromAscii_helper("MAJOR",5);
  QDomNode::firstChildElement(&local_1c8);
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  uVar5 = QString::toUInt((bool *)&local_1b0,0);
  *(undefined4 *)(param_2 + 0x58) = uVar5;
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e3b9;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100d5e3b9:
  QDomNode::~QDomNode(local_1b8);
  QDomNode::~QDomNode(local_1c0);
  QDomNode::~QDomNode((QDomNode *)&local_1c8);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e413;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100d5e413:
  local_1f8 = (QArrayData *)QString::fromAscii_helper("MINOR",5);
  QDomNode::firstChildElement(&local_1f0);
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  uVar5 = QString::toUInt((bool *)&local_1d8,0);
  *(undefined4 *)(param_2 + 0x5c) = uVar5;
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e4ca;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100d5e4ca:
  QDomNode::~QDomNode(local_1e0);
  QDomNode::~QDomNode(local_1e8);
  QDomNode::~QDomNode((QDomNode *)&local_1f0);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e524;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100d5e524:
  pQVar8 = (QArrayData *)QString::fromAscii_helper("PRODUCTTYPE",0xb);
  QDomNode::firstChildElement(&local_218);
  QDomNode::firstChild();
  QDomNode::toText();
  QDomCharacterData::data();
  QString::operator=((QString *)(param_2 + 0x18),&local_200);
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_31 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e5d8;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_100d5e5d8:
  QDomNode::~QDomNode(local_208);
  QDomNode::~QDomNode(local_210);
  QDomNode::~QDomNode((QDomNode *)&local_218);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e632;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100d5e632:
  QDomNode::~QDomNode((QDomNode *)&local_1a0);
  QDomNode::~QDomNode((QDomNode *)&local_170);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e680;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100d5e680:
  QDomNode::~QDomNode((QDomNode *)&local_e0);
LAB_100d5e68c:
  QDomDocument::~QDomDocument((QDomDocument *)&local_d8);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e6ce;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100d5e6ce:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e704;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100d5e704:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5e73a;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  goto LAB_100d5e73a;
}

