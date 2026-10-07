
int FUN_1005c2ea0(long *param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  bool bVar6;
  long lVar7;
  QArrayData *pQVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  QArrayData *pQVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *****ppppplVar19;
  byte bVar20;
  ulong uVar21;
  int extraout_EDX;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  bool bVar27;
  ulong local_5a8;
  ulong local_5a0;
  int local_580;
  int local_56c;
  undefined1 local_548 [24];
  long *local_530;
  long local_528;
  long *local_520;
  long local_518;
  QDomNode local_510 [8];
  QDomNode local_508 [8];
  QString local_500;
  QString local_4f8;
  QString local_4f0;
  QArrayData *local_4e8;
  QString local_4e0;
  QString local_4d8;
  QArrayData *local_4d0;
  QString local_4c8;
  QString local_4c0;
  QDomNode local_4b8 [8];
  QDomNode local_4b0 [8];
  QArrayData *local_4a8;
  QArrayData *local_4a0;
  long *local_498;
  QString local_490;
  QString local_488;
  QArrayData *local_480;
  QString local_478;
  QString local_470;
  QArrayData *local_468;
  QString local_460;
  QString local_458;
  QArrayData *local_450;
  QString local_448;
  QString local_440;
  QDomNode local_438 [8];
  QDomNode local_430 [8];
  QDomNode local_428 [8];
  long *local_420;
  QString local_418;
  QString local_410;
  QDomNode local_408 [8];
  long ****local_400;
  long ****local_3f8;
  long local_3f0;
  QDomNodeList local_3e8 [8];
  QDomNode local_3e0 [8];
  QArrayData *local_3d8;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QString local_398;
  QDomNode local_390 [8];
  QArrayData *local_388;
  QString local_380;
  QString local_378;
  QArrayData *local_370;
  QString local_368;
  QString local_360;
  QDomNode local_358 [8];
  QDomNode local_350 [8];
  QDomNode local_348 [8];
  QArrayData *local_340;
  QArrayData *local_338;
  QString local_330;
  QString local_328;
  QString local_320;
  QString local_318;
  QDomNode local_310 [8];
  QDomElement local_308 [8];
  QDomNodeList local_300 [8];
  QDomNode local_2f8 [8];
  QDomNode local_2f0 [8];
  QArrayData *local_2e8;
  QString local_2e0;
  QDomNode local_2d8 [8];
  QDomNode local_2d0 [8];
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QString local_2b8;
  QString local_2b0;
  QString local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QString local_288;
  QString local_280;
  QString local_278;
  QString local_270;
  QString local_268;
  QString local_260;
  QArrayData *local_258;
  QString local_250;
  QString local_248;
  QArrayData *local_240;
  QString local_238;
  QString local_230;
  QArrayData *local_228;
  QString local_220;
  QString local_218;
  QArrayData *local_210;
  QString local_208;
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QDomNode local_1b0 [8];
  QDomNode local_1a8 [8];
  QDomNode local_1a0 [8];
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QString local_178;
  QString local_170;
  QDomElement local_168 [8];
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  QArrayData *local_138;
  QString local_130;
  QDir local_128 [8];
  QString local_120;
  QString local_118;
  QString local_110;
  QDomNodeList local_108 [8];
  QString local_100;
  QDomNode local_f8 [8];
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_d9;
  long ***local_d8;
  long ***local_d0;
  undefined1 local_c8 [16];
  int local_b8 [2];
  QString local_b0;
  QArrayData *local_a8;
  long ***local_a0;
  long ***local_98;
  long ***local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  QDomNode::QDomNode(local_f8);
  QDomElement::QDomElement((QDomElement *)&local_100);
  QDomNodeList::QDomNodeList(local_108);
  FUN_1007d6870(&local_48);
  FUN_1007d6870(&local_58);
  QFileInfo::QFileInfo((QFileInfo *)&local_110);
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_118.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
    local_d9 = *(int *)local_118.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::setFile(&local_110);
  cVar9 = QFileInfo::exists();
  if ((cVar9 == '\0') || (cVar9 = QFileInfo::isFile(), cVar9 == '\0')) {
LAB_1005c3017:
    pQVar15 = (QArrayData *)QString::fromAscii_helper("/",1);
    local_138 = (QArrayData *)QString::fromAscii_helper("DiskDescriptor.xml",0x12);
    if (1 < *(int *)pQVar15 + 1U) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + 1;
      local_d9 = *(int *)pQVar15 != 0;
      UNLOCK();
    }
    local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar15;
    QString::append(&local_130);
    QString::append(&local_118);
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_d9 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_1005c30c0;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
LAB_1005c30c0:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_d9 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_1005c30fc;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1005c30fc:
    if (*(int *)pQVar15 != -1) {
      if (*(int *)pQVar15 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_d9 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_1005c312d;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_1005c312d:
    cVar9 = QFile::exists(&local_118);
    if (cVar9 == '\0') {
      local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
      if (1 < *(int *)local_140.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
        local_d9 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
      }
      pQVar15 = (QArrayData *)QString::fromAscii_helper("/",1);
      local_150 = (QArrayData *)QString::fromAscii_helper("DiskDescritpor.xml",0x12);
      if (1 < *(int *)pQVar15 + 1U) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + 1;
        local_d9 = *(int *)pQVar15 != 0;
        UNLOCK();
      }
      local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar15;
      QString::append(&local_148);
      QString::append(&local_140);
      if (*(int *)local_148.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
          local_d9 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c3208;
        }
        QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
      }
LAB_1005c3208:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_d9 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c3244;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1005c3244:
      if (*(int *)pQVar15 != -1) {
        if (*(int *)pQVar15 != 0) {
          LOCK();
          *(int *)pQVar15 = *(int *)pQVar15 + -1;
          local_d9 = *(int *)pQVar15 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c3275;
        }
        QArrayData::deallocate(pQVar15,2,8);
      }
LAB_1005c3275:
      cVar9 = QFile::exists(&local_140);
      if (cVar9 != '\0') {
        QString::operator=(&local_118,&local_140);
      }
      if (*(int *)local_140.field0_0x0 != -1) {
        if (*(int *)local_140.field0_0x0 != 0) {
          LOCK();
          *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
          local_d9 = *(int *)local_140.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c32d4;
        }
        QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
      }
    }
LAB_1005c32d4:
    QFileInfo::setFile(&local_110);
    (**(code **)(*param_1 + 0x28))();
    QFileInfo::operator=((QFileInfo *)(param_1 + 0xc),(QFileInfo *)&local_110);
    *(byte *)(param_1 + 0xd) = (byte)param_3 >> 1 & 1;
    if ((param_3 & 0x22) != 0) {
      plVar24 = (long *)0x0;
      if (param_1[1] != 0) {
        plVar24 = *(long **)(param_1[1] + 0x10);
      }
      iVar11 = (**(code **)(*plVar24 + 0x10))(plVar24,(QFileInfo *)(param_1 + 0xc));
      if (iVar11 < 0) {
        FUN_1008e3970("","vdisk",0,"Couldn\'t lock disk: 0x%x");
        goto LAB_1005c576d;
      }
      QFileInfo::path();
      FUN_100769490(&local_158);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_d9 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c33bb;
        }
        QArrayData::deallocate(local_158,2,8);
      }
    }
LAB_1005c33bb:
    local_56c = FUN_1005b7160(param_1,&local_118,param_3);
    if (((local_56c == -0x7ffdeffe) || (local_56c == -0x7ffdeffb)) || (local_56c == -0x7ffdef9f)) {
      local_160 = (QArrayData *)QString::fromAscii_helper(".Backup",7);
      QString::append(&local_118);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_d9 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c3459;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1005c3459:
      local_56c = FUN_1005b7160(param_1,&local_118,param_3);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (local_56c < 0) {
      FUN_1008e3970("","vdisk",0,"XML can\'t be loaded due to error 0x%x");
    }
    else {
      QDomDocument::documentElement();
      QDomElement::operator=((QDomElement *)&local_100,local_168);
      QDomNode::~QDomNode((QDomNode *)local_168);
      QDomElement::tagName();
      local_178.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels_disk_image",0x14)
      ;
      cVar9 = operator==(&local_170,&local_178);
      if (*(int *)local_178.field0_0x0 != -1) {
        if (*(int *)local_178.field0_0x0 != 0) {
          LOCK();
          *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
          local_d9 = *(int *)local_178.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c356f;
        }
        QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
      }
LAB_1005c356f:
      if (*(int *)local_170.field0_0x0 != -1) {
        if (*(int *)local_170.field0_0x0 != 0) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
          local_d9 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c35ab;
        }
        QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
      }
LAB_1005c35ab:
      if (cVar9 == '\0') {
        local_56c = -0x7ffdeffe;
        FUN_1008e3970("","vdisk",0,"XML can\'t find root node");
      }
      else {
        local_180 = (QArrayData *)QString::fromAscii_helper("Version",7);
        cVar9 = QDomElement::hasAttribute(&local_100);
        if (*(int *)local_180 != -1) {
          if (*(int *)local_180 != 0) {
            LOCK();
            *(int *)local_180 = *(int *)local_180 + -1;
            local_d9 = *(int *)local_180 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_1005c361c;
          }
          QArrayData::deallocate(local_180,2,8);
        }
LAB_1005c361c:
        if (cVar9 != '\0') {
          local_190 = (QArrayData *)QString::fromAscii_helper("Version",7);
          local_198 = (QArrayData *)PTR_shared_null_100ba20d0;
          QDomElement::attribute(&local_188,&local_100);
          iVar11 = QString::compare_helper
                             ((QArrayData *)
                              (local_188.field0_0x0 + *(long *)(local_188.field0_0x0 + 0x10)),
                              *(undefined4 *)(local_188.field0_0x0 + 4),"1.0",0xffffffff,1);
          if (*(int *)local_188.field0_0x0 != -1) {
            if (*(int *)local_188.field0_0x0 != 0) {
              LOCK();
              *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
              local_d9 = *(int *)local_188.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_d9) goto LAB_1005c36d1;
            }
            QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
          }
LAB_1005c36d1:
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_d9 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_d9) goto LAB_1005c370d;
            }
            QArrayData::deallocate(local_198,2,8);
          }
LAB_1005c370d:
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_d9 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_d9) goto LAB_1005c3749;
            }
            QArrayData::deallocate(local_190,2,8);
          }
LAB_1005c3749:
          if (iVar11 != 0) {
            local_56c = -0x7ffdeffd;
            FUN_1008e3970("","vdisk",0,"Wrong XML version");
            goto LAB_1005c5757;
          }
        }
        FUN_1005c2bd0(local_1a0,param_1);
        QDomNode::operator=(local_f8,local_1a0);
        QDomNode::~QDomNode(local_1a0);
        cVar9 = QDomNode::isNull();
        if (cVar9 == '\0') {
          QDomNode::firstChild();
          QDomNode::operator=(local_f8,local_1a8);
          QDomNode::~QDomNode(local_1a8);
          while (cVar9 = QDomNode::isNull(), cVar9 == '\0') {
            cVar9 = QDomNode::isElement();
            if (cVar9 != '\0') {
              QDomNode::toElement();
              QDomElement::operator=((QDomElement *)&local_100,(QDomElement *)local_1b0);
              QDomNode::~QDomNode(local_1b0);
              QDomElement::tagName();
              local_1c0.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Disk_size",9);
              cVar9 = operator==(&local_1b8,&local_1c0);
              if (*(int *)local_1c0.field0_0x0 != -1) {
                if (*(int *)local_1c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
                  local_d9 = *(int *)local_1c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_d9) goto LAB_1005c3986;
                }
                QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
              }
LAB_1005c3986:
              if (*(int *)local_1b8.field0_0x0 != -1) {
                if (*(int *)local_1b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
                  local_d9 = *(int *)local_1b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_d9) goto LAB_1005c39c2;
                }
                QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
              }
LAB_1005c39c2:
              if (cVar9 == '\0') {
                QDomElement::tagName();
                local_1d8.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Cylinders",9);
                cVar9 = operator==(&local_1d0,&local_1d8);
                if (*(int *)local_1d8.field0_0x0 != -1) {
                  if (*(int *)local_1d8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
                    local_d9 = *(int *)local_1d8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_d9) goto LAB_1005c3ab8;
                  }
                  QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
                }
LAB_1005c3ab8:
                if (*(int *)local_1d0.field0_0x0 != -1) {
                  if (*(int *)local_1d0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
                    local_d9 = *(int *)local_1d0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_d9) goto LAB_1005c3af4;
                  }
                  QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
                }
LAB_1005c3af4:
                if (cVar9 == '\0') {
                  QDomElement::tagName();
                  local_1f0.field0_0x0 =
                       (QTypedArrayData<unsigned_short> *)
                       QString::fromAscii_helper("PhysicalSectorSize",0x12);
                  cVar9 = operator==(&local_1e8,&local_1f0);
                  if (*(int *)local_1f0.field0_0x0 != -1) {
                    if (*(int *)local_1f0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
                      local_d9 = *(int *)local_1f0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c3be4;
                    }
                    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
                  }
LAB_1005c3be4:
                  if (*(int *)local_1e8.field0_0x0 != -1) {
                    if (*(int *)local_1e8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
                      local_d9 = *(int *)local_1e8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c3c20;
                    }
                    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
                  }
LAB_1005c3c20:
                  if (cVar9 == '\0') {
                    QDomElement::tagName();
                    local_208.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)
                         QString::fromAscii_helper("LogicSectorSize",0xf);
                    cVar9 = operator==(&local_200,&local_208);
                    if (*(int *)local_208.field0_0x0 != -1) {
                      if (*(int *)local_208.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
                        local_d9 = *(int *)local_208.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c3d11;
                      }
                      QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
                    }
LAB_1005c3d11:
                    if (*(int *)local_200.field0_0x0 != -1) {
                      if (*(int *)local_200.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
                        local_d9 = *(int *)local_200.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c3d4d;
                      }
                      QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
                    }
LAB_1005c3d4d:
                    if (cVar9 == '\0') {
                      QDomElement::tagName();
                      local_220.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Heads",5);
                      cVar9 = operator==(&local_218,&local_220);
                      if (*(int *)local_220.field0_0x0 != -1) {
                        if (*(int *)local_220.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
                          local_d9 = *(int *)local_220.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c3e3f;
                        }
                        QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
                      }
LAB_1005c3e3f:
                      if (*(int *)local_218.field0_0x0 != -1) {
                        if (*(int *)local_218.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
                          local_d9 = *(int *)local_218.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c3e7b;
                        }
                        QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
                      }
LAB_1005c3e7b:
                      if (cVar9 == '\0') {
                        QDomElement::tagName();
                        local_238.field0_0x0 =
                             (QTypedArrayData<unsigned_short> *)
                             QString::fromAscii_helper("Sectors",7);
                        cVar9 = operator==(&local_230,&local_238);
                        if (*(int *)local_238.field0_0x0 != -1) {
                          if (*(int *)local_238.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
                            local_d9 = *(int *)local_238.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_d9) goto LAB_1005c3f6c;
                          }
                          QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
                        }
LAB_1005c3f6c:
                        if (*(int *)local_230.field0_0x0 != -1) {
                          if (*(int *)local_230.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
                            local_d9 = *(int *)local_230.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_d9) goto LAB_1005c3fa8;
                          }
                          QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
                        }
LAB_1005c3fa8:
                        if (cVar9 == '\0') {
                          QDomElement::tagName();
                          local_250.field0_0x0 =
                               (QTypedArrayData<unsigned_short> *)
                               QString::fromAscii_helper("Padding",7);
                          cVar9 = operator==(&local_248,&local_250);
                          if (*(int *)local_250.field0_0x0 != -1) {
                            if (*(int *)local_250.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                              local_d9 = *(int *)local_250.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_d9) goto LAB_1005c4099;
                            }
                            QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
                          }
LAB_1005c4099:
                          if (*(int *)local_248.field0_0x0 != -1) {
                            if (*(int *)local_248.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
                              local_d9 = *(int *)local_248.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_d9) goto LAB_1005c40d5;
                            }
                            QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
                          }
LAB_1005c40d5:
                          if (cVar9 == '\0') {
                            QDomElement::tagName();
                            local_268.field0_0x0 =
                                 (QTypedArrayData<unsigned_short> *)
                                 QString::fromAscii_helper("Encryption",10);
                            cVar9 = operator==(&local_260,&local_268);
                            if (*(int *)local_268.field0_0x0 != -1) {
                              if (*(int *)local_268.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                                local_d9 = *(int *)local_268.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_d9) goto LAB_1005c41c6;
                              }
                              QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
                            }
LAB_1005c41c6:
                            if (*(int *)local_260.field0_0x0 != -1) {
                              if (*(int *)local_260.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
                                local_d9 = *(int *)local_260.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_d9) goto LAB_1005c4202;
                              }
                              QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
                            }
LAB_1005c4202:
                            if (cVar9 == '\0') {
                              QDomElement::tagName();
                              local_278.field0_0x0 =
                                   (QTypedArrayData<unsigned_short> *)
                                   QString::fromAscii_helper("Miscellaneous",0xd);
                              cVar9 = operator==(&local_270,&local_278);
                              if (*(int *)local_278.field0_0x0 != -1) {
                                if (*(int *)local_278.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
                                  local_d9 = *(int *)local_278.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_d9) goto LAB_1005c4292;
                                }
                                QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
                              }
LAB_1005c4292:
                              if (*(int *)local_270.field0_0x0 != -1) {
                                if (*(int *)local_270.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
                                  local_d9 = *(int *)local_270.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_d9) goto LAB_1005c42ce;
                                }
                                QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
                              }
LAB_1005c42ce:
                              if (cVar9 == '\0') {
                                QDomElement::tagName();
                                local_288.field0_0x0 =
                                     (QTypedArrayData<unsigned_short> *)
                                     QString::fromAscii_helper("UID",3);
                                cVar9 = operator==(&local_280,&local_288);
                                if (*(int *)local_288.field0_0x0 != -1) {
                                  if (*(int *)local_288.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1
                                    ;
                                    local_d9 = *(int *)local_288.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_d9) goto LAB_1005c435e;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                                }
LAB_1005c435e:
                                if (*(int *)local_280.field0_0x0 != -1) {
                                  if (*(int *)local_280.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1
                                    ;
                                    local_d9 = *(int *)local_280.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_d9) goto LAB_1005c439a;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
                                }
LAB_1005c439a:
                                if (cVar9 == '\0') {
                                  QDomElement::tagName();
                                  local_2b0.field0_0x0 =
                                       (QTypedArrayData<unsigned_short> *)
                                       QString::fromAscii_helper("Name",4);
                                  cVar9 = operator==(&local_2a8,&local_2b0);
                                  if (*(int *)local_2b0.field0_0x0 != -1) {
                                    if (*(int *)local_2b0.field0_0x0 != 0) {
                                      LOCK();
                                      *(int *)local_2b0.field0_0x0 =
                                           *(int *)local_2b0.field0_0x0 + -1;
                                      local_d9 = *(int *)local_2b0.field0_0x0 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c456f;
                                    }
                                    QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
                                  }
LAB_1005c456f:
                                  if (*(int *)local_2a8.field0_0x0 != -1) {
                                    if (*(int *)local_2a8.field0_0x0 != 0) {
                                      LOCK();
                                      *(int *)local_2a8.field0_0x0 =
                                           *(int *)local_2a8.field0_0x0 + -1;
                                      local_d9 = *(int *)local_2a8.field0_0x0 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c45ab;
                                    }
                                    QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
                                  }
LAB_1005c45ab:
                                  if (cVar9 == '\0') {
                                    if (1 < DAT_1011b55f8) {
                                      QDomElement::tagName();
                                      QString::toUtf8();
                                      FUN_1008e3970("","vdisk",2,"Unknown XML parameter: %s",
                                                    local_2c0 + *(long *)(local_2c0 + 0x10));
                                      if (*(int *)local_2c0 != -1) {
                                        if (*(int *)local_2c0 != 0) {
                                          LOCK();
                                          *(int *)local_2c0 = *(int *)local_2c0 + -1;
                                          local_d9 = *(int *)local_2c0 != 0;
                                          UNLOCK();
                                          if ((bool)local_d9) goto LAB_1005c46b4;
                                        }
                                        QArrayData::deallocate(local_2c0,1,8);
                                      }
LAB_1005c46b4:
                                      if (*(int *)local_2c8 != -1) {
                                        if (*(int *)local_2c8 != 0) {
                                          LOCK();
                                          *(int *)local_2c8 = *(int *)local_2c8 + -1;
                                          local_d9 = *(int *)local_2c8 != 0;
                                          UNLOCK();
                                          if ((bool)local_d9) goto LAB_1005c46f0;
                                        }
                                        QArrayData::deallocate(local_2c8,2,8);
                                      }
                                    }
                                  }
                                  else {
                                    QDomElement::text();
                                    QString::operator=((QString *)(param_4 + 0x12),&local_2b8);
                                    if (*(int *)local_2b8.field0_0x0 != -1) {
                                      if (*(int *)local_2b8.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_2b8.field0_0x0 =
                                             *(int *)local_2b8.field0_0x0 + -1;
                                        local_d9 = *(int *)local_2b8.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c46f0;
                                      }
                                      QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8)
                                      ;
                                    }
                                  }
                                }
                                else {
                                  QDomElement::text();
                                  FUN_1007d6920(&local_68,&local_290);
                                  *(undefined8 *)(param_4 + 0x10) = local_60;
                                  *(undefined8 *)(param_4 + 0xe) = local_68;
                                  if (*(int *)local_290 != -1) {
                                    if (*(int *)local_290 != 0) {
                                      LOCK();
                                      *(int *)local_290 = *(int *)local_290 + -1;
                                      local_d9 = *(int *)local_290 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c4413;
                                    }
                                    QArrayData::deallocate(local_290,2,8);
                                  }
LAB_1005c4413:
                                  cVar9 = FUN_1007ea210(param_4 + 0xe);
                                  if (cVar9 != '\0') {
                                    QDomElement::text();
                                    QString::toUtf8();
                                    FUN_1008e3970("","vdisk",0,"Disk UID is malformed: \'%s\'",
                                                  local_298 + *(long *)(local_298 + 0x10));
                                    if (*(int *)local_298 != -1) {
                                      if (*(int *)local_298 != 0) {
                                        LOCK();
                                        *(int *)local_298 = *(int *)local_298 + -1;
                                        local_d9 = *(int *)local_298 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c44ae;
                                      }
                                      QArrayData::deallocate(local_298,1,8);
                                    }
LAB_1005c44ae:
                                    if (*(int *)local_2a0 != -1) {
                                      if (*(int *)local_2a0 != 0) {
                                        LOCK();
                                        *(int *)local_2a0 = *(int *)local_2a0 + -1;
                                        local_d9 = *(int *)local_2a0 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c46f0;
                                      }
                                      QArrayData::deallocate(local_2a0,2,8);
                                    }
                                  }
                                }
                              }
                              else {
                                QDomNode::operator=((QDomNode *)(param_1 + 5),local_f8);
                              }
                            }
                            else {
                              FUN_1005c1980(param_1,local_f8);
                            }
                          }
                          else {
                            QDomElement::text();
                            uVar12 = QString::toUInt((bool *)&local_258,0);
                            param_4[6] = uVar12;
                            if (*(int *)local_258 != -1) {
                              if (*(int *)local_258 != 0) {
                                LOCK();
                                *(int *)local_258 = *(int *)local_258 + -1;
                                local_d9 = *(int *)local_258 != 0;
                                UNLOCK();
                                if ((bool)local_d9) goto LAB_1005c46f0;
                              }
                              QArrayData::deallocate(local_258,2,8);
                            }
                          }
                        }
                        else {
                          QDomElement::text();
                          uVar12 = QString::toUInt((bool *)&local_240,0);
                          param_4[1] = uVar12;
                          if (*(int *)local_240 != -1) {
                            if (*(int *)local_240 != 0) {
                              LOCK();
                              *(int *)local_240 = *(int *)local_240 + -1;
                              local_d9 = *(int *)local_240 != 0;
                              UNLOCK();
                              if ((bool)local_d9) goto LAB_1005c46f0;
                            }
                            QArrayData::deallocate(local_240,2,8);
                          }
                        }
                      }
                      else {
                        QDomElement::text();
                        uVar12 = QString::toUInt((bool *)&local_228,0);
                        param_4[2] = uVar12;
                        if (*(int *)local_228 != -1) {
                          if (*(int *)local_228 != 0) {
                            LOCK();
                            *(int *)local_228 = *(int *)local_228 + -1;
                            local_d9 = *(int *)local_228 != 0;
                            UNLOCK();
                            if ((bool)local_d9) goto LAB_1005c46f0;
                          }
                          QArrayData::deallocate(local_228,2,8);
                        }
                      }
                    }
                    else {
                      QDomElement::text();
                      uVar16 = QString::toULongLong((bool *)&local_210,0);
                      *(undefined8 *)(param_4 + 8) = uVar16;
                      if (*(int *)local_210 != -1) {
                        if (*(int *)local_210 != 0) {
                          LOCK();
                          *(int *)local_210 = *(int *)local_210 + -1;
                          local_d9 = *(int *)local_210 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c46f0;
                        }
                        QArrayData::deallocate(local_210,2,8);
                      }
                    }
                  }
                  else {
                    QDomElement::text();
                    uVar12 = QString::toUInt((bool *)&local_1f8,0);
                    param_4[7] = uVar12;
                    if (*(int *)local_1f8 != -1) {
                      if (*(int *)local_1f8 != 0) {
                        LOCK();
                        *(int *)local_1f8 = *(int *)local_1f8 + -1;
                        local_d9 = *(int *)local_1f8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c46f0;
                      }
                      QArrayData::deallocate(local_1f8,2,8);
                    }
                  }
                }
                else {
                  QDomElement::text();
                  uVar12 = QString::toUInt((bool *)&local_1e0,0);
                  *param_4 = uVar12;
                  if (*(int *)local_1e0 != -1) {
                    if (*(int *)local_1e0 != 0) {
                      LOCK();
                      *(int *)local_1e0 = *(int *)local_1e0 + -1;
                      local_d9 = *(int *)local_1e0 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c46f0;
                    }
                    QArrayData::deallocate(local_1e0,2,8);
                  }
                }
              }
              else {
                QDomElement::text();
                uVar16 = QString::toULongLong((bool *)&local_1c8,0);
                *(undefined8 *)(param_4 + 4) = uVar16;
                if (*(int *)local_1c8 != -1) {
                  if (*(int *)local_1c8 != 0) {
                    LOCK();
                    *(int *)local_1c8 = *(int *)local_1c8 + -1;
                    local_d9 = *(int *)local_1c8 != 0;
                    UNLOCK();
                    if ((bool)local_d9) goto LAB_1005c46f0;
                  }
                  QArrayData::deallocate(local_1c8,2,8);
                }
              }
            }
LAB_1005c46f0:
            QDomNode::nextSibling();
            QDomNode::operator=(local_f8,local_2d0);
            QDomNode::~QDomNode(local_2d0);
          }
          uVar12 = *param_4;
          uVar2 = param_4[1];
          uVar3 = param_4[2];
          lVar14 = *(long *)(param_4 + 4);
          FUN_1005c2bd0(local_2d8,param_1);
          QDomNode::operator=(local_f8,local_2d8);
          QDomNode::~QDomNode(local_2d8);
          cVar9 = QDomNode::isNull();
          if (cVar9 != '\0') {
            local_2e8 = (QArrayData *)QString::fromAscii_helper("Miscellaneous",0xd);
            QDomDocument::createElement(&local_2e0);
            QDomElement::operator=((QDomElement *)&local_100,(QDomElement *)&local_2e0);
            QDomNode::~QDomNode((QDomNode *)&local_2e0);
            if (*(int *)local_2e8 != -1) {
              if (*(int *)local_2e8 != 0) {
                LOCK();
                *(int *)local_2e8 = *(int *)local_2e8 + -1;
                local_d9 = *(int *)local_2e8 != 0;
                UNLOCK();
                if ((bool)local_d9) goto LAB_1005c4812;
              }
              QArrayData::deallocate(local_2e8,2,8);
            }
LAB_1005c4812:
            QDomNode::appendChild(local_2f0);
            QDomNode::operator=((QDomNode *)(param_1 + 5),local_2f0);
            QDomNode::~QDomNode(local_2f0);
          }
          cVar9 = QDomNode::isNull();
          if (cVar9 != '\0') {
            FUN_1005c1f30(param_1,local_f8,param_1 + 10);
          }
          FUN_1005c2db0(local_2f8,param_1);
          QDomNode::operator=((QDomNode *)(param_1 + 7),local_2f8);
          QDomNode::~QDomNode(local_2f8);
          cVar9 = QDomNode::isNull();
          if (cVar9 == '\0') {
            QDomNode::childNodes();
            QDomNodeList::operator=(local_108,local_300);
            QDomNodeList::~QDomNodeList(local_300);
            FUN_1007ea1f0();
            plVar24 = param_1 + 0xf;
            bVar20 = 0;
            iVar25 = 0;
            while( true ) {
              iVar11 = QDomNodeList::length();
              if (iVar11 <= iVar25) break;
              QDomElement::QDomElement(local_308);
              QDomNodeList::item((int)local_310);
              QDomNode::operator=(local_f8,local_310);
              QDomNode::~QDomNode(local_310);
              QDomNode::nodeName();
              local_320.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Shot",4);
              cVar9 = operator==(&local_318,&local_320);
              if (*(int *)local_320.field0_0x0 != -1) {
                if (*(int *)local_320.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
                  local_d9 = *(int *)local_320.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_d9) goto LAB_1005c4a6d;
                }
                QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
              }
LAB_1005c4a6d:
              if (*(int *)local_318.field0_0x0 != -1) {
                if (*(int *)local_318.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
                  local_d9 = *(int *)local_318.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_d9) goto LAB_1005c4aa9;
                }
                QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
              }
LAB_1005c4aa9:
              local_580 = 0x1e;
              if (cVar9 != '\0') {
                cVar9 = QDomNode::isElement();
                if (cVar9 == '\0') {
                  bVar27 = false;
                }
                else {
                  QDomNode::toElement();
                  local_338 = (QArrayData *)QString::fromAscii_helper("Operation",9);
                  local_340 = (QArrayData *)PTR_shared_null_100ba20d0;
                  QDomElement::attribute(&local_328,&local_330);
                  bVar27 = *(int *)(local_328.field0_0x0 + 4) != 0;
                  if (*(int *)local_328.field0_0x0 != -1) {
                    if (*(int *)local_328.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + -1;
                      local_d9 = *(int *)local_328.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c4b6c;
                    }
                    QArrayData::deallocate((QArrayData *)local_328.field0_0x0,2,8);
                  }
LAB_1005c4b6c:
                  if (*(int *)local_340 != -1) {
                    if (*(int *)local_340 != 0) {
                      LOCK();
                      *(int *)local_340 = *(int *)local_340 + -1;
                      local_d9 = *(int *)local_340 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c4bae;
                    }
                    QArrayData::deallocate(local_340,2,8);
                  }
LAB_1005c4bae:
                  if (*(int *)local_338 != -1) {
                    if (*(int *)local_338 != 0) {
                      LOCK();
                      *(int *)local_338 = *(int *)local_338 + -1;
                      local_d9 = *(int *)local_338 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c4bea;
                    }
                    QArrayData::deallocate(local_338,2,8);
                  }
LAB_1005c4bea:
                  QDomNode::~QDomNode((QDomNode *)&local_330);
                }
                FUN_1007ea1f0(&local_48);
                local_50 = local_40;
                local_58 = local_48;
                QDomNodeList::item((int)local_350);
                QDomNode::firstChild();
                QDomNode::~QDomNode(local_350);
                while (cVar9 = QDomNode::isNull(), cVar9 == '\0') {
                  cVar9 = QDomNode::isElement();
                  if (cVar9 != '\0') {
                    QDomNode::toElement();
                    QDomElement::operator=((QDomElement *)&local_100,(QDomElement *)local_358);
                    QDomNode::~QDomNode(local_358);
                    QDomElement::tagName();
                    local_368.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GUID",4);
                    cVar9 = operator==(&local_360,&local_368);
                    if (*(int *)local_368.field0_0x0 != -1) {
                      if (*(int *)local_368.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
                        local_d9 = *(int *)local_368.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c4d0e;
                      }
                      QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
                    }
LAB_1005c4d0e:
                    if (*(int *)local_360.field0_0x0 != -1) {
                      if (*(int *)local_360.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + -1;
                        local_d9 = *(int *)local_360.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c4d4a;
                      }
                      QArrayData::deallocate((QArrayData *)local_360.field0_0x0,2,8);
                    }
LAB_1005c4d4a:
                    if (cVar9 == '\0') {
                      QDomElement::tagName();
                      local_380.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)
                           QString::fromAscii_helper("ParentGUID",10);
                      cVar9 = operator==(&local_378,&local_380);
                      if (*(int *)local_380.field0_0x0 != -1) {
                        if (*(int *)local_380.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
                          local_d9 = *(int *)local_380.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c4e4c;
                        }
                        QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
                      }
LAB_1005c4e4c:
                      if (*(int *)local_378.field0_0x0 != -1) {
                        if (*(int *)local_378.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + -1;
                          local_d9 = *(int *)local_378.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c4e88;
                        }
                        QArrayData::deallocate((QArrayData *)local_378.field0_0x0,2,8);
                      }
LAB_1005c4e88:
                      if (cVar9 != '\0') {
                        QDomElement::operator=(local_308,(QDomElement *)&local_100);
                        QDomElement::text();
                        FUN_1007d6920(&local_88,&local_388);
                        local_50 = local_80;
                        local_58 = local_88;
                        if (*(int *)local_388 != -1) {
                          if (*(int *)local_388 != 0) {
                            LOCK();
                            *(int *)local_388 = *(int *)local_388 + -1;
                            local_d9 = *(int *)local_388 != 0;
                            UNLOCK();
                            if ((bool)local_d9) goto LAB_1005c4f20;
                          }
                          QArrayData::deallocate(local_388,2,8);
                        }
                      }
                    }
                    else {
                      QDomElement::text();
                      FUN_1007d6920(&local_78,&local_370);
                      local_40 = local_70;
                      local_48 = local_78;
                      if (*(int *)local_370 != -1) {
                        if (*(int *)local_370 != 0) {
                          LOCK();
                          *(int *)local_370 = *(int *)local_370 + -1;
                          local_d9 = *(int *)local_370 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c4f20;
                        }
                        QArrayData::deallocate(local_370,2,8);
                      }
                    }
                  }
LAB_1005c4f20:
                  QDomNode::nextSibling();
                  QDomNode::operator=(local_348,local_390);
                  QDomNode::~QDomNode(local_390);
                }
                QDomNode::~QDomNode(local_348);
                cVar9 = FUN_1007ea210(&local_48);
                if (cVar9 == '\0') {
                  FUN_1007d6a70(&local_398,&local_48);
                  plVar18 = (long *)*plVar24;
                  plVar26 = plVar24;
                  if ((long *)*plVar24 == (long *)0x0) {
LAB_1005c4fdc:
                    plVar22 = plVar24;
                  }
                  else {
                    do {
                      while (plVar22 = plVar18,
                            cVar9 = operator<((QString *)(plVar22 + 4),&local_398), cVar9 == '\0') {
                        plVar18 = (long *)*plVar22;
                        plVar26 = plVar22;
                        if ((long *)*plVar22 == (long *)0x0) goto LAB_1005c4fbf;
                      }
                      plVar1 = plVar22 + 1;
                      plVar22 = plVar26;
                      plVar18 = (long *)*plVar1;
                    } while ((long *)*plVar1 != (long *)0x0);
LAB_1005c4fbf:
                    if ((plVar22 == plVar24) ||
                       (cVar9 = operator<(&local_398,(QString *)(plVar22 + 4)), cVar9 != '\0'))
                    goto LAB_1005c4fdc;
                  }
                  if (*(int *)local_398.field0_0x0 != -1) {
                    if (*(int *)local_398.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
                      local_d9 = *(int *)local_398.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_d9) goto LAB_1005c5026;
                    }
                    QArrayData::deallocate((QArrayData *)local_398.field0_0x0,2,8);
                  }
LAB_1005c5026:
                  if (plVar22 == plVar24) {
                    FUN_1007d6a70(&local_3c0,&local_48);
                    FUN_1007d6a70(&local_3c8,&local_58);
                    pQVar8 = local_3c0;
                    pQVar15 = local_3c8;
                    if (1 < *(int *)local_3c0 + 1U) {
                      LOCK();
                      *(int *)local_3c0 = *(int *)local_3c0 + 1;
                      local_d9 = *(int *)local_3c0 != 0;
                      UNLOCK();
                    }
                    if (1 < *(int *)local_3c8 + 1U) {
                      LOCK();
                      *(int *)local_3c8 = *(int *)local_3c8 + 1;
                      local_d9 = *(int *)local_3c8 != 0;
                      UNLOCK();
                    }
                    if (1 < *(int *)local_3c0 + 1U) {
                      LOCK();
                      *(int *)local_3c0 = *(int *)local_3c0 + 1;
                      local_d9 = *(int *)local_3c0 != 0;
                      UNLOCK();
                    }
                    if (1 < *(int *)local_3c8 + 1U) {
                      LOCK();
                      *(int *)local_3c8 = *(int *)local_3c8 + 1;
                      local_d9 = *(int *)local_3c8 != 0;
                      UNLOCK();
                    }
                    local_f0 = local_3c0;
                    if (1 < *(int *)local_3c0 + 1U) {
                      LOCK();
                      *(int *)local_3c0 = *(int *)local_3c0 + 1;
                      local_d9 = *(int *)local_3c0 != 0;
                      UNLOCK();
                    }
                    local_e8 = local_3c8;
                    if (1 < *(int *)local_3c8 + 1U) {
                      LOCK();
                      *(int *)local_3c8 = *(int *)local_3c8 + 1;
                      local_d9 = *(int *)local_3c8 != 0;
                      UNLOCK();
                    }
                    FUN_1005d6500(param_1 + 0xe,&local_f0);
                    if (*(int *)local_e8 != -1) {
                      if (*(int *)local_e8 != 0) {
                        LOCK();
                        *(int *)local_e8 = *(int *)local_e8 + -1;
                        local_d9 = *(int *)local_e8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c52fb;
                      }
                      QArrayData::deallocate(local_e8,2,8);
                    }
LAB_1005c52fb:
                    if (*(int *)local_f0 != -1) {
                      if (*(int *)local_f0 != 0) {
                        LOCK();
                        *(int *)local_f0 = *(int *)local_f0 + -1;
                        local_d9 = *(int *)local_f0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5337;
                      }
                      QArrayData::deallocate(local_f0,2,8);
                    }
LAB_1005c5337:
                    if (*(int *)pQVar15 != -1) {
                      if (*(int *)pQVar15 != 0) {
                        LOCK();
                        *(int *)pQVar15 = *(int *)pQVar15 + -1;
                        local_d9 = *(int *)pQVar15 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c537a;
                      }
                      QArrayData::deallocate(pQVar15,2,8);
                    }
LAB_1005c537a:
                    if (*(int *)pQVar8 != -1) {
                      if (*(int *)pQVar8 != 0) {
                        LOCK();
                        *(int *)pQVar8 = *(int *)pQVar8 + -1;
                        local_d9 = *(int *)pQVar8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c53ab;
                      }
                      QArrayData::deallocate(pQVar8,2,8);
                    }
LAB_1005c53ab:
                    if (*(int *)pQVar15 != -1) {
                      if (*(int *)pQVar15 != 0) {
                        LOCK();
                        *(int *)pQVar15 = *(int *)pQVar15 + -1;
                        local_d9 = *(int *)pQVar15 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c53e0;
                      }
                      QArrayData::deallocate(pQVar15,2,8);
                    }
LAB_1005c53e0:
                    if (*(int *)pQVar8 != -1) {
                      if (*(int *)pQVar8 != 0) {
                        LOCK();
                        *(int *)pQVar8 = *(int *)pQVar8 + -1;
                        local_d9 = *(int *)pQVar8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5411;
                      }
                      QArrayData::deallocate(pQVar8,2,8);
                    }
LAB_1005c5411:
                    if (*(int *)local_3c8 != -1) {
                      if (*(int *)local_3c8 != 0) {
                        LOCK();
                        *(int *)local_3c8 = *(int *)local_3c8 + -1;
                        local_d9 = *(int *)local_3c8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c544d;
                      }
                      QArrayData::deallocate(local_3c8,2,8);
                    }
LAB_1005c544d:
                    if (*(int *)local_3c0 != -1) {
                      if (*(int *)local_3c0 != 0) {
                        LOCK();
                        *(int *)local_3c0 = *(int *)local_3c0 + -1;
                        local_d9 = *(int *)local_3c0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5489;
                      }
                      QArrayData::deallocate(local_3c0,2,8);
                    }
LAB_1005c5489:
                    iVar11 = FUN_1007ea6f0(&local_48,&DAT_1011bc8b8);
                    if (iVar11 == 0) {
                      QDomElement::operator=((QDomElement *)(param_1 + 6),local_308);
                    }
                    if (bVar27) {
                      FUN_1007d6a70(&local_3d8,&local_48);
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Found unfinished operation at UID: %s",
                                    local_3d0 + *(long *)(local_3d0 + 0x10));
                      if (*(int *)local_3d0 != -1) {
                        if (*(int *)local_3d0 != 0) {
                          LOCK();
                          *(int *)local_3d0 = *(int *)local_3d0 + -1;
                          local_d9 = *(int *)local_3d0 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c5546;
                        }
                        QArrayData::deallocate(local_3d0,1,8);
                      }
LAB_1005c5546:
                      if (*(int *)local_3d8 != -1) {
                        if (*(int *)local_3d8 != 0) {
                          LOCK();
                          *(int *)local_3d8 = *(int *)local_3d8 + -1;
                          local_d9 = *(int *)local_3d8 != 0;
                          UNLOCK();
                          if ((bool)local_d9) goto LAB_1005c5582;
                        }
                        QArrayData::deallocate(local_3d8,2,8);
                      }
LAB_1005c5582:
                      *(undefined8 *)(param_4 + 0xc) = local_40;
                      *(undefined8 *)(param_4 + 10) = local_48;
                    }
                    bVar10 = FUN_1007ea210(&local_58);
                    bVar20 = bVar20 & 1 | bVar10;
                    local_580 = 0;
                  }
                  else {
                    FUN_1007d6a70(&local_3a8,&local_48);
                    QString::toLatin1();
                    if ((1 < *(uint *)local_3a0) || (*(long *)(local_3a0 + 0x10) != 0x18)) {
                      QByteArray::reallocData
                                (&local_3a0,*(uint *)(local_3a0 + 4) + 1,
                                 *(uint *)(local_3a0 + 8) >> 0x1f);
                    }
                    pQVar15 = local_3a0 + *(long *)(local_3a0 + 0x10);
                    FUN_1007d6a70(&local_3b8,&local_58);
                    QString::toLatin1();
                    if ((1 < *(uint *)local_3b0) || (*(long *)(local_3b0 + 0x10) != 0x18)) {
                      QByteArray::reallocData
                                (&local_3b0,*(uint *)(local_3b0 + 4) + 1,
                                 *(uint *)(local_3b0 + 8) >> 0x1f);
                    }
                    FUN_1008e3970("","vdisk",0,
                                  "Snaphot %s - %s already exists in the internal structures",
                                  pQVar15,local_3b0 + *(long *)(local_3b0 + 0x10));
                    if (*(int *)local_3b0 != -1) {
                      if (*(int *)local_3b0 != 0) {
                        LOCK();
                        *(int *)local_3b0 = *(int *)local_3b0 + -1;
                        local_d9 = *(int *)local_3b0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5146;
                      }
                      QArrayData::deallocate(local_3b0,1,8);
                    }
LAB_1005c5146:
                    if (*(int *)local_3b8 != -1) {
                      if (*(int *)local_3b8 != 0) {
                        LOCK();
                        *(int *)local_3b8 = *(int *)local_3b8 + -1;
                        local_d9 = *(int *)local_3b8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5182;
                      }
                      QArrayData::deallocate(local_3b8,2,8);
                    }
LAB_1005c5182:
                    if (*(int *)local_3a0 != -1) {
                      if (*(int *)local_3a0 != 0) {
                        LOCK();
                        *(int *)local_3a0 = *(int *)local_3a0 + -1;
                        local_d9 = *(int *)local_3a0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c51be;
                      }
                      QArrayData::deallocate(local_3a0,1,8);
                    }
LAB_1005c51be:
                    if (*(int *)local_3a8 == -1) {
LAB_1005c55d2:
                      local_580 = 6;
                      local_56c = -0x7ffdeffa;
                    }
                    else {
                      if (*(int *)local_3a8 != 0) {
                        LOCK();
                        *(int *)local_3a8 = *(int *)local_3a8 + -1;
                        local_d9 = *(int *)local_3a8 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c55d2;
                      }
                      local_56c = -0x7ffdeffa;
                      local_580 = 6;
                      QArrayData::deallocate(local_3a8,2,8);
                    }
                  }
                }
              }
              QDomNode::~QDomNode((QDomNode *)local_308);
              if (local_580 != 0) {
                if (local_580 == 6) goto LAB_1005c5757;
                iVar11 = extraout_EDX;
                if (local_580 != 0x1e) goto LAB_1005c576d;
              }
              iVar25 = iVar25 + 1;
            }
            if ((bVar20 & 1) == 0) {
              FUN_1008e3970("","vdisk",0,"Error: termination node not found in xml!");
              local_56c = -0x7ffdeffe;
              (**(code **)(*param_1 + 0x58))();
            }
            else {
              cVar9 = FUN_1005c2790(param_1);
              if (cVar9 == '\0') {
                FUN_1005c2cc0(local_3e0,param_1);
                QDomNode::operator=(local_f8,local_3e0);
                QDomNode::~QDomNode(local_3e0);
                cVar9 = QDomNode::isNull();
                if (cVar9 == '\0') {
                  QDomNode::childNodes();
                  QDomNodeList::operator=(local_108,local_3e8);
                  iVar11 = QDomNodeList::~QDomNodeList(local_3e8);
                  iVar25 = 0;
                  while( true ) {
                    iVar13 = QDomNodeList::length();
                    if (iVar13 <= iVar25) break;
                    local_3f0 = 0;
                    local_400 = (long ****)&local_400;
                    local_3f8 = (long ****)&local_400;
                    QDomNodeList::item((int)local_408);
                    QDomNode::operator=(local_f8,local_408);
                    QDomNode::~QDomNode(local_408);
                    QDomNode::nodeName();
                    local_418.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Storage",7);
                    cVar9 = operator==(&local_410,&local_418);
                    if (*(int *)local_418.field0_0x0 != -1) {
                      if (*(int *)local_418.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_418.field0_0x0 = *(int *)local_418.field0_0x0 + -1;
                        local_d9 = *(int *)local_418.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c594a;
                      }
                      QArrayData::deallocate((QArrayData *)local_418.field0_0x0,2,8);
                    }
LAB_1005c594a:
                    if (*(int *)local_410.field0_0x0 != -1) {
                      if (*(int *)local_410.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_410.field0_0x0 = *(int *)local_410.field0_0x0 + -1;
                        local_d9 = *(int *)local_410.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_d9) goto LAB_1005c5986;
                      }
                      QArrayData::deallocate((QArrayData *)local_410.field0_0x0,2,8);
                    }
LAB_1005c5986:
                    if (cVar9 == '\0') {
                      local_580 = 0x36;
                    }
                    else {
                      local_420 = (long *)0x0;
                      puVar17 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                      puVar23 = (undefined8 *)0x0;
                      if (puVar17 != (undefined8 *)0x0) {
                        *puVar17 = &PTR_FUN_10111e168;
                        puVar17[1] = &PTR_FUN_10111e188;
                        QDomNode::QDomNode((QDomNode *)(puVar17 + 2),local_f8);
                        puVar23 = puVar17;
                      }
                      plVar24 = puVar23 + 1;
                      if (puVar23 == (undefined8 *)0x0) {
                        plVar24 = (long *)0x0;
                      }
                      plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                      if (plVar18 == (long *)0x0) {
                        bVar27 = true;
                        if (puVar23 == (undefined8 *)0x0) {
                          plVar18 = (long *)0x0;
                        }
                        else {
                          (**(code **)(*plVar24 + 8))(plVar24);
                          plVar18 = (long *)0x0;
                        }
                      }
                      else {
                        *(undefined4 *)(plVar18 + 1) = 1;
                        plVar18[2] = (long)plVar24;
                        *plVar18 = (long)&PTR_FUN_10111e1a8;
                        LOCK();
                        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                        UNLOCK();
                        bVar27 = false;
                      }
                      plVar24 = plVar18;
                      if (local_420 != (long *)0x0) {
                        LOCK();
                        plVar26 = local_420 + 1;
                        lVar7 = *plVar26;
                        *(int *)plVar26 = (int)*plVar26 + -1;
                        UNLOCK();
                        if ((int)lVar7 == 1) {
                          lVar7 = *local_420;
                          local_420 = plVar18;
                          (**(code **)(lVar7 + 0x10))();
                          plVar24 = local_420;
                        }
                      }
                      local_420 = plVar24;
                      if (!bVar27) {
                        LOCK();
                        plVar24 = plVar18 + 1;
                        lVar7 = *plVar24;
                        *(int *)plVar24 = (int)*plVar24 + -1;
                        UNLOCK();
                        if ((int)lVar7 == 1) {
                          (**(code **)(*plVar18 + 0x10))(plVar18);
                        }
                      }
                      if (local_420 == (long *)0x0) {
                        local_56c = -0x7ffffffe;
                        local_580 = 6;
                      }
                      else {
                        if (local_420[2] == 0) {
                          local_580 = 6;
                          local_56c = -0x7ffffffe;
                        }
                        else {
                          QDomNodeList::item((int)local_430);
                          QDomNode::firstChild();
                          uVar16 = 0;
                          QDomNode::~QDomNode(local_430);
                          local_5a0 = 0;
                          local_5a8 = 0;
                          while( true ) {
                            cVar9 = QDomNode::isNull();
                            local_580 = 0x39;
                            if (cVar9 != '\0') break;
                            cVar9 = QDomNode::isElement();
                            if (cVar9 != '\0') {
                              QDomNode::toElement();
                              QDomElement::operator=
                                        ((QDomElement *)&local_100,(QDomElement *)local_438);
                              QDomNode::~QDomNode(local_438);
                              QDomElement::tagName();
                              local_448.field0_0x0 =
                                   (QTypedArrayData<unsigned_short> *)
                                   QString::fromAscii_helper("Start",5);
                              cVar9 = operator==(&local_440,&local_448);
                              if (*(int *)local_448.field0_0x0 != -1) {
                                if (*(int *)local_448.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
                                  local_d9 = *(int *)local_448.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_d9) goto LAB_1005c5e4d;
                                }
                                QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
                              }
LAB_1005c5e4d:
                              if (*(int *)local_440.field0_0x0 != -1) {
                                if (*(int *)local_440.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_440.field0_0x0 = *(int *)local_440.field0_0x0 + -1;
                                  local_d9 = *(int *)local_440.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_d9) goto LAB_1005c5e89;
                                }
                                QArrayData::deallocate((QArrayData *)local_440.field0_0x0,2,8);
                              }
LAB_1005c5e89:
                              if (cVar9 == '\0') {
                                QDomElement::tagName();
                                local_460.field0_0x0 =
                                     (QTypedArrayData<unsigned_short> *)
                                     QString::fromAscii_helper("End",3);
                                cVar9 = operator==(&local_458,&local_460);
                                if (*(int *)local_460.field0_0x0 != -1) {
                                  if (*(int *)local_460.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1
                                    ;
                                    local_d9 = *(int *)local_460.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_d9) goto LAB_1005c5f7b;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
                                }
LAB_1005c5f7b:
                                if (*(int *)local_458.field0_0x0 != -1) {
                                  if (*(int *)local_458.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1
                                    ;
                                    local_d9 = *(int *)local_458.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_d9) goto LAB_1005c5fb7;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
                                }
LAB_1005c5fb7:
                                if (cVar9 == '\0') {
                                  QDomElement::tagName();
                                  local_478.field0_0x0 =
                                       (QTypedArrayData<unsigned_short> *)
                                       QString::fromAscii_helper("Blocksize",9);
                                  cVar9 = operator==(&local_470,&local_478);
                                  if (*(int *)local_478.field0_0x0 != -1) {
                                    if (*(int *)local_478.field0_0x0 != 0) {
                                      LOCK();
                                      *(int *)local_478.field0_0x0 =
                                           *(int *)local_478.field0_0x0 + -1;
                                      local_d9 = *(int *)local_478.field0_0x0 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c60ad;
                                    }
                                    QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
                                  }
LAB_1005c60ad:
                                  if (*(int *)local_470.field0_0x0 != -1) {
                                    if (*(int *)local_470.field0_0x0 != 0) {
                                      LOCK();
                                      *(int *)local_470.field0_0x0 =
                                           *(int *)local_470.field0_0x0 + -1;
                                      local_d9 = *(int *)local_470.field0_0x0 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c60e9;
                                    }
                                    QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
                                  }
LAB_1005c60e9:
                                  if (cVar9 == '\0') {
                                    QDomElement::tagName();
                                    local_490.field0_0x0 =
                                         (QTypedArrayData<unsigned_short> *)
                                         QString::fromAscii_helper("Image",5);
                                    cVar9 = operator==(&local_488,&local_490);
                                    if (*(int *)local_490.field0_0x0 != -1) {
                                      if (*(int *)local_490.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_490.field0_0x0 =
                                             *(int *)local_490.field0_0x0 + -1;
                                        local_d9 = *(int *)local_490.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c61df;
                                      }
                                      QArrayData::deallocate((QArrayData *)local_490.field0_0x0,2,8)
                                      ;
                                    }
LAB_1005c61df:
                                    if (*(int *)local_488.field0_0x0 != -1) {
                                      if (*(int *)local_488.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_488.field0_0x0 =
                                             *(int *)local_488.field0_0x0 + -1;
                                        local_d9 = *(int *)local_488.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c621b;
                                      }
                                      QArrayData::deallocate((QArrayData *)local_488.field0_0x0,2,8)
                                      ;
                                    }
LAB_1005c621b:
                                    if (cVar9 != '\0') {
                                      local_498 = (long *)0x0;
                                      plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8
                                                            );
                                      plVar24 = (long *)0x0;
                                      if (plVar18 != (long *)0x0) {
                                        *plVar18 = (long)&PTR_FUN_10111e168;
                                        plVar18[1] = (long)&PTR_FUN_10111e188;
                                        QDomNode::QDomNode((QDomNode *)(plVar18 + 2),
                                                           (QDomNode *)&local_100);
                                        plVar24 = plVar18;
                                      }
                                      plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8
                                                            );
                                      if (plVar18 == (long *)0x0) {
                                        bVar27 = true;
                                        if (plVar24 == (long *)0x0) {
                                          plVar18 = (long *)0x0;
                                        }
                                        else {
                                          (**(code **)(*plVar24 + 8))(plVar24);
                                          plVar18 = (long *)0x0;
                                        }
                                      }
                                      else {
                                        *(undefined4 *)(plVar18 + 1) = 1;
                                        plVar18[2] = (long)plVar24;
                                        *plVar18 = (long)&PTR_FUN_10111e208;
                                        LOCK();
                                        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                                        UNLOCK();
                                        bVar27 = false;
                                      }
                                      plVar24 = plVar18;
                                      if (local_498 != (long *)0x0) {
                                        LOCK();
                                        plVar26 = local_498 + 1;
                                        lVar7 = *plVar26;
                                        *(int *)plVar26 = (int)*plVar26 + -1;
                                        UNLOCK();
                                        if ((int)lVar7 == 1) {
                                          lVar7 = *local_498;
                                          local_498 = plVar18;
                                          (**(code **)(lVar7 + 0x10))();
                                          plVar24 = local_498;
                                        }
                                      }
                                      local_498 = plVar24;
                                      if (!bVar27) {
                                        LOCK();
                                        plVar24 = plVar18 + 1;
                                        lVar7 = *plVar24;
                                        *(int *)plVar24 = (int)*plVar24 + -1;
                                        UNLOCK();
                                        if ((int)lVar7 == 1) {
                                          (**(code **)(*plVar18 + 0x10))(plVar18);
                                        }
                                      }
                                      if (local_498 == (long *)0x0) {
                                        local_56c = -0x7ffffffe;
                                        local_580 = 6;
                                        break;
                                      }
                                      if (local_498[2] == 0) {
                                        local_580 = 6;
                                        local_56c = -0x7ffffffe;
LAB_1005c6859:
                                        LOCK();
                                        plVar24 = local_498 + 1;
                                        lVar7 = *plVar24;
                                        *(int *)plVar24 = (int)*plVar24 + -1;
                                        UNLOCK();
                                        if ((int)lVar7 == 1) {
                                          (**(code **)(*local_498 + 0x10))();
                                        }
                                      }
                                      else {
                                        local_4a0 = (QArrayData *)QString::fromAscii_helper("",0);
                                        local_4a8 = (QArrayData *)QString::fromAscii_helper("",0);
                                        FUN_1007d6870(local_c8);
                                        FUN_1005b6860(local_b8,0,&local_4a0,&local_4a8,local_c8,
                                                      &local_498);
                                        if (*(int *)local_4a8 != -1) {
                                          if (*(int *)local_4a8 != 0) {
                                            LOCK();
                                            *(int *)local_4a8 = *(int *)local_4a8 + -1;
                                            local_d9 = *(int *)local_4a8 != 0;
                                            UNLOCK();
                                            if ((bool)local_d9) goto LAB_1005c63f5;
                                          }
                                          QArrayData::deallocate(local_4a8,2,8);
                                        }
LAB_1005c63f5:
                                        if (*(int *)local_4a0 != -1) {
                                          if (*(int *)local_4a0 != 0) {
                                            LOCK();
                                            *(int *)local_4a0 = *(int *)local_4a0 + -1;
                                            local_d9 = *(int *)local_4a0 != 0;
                                            UNLOCK();
                                            if ((bool)local_d9) goto LAB_1005c6431;
                                          }
                                          QArrayData::deallocate(local_4a0,2,8);
                                        }
LAB_1005c6431:
                                        QDomNode::firstChild();
                                        while (cVar9 = QDomNode::isNull(), cVar9 == '\0') {
                                          cVar9 = QDomNode::isElement();
                                          if (cVar9 != '\0') {
                                            QDomNode::toElement();
                                            QDomElement::tagName();
                                            local_4c8.field0_0x0 =
                                                 (QTypedArrayData<unsigned_short> *)
                                                 QString::fromAscii_helper("GUID",4);
                                            cVar9 = operator==(&local_4c0,&local_4c8);
                                            if (*(int *)local_4c8.field0_0x0 != -1) {
                                              if (*(int *)local_4c8.field0_0x0 != 0) {
                                                LOCK();
                                                *(int *)local_4c8.field0_0x0 =
                                                     *(int *)local_4c8.field0_0x0 + -1;
                                                local_d9 = *(int *)local_4c8.field0_0x0 != 0;
                                                UNLOCK();
                                                if ((bool)local_d9) goto LAB_1005c64f5;
                                              }
                                              QArrayData::deallocate
                                                        ((QArrayData *)local_4c8.field0_0x0,2,8);
                                            }
LAB_1005c64f5:
                                            if (*(int *)local_4c0.field0_0x0 != -1) {
                                              if (*(int *)local_4c0.field0_0x0 != 0) {
                                                LOCK();
                                                *(int *)local_4c0.field0_0x0 =
                                                     *(int *)local_4c0.field0_0x0 + -1;
                                                local_d9 = *(int *)local_4c0.field0_0x0 != 0;
                                                UNLOCK();
                                                if ((bool)local_d9) goto LAB_1005c6531;
                                              }
                                              QArrayData::deallocate
                                                        ((QArrayData *)local_4c0.field0_0x0,2,8);
                                            }
LAB_1005c6531:
                                            if (cVar9 == '\0') {
                                              QDomElement::tagName();
                                              local_4e0.field0_0x0 =
                                                   (QTypedArrayData<unsigned_short> *)
                                                   QString::fromAscii_helper("Type",4);
                                              cVar9 = operator==(&local_4d8,&local_4e0);
                                              if (*(int *)local_4e0.field0_0x0 != -1) {
                                                if (*(int *)local_4e0.field0_0x0 != 0) {
                                                  LOCK();
                                                  *(int *)local_4e0.field0_0x0 =
                                                       *(int *)local_4e0.field0_0x0 + -1;
                                                  local_d9 = *(int *)local_4e0.field0_0x0 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_d9) goto LAB_1005c6640;
                                                }
                                                QArrayData::deallocate
                                                          ((QArrayData *)local_4e0.field0_0x0,2,8);
                                              }
LAB_1005c6640:
                                              if (*(int *)local_4d8.field0_0x0 != -1) {
                                                if (*(int *)local_4d8.field0_0x0 != 0) {
                                                  LOCK();
                                                  *(int *)local_4d8.field0_0x0 =
                                                       *(int *)local_4d8.field0_0x0 + -1;
                                                  local_d9 = *(int *)local_4d8.field0_0x0 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_d9) goto LAB_1005c667c;
                                                }
                                                QArrayData::deallocate
                                                          ((QArrayData *)local_4d8.field0_0x0,2,8);
                                              }
LAB_1005c667c:
                                              if (cVar9 == '\0') {
                                                QDomElement::tagName();
                                                local_4f8.field0_0x0 =
                                                     (QTypedArrayData<unsigned_short> *)
                                                     QString::fromAscii_helper("File",4);
                                                cVar9 = operator==(&local_4f0,&local_4f8);
                                                if (*(int *)local_4f8.field0_0x0 != -1) {
                                                  if (*(int *)local_4f8.field0_0x0 != 0) {
                                                    LOCK();
                                                    *(int *)local_4f8.field0_0x0 =
                                                         *(int *)local_4f8.field0_0x0 + -1;
                                                    local_d9 = *(int *)local_4f8.field0_0x0 != 0;
                                                    UNLOCK();
                                                    if ((bool)local_d9) goto LAB_1005c676a;
                                                  }
                                                  QArrayData::deallocate
                                                            ((QArrayData *)local_4f8.field0_0x0,2,8)
                                                  ;
                                                }
LAB_1005c676a:
                                                if (*(int *)local_4f0.field0_0x0 != -1) {
                                                  if (*(int *)local_4f0.field0_0x0 != 0) {
                                                    LOCK();
                                                    *(int *)local_4f0.field0_0x0 =
                                                         *(int *)local_4f0.field0_0x0 + -1;
                                                    local_d9 = *(int *)local_4f0.field0_0x0 != 0;
                                                    UNLOCK();
                                                    if ((bool)local_d9) goto LAB_1005c67a6;
                                                  }
                                                  QArrayData::deallocate
                                                            ((QArrayData *)local_4f0.field0_0x0,2,8)
                                                  ;
                                                }
LAB_1005c67a6:
                                                if (cVar9 != '\0') {
                                                  QDomElement::text();
                                                  QString::operator=(&local_b0,&local_500);
                                                  if (*(int *)local_500.field0_0x0 != -1) {
                                                    if (*(int *)local_500.field0_0x0 != 0) {
                                                      LOCK();
                                                      *(int *)local_500.field0_0x0 =
                                                           *(int *)local_500.field0_0x0 + -1;
                                                      local_d9 = *(int *)local_500.field0_0x0 != 0;
                                                      UNLOCK();
                                                      if ((bool)local_d9) goto LAB_1005c680c;
                                                    }
                                                    QArrayData::deallocate
                                                              ((QArrayData *)local_500.field0_0x0,2,
                                                               8);
                                                  }
                                                }
                                              }
                                              else {
                                                QDomElement::text();
                                                local_b8[0] = FUN_10059c940(&local_4e8);
                                                if (*(int *)local_4e8 != -1) {
                                                  if (*(int *)local_4e8 != 0) {
                                                    LOCK();
                                                    *(int *)local_4e8 = *(int *)local_4e8 + -1;
                                                    local_d9 = *(int *)local_4e8 != 0;
                                                    UNLOCK();
                                                    if ((bool)local_d9) goto LAB_1005c680c;
                                                  }
                                                  QArrayData::deallocate(local_4e8,2,8);
                                                }
                                              }
                                            }
                                            else {
                                              QDomElement::text();
                                              FUN_1007d6920(&local_d8,&local_4d0);
                                              local_98 = local_d0;
                                              local_a0 = local_d8;
                                              if (*(int *)local_4d0 != -1) {
                                                if (*(int *)local_4d0 != 0) {
                                                  LOCK();
                                                  *(int *)local_4d0 = *(int *)local_4d0 + -1;
                                                  local_d9 = *(int *)local_4d0 != 0;
                                                  UNLOCK();
                                                  if ((bool)local_d9) goto LAB_1005c680c;
                                                }
                                                QArrayData::deallocate(local_4d0,2,8);
                                              }
                                            }
LAB_1005c680c:
                                            QDomNode::~QDomNode(local_4b8);
                                          }
                                          QDomNode::nextSibling();
                                          QDomNode::operator=(local_4b0,local_508);
                                          QDomNode::~QDomNode(local_508);
                                        }
                                        QDomNode::~QDomNode(local_4b0);
                                        if (local_b8[0] == 0) {
                                          FUN_1008e3970("","vdisk",0,"Image type is not recognized!"
                                                       );
LAB_1005c5ba9:
                                          iVar11 = -0x7ffdeff8;
                                          local_580 = 1;
                                        }
                                        else {
                                          cVar9 = FUN_1007ea210(&local_a0);
                                          if (cVar9 != '\0') {
                                            FUN_1008e3970("","vdisk",0,
                                                          "Uid of image is not recognized!");
                                            goto LAB_1005c5ba9;
                                          }
                                          ppppplVar19 = operator_new(0x40);
                                          *(int *)(ppppplVar19 + 2) = local_b8[0];
                                          ppppplVar19[3] = (long ****)local_b0.field0_0x0;
                                          if (1 < *(int *)local_b0.field0_0x0 + 1U) {
                                            LOCK();
                                            *(int *)local_b0.field0_0x0 =
                                                 *(int *)local_b0.field0_0x0 + 1;
                                            local_d9 = *(int *)local_b0.field0_0x0 != 0;
                                            UNLOCK();
                                          }
                                          *(int *)(ppppplVar19 + 2) = local_b8[0];
                                          ppppplVar19[4] = (long ****)local_a8;
                                          if (1 < *(int *)local_a8 + 1U) {
                                            LOCK();
                                            *(int *)local_a8 = *(int *)local_a8 + 1;
                                            local_d9 = *(int *)local_a8 != 0;
                                            UNLOCK();
                                          }
                                          ppppplVar19[6] = (long ****)local_98;
                                          ppppplVar19[5] = (long ****)local_a0;
                                          ppppplVar19[7] = (long ****)local_90;
                                          if ((long ****)local_90 != (long ****)0x0) {
                                            LOCK();
                                            *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
                                            UNLOCK();
                                          }
                                          ppppplVar19[1] = (long ****)&local_400;
                                          *ppppplVar19 = local_400;
                                          local_400[1] = (long ***)ppppplVar19;
                                          local_3f0 = local_3f0 + 1;
                                          local_580 = 0;
                                          local_400 = (long ****)ppppplVar19;
                                        }
                                        if ((long ****)local_90 != (long ****)0x0) {
                                          LOCK();
                                          pppplVar4 = (long ****)(local_90 + 1);
                                          iVar13 = *(int *)pppplVar4;
                                          *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
                                          UNLOCK();
                                          if (iVar13 == 1) {
                                            (*(code *)(*local_90)[2])();
                                          }
                                        }
                                        if (*(int *)local_a8 != -1) {
                                          if (*(int *)local_a8 != 0) {
                                            LOCK();
                                            *(int *)local_a8 = *(int *)local_a8 + -1;
                                            local_d9 = *(int *)local_a8 != 0;
                                            UNLOCK();
                                            if ((bool)local_d9) goto LAB_1005c5ccf;
                                          }
                                          QArrayData::deallocate(local_a8,2,8);
                                        }
LAB_1005c5ccf:
                                        if (*(int *)local_b0.field0_0x0 != -1) {
                                          if (*(int *)local_b0.field0_0x0 != 0) {
                                            LOCK();
                                            *(int *)local_b0.field0_0x0 =
                                                 *(int *)local_b0.field0_0x0 + -1;
                                            local_d9 = *(int *)local_b0.field0_0x0 != 0;
                                            UNLOCK();
                                            if ((bool)local_d9) goto LAB_1005c5d0b;
                                          }
                                          QArrayData::deallocate
                                                    ((QArrayData *)local_b0.field0_0x0,2,8);
                                        }
LAB_1005c5d0b:
                                        if (local_498 != (long *)0x0) goto LAB_1005c6859;
                                      }
                                      if (local_580 != 0) break;
                                    }
                                  }
                                  else {
                                    QDomElement::text();
                                    local_5a8 = QString::toUInt((bool *)&local_480,0);
                                    if (*(int *)local_480 != -1) {
                                      if (*(int *)local_480 != 0) {
                                        LOCK();
                                        *(int *)local_480 = *(int *)local_480 + -1;
                                        local_d9 = *(int *)local_480 != 0;
                                        UNLOCK();
                                        if ((bool)local_d9) goto LAB_1005c5b14;
                                      }
                                      QArrayData::deallocate(local_480,2,8);
                                    }
                                  }
                                }
                                else {
                                  QDomElement::text();
                                  local_5a0 = QString::toULongLong((bool *)&local_468,0);
                                  if (*(int *)local_468 != -1) {
                                    if (*(int *)local_468 != 0) {
                                      LOCK();
                                      *(int *)local_468 = *(int *)local_468 + -1;
                                      local_d9 = *(int *)local_468 != 0;
                                      UNLOCK();
                                      if ((bool)local_d9) goto LAB_1005c5b14;
                                    }
                                    QArrayData::deallocate(local_468,2,8);
                                  }
                                }
                              }
                              else {
                                QDomElement::text();
                                uVar16 = QString::toULongLong((bool *)&local_450,0);
                                if (*(int *)local_450 != -1) {
                                  if (*(int *)local_450 != 0) {
                                    LOCK();
                                    *(int *)local_450 = *(int *)local_450 + -1;
                                    local_d9 = *(int *)local_450 != 0;
                                    UNLOCK();
                                    if ((bool)local_d9) goto LAB_1005c5b14;
                                  }
                                  QArrayData::deallocate(local_450,2,8);
                                }
                              }
                            }
LAB_1005c5b14:
                            QDomNode::nextSibling();
                            QDomNode::operator=(local_428,local_510);
                            QDomNode::~QDomNode(local_510);
                          }
                          QDomNode::~QDomNode(local_428);
                          if (local_580 == 0x39) {
                            if ((((ulong)uVar3 * (ulong)uVar2 * (ulong)uVar12 != lVar14) &&
                                (iVar13 = QDomNodeList::length(), iVar25 == iVar13 + -1)) &&
                               (uVar21 = local_5a8 & 0xffffffff, local_5a0 % uVar21 != 0)) {
                              local_5a0 = (local_5a0 - 1) + uVar21;
                              local_5a0 = local_5a0 - local_5a0 % uVar21;
                            }
                            if (((int)local_5a8 == 0) || (local_5a0 == 0)) {
                              local_56c = -0x7ffdeff9;
                              FUN_1008e3970("","vdisk",0,"Corrupted storages tree");
                              local_580 = 6;
                            }
                            else {
                              FUN_1005b6ac0(local_548,uVar16,local_5a0,local_5a8,iVar25,&local_420,
                                            &local_400);
                              FUN_1005d5450(param_4 + 0x14,local_548);
                              if (local_518 != 0) {
                                lVar7 = *local_520;
                                *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(local_528 + 8);
                                **(long **)(local_528 + 8) = lVar7;
                                local_518 = 0;
                                plVar24 = local_520;
                                if (local_520 != &local_528) {
                                  do {
                                    plVar18 = (long *)plVar24[1];
                                    FUN_10057e590(plVar24 + 2);
                                    operator_delete(plVar24);
                                    plVar24 = plVar18;
                                  } while (plVar18 != &local_528);
                                }
                              }
                              if (local_530 != (long *)0x0) {
                                LOCK();
                                plVar24 = local_530 + 1;
                                lVar7 = *plVar24;
                                *(int *)plVar24 = (int)*plVar24 + -1;
                                UNLOCK();
                                if ((int)lVar7 == 1) {
                                  (**(code **)(*local_530 + 0x10))();
                                }
                              }
                              local_580 = 0;
                            }
                          }
                        }
                        if (local_420 != (long *)0x0) {
                          LOCK();
                          plVar24 = local_420 + 1;
                          lVar7 = *plVar24;
                          *(int *)plVar24 = (int)*plVar24 + -1;
                          UNLOCK();
                          if ((int)lVar7 == 1) {
                            (**(code **)(*local_420 + 0x10))();
                          }
                        }
                      }
                    }
                    if (local_3f0 != 0) {
                      pppplVar4 = (long ****)*local_3f8;
                      pppplVar4[1] = local_400[1];
                      *local_400[1] = (long **)pppplVar4;
                      local_3f0 = 0;
                      ppppplVar19 = (long *****)local_3f8;
                      while (ppppplVar19 != &local_400) {
                        ppppplVar5 = (long *****)ppppplVar19[1];
                        FUN_10057e590(ppppplVar19 + 2);
                        operator_delete(ppppplVar19);
                        ppppplVar19 = ppppplVar5;
                      }
                    }
                    if (local_580 != 0) {
                      if (local_580 == 6) goto LAB_1005c5757;
                      if (local_580 != 0x36) goto LAB_1005c576d;
                    }
                    iVar25 = iVar25 + 1;
                  }
                  iVar11 = 0;
                  if (((param_3 & 8) == 0) && (!bVar6 && (char)param_1[0xd] != '\0')) {
                    iVar11 = (**(code **)(*param_1 + 0x18))();
                  }
                  goto LAB_1005c576d;
                }
                local_56c = -0x7ffdeffe;
                FUN_1008e3970("","vdisk",0,"Open: storage data not found.");
              }
              else {
                FUN_1008e3970("","vdisk",0,"Detected snapshots cycling!");
                local_56c = -0x7ffdeffe;
                (**(code **)(*param_1 + 0x58))();
              }
            }
          }
          else {
            local_56c = -0x7ffdeffe;
            FUN_1008e3970("","vdisk",0,"Open: milestone node not found");
          }
        }
        else {
          local_56c = -0x7ffdeffe;
          FUN_1008e3970("","vdisk",0,"Open: failed get parameters node.");
        }
      }
    }
LAB_1005c5757:
    (**(code **)(*param_1 + 0x28))();
    iVar11 = local_56c;
  }
  else {
    lVar14 = QFileInfo::size();
    iVar11 = -0x7ffdefcd;
    if (lVar14 == 0) {
      QFileInfo::dir();
      QDir::path();
      QString::operator=(&local_118,&local_120);
      if (*(int *)local_120.field0_0x0 != -1) {
        if (*(int *)local_120.field0_0x0 != 0) {
          LOCK();
          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
          local_d9 = *(int *)local_120.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1005c300b;
        }
        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
      }
LAB_1005c300b:
      QDir::~QDir(local_128);
      goto LAB_1005c3017;
    }
  }
LAB_1005c576d:
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_d9 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_1005c57b6;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1005c57b6:
  QFileInfo::~QFileInfo((QFileInfo *)&local_110);
  QDomNodeList::~QDomNodeList(local_108);
  QDomNode::~QDomNode((QDomNode *)&local_100);
  QDomNode::~QDomNode(local_f8);
  QMutex::unlock();
  if (lVar14 == local_38) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

