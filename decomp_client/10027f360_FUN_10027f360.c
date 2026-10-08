
undefined8 FUN_10027f360(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  QString *this;
  int iVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  QTypedArrayData<unsigned_short> *pQStack_340;
  QString local_320;
  QArrayData *local_318;
  QDomNode local_310 [8];
  QDomNode local_308 [8];
  QDomNodeList local_300 [8];
  QDomNode local_2f8 [8];
  QArrayData *local_2f0;
  QString local_2e8;
  QArrayData *local_2e0;
  QDomNodeList local_2d8 [8];
  QDomNode local_2d0 [8];
  QArrayData *local_2c8;
  QString local_2c0;
  QDomNode local_2b8 [8];
  QArrayData *local_2b0;
  QString local_2a8;
  QDomNode local_2a0 [8];
  QArrayData *local_298;
  QString local_290;
  QDomNode local_288 [8];
  QArrayData *local_280;
  QString local_278;
  QDomNode local_270 [8];
  QArrayData *local_268;
  QString local_260;
  QDomNode local_258 [8];
  QString local_250;
  QString local_248;
  QString local_240;
  QDomNodeList local_238 [8];
  QDomNode local_230 [8];
  QArrayData *local_228;
  QString local_220;
  QDomNode local_218 [8];
  QString local_210;
  QString local_208;
  QString local_200;
  QDomNodeList local_1f8 [8];
  QDomNode local_1f0 [8];
  QArrayData *local_1e8;
  QString local_1e0;
  QDomNode local_1d8 [8];
  QArrayData *local_1d0;
  QString local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString QStack_1b0;
  QString local_1a8;
  QString QStack_1a0;
  QString local_198;
  QString QStack_190;
  QString local_188;
  QTypedArrayData<unsigned_short> *pQStack_180;
  QString local_178;
  undefined *local_170;
  QDomNode local_168 [8];
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QLocale local_90 [8];
  QArrayData *local_88;
  QDomNode local_80 [8];
  QString local_78;
  QDomDocument local_70 [8];
  QString local_68;
  QString local_60 [2];
  QString local_50;
  QFileInfo local_48 [8];
  undefined *local_40;
  undefined1 local_31;
  
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::QFileInfo(local_48,&local_50);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027f3e1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10027f3e1:
  if (cVar2 == '\0') {
    return 1;
  }
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QFile::QFile((QFile *)local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027f445;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10027f445:
  lVar6 = (**(code **)(local_60[0].field0_0x0 + 0xa0))(local_60);
  uVar9 = 4;
  if (lVar6 < 1) goto LAB_100280b8b;
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("responseDocument",0x10);
  QDomDocument::QDomDocument(local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027f4b7;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10027f4b7:
  cVar2 = QDomDocument::setContent((QIODevice *)local_70,local_60,(int *)0x0,(int *)0x0);
  uVar9 = 3;
  if (cVar2 != '\0') {
    QDomDocument::documentElement();
    cVar2 = QDomNode::isNull();
    uVar9 = 3;
    if (cVar2 == '\0') {
      QLocale::QLocale(local_90);
      QLocale::name();
      QLocale::~QLocale(local_90);
      QString::fromUtf8_helper((char *)&local_a0,0x1de1c44);
      QString::append(&local_a0);
      QDomElement::elementsByTagName(&local_98);
      iVar3 = QDomNodeList::length();
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_98);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027f5b4;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_10027f5b4:
      if (iVar3 == 0) {
        local_c0 = (QArrayData *)QString::fromAscii_helper("Description",0xb);
        FUN_100281f60(&local_b8,&local_c0,local_80);
        QString::operator=((QString *)(param_1 + 0x30),&local_b8);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f6fb;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_10027f6fb:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f731;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_b0,0x1de1c44);
        QString::append(&local_b0);
        FUN_100281f60(&local_a8,&local_b0,local_80);
        QString::operator=((QString *)(param_1 + 0x30),&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f644;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_10027f644:
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f731;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
      }
LAB_10027f731:
      QString::fromUtf8_helper((char *)&local_d0,0x1de1c5d);
      QString::append(&local_d0);
      QDomElement::elementsByTagName(&local_c8);
      iVar3 = QDomNodeList::length();
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_c8);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027f7c0;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_10027f7c0:
      if (iVar3 == 0) {
        local_f0 = (QArrayData *)QString::fromAscii_helper("Name",4);
        FUN_100281f60(&local_e8,&local_f0,local_80);
        QString::operator=((QString *)(param_1 + 0x38),&local_e8);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f907;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_10027f907:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f93d;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_e0,0x1de1c5d);
        QString::append(&local_e0);
        FUN_100281f60(&local_d8,&local_e0,local_80);
        QString::operator=((QString *)(param_1 + 0x38),&local_d8);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f850;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_10027f850:
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027f93d;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
      }
LAB_10027f93d:
      QString::fromUtf8_helper((char *)&local_100,0x1de1c63);
      QString::append(&local_100);
      QDomElement::elementsByTagName(&local_f8);
      iVar3 = QDomNodeList::length();
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_f8);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027f9cc;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_10027f9cc:
      if (iVar3 == 0) {
        local_120 = (QArrayData *)QString::fromAscii_helper("CatalogName",0xb);
        FUN_100281f60(&local_118,&local_120,local_80);
        QString::operator=((QString *)(param_1 + 0x40),&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fb13;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_10027fb13:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fb49;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_110,0x1de1c63);
        QString::append(&local_110);
        FUN_100281f60(&local_108,&local_110,local_80);
        QString::operator=((QString *)(param_1 + 0x40),&local_108);
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fa5c;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
LAB_10027fa5c:
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_31 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fb49;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
      }
LAB_10027fb49:
      QString::fromUtf8_helper((char *)&local_130,0x1de1c7c);
      QString::append(&local_130);
      QDomElement::elementsByTagName(&local_128);
      iVar3 = QDomNodeList::length();
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_128);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027fbd8;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_10027fbd8:
      if (iVar3 == 0) {
        local_150 = (QArrayData *)QString::fromAscii_helper("Edition",7);
        FUN_100281f60(&local_148,&local_150,local_80);
        QString::operator=((QString *)(param_1 + 0x48),&local_148);
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_31 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fd1f;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_10027fd1f:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fd55;
          }
          QArrayData::deallocate(local_150,2,8);
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_140,0x1de1c7c);
        QString::append(&local_140);
        FUN_100281f60(&local_138,&local_140,local_80);
        QString::operator=((QString *)(param_1 + 0x48),&local_138);
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_31 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fc68;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_10027fc68:
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_31 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027fd55;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
      }
LAB_10027fd55:
      puVar1 = PTR_shared_null_1021e12f0;
      local_40 = PTR_shared_null_1021e12f0;
      FUN_100283220(param_1 + 0x50,&local_40);
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_31 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027fdb4;
        }
        if (*(long *)(puVar1 + 0x10) != 0) {
          FUN_100283b30();
          QMapDataBase::freeTree((QMapNodeBase *)puVar1,(int)*(undefined8 *)(puVar1 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
      }
LAB_10027fdb4:
      local_160 = (QArrayData *)QString::fromAscii_helper("Product",7);
      QDomElement::elementsByTagName(&local_158);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10027fe19;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_10027fe19:
      iVar3 = QDomNodeList::length();
      puVar1 = PTR_shared_null_1021e1288;
      if (0 < iVar3) {
        iVar7 = 0;
        auVar10._8_4_ = (int)PTR_shared_null_1021e1288;
        auVar10._0_8_ = PTR_shared_null_1021e1288;
        auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
        pQVar8 = (QArrayData *)PTR_shared_null_1021e1288;
        do {
          QDomNodeList::item((int)local_168);
          iVar4 = *(int *)pQVar8;
          if (1 < iVar4 + 1U) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + 1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            iVar4 = *(int *)pQVar8;
          }
          pQStack_340 = auVar10._8_8_;
          local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
          QStack_1b0.field0_0x0 = pQStack_340;
          local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
          QStack_1a0.field0_0x0 = pQStack_340;
          local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
          QStack_190.field0_0x0 = pQStack_340;
          local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
          pQStack_180 = pQStack_340;
          local_170 = PTR_shared_null_1021e15d0;
          local_1c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
          local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
          if (iVar4 != -1) {
            if (iVar4 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10027ff1c;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_10027ff1c:
          local_1d0 = (QArrayData *)QString::fromAscii_helper("ProductID",9);
          QDomNode::toElement();
          FUN_100281f60(&local_1c8,&local_1d0,local_1d8);
          QString::operator=(&local_1c0,&local_1c8);
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_31 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10027ffa9;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
LAB_10027ffa9:
          QDomNode::~QDomNode(local_1d8);
          if (*(int *)local_1d0 != -1) {
            if (*(int *)local_1d0 != 0) {
              LOCK();
              *(int *)local_1d0 = *(int *)local_1d0 + -1;
              local_31 = *(int *)local_1d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10027ffe7;
            }
            QArrayData::deallocate(local_1d0,2,8);
          }
LAB_10027ffe7:
          local_1e8 = (QArrayData *)QString::fromAscii_helper("Category",8);
          QDomNode::toElement();
          FUN_100281f60(&local_1e0,&local_1e8,local_1f0);
          QString::operator=(&QStack_1b0,&local_1e0);
          if (*(int *)local_1e0.field0_0x0 != -1) {
            if (*(int *)local_1e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
              local_31 = *(int *)local_1e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100280074;
            }
            QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
          }
LAB_100280074:
          QDomNode::~QDomNode(local_1f0);
          if (*(int *)local_1e8 != -1) {
            if (*(int *)local_1e8 != 0) {
              LOCK();
              *(int *)local_1e8 = *(int *)local_1e8 + -1;
              local_31 = *(int *)local_1e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002800b2;
            }
            QArrayData::deallocate(local_1e8,2,8);
          }
LAB_1002800b2:
          QString::fromUtf8_helper((char *)&local_200,0x1de1c5d);
          QString::append(&local_200);
          QDomElement::elementsByTagName((QString *)local_1f8);
          iVar4 = QDomNodeList::length();
          QDomNodeList::~QDomNodeList(local_1f8);
          if (*(int *)local_200.field0_0x0 != -1) {
            if (*(int *)local_200.field0_0x0 != 0) {
              LOCK();
              *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
              local_31 = *(int *)local_200.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100280134;
            }
            QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
          }
LAB_100280134:
          if (iVar4 == 0) {
            local_228 = (QArrayData *)QString::fromAscii_helper("Name",4);
            QDomNode::toElement();
            FUN_100281f60(&local_220,&local_228,local_230);
            QString::operator=(&local_1b8,&local_220);
            if (*(int *)local_220.field0_0x0 != -1) {
              if (*(int *)local_220.field0_0x0 != 0) {
                LOCK();
                *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
                local_31 = *(int *)local_220.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002802bc;
              }
              QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
            }
LAB_1002802bc:
            QDomNode::~QDomNode(local_230);
            if (*(int *)local_228 != -1) {
              if (*(int *)local_228 != 0) {
                LOCK();
                *(int *)local_228 = *(int *)local_228 + -1;
                local_31 = *(int *)local_228 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280300;
              }
              QArrayData::deallocate(local_228,2,8);
            }
          }
          else {
            QString::fromUtf8_helper((char *)&local_210,0x1de1c5d);
            QString::append(&local_210);
            QDomNode::toElement();
            FUN_100281f60(&local_208,&local_210,local_218);
            QString::operator=(&local_1b8,&local_208);
            if (*(int *)local_208.field0_0x0 != -1) {
              if (*(int *)local_208.field0_0x0 != 0) {
                LOCK();
                *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
                local_31 = *(int *)local_208.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002801d8;
              }
              QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
            }
LAB_1002801d8:
            QDomNode::~QDomNode(local_218);
            if (*(int *)local_210.field0_0x0 != -1) {
              if (*(int *)local_210.field0_0x0 != 0) {
                LOCK();
                *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
                local_31 = *(int *)local_210.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280300;
              }
              QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
            }
          }
LAB_100280300:
          QString::fromUtf8_helper((char *)&local_240,0x1de1c44);
          QString::append(&local_240);
          QDomElement::elementsByTagName((QString *)local_238);
          iVar4 = QDomNodeList::length();
          QDomNodeList::~QDomNodeList(local_238);
          if (*(int *)local_240.field0_0x0 != -1) {
            if (*(int *)local_240.field0_0x0 != 0) {
              LOCK();
              *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
              local_31 = *(int *)local_240.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10028038d;
            }
            QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
          }
LAB_10028038d:
          if (iVar4 == 0) {
            local_268 = (QArrayData *)QString::fromAscii_helper("Description",0xb);
            QDomNode::toElement();
            FUN_100281f60(&local_260,&local_268,local_270);
            QString::operator=(&local_1a8,&local_260);
            if (*(int *)local_260.field0_0x0 != -1) {
              if (*(int *)local_260.field0_0x0 != 0) {
                LOCK();
                *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
                local_31 = *(int *)local_260.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10028050c;
              }
              QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
            }
LAB_10028050c:
            QDomNode::~QDomNode(local_270);
            if (*(int *)local_268 != -1) {
              if (*(int *)local_268 != 0) {
                LOCK();
                *(int *)local_268 = *(int *)local_268 + -1;
                local_31 = *(int *)local_268 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280550;
              }
              QArrayData::deallocate(local_268,2,8);
            }
          }
          else {
            QString::fromUtf8_helper((char *)&local_250,0x1de1c44);
            QString::append(&local_250);
            QDomNode::toElement();
            FUN_100281f60(&local_248,&local_250,local_258);
            QString::operator=(&local_1a8,&local_248);
            if (*(int *)local_248.field0_0x0 != -1) {
              if (*(int *)local_248.field0_0x0 != 0) {
                LOCK();
                *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
                local_31 = *(int *)local_248.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280432;
              }
              QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
            }
LAB_100280432:
            QDomNode::~QDomNode(local_258);
            if (*(int *)local_250.field0_0x0 != -1) {
              if (*(int *)local_250.field0_0x0 != 0) {
                LOCK();
                *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                local_31 = *(int *)local_250.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280550;
              }
              QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
            }
          }
LAB_100280550:
          local_280 = (QArrayData *)QString::fromAscii_helper("Currency",8);
          QDomNode::toElement();
          FUN_100281f60(&local_278,&local_280,local_288);
          QString::operator=(&local_198,&local_278);
          if (*(int *)local_278.field0_0x0 != -1) {
            if (*(int *)local_278.field0_0x0 != 0) {
              LOCK();
              *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
              local_31 = *(int *)local_278.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002805dc;
            }
            QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
          }
LAB_1002805dc:
          QDomNode::~QDomNode(local_288);
          if (*(int *)local_280 != -1) {
            if (*(int *)local_280 != 0) {
              LOCK();
              *(int *)local_280 = *(int *)local_280 + -1;
              local_31 = *(int *)local_280 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10028061a;
            }
            QArrayData::deallocate(local_280,2,8);
          }
LAB_10028061a:
          local_298 = (QArrayData *)QString::fromAscii_helper("Price",5);
          QDomNode::toElement();
          FUN_100281f60(&local_290,&local_298,local_2a0);
          QString::operator=(&QStack_1a0,&local_290);
          if (*(int *)local_290.field0_0x0 != -1) {
            if (*(int *)local_290.field0_0x0 != 0) {
              LOCK();
              *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
              local_31 = *(int *)local_290.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002806a6;
            }
            QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
          }
LAB_1002806a6:
          QDomNode::~QDomNode(local_2a0);
          if (*(int *)local_298 != -1) {
            if (*(int *)local_298 != 0) {
              LOCK();
              *(int *)local_298 = *(int *)local_298 + -1;
              local_31 = *(int *)local_298 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002806e4;
            }
            QArrayData::deallocate(local_298,2,8);
          }
LAB_1002806e4:
          local_2b0 = (QArrayData *)QString::fromAscii_helper("ShoppingCartURL",0xf);
          QDomNode::toElement();
          FUN_100281f60(&local_2a8,&local_2b0,local_2b8);
          QString::operator=(&QStack_190,&local_2a8);
          if (*(int *)local_2a8.field0_0x0 != -1) {
            if (*(int *)local_2a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
              local_31 = *(int *)local_2a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100280770;
            }
            QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
          }
LAB_100280770:
          QDomNode::~QDomNode(local_2b8);
          if (*(int *)local_2b0 != -1) {
            if (*(int *)local_2b0 != 0) {
              LOCK();
              *(int *)local_2b0 = *(int *)local_2b0 + -1;
              local_31 = *(int *)local_2b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002807ae;
            }
            QArrayData::deallocate(local_2b0,2,8);
          }
LAB_1002807ae:
          local_2c8 = (QArrayData *)QString::fromAscii_helper("DownloadURL",0xb);
          QDomNode::toElement();
          FUN_100281f60(&local_2c0,&local_2c8,local_2d0);
          QString::operator=(&local_188,&local_2c0);
          if (*(int *)local_2c0.field0_0x0 != -1) {
            if (*(int *)local_2c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
              local_31 = *(int *)local_2c0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10028083a;
            }
            QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
          }
LAB_10028083a:
          QDomNode::~QDomNode(local_2d0);
          if (*(int *)local_2c8 != -1) {
            if (*(int *)local_2c8 != 0) {
              LOCK();
              *(int *)local_2c8 = *(int *)local_2c8 + -1;
              local_31 = *(int *)local_2c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100280878;
            }
            QArrayData::deallocate(local_2c8,2,8);
          }
LAB_100280878:
          local_2e0 = (QArrayData *)QString::fromAscii_helper("ActivationKey",0xd);
          QDomElement::elementsByTagName((QString *)local_2d8);
          iVar4 = QDomNodeList::length();
          QDomNodeList::~QDomNodeList(local_2d8);
          if (*(int *)local_2e0 != -1) {
            if (*(int *)local_2e0 != 0) {
              LOCK();
              *(int *)local_2e0 = *(int *)local_2e0 + -1;
              local_31 = *(int *)local_2e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002808f3;
            }
            QArrayData::deallocate(local_2e0,2,8);
          }
LAB_1002808f3:
          if (iVar4 != 0) {
            local_2f0 = (QArrayData *)QString::fromAscii_helper("ActivationKey",0xd);
            QDomNode::toElement();
            FUN_100281f60(&local_2e8,&local_2f0,local_2f8);
            QString::operator=(&local_178,&local_2e8);
            if (*(int *)local_2e8.field0_0x0 != -1) {
              if (*(int *)local_2e8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
                local_31 = *(int *)local_2e8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280988;
              }
              QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
            }
LAB_100280988:
            QDomNode::~QDomNode(local_2f8);
            if (*(int *)local_2f0 != -1) {
              if (*(int *)local_2f0 != 0) {
                LOCK();
                *(int *)local_2f0 = *(int *)local_2f0 + -1;
                local_31 = *(int *)local_2f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002809c6;
              }
              QArrayData::deallocate(local_2f0,2,8);
            }
          }
LAB_1002809c6:
          QDomNode::childNodes();
          for (iVar4 = 0; iVar5 = QDomNodeList::length(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            QDomNodeList::item((int)local_310);
            QDomNode::toElement();
            QDomNode::~QDomNode(local_310);
            QDomElement::tagName();
            this = (QString *)FUN_10002c250(&local_170,&local_318);
            QDomElement::text();
            QString::operator=(this,&local_320);
            if (*(int *)local_320.field0_0x0 != -1) {
              if (*(int *)local_320.field0_0x0 != 0) {
                LOCK();
                *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
                local_31 = *(int *)local_320.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100280a8e;
              }
              QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
            }
LAB_100280a8e:
            if (*(int *)local_318 != -1) {
              if (*(int *)local_318 != 0) {
                LOCK();
                *(int *)local_318 = *(int *)local_318 + -1;
                local_31 = *(int *)local_318 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002809e0;
              }
              QArrayData::deallocate(local_318,2,8);
            }
LAB_1002809e0:
            QDomNode::~QDomNode(local_308);
          }
          FUN_1002830a0(param_1 + 0x50,&local_1c0,&local_1c0);
          QDomNodeList::~QDomNodeList(local_300);
          FUN_100252e70(&local_1c0);
          pQVar8 = (QArrayData *)PTR_shared_null_1021e1288;
          QDomNode::~QDomNode(local_168);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      QDomNodeList::~QDomNodeList((QDomNodeList *)&local_158);
      uVar9 = 0;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100280b79;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_100280b79:
    QDomNode::~QDomNode(local_80);
  }
  QDomDocument::~QDomDocument(local_70);
LAB_100280b8b:
  QFile::~QFile((QFile *)local_60);
  return uVar9;
}

