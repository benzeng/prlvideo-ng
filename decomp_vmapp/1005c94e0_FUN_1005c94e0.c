
undefined8
FUN_1005c94e0(undefined8 param_1,long param_2,undefined4 param_3,long param_4,
             undefined8 ******param_5)

{
  long *plVar1;
  long ****pppplVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long ******pppppplVar6;
  bool bVar7;
  undefined *puVar8;
  char cVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  undefined8 uVar14;
  long lVar15;
  QString *pQVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  int local_330;
  QDomNode local_320 [8];
  long *****local_318;
  long *****local_310;
  long local_308;
  undefined1 local_300 [24];
  long *local_2e8;
  long local_2e0;
  long *local_2d8;
  long local_2d0;
  long *local_2c8;
  long *local_2c0;
  QDomNode local_2b8 [8];
  QString local_2b0;
  QDomNode local_2a8 [8];
  QArrayData *local_2a0;
  QDomNode local_298 [8];
  QDomNode local_290 [8];
  QString local_288;
  QDomNode local_280 [8];
  QString local_278;
  QArrayData *local_270;
  QDomNode local_268 [8];
  QDomNode local_260 [8];
  QArrayData *local_258;
  QDomNode local_250 [8];
  QDomNode local_248 [8];
  QArrayData *local_240;
  QDomNode local_238 [8];
  QDomNode local_230 [8];
  QArrayData *local_228;
  QDomNode local_220 [8];
  QDomNode local_218 [8];
  QString local_210;
  QDomNode local_208 [8];
  QArrayData *local_200;
  QString local_1f8;
  QArrayData *local_1f0;
  QDomNode local_1e8 [8];
  QDomNode local_1e0 [8];
  QString local_1d8;
  QDomNode local_1d0 [8];
  QArrayData *local_1c8;
  QString local_1c0;
  QArrayData *local_1b8;
  QDomNode local_1b0 [8];
  QDomNode local_1a8 [8];
  QString local_1a0;
  QDomNode local_198 [8];
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QDomNode local_178 [8];
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  QDomNode local_150 [8];
  QArrayData *local_148;
  QDir local_140 [8];
  QArrayData *local_138;
  QString local_130;
  QString local_128;
  QFileInfo local_120 [8];
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QDomNode local_f8 [8];
  QDomNodeList local_f0 [8];
  QDomNode local_e8 [8];
  undefined8 *****local_e0;
  undefined8 *****local_d8;
  undefined8 local_d0;
  long *****local_c8;
  long *****local_c0;
  long local_b8;
  QString local_b0;
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QDomNode local_98 [8];
  QDomNode local_90 [8];
  QDomElement local_88 [15];
  undefined1 local_79;
  undefined4 local_78 [2];
  QArrayData *local_70;
  QArrayData *local_68;
  long ***local_60;
  long ***local_58;
  long ***local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar18;
  QDomElement::QDomElement(local_88);
  QDomNode::QDomNode(local_90);
  QDomNode::QDomNode(local_98);
  QDomNode::QDomNode(local_a0);
  QDomNode::QDomNode(local_a8);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_b8 = 0;
  local_e0 = &local_e0;
  local_d0 = 0;
  local_d8 = local_e0;
  local_c8 = (long *****)&local_c8;
  local_c0 = (long *****)&local_c8;
  FUN_1005c2cc0(local_e8,param_1);
  QDomNode::childNodes();
  local_330 = QDomNodeList::length();
  QDomNodeList::~QDomNodeList(local_f0);
  cVar9 = QDomNode::isNull();
  uVar14 = 0x80021011;
  if (cVar9 == '\0') {
    if (*(long *)(param_4 + 0x10) == 0) {
      FUN_1008e3970("","vdisk",0,"Invalid parameter: Storages is equal to NULL");
      uVar14 = 0x80021020;
    }
    else {
      lVar18 = *(long *)(param_4 + 8);
      if (lVar18 != param_4) {
        uVar19 = 0;
        do {
          lVar4 = *(long *)(lVar18 + 0x18);
          lVar5 = *(long *)(lVar18 + 0x20);
          QDomNode::QDomNode(local_f8);
          local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          lVar15 = lVar5 + lVar4;
          if (lVar5 == 0) {
            lVar4 = 0;
            lVar15 = param_2;
          }
          if (*(int *)(*(long *)(lVar18 + 0x28) + 4) == 0) {
            local_40 = DAT_1011bc8c0;
            local_48 = DAT_1011bc8b8;
            FUN_1005cbac0(&local_110,param_1,&local_48,local_330);
            QString::operator=(&local_100,&local_110);
            if (*(int *)local_110.field0_0x0 != -1) {
              if (*(int *)local_110.field0_0x0 != 0) {
                LOCK();
                *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                local_79 = *(int *)local_110.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005c99a2;
              }
              QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
            }
LAB_1005c99a2:
            QFileInfo::QFileInfo(local_120,&local_100);
            QFileInfo::fileName();
            QString::operator=(&local_108,&local_118);
            if (*(int *)local_118.field0_0x0 != -1) {
              if (*(int *)local_118.field0_0x0 != 0) {
                LOCK();
                *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                local_79 = *(int *)local_118.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005c9a0c;
              }
              QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
            }
LAB_1005c9a0c:
            QFileInfo::~QFileInfo(local_120);
          }
          else {
            pQVar16 = (QString *)(lVar18 + 0x28);
            cVar9 = QDir::isRelativePath(pQVar16);
            if (cVar9 == '\0') {
              QString::operator=(&local_100,pQVar16);
            }
            else {
              QFileInfo::dir();
              QDir::path();
              local_148 = (QArrayData *)QString::fromAscii_helper("/",1);
              local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_138;
              if (1 < *(int *)local_138 + 1U) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + 1;
                local_79 = *(int *)local_138 != 0;
                UNLOCK();
              }
              QString::append(&local_130);
              local_128.field0_0x0 = local_130.field0_0x0;
              if (1 < *(int *)local_130.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
                local_79 = *(int *)local_130.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_128);
              QString::operator=(&local_100,&local_128);
              if (*(int *)local_128.field0_0x0 != -1) {
                if (*(int *)local_128.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                  local_79 = *(int *)local_128.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005c9869;
                }
                QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
              }
LAB_1005c9869:
              if (*(int *)local_130.field0_0x0 != -1) {
                if (*(int *)local_130.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                  local_79 = *(int *)local_130.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005c989f;
                }
                QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
              }
LAB_1005c989f:
              if (*(int *)local_148 != -1) {
                if (*(int *)local_148 != 0) {
                  LOCK();
                  *(int *)local_148 = *(int *)local_148 + -1;
                  local_79 = *(int *)local_148 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005c98d5;
                }
                QArrayData::deallocate(local_148,2,8);
              }
LAB_1005c98d5:
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_79 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005c990b;
                }
                QArrayData::deallocate(local_138,2,8);
              }
LAB_1005c990b:
              QDir::~QDir(local_140);
            }
            QString::operator=(&local_108,pQVar16);
          }
          local_158 = (QArrayData *)QString::fromAscii_helper("Storage",7);
          QDomDocument::createElement((QString *)local_150);
          QDomNode::operator=(local_f8,local_150);
          QDomNode::~QDomNode(local_150);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_79 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9aaf;
            }
            QArrayData::deallocate(local_158,2,8);
          }
LAB_1005c9aaf:
          if (*(char *)(lVar18 + 0x30) != '\0') {
            QDomNode::toElement();
            local_168.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Protected",9);
            local_170 = (QArrayData *)QString::fromAscii_helper("True",4);
            QDomElement::setAttribute(&local_160,&local_168);
            if (*(int *)local_170 != -1) {
              if (*(int *)local_170 != 0) {
                LOCK();
                *(int *)local_170 = *(int *)local_170 + -1;
                local_79 = *(int *)local_170 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005c9b53;
              }
              QArrayData::deallocate(local_170,2,8);
            }
LAB_1005c9b53:
            if (*(int *)local_168.field0_0x0 != -1) {
              if (*(int *)local_168.field0_0x0 != 0) {
                LOCK();
                *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
                local_79 = *(int *)local_168.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005c9b89;
              }
              QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
            }
LAB_1005c9b89:
            QDomNode::~QDomNode((QDomNode *)&local_160);
          }
          local_180 = (QArrayData *)QString::fromAscii_helper("Start",5);
          QDomDocument::createElement((QString *)local_178);
          QDomElement::operator=(local_88,(QDomElement *)local_178);
          QDomNode::~QDomNode(local_178);
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_79 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9c14;
            }
            QArrayData::deallocate(local_180,2,8);
          }
LAB_1005c9c14:
          local_190 = (QArrayData *)QString::fromAscii_helper("%1",2);
          QString::arg(&local_188,&local_190,lVar4,0,10,0x20);
          QString::operator=(&local_b0,&local_188);
          if (*(int *)local_188.field0_0x0 != -1) {
            if (*(int *)local_188.field0_0x0 != 0) {
              LOCK();
              *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
              local_79 = *(int *)local_188.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9c9c;
            }
            QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
          }
LAB_1005c9c9c:
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_79 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9cd2;
            }
            QArrayData::deallocate(local_190,2,8);
          }
LAB_1005c9cd2:
          QDomDocument::createTextNode(&local_1a0);
          QDomNode::appendChild(local_198);
          QDomNode::~QDomNode(local_198);
          QDomNode::~QDomNode((QDomNode *)&local_1a0);
          QDomNode::appendChild(local_1a8);
          QDomNode::~QDomNode(local_1a8);
          local_1b8 = (QArrayData *)QString::fromAscii_helper("End",3);
          QDomDocument::createElement((QString *)local_1b0);
          QDomElement::operator=(local_88,(QDomElement *)local_1b0);
          QDomNode::~QDomNode(local_1b0);
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_79 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9dbc;
            }
            QArrayData::deallocate(local_1b8,2,8);
          }
LAB_1005c9dbc:
          local_1c8 = (QArrayData *)QString::fromAscii_helper("%1",2);
          QString::arg(&local_1c0,&local_1c8,lVar15,0,10,0x20);
          QString::operator=(&local_b0,&local_1c0);
          if (*(int *)local_1c0.field0_0x0 != -1) {
            if (*(int *)local_1c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
              local_79 = *(int *)local_1c0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9e44;
            }
            QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
          }
LAB_1005c9e44:
          if (*(int *)local_1c8 != -1) {
            if (*(int *)local_1c8 != 0) {
              LOCK();
              *(int *)local_1c8 = *(int *)local_1c8 + -1;
              local_79 = *(int *)local_1c8 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9e7a;
            }
            QArrayData::deallocate(local_1c8,2,8);
          }
LAB_1005c9e7a:
          QDomDocument::createTextNode(&local_1d8);
          QDomNode::appendChild(local_1d0);
          QDomNode::~QDomNode(local_1d0);
          QDomNode::~QDomNode((QDomNode *)&local_1d8);
          QDomNode::appendChild(local_1e0);
          QDomNode::~QDomNode(local_1e0);
          local_1f0 = (QArrayData *)QString::fromAscii_helper("Blocksize",9);
          QDomDocument::createElement((QString *)local_1e8);
          QDomElement::operator=(local_88,(QDomElement *)local_1e8);
          QDomNode::~QDomNode(local_1e8);
          if (*(int *)local_1f0 != -1) {
            if (*(int *)local_1f0 != 0) {
              LOCK();
              *(int *)local_1f0 = *(int *)local_1f0 + -1;
              local_79 = *(int *)local_1f0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9f64;
            }
            QArrayData::deallocate(local_1f0,2,8);
          }
LAB_1005c9f64:
          local_200 = (QArrayData *)QString::fromAscii_helper("%1",2);
          QString::arg(&local_1f8,&local_200,param_3,0,10,0x20);
          QString::operator=(&local_b0,&local_1f8);
          if (*(int *)local_1f8.field0_0x0 != -1) {
            if (*(int *)local_1f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
              local_79 = *(int *)local_1f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005c9fec;
            }
            QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
          }
LAB_1005c9fec:
          if (*(int *)local_200 != -1) {
            if (*(int *)local_200 != 0) {
              LOCK();
              *(int *)local_200 = *(int *)local_200 + -1;
              local_79 = *(int *)local_200 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca022;
            }
            QArrayData::deallocate(local_200,2,8);
          }
LAB_1005ca022:
          QDomDocument::createTextNode(&local_210);
          QDomNode::appendChild(local_208);
          QDomNode::~QDomNode(local_208);
          QDomNode::~QDomNode((QDomNode *)&local_210);
          QDomNode::appendChild(local_218);
          QDomNode::~QDomNode(local_218);
          local_228 = (QArrayData *)QString::fromAscii_helper("Image",5);
          QDomDocument::createElement((QString *)local_220);
          QDomElement::operator=(local_88,(QDomElement *)local_220);
          QDomNode::~QDomNode(local_220);
          if (*(int *)local_228 != -1) {
            if (*(int *)local_228 != 0) {
              LOCK();
              *(int *)local_228 = *(int *)local_228 + -1;
              local_79 = *(int *)local_228 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca10c;
            }
            QArrayData::deallocate(local_228,2,8);
          }
LAB_1005ca10c:
          QDomNode::appendChild(local_230);
          QDomNode::operator=(local_90,local_230);
          QDomNode::~QDomNode(local_230);
          local_240 = (QArrayData *)QString::fromAscii_helper("GUID",4);
          QDomDocument::createElement((QString *)local_238);
          QDomElement::operator=(local_88,(QDomElement *)local_238);
          QDomNode::~QDomNode(local_238);
          if (*(int *)local_240 != -1) {
            if (*(int *)local_240 != 0) {
              LOCK();
              *(int *)local_240 = *(int *)local_240 + -1;
              local_79 = *(int *)local_240 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca1c0;
            }
            QArrayData::deallocate(local_240,2,8);
          }
LAB_1005ca1c0:
          FUN_1007d6a70(&local_258,&DAT_1011bc8b8);
          QDomDocument::createTextNode((QString *)local_250);
          QDomNode::appendChild(local_248);
          QDomNode::~QDomNode(local_248);
          QDomNode::~QDomNode(local_250);
          if (*(int *)local_258 != -1) {
            if (*(int *)local_258 != 0) {
              LOCK();
              *(int *)local_258 = *(int *)local_258 + -1;
              local_79 = *(int *)local_258 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca24c;
            }
            QArrayData::deallocate(local_258,2,8);
          }
LAB_1005ca24c:
          QDomNode::appendChild(local_260);
          QDomNode::~QDomNode(local_260);
          local_270 = (QArrayData *)QString::fromAscii_helper("Type",4);
          QDomDocument::createElement((QString *)local_268);
          QDomElement::operator=(local_88,(QDomElement *)local_268);
          QDomNode::~QDomNode(local_268);
          if (*(int *)local_270 != -1) {
            if (*(int *)local_270 != 0) {
              LOCK();
              *(int *)local_270 = *(int *)local_270 + -1;
              local_79 = *(int *)local_270 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca2ee;
            }
            QArrayData::deallocate(local_270,2,8);
          }
LAB_1005ca2ee:
          FUN_10059c790(&local_278,*(undefined4 *)(lVar18 + 0x10));
          QString::operator=(&local_b0,&local_278);
          if (*(int *)local_278.field0_0x0 != -1) {
            if (*(int *)local_278.field0_0x0 != 0) {
              LOCK();
              *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
              local_79 = *(int *)local_278.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ca34d;
            }
            QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
          }
LAB_1005ca34d:
          if (*(int *)(local_b0.field0_0x0 + 4) == 0) {
            FUN_1008e3970("","vdisk",0,"Disk image type is unknown: %x",
                          *(undefined4 *)(lVar18 + 0x10));
            uVar14 = 0x80021011;
            bVar7 = true;
          }
          else {
            QDomDocument::createTextNode(&local_288);
            QDomNode::appendChild(local_280);
            QDomNode::~QDomNode(local_280);
            QDomNode::~QDomNode((QDomNode *)&local_288);
            QDomNode::appendChild(local_290);
            QDomNode::~QDomNode(local_290);
            local_2a0 = (QArrayData *)QString::fromAscii_helper("File",4);
            QDomDocument::createElement((QString *)local_298);
            QDomElement::operator=(local_88,(QDomElement *)local_298);
            QDomNode::~QDomNode(local_298);
            if (*(int *)local_2a0 != -1) {
              if (*(int *)local_2a0 != 0) {
                LOCK();
                *(int *)local_2a0 = *(int *)local_2a0 + -1;
                local_79 = *(int *)local_2a0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005ca448;
              }
              QArrayData::deallocate(local_2a0,2,8);
            }
LAB_1005ca448:
            QDomDocument::createTextNode(&local_2b0);
            QDomNode::appendChild(local_2a8);
            QDomNode::~QDomNode(local_2a8);
            QDomNode::~QDomNode((QDomNode *)&local_2b0);
            QDomNode::appendChild(local_2b8);
            QDomNode::~QDomNode(local_2b8);
            puVar8 = PTR_nothrow_100ba21c8;
            local_2c0 = (long *)0x0;
            puVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
            puVar20 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &PTR_FUN_10111e168;
              puVar10[1] = &PTR_FUN_10111e188;
              QDomNode::QDomNode((QDomNode *)(puVar10 + 2),local_f8);
              puVar20 = puVar10;
            }
            plVar17 = puVar20 + 1;
            if (puVar20 == (undefined8 *)0x0) {
              plVar17 = (long *)0x0;
            }
            plVar11 = operator_new(0x18,(nothrow_t *)puVar8);
            if (plVar11 == (long *)0x0) {
              bVar7 = true;
              if (puVar20 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar17 + 8))(plVar17);
                plVar11 = (long *)0x0;
              }
            }
            else {
              *(undefined4 *)(plVar11 + 1) = 1;
              plVar11[2] = (long)plVar17;
              *plVar11 = (long)&PTR_FUN_10111e1a8;
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              bVar7 = false;
            }
            plVar17 = plVar11;
            if (local_2c0 != (long *)0x0) {
              LOCK();
              plVar1 = local_2c0 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                lVar5 = *local_2c0;
                local_2c0 = plVar11;
                (**(code **)(lVar5 + 0x10))();
                plVar17 = local_2c0;
              }
            }
            local_2c0 = plVar17;
            if (!bVar7) {
              LOCK();
              plVar17 = plVar11 + 1;
              lVar5 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            local_2c8 = (long *)0x0;
            plVar11 = operator_new(0x18,(nothrow_t *)puVar8);
            plVar17 = (long *)0x0;
            if (plVar11 != (long *)0x0) {
              *plVar11 = (long)&PTR_FUN_10111e168;
              plVar11[1] = (long)&PTR_FUN_10111e188;
              QDomNode::QDomNode((QDomNode *)(plVar11 + 2),local_90);
              plVar17 = plVar11;
            }
            plVar11 = operator_new(0x18,(nothrow_t *)puVar8);
            if (plVar11 == (long *)0x0) {
              bVar7 = true;
              if (plVar17 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar17 + 8))(plVar17);
                plVar11 = (long *)0x0;
              }
            }
            else {
              *(undefined4 *)(plVar11 + 1) = 1;
              plVar11[2] = (long)plVar17;
              *plVar11 = (long)&PTR_FUN_10111e208;
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              bVar7 = false;
            }
            plVar17 = plVar11;
            if (local_2c8 != (long *)0x0) {
              LOCK();
              plVar1 = local_2c8 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                lVar5 = *local_2c8;
                local_2c8 = plVar11;
                (**(code **)(lVar5 + 0x10))();
                plVar17 = local_2c8;
              }
            }
            local_2c8 = plVar17;
            if (!bVar7) {
              LOCK();
              plVar17 = plVar11 + 1;
              lVar5 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            bVar7 = true;
            uVar14 = 0x80000002;
            if ((local_2c0 == (long *)0x0) || (local_2c0[2] == 0)) {
LAB_1005caa3d:
              if (local_2c8 != (long *)0x0) {
                LOCK();
                plVar17 = local_2c8 + 1;
                lVar4 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)(*local_2c8 + 0x10))();
                }
              }
            }
            else {
              if (local_2c8 != (long *)0x0) {
                if (local_2c8[2] == 0) {
                  uVar14 = 0x80000002;
                  bVar7 = true;
                }
                else {
                  FUN_1005b6860(local_78,*(undefined4 *)(lVar18 + 0x10),&local_108,&local_100,
                                &DAT_1011bc8b8,&local_2c8);
                  local_308 = 0;
                  local_318 = (long *****)&local_318;
                  local_310 = (long *****)&local_318;
                  ppppplVar12 = operator_new(0x40);
                  *(undefined4 *)(ppppplVar12 + 2) = local_78[0];
                  ppppplVar12[3] = (long ****)local_70;
                  if (1 < *(int *)local_70 + 1U) {
                    LOCK();
                    *(int *)local_70 = *(int *)local_70 + 1;
                    local_79 = *(int *)local_70 != 0;
                    UNLOCK();
                  }
                  *(undefined4 *)(ppppplVar12 + 2) = local_78[0];
                  ppppplVar12[4] = (long ****)local_68;
                  if (1 < *(int *)local_68 + 1U) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + 1;
                    local_79 = *(int *)local_68 != 0;
                    UNLOCK();
                  }
                  ppppplVar12[6] = (long ****)local_58;
                  ppppplVar12[5] = (long ****)local_60;
                  ppppplVar12[7] = (long ****)local_50;
                  if ((long ****)local_50 != (long ****)0x0) {
                    LOCK();
                    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
                    UNLOCK();
                  }
                  ppppplVar12[1] = (long ****)&local_318;
                  *ppppplVar12 = (long ****)local_318;
                  local_318[1] = (long ****)ppppplVar12;
                  local_308 = local_308 + 1;
                  local_318 = ppppplVar12;
                  FUN_1005b6ac0(local_300,lVar4,lVar15,param_3,local_330,&local_2c0,&local_318);
                  if (local_308 != 0) {
                    ppppplVar12 = (long *****)*local_310;
                    ppppplVar12[1] = local_318[1];
                    *local_318[1] = (long ***)ppppplVar12;
                    local_308 = 0;
                    pppppplVar13 = (long ******)local_310;
                    while (pppppplVar13 != &local_318) {
                      pppppplVar6 = (long ******)pppppplVar13[1];
                      FUN_10057e590(pppppplVar13 + 2);
                      operator_delete(pppppplVar13);
                      pppppplVar13 = pppppplVar6;
                    }
                  }
                  FUN_1005d5450(&local_e0,local_300);
                  pppppplVar13 = operator_new(0x18);
                  QDomNode::QDomNode((QDomNode *)(pppppplVar13 + 2),local_f8);
                  pppppplVar13[1] = (long *****)&local_c8;
                  *pppppplVar13 = local_c8;
                  local_c8[1] = (long ****)pppppplVar13;
                  local_b8 = local_b8 + 1;
                  local_c8 = (long *****)pppppplVar13;
                  if (local_2d0 != 0) {
                    lVar4 = *local_2d8;
                    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(local_2e0 + 8);
                    **(long **)(local_2e0 + 8) = lVar4;
                    local_2d0 = 0;
                    plVar17 = local_2d8;
                    if (local_2d8 != &local_2e0) {
                      do {
                        plVar11 = (long *)plVar17[1];
                        FUN_10057e590(plVar17 + 2);
                        operator_delete(plVar17);
                        plVar17 = plVar11;
                      } while (plVar11 != &local_2e0);
                    }
                  }
                  if (local_2e8 != (long *)0x0) {
                    LOCK();
                    plVar17 = local_2e8 + 1;
                    lVar4 = *plVar17;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    if ((int)lVar4 == 1) {
                      (**(code **)(*local_2e8 + 0x10))();
                    }
                  }
                  if ((long ****)local_50 != (long ****)0x0) {
                    LOCK();
                    pppplVar2 = (long ****)(local_50 + 1);
                    iVar3 = *(int *)pppplVar2;
                    *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (*(code *)(*local_50)[2])();
                    }
                  }
                  bVar7 = false;
                  if (*(int *)local_68 != -1) {
                    if (*(int *)local_68 != 0) {
                      LOCK();
                      *(int *)local_68 = *(int *)local_68 + -1;
                      local_79 = *(int *)local_68 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005ca9f3;
                    }
                    QArrayData::deallocate(local_68,2,8);
                  }
LAB_1005ca9f3:
                  uVar14 = uVar19;
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_79 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005caa3d;
                    }
                    QArrayData::deallocate(local_70,2,8);
                  }
                }
                goto LAB_1005caa3d;
              }
              bVar7 = true;
              uVar14 = 0x80000002;
            }
            if (local_2c0 != (long *)0x0) {
              LOCK();
              plVar17 = local_2c0 + 1;
              lVar4 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)(*local_2c0 + 0x10))();
              }
            }
          }
          if (*(int *)local_108.field0_0x0 != -1) {
            if (*(int *)local_108.field0_0x0 != 0) {
              LOCK();
              *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
              local_79 = *(int *)local_108.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005caabe;
            }
            QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
          }
LAB_1005caabe:
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_79 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005caaf4;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
LAB_1005caaf4:
          QDomNode::~QDomNode(local_f8);
          if (bVar7) {
            lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1005cab9f;
          }
          lVar18 = *(long *)(lVar18 + 8);
          local_330 = local_330 + 1;
          uVar19 = uVar14;
        } while (lVar18 != param_4);
      }
      lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((long ******)local_c0 != &local_c8) {
        pppppplVar13 = (long ******)local_c0;
        do {
          QDomNode::appendChild(local_320);
          QDomNode::~QDomNode(local_320);
          pppppplVar13 = (long ******)pppppplVar13[1];
        } while (pppppplVar13 != &local_c8);
      }
      uVar14 = 0;
      if (&local_e0 != param_5) {
        FUN_1005d6810(param_5,local_d8,&local_e0,0);
        uVar14 = 0;
      }
    }
  }
LAB_1005cab9f:
  QDomNode::~QDomNode(local_e8);
  FUN_10057e490(&local_e0);
  if (local_b8 != 0) {
    ppppplVar12 = (long *****)*local_c0;
    ppppplVar12[1] = local_c8[1];
    *local_c8[1] = (long ***)ppppplVar12;
    local_b8 = 0;
    pppppplVar13 = (long ******)local_c0;
    while (pppppplVar13 != &local_c8) {
      pppppplVar6 = (long ******)pppppplVar13[1];
      QDomNode::~QDomNode((QDomNode *)(pppppplVar13 + 2));
      operator_delete(pppppplVar13);
      pppppplVar13 = pppppplVar6;
    }
  }
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_79 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005cac53;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1005cac53:
  QDomNode::~QDomNode(local_a8);
  QDomNode::~QDomNode(local_a0);
  QDomNode::~QDomNode(local_98);
  QDomNode::~QDomNode(local_90);
  QDomNode::~QDomNode((QDomNode *)local_88);
  if (lVar18 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

