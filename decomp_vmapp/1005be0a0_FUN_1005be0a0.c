
int FUN_1005be0a0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long ****pppplVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  QArrayData *pQVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  undefined8 local_448;
  long local_430;
  long local_420;
  QDir local_418 [8];
  QArrayData *local_410;
  QString local_408;
  QString local_400;
  QDomNode local_3f8 [8];
  QDomNode local_3f0 [8];
  QDomNode local_3e8 [8];
  QArrayData *local_3e0;
  QString local_3d8;
  QString local_3d0;
  QDomNode local_3c8 [8];
  QString local_3c0;
  QString local_3b8;
  QDomNode local_3b0 [8];
  QDomNode local_3a8 [8];
  QArrayData *local_3a0;
  QDomNode local_398 [8];
  QArrayData *local_390;
  QArrayData *local_388;
  QString local_380;
  QString local_378;
  QArrayData *local_370;
  QDomNode local_368 [8];
  QDomNode local_360 [8];
  QArrayData *local_358;
  long local_350;
  long local_348;
  QArrayData *local_340;
  long local_338;
  QArrayData *local_330;
  long local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  QString local_318;
  undefined8 local_310;
  QArrayData *local_308;
  QString local_300;
  QArrayData *local_2f8;
  QString local_2f0;
  QArrayData *local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QString local_2c0;
  QString local_2b8;
  QString local_2b0;
  QString local_2a8;
  QString local_2a0;
  QString local_298;
  QFileInfo local_290 [8];
  QDomNode local_288 [8];
  QDomNode local_280 [8];
  QArrayData *local_278;
  QString local_270;
  QString local_268;
  QDomNode local_260 [8];
  QString local_258;
  QString local_250;
  QDomNode local_248 [8];
  QArrayData *local_240;
  QString local_238;
  QString local_230;
  QDomNode local_228 [8];
  QString local_220;
  QString local_218;
  QString local_210;
  QDomNode local_208 [8];
  QDomNode local_200 [8];
  QDomNode local_1f8 [8];
  QDomNode local_1f0 [8];
  QDomNode local_1e8 [8];
  QArrayData *local_1e0;
  QString local_1d8;
  QString local_1d0;
  QDomNode local_1c8 [8];
  QArrayData *local_1c0;
  QString local_1b8;
  QString local_1b0;
  QDomNode local_1a8 [8];
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QDomNode local_188 [8];
  QArrayData *local_180;
  QString local_178;
  QString local_170;
  QDomNode local_168 [8];
  QDomNode local_160 [8];
  long local_158;
  undefined8 uStack_150;
  QArrayData *local_148;
  undefined8 local_140;
  QDomNode local_130 [8];
  QDomNodeList local_128 [8];
  QArrayData *local_120;
  QDomNode local_118 [24];
  QDomNodeList local_100 [8];
  QDomElement local_f8 [8];
  QDomNode local_f0 [8];
  QDomNode local_e8 [8];
  long ***local_e0;
  long ***local_d8;
  undefined8 local_d0;
  QString local_c8;
  QString local_c0;
  QDomNode local_b8 [8];
  QDomDocument local_b0 [8];
  QArrayData *local_a8;
  QFileInfo local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  undefined1 local_79;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar13;
  cVar3 = FUN_1007ea210(param_3);
  if (cVar3 != '\0') {
    FUN_1008e3970("","vdisk",0,"Uid specified is null. Weird.");
    iVar4 = -0x7ffffffd;
    goto LAB_1005c030d;
  }
  FUN_1007d6a70(&local_88,param_3);
  plVar8 = param_1 + 0xf;
  if ((long *)param_1[0xf] == (long *)0x0) {
LAB_1005be1a7:
    plVar10 = plVar8;
  }
  else {
    plVar2 = (long *)param_1[0xf];
    plVar10 = plVar8;
    do {
      while (plVar9 = plVar2, cVar3 = operator<((QString *)(plVar9 + 4),&local_88), cVar3 != '\0') {
        plVar2 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) goto LAB_1005be180;
      }
      plVar10 = plVar9;
      plVar2 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
LAB_1005be180:
    if ((plVar10 == plVar8) ||
       (cVar3 = operator<(&local_88,(QString *)(plVar10 + 4)), cVar3 != '\0')) goto LAB_1005be1a7;
  }
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_79 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005be1da;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1005be1da:
  if (plVar10 != plVar8) {
    QFileInfo::QFileInfo(local_a0);
    iVar4 = FUN_1005bcf00(param_1,param_2,local_a0);
    if (iVar4 < 0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error preparing directory for clone 0x%x [%s]",iVar4,
                    local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_79 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005c0301;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
    }
    else {
      QMutex::lock();
      QDomNode::cloneNode(SUB81(local_b8,0));
      QDomNode::toDocument();
      QDomNode::~QDomNode(local_b8);
      QMutex::unlock();
      local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      local_e0 = (long ***)&local_d8;
      local_d0 = 0;
      local_d8 = (long ***)0x0;
      FUN_1007d6870(&local_48);
      QDomNode::QDomNode(local_e8);
      QDomNode::QDomNode(local_f0);
      QDomElement::QDomElement(local_f8);
      QDomNodeList::QDomNodeList(local_100);
      local_48 = *param_3;
      local_40 = param_3[1];
      while (cVar3 = FUN_1007ea210(&local_48), cVar3 == '\0') {
        FUN_1005d6630(&local_e0,&local_48);
        (**(code **)(*param_1 + 0xb8))(&local_58,param_1,&local_48,0);
        local_40 = local_50;
        local_48 = local_58;
      }
      local_120 = (QArrayData *)QString::fromAscii_helper("StorageData",0xb);
      FUN_1005bdef0(local_118,local_b0,&local_120);
      QDomNode::operator=(local_e8,local_118);
      QDomNode::~QDomNode(local_118);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_79 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005be524;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1005be524:
      QDomNode::childNodes();
      QDomNodeList::operator=(local_100,local_128);
      QDomNodeList::~QDomNodeList(local_128);
      iVar5 = 0;
      while( true ) {
        iVar4 = QDomNodeList::length();
        if (iVar4 <= iVar5) break;
        QDomNode::QDomNode(local_130);
        local_148 = (QArrayData *)PTR_shared_null_100ba20d0;
        local_158 = 0;
        uStack_150 = 0;
        local_140 = 0x200;
        QDomNodeList::item((int)local_168);
        QDomNode::firstChild();
        local_420 = 0;
        QDomNode::~QDomNode(local_168);
        local_430 = 0;
        uVar6 = 0;
        local_448 = 0x200;
        while (cVar3 = QDomNode::isNull(), cVar3 == '\0') {
          QDomNode::nodeName();
          local_178.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Start",5);
          cVar3 = operator==(&local_170,&local_178);
          if (*(int *)local_178.field0_0x0 != -1) {
            if (*(int *)local_178.field0_0x0 != 0) {
              LOCK();
              *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
              local_79 = *(int *)local_178.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005be6c2;
            }
            QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
          }
LAB_1005be6c2:
          if (*(int *)local_170.field0_0x0 != -1) {
            if (*(int *)local_170.field0_0x0 != 0) {
              LOCK();
              *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
              local_79 = *(int *)local_170.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005be6f8;
            }
            QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
          }
LAB_1005be6f8:
          if (cVar3 == '\0') {
            QDomNode::nodeName();
            local_198.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("End",3);
            cVar3 = operator==(&local_190,&local_198);
            if (*(int *)local_198.field0_0x0 != -1) {
              if (*(int *)local_198.field0_0x0 != 0) {
                LOCK();
                *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                local_79 = *(int *)local_198.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005be802;
              }
              QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
            }
LAB_1005be802:
            if (*(int *)local_190.field0_0x0 != -1) {
              if (*(int *)local_190.field0_0x0 != 0) {
                LOCK();
                *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
                local_79 = *(int *)local_190.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005be838;
              }
              QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
            }
LAB_1005be838:
            if (cVar3 == '\0') {
              QDomNode::nodeName();
              local_1b8.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Blocksize",9);
              cVar3 = operator==(&local_1b0,&local_1b8);
              if (*(int *)local_1b8.field0_0x0 != -1) {
                if (*(int *)local_1b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
                  local_79 = *(int *)local_1b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005be942;
                }
                QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
              }
LAB_1005be942:
              if (*(int *)local_1b0.field0_0x0 != -1) {
                if (*(int *)local_1b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
                  local_79 = *(int *)local_1b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005be978;
                }
                QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
              }
LAB_1005be978:
              if (cVar3 == '\0') {
                QDomNode::nodeName();
                local_1d8.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)
                     QString::fromAscii_helper("LogicSectorSize",0xf);
                cVar3 = operator==(&local_1d0,&local_1d8);
                if (*(int *)local_1d8.field0_0x0 != -1) {
                  if (*(int *)local_1d8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
                    local_79 = *(int *)local_1d8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bea74;
                  }
                  QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
                }
LAB_1005bea74:
                if (*(int *)local_1d0.field0_0x0 != -1) {
                  if (*(int *)local_1d0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
                    local_79 = *(int *)local_1d0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005beaaa;
                  }
                  QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
                }
LAB_1005beaaa:
                if (cVar3 != '\0') {
                  QDomNode::firstChild();
                  QDomNode::nodeValue();
                  local_448 = QString::toULongLong((bool *)&local_1e0,0);
                  if (*(int *)local_1e0 != -1) {
                    if (*(int *)local_1e0 != 0) {
                      LOCK();
                      *(int *)local_1e0 = *(int *)local_1e0 + -1;
                      local_79 = *(int *)local_1e0 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005beb23;
                    }
                    QArrayData::deallocate(local_1e0,2,8);
                  }
LAB_1005beb23:
                  QDomNode::~QDomNode(local_1e8);
                }
              }
              else {
                QDomNode::firstChild();
                QDomNode::nodeValue();
                uVar6 = QString::toUInt((bool *)&local_1c0,0);
                if (*(int *)local_1c0 != -1) {
                  if (*(int *)local_1c0 != 0) {
                    LOCK();
                    *(int *)local_1c0 = *(int *)local_1c0 + -1;
                    local_79 = *(int *)local_1c0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005be9f1;
                  }
                  QArrayData::deallocate(local_1c0,2,8);
                }
LAB_1005be9f1:
                QDomNode::~QDomNode(local_1c8);
              }
            }
            else {
              QDomNode::firstChild();
              QDomNode::nodeValue();
              local_430 = QString::toULongLong((bool *)&local_1a0,0);
              if (*(int *)local_1a0 != -1) {
                if (*(int *)local_1a0 != 0) {
                  LOCK();
                  *(int *)local_1a0 = *(int *)local_1a0 + -1;
                  local_79 = *(int *)local_1a0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005be8b1;
                }
                QArrayData::deallocate(local_1a0,2,8);
              }
LAB_1005be8b1:
              QDomNode::~QDomNode(local_1a8);
            }
          }
          else {
            QDomNode::firstChild();
            QDomNode::nodeValue();
            local_420 = QString::toULongLong((bool *)&local_180,0);
            if (*(int *)local_180 != -1) {
              if (*(int *)local_180 != 0) {
                LOCK();
                *(int *)local_180 = *(int *)local_180 + -1;
                local_79 = *(int *)local_180 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005be771;
              }
              QArrayData::deallocate(local_180,2,8);
            }
LAB_1005be771:
            QDomNode::~QDomNode(local_188);
          }
          QDomNode::nextSibling();
          QDomNode::operator=(local_160,local_1f0);
          QDomNode::~QDomNode(local_1f0);
        }
        QDomNode::~QDomNode(local_160);
        local_158 = local_430 - local_420;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar6);
        local_140 = local_448;
        QDomNodeList::item((int)local_200);
        QDomNode::firstChild();
        QDomNode::~QDomNode(local_200);
        while( true ) {
          cVar3 = QDomNode::isNull();
          iVar4 = 0x14;
          if (cVar3 != '\0') break;
          QDomNode::nextSibling();
          QDomNode::operator=(local_130,local_208);
          QDomNode::~QDomNode(local_208);
          QDomNode::nodeName();
          local_218.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Image",5);
          cVar3 = operator==(&local_210,&local_218);
          if (*(int *)local_218.field0_0x0 != -1) {
            if (*(int *)local_218.field0_0x0 != 0) {
              LOCK();
              *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
              local_79 = *(int *)local_218.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005bec8c;
            }
            QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
          }
LAB_1005bec8c:
          if (*(int *)local_210.field0_0x0 != -1) {
            if (*(int *)local_210.field0_0x0 != 0) {
              LOCK();
              *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
              local_79 = *(int *)local_210.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005becc2;
            }
            QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
          }
LAB_1005becc2:
          if (cVar3 != '\0') {
            QDomNode::firstChild();
            uVar6 = 0;
            QDomNode::firstChild();
            while (cVar3 = QDomNode::isNull(), cVar3 == '\0') {
              QDomNode::nodeName();
              local_238.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GUID",4);
              cVar3 = operator==(&local_230,&local_238);
              if (*(int *)local_238.field0_0x0 != -1) {
                if (*(int *)local_238.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
                  local_79 = *(int *)local_238.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bed73;
                }
                QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
              }
LAB_1005bed73:
              if (*(int *)local_230.field0_0x0 != -1) {
                if (*(int *)local_230.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
                  local_79 = *(int *)local_230.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005beda9;
                }
                QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
              }
LAB_1005beda9:
              if (cVar3 == '\0') {
                QDomNode::nodeName();
                local_258.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("File",4);
                cVar3 = operator==(&local_250,&local_258);
                if (*(int *)local_258.field0_0x0 != -1) {
                  if (*(int *)local_258.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
                    local_79 = *(int *)local_258.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005beeb2;
                  }
                  QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
                }
LAB_1005beeb2:
                if (*(int *)local_250.field0_0x0 != -1) {
                  if (*(int *)local_250.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                    local_79 = *(int *)local_250.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005beee8;
                  }
                  QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
                }
LAB_1005beee8:
                if (cVar3 == '\0') {
                  QDomNode::nodeName();
                  local_270.field0_0x0 =
                       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Type",4);
                  cVar3 = operator==(&local_268,&local_270);
                  if (*(int *)local_270.field0_0x0 != -1) {
                    if (*(int *)local_270.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
                      local_79 = *(int *)local_270.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005bef92;
                    }
                    QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
                  }
LAB_1005bef92:
                  if (*(int *)local_268.field0_0x0 != -1) {
                    if (*(int *)local_268.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                      local_79 = *(int *)local_268.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005befc8;
                    }
                    QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
                  }
LAB_1005befc8:
                  if (cVar3 != '\0') {
                    QDomNode::firstChild();
                    QDomNode::nodeValue();
                    uVar6 = FUN_10059c940(&local_278);
                    if (*(int *)local_278 != -1) {
                      if (*(int *)local_278 != 0) {
                        LOCK();
                        *(int *)local_278 = *(int *)local_278 + -1;
                        local_79 = *(int *)local_278 != 0;
                        UNLOCK();
                        if ((bool)local_79) goto LAB_1005bf032;
                      }
                      QArrayData::deallocate(local_278,2,8);
                    }
LAB_1005bf032:
                    QDomNode::~QDomNode(local_280);
                  }
                }
                else {
                  QDomNode::firstChild();
                  QDomNode::operator=((QDomNode *)&local_220,local_260);
                  QDomNode::~QDomNode(local_260);
                }
              }
              else {
                QDomNode::firstChild();
                QDomNode::nodeValue();
                FUN_1007d6920(&local_68,&local_240);
                local_40 = local_60;
                local_48 = local_68;
                if (*(int *)local_240 != -1) {
                  if (*(int *)local_240 != 0) {
                    LOCK();
                    *(int *)local_240 = *(int *)local_240 + -1;
                    local_79 = *(int *)local_240 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bee29;
                  }
                  QArrayData::deallocate(local_240,2,8);
                }
LAB_1005bee29:
                QDomNode::~QDomNode(local_248);
              }
              QDomNode::nextSibling();
              QDomNode::operator=(local_228,local_288);
              QDomNode::~QDomNode(local_288);
            }
            QDomNode::~QDomNode(local_228);
            iVar4 = FUN_1007ea6f0(&local_48,&DAT_1011bc8b8);
            if (iVar4 == 0) {
              QDomNode::nodeValue();
              QFileInfo::QFileInfo(local_290,&local_298);
              if (*(int *)local_298.field0_0x0 != -1) {
                if (*(int *)local_298.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
                  local_79 = *(int *)local_298.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bf3b1;
                }
                QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
              }
LAB_1005bf3b1:
              local_2a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
              local_2a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
              cVar3 = QFileInfo::isRelative();
              if (cVar3 == '\0') {
                QFileInfo::absoluteFilePath();
                QString::operator=(&local_2a0,&local_2b0);
                if (*(int *)local_2b0.field0_0x0 != -1) {
                  if (*(int *)local_2b0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
                    local_79 = *(int *)local_2b0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf6bc;
                  }
                  QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
                }
LAB_1005bf6bc:
                QFileInfo::absolutePath();
                local_2d0 = (QArrayData *)QString::fromAscii_helper("/",1);
                local_2c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2c8;
                if (1 < *(int *)local_2c8 + 1U) {
                  LOCK();
                  *(int *)local_2c8 = *(int *)local_2c8 + 1;
                  local_79 = *(int *)local_2c8 != 0;
                  UNLOCK();
                }
                QString::append(&local_2c0);
                QFileInfo::fileName();
                local_2b8.field0_0x0 = local_2c0.field0_0x0;
                if (1 < *(int *)local_2c0.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + 1;
                  local_79 = *(int *)local_2c0.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_2b8);
                QString::operator=(&local_2a8,&local_2b8);
                if (*(int *)local_2b8.field0_0x0 != -1) {
                  if (*(int *)local_2b8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
                    local_79 = *(int *)local_2b8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf7a8;
                  }
                  QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
                }
LAB_1005bf7a8:
                if (*(int *)local_2d8 != -1) {
                  if (*(int *)local_2d8 != 0) {
                    LOCK();
                    *(int *)local_2d8 = *(int *)local_2d8 + -1;
                    local_79 = *(int *)local_2d8 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf7de;
                  }
                  QArrayData::deallocate(local_2d8,2,8);
                }
LAB_1005bf7de:
                if (*(int *)local_2c0.field0_0x0 != -1) {
                  if (*(int *)local_2c0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
                    local_79 = *(int *)local_2c0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf814;
                  }
                  QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
                }
LAB_1005bf814:
                if (*(int *)local_2d0 != -1) {
                  if (*(int *)local_2d0 != 0) {
                    LOCK();
                    *(int *)local_2d0 = *(int *)local_2d0 + -1;
                    local_79 = *(int *)local_2d0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf84a;
                  }
                  QArrayData::deallocate(local_2d0,2,8);
                }
LAB_1005bf84a:
                if (*(int *)local_2c8 != -1) {
                  if (*(int *)local_2c8 != 0) {
                    LOCK();
                    *(int *)local_2c8 = *(int *)local_2c8 + -1;
                    local_79 = *(int *)local_2c8 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf880;
                  }
                  QArrayData::deallocate(local_2c8,2,8);
                }
              }
              else {
                pQVar7 = (QArrayData *)QString::fromAscii_helper("/",1);
                QDomNode::nodeValue();
                if (1 < *(int *)pQVar7 + 1U) {
                  LOCK();
                  *(int *)pQVar7 = *(int *)pQVar7 + 1;
                  local_79 = *(int *)pQVar7 != 0;
                  UNLOCK();
                }
                local_2e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
                QString::append(&local_2e0);
                if (*(int *)local_2e8 != -1) {
                  if (*(int *)local_2e8 != 0) {
                    LOCK();
                    *(int *)local_2e8 = *(int *)local_2e8 + -1;
                    local_79 = *(int *)local_2e8 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf468;
                  }
                  QArrayData::deallocate(local_2e8,2,8);
                }
LAB_1005bf468:
                if (*(int *)pQVar7 != -1) {
                  if (*(int *)pQVar7 != 0) {
                    LOCK();
                    *(int *)pQVar7 = *(int *)pQVar7 + -1;
                    local_79 = *(int *)pQVar7 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf497;
                  }
                  QArrayData::deallocate(pQVar7,2,8);
                }
LAB_1005bf497:
                QFileInfo::absolutePath();
                local_2f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2f8;
                if (1 < *(int *)local_2f8 + 1U) {
                  LOCK();
                  *(int *)local_2f8 = *(int *)local_2f8 + 1;
                  local_79 = *(int *)local_2f8 != 0;
                  UNLOCK();
                }
                QString::append(&local_2f0);
                QString::operator=(&local_2a0,&local_2f0);
                if (*(int *)local_2f0.field0_0x0 != -1) {
                  if (*(int *)local_2f0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_2f0.field0_0x0 = *(int *)local_2f0.field0_0x0 + -1;
                    local_79 = *(int *)local_2f0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf524;
                  }
                  QArrayData::deallocate((QArrayData *)local_2f0.field0_0x0,2,8);
                }
LAB_1005bf524:
                if (*(int *)local_2f8 != -1) {
                  if (*(int *)local_2f8 != 0) {
                    LOCK();
                    *(int *)local_2f8 = *(int *)local_2f8 + -1;
                    local_79 = *(int *)local_2f8 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf55a;
                  }
                  QArrayData::deallocate(local_2f8,2,8);
                }
LAB_1005bf55a:
                QFileInfo::absolutePath();
                local_300.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_308;
                if (1 < *(int *)local_308 + 1U) {
                  LOCK();
                  *(int *)local_308 = *(int *)local_308 + 1;
                  local_79 = *(int *)local_308 != 0;
                  UNLOCK();
                }
                QString::append(&local_300);
                QString::operator=(&local_2a8,&local_300);
                if (*(int *)local_300.field0_0x0 != -1) {
                  if (*(int *)local_300.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
                    local_79 = *(int *)local_300.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf5e7;
                  }
                  QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
                }
LAB_1005bf5e7:
                if (*(int *)local_308 != -1) {
                  if (*(int *)local_308 != 0) {
                    LOCK();
                    *(int *)local_308 = *(int *)local_308 + -1;
                    local_79 = *(int *)local_308 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf61d;
                  }
                  QArrayData::deallocate(local_308,2,8);
                }
LAB_1005bf61d:
                if (*(int *)local_2e0.field0_0x0 != -1) {
                  if (*(int *)local_2e0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
                    local_79 = *(int *)local_2e0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf880;
                  }
                  QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
                }
              }
LAB_1005bf880:
              local_328 = local_158;
              local_318.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_148;
              if (1 < *(int *)local_148 + 1U) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + 1;
                local_79 = *(int *)local_148 != 0;
                UNLOCK();
              }
              local_310 = local_140;
              _uStack_320 = CONCAT44(uVar6,(int)uStack_150);
              QString::operator=(&local_318,&local_2a0);
              FUN_1005b6970(&local_350,&local_328,&local_2a8);
              plVar8 = operator_new(0x38);
              plVar8[3] = local_348;
              plVar8[2] = local_350;
              plVar8[4] = (long)local_340;
              if (1 < *(int *)local_340 + 1U) {
                LOCK();
                *(int *)local_340 = *(int *)local_340 + 1;
                local_79 = *(int *)local_340 != 0;
                UNLOCK();
              }
              plVar8[5] = local_338;
              plVar8[6] = (long)local_330;
              if (1 < *(int *)local_330 + 1U) {
                LOCK();
                *(int *)local_330 = *(int *)local_330 + 1;
                local_79 = *(int *)local_330 != 0;
                UNLOCK();
              }
              plVar8[1] = (long)param_4;
              lVar13 = *param_4;
              *plVar8 = lVar13;
              *(long **)(lVar13 + 8) = plVar8;
              *param_4 = (long)plVar8;
              param_4[2] = param_4[2] + 1;
              cVar3 = QFileInfo::isRelative();
              iVar4 = 0x16;
              if (cVar3 == '\0') {
                QFileInfo::fileName();
                QDomNode::setNodeValue(&local_220);
                if (*(int *)local_358 != -1) {
                  if (*(int *)local_358 != 0) {
                    LOCK();
                    *(int *)local_358 = *(int *)local_358 + -1;
                    local_79 = *(int *)local_358 != 0;
                    UNLOCK();
                    if ((bool)local_79) goto LAB_1005bf9df;
                  }
                  QArrayData::deallocate(local_358,2,8);
                }
              }
LAB_1005bf9df:
              if (*(int *)local_330 != -1) {
                if (*(int *)local_330 != 0) {
                  LOCK();
                  *(int *)local_330 = *(int *)local_330 + -1;
                  local_79 = *(int *)local_330 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bfa15;
                }
                QArrayData::deallocate(local_330,2,8);
              }
LAB_1005bfa15:
              if (*(int *)local_340 != -1) {
                if (*(int *)local_340 != 0) {
                  LOCK();
                  *(int *)local_340 = *(int *)local_340 + -1;
                  local_79 = *(int *)local_340 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bfa4b;
                }
                QArrayData::deallocate(local_340,2,8);
              }
LAB_1005bfa4b:
              if (*(int *)local_318.field0_0x0 != -1) {
                if (*(int *)local_318.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
                  local_79 = *(int *)local_318.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bfa81;
                }
                QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
              }
LAB_1005bfa81:
              if (*(int *)local_2a8.field0_0x0 != -1) {
                if (*(int *)local_2a8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
                  local_79 = *(int *)local_2a8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bfab7;
                }
                QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
              }
LAB_1005bfab7:
              if (*(int *)local_2a0.field0_0x0 != -1) {
                if (*(int *)local_2a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
                  local_79 = *(int *)local_2a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005bfaed;
                }
                QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
              }
LAB_1005bfaed:
              QFileInfo::~QFileInfo(local_290);
            }
            else {
              pppplVar1 = (long ****)local_d8;
              pppplVar12 = &local_d8;
              if ((long ****)local_d8 != (long ****)0x0) {
                do {
                  while (pppplVar11 = pppplVar1,
                        iVar4 = FUN_1007ea6f0((long)pppplVar11 + 0x19,&local_48), iVar4 < 0) {
                    pppplVar1 = (long ****)pppplVar11[1];
                    if ((long ****)pppplVar11[1] == (long ****)0x0) goto LAB_1005bf0e0;
                  }
                  pppplVar12 = pppplVar11;
                  pppplVar1 = (long ****)*pppplVar11;
                } while ((long ****)*pppplVar11 != (long ****)0x0);
LAB_1005bf0e0:
                if ((pppplVar12 != &local_d8) &&
                   (iVar4 = FUN_1007ea6f0(&local_48,(long)pppplVar12 + 0x19), -1 < iVar4)) {
                  QDomNode::nodeValue();
                  cVar3 = FUN_100778a30(&local_370);
                  iVar4 = 0x16;
                  if (cVar3 == '\0') {
                    QFileInfo::absolutePath();
                    local_390 = (QArrayData *)QString::fromAscii_helper("/",1);
                    local_380.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_388;
                    if (1 < *(int *)local_388 + 1U) {
                      LOCK();
                      *(int *)local_388 = *(int *)local_388 + 1;
                      local_79 = *(int *)local_388 != 0;
                      UNLOCK();
                    }
                    QString::append(&local_380);
                    local_378.field0_0x0 = local_380.field0_0x0;
                    if (1 < *(int *)local_380.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + 1;
                      local_79 = *(int *)local_380.field0_0x0 != 0;
                      UNLOCK();
                    }
                    QString::append(&local_378);
                    QDomNode::setNodeValue(&local_220);
                    if (*(int *)local_378.field0_0x0 != -1) {
                      if (*(int *)local_378.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + -1;
                        local_79 = *(int *)local_378.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_79) goto LAB_1005bf20a;
                      }
                      QArrayData::deallocate((QArrayData *)local_378.field0_0x0,2,8);
                    }
LAB_1005bf20a:
                    if (*(int *)local_380.field0_0x0 != -1) {
                      if (*(int *)local_380.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
                        local_79 = *(int *)local_380.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_79) goto LAB_1005bf240;
                      }
                      QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
                    }
LAB_1005bf240:
                    if (*(int *)local_390 != -1) {
                      if (*(int *)local_390 != 0) {
                        LOCK();
                        *(int *)local_390 = *(int *)local_390 + -1;
                        local_79 = *(int *)local_390 != 0;
                        UNLOCK();
                        if ((bool)local_79) goto LAB_1005bf276;
                      }
                      QArrayData::deallocate(local_390,2,8);
                    }
LAB_1005bf276:
                    iVar4 = 0;
                    if (*(int *)local_388 != -1) {
                      iVar4 = 0;
                      if (*(int *)local_388 != 0) {
                        LOCK();
                        *(int *)local_388 = *(int *)local_388 + -1;
                        local_79 = *(int *)local_388 != 0;
                        UNLOCK();
                        if ((bool)local_79) goto LAB_1005bf2ae;
                      }
                      QArrayData::deallocate(local_388,2,8);
                    }
                  }
LAB_1005bf2ae:
                  if (*(int *)local_370 != -1) {
                    if (*(int *)local_370 != 0) {
                      LOCK();
                      *(int *)local_370 = *(int *)local_370 + -1;
                      local_79 = *(int *)local_370 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005bfaf9;
                    }
                    QArrayData::deallocate(local_370,2,8);
                  }
                  goto LAB_1005bfaf9;
                }
              }
              QDomNodeList::item((int)local_368);
              QDomNode::removeChild(local_360);
              QDomNode::~QDomNode(local_360);
              iVar4 = 0x16;
              QDomNode::~QDomNode(local_368);
            }
LAB_1005bfaf9:
            QDomNode::~QDomNode((QDomNode *)&local_220);
            if ((iVar4 != 0) && (iVar4 != 0x16)) break;
          }
          QDomNode::operator=(local_1f8,local_130);
        }
        QDomNode::~QDomNode(local_1f8);
        if (iVar4 == 0x14) {
          iVar4 = 0;
        }
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_79 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005bfbcd;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1005bfbcd:
        QDomNode::~QDomNode(local_130);
        if (iVar4 == 0xd) {
          QFileInfo::dir();
          QDir::absolutePath();
          FUN_1006f3770(&local_410);
          if (*(int *)local_410 != -1) {
            if (*(int *)local_410 != 0) {
              LOCK();
              *(int *)local_410 = *(int *)local_410 + -1;
              local_79 = *(int *)local_410 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005bfd24;
            }
            QArrayData::deallocate(local_410,2,8);
          }
LAB_1005bfd24:
          iVar4 = -0x7ffffffe;
          QDir::~QDir(local_418);
          goto LAB_1005c023b;
        }
        if (iVar4 != 0) goto LAB_1005c023b;
        iVar5 = iVar5 + 1;
      }
      local_3a0 = (QArrayData *)QString::fromAscii_helper("Snapshots",9);
      FUN_1005bdef0(local_398,local_b0,&local_3a0);
      QDomNode::operator=(local_e8,local_398);
      QDomNode::~QDomNode(local_398);
      if (*(int *)local_3a0 != -1) {
        if (*(int *)local_3a0 != 0) {
          LOCK();
          *(int *)local_3a0 = *(int *)local_3a0 + -1;
          local_79 = *(int *)local_3a0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005bfdc1;
        }
        QArrayData::deallocate(local_3a0,2,8);
      }
LAB_1005bfdc1:
      QDomNode::firstChild();
      while (cVar3 = QDomNode::isNull(), cVar3 == '\0') {
        QDomNode::nextSibling();
        QDomNode::operator=(local_f0,local_3b0);
        QDomNode::~QDomNode(local_3b0);
        QDomNode::nodeName();
        local_3c0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Shot",4);
        cVar3 = operator==(&local_3b8,&local_3c0);
        if (*(int *)local_3c0.field0_0x0 != -1) {
          if (*(int *)local_3c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + -1;
            local_79 = *(int *)local_3c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005bfeab;
          }
          QArrayData::deallocate((QArrayData *)local_3c0.field0_0x0,2,8);
        }
LAB_1005bfeab:
        if (*(int *)local_3b8.field0_0x0 != -1) {
          if (*(int *)local_3b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
            local_79 = *(int *)local_3b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005bfee1;
          }
          QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
        }
LAB_1005bfee1:
        if (cVar3 != '\0') {
          QDomNode::firstChild();
          while( true ) {
            cVar3 = QDomNode::isNull();
            if (cVar3 != '\0') break;
            QDomNode::nodeName();
            local_3d8.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GUID",4);
            cVar3 = operator==(&local_3d0,&local_3d8);
            if (*(int *)local_3d8.field0_0x0 != -1) {
              if (*(int *)local_3d8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_3d8.field0_0x0 = *(int *)local_3d8.field0_0x0 + -1;
                local_79 = *(int *)local_3d8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005bff72;
              }
              QArrayData::deallocate((QArrayData *)local_3d8.field0_0x0,2,8);
            }
LAB_1005bff72:
            if (*(int *)local_3d0.field0_0x0 != -1) {
              if (*(int *)local_3d0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_3d0.field0_0x0 = *(int *)local_3d0.field0_0x0 + -1;
                local_79 = *(int *)local_3d0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005bffa8;
              }
              QArrayData::deallocate((QArrayData *)local_3d0.field0_0x0,2,8);
            }
LAB_1005bffa8:
            if (cVar3 != '\0') {
              QDomNode::firstChild();
              QDomNode::nodeValue();
              FUN_1007d6920(local_78,&local_3e0);
              pppplVar1 = (long ****)local_d8;
              pppplVar12 = &local_d8;
              if ((long ****)local_d8 == (long ****)0x0) {
LAB_1005c0060:
                pppplVar12 = &local_d8;
              }
              else {
                do {
                  while (pppplVar11 = pppplVar1,
                        iVar4 = FUN_1007ea6f0((long)pppplVar11 + 0x19,local_78), iVar4 < 0) {
                    pppplVar1 = (long ****)pppplVar11[1];
                    if ((long ****)pppplVar11[1] == (long ****)0x0) goto LAB_1005c0043;
                  }
                  pppplVar12 = pppplVar11;
                  pppplVar1 = (long ****)*pppplVar11;
                } while ((long ****)*pppplVar11 != (long ****)0x0);
LAB_1005c0043:
                if ((pppplVar12 == &local_d8) ||
                   (iVar4 = FUN_1007ea6f0(local_78,(long)pppplVar12 + 0x19), iVar4 < 0))
                goto LAB_1005c0060;
              }
              if (*(int *)local_3e0 != -1) {
                if (*(int *)local_3e0 != 0) {
                  LOCK();
                  *(int *)local_3e0 = *(int *)local_3e0 + -1;
                  local_79 = *(int *)local_3e0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_1005c00a0;
                }
                QArrayData::deallocate(local_3e0,2,8);
              }
LAB_1005c00a0:
              QDomNode::~QDomNode(local_3e8);
              if (pppplVar12 == &local_d8) {
                QDomNode::removeChild(local_3f0);
                QDomNode::~QDomNode(local_3f0);
                break;
              }
            }
            QDomNode::nextSibling();
            QDomNode::operator=(local_3c8,local_3f8);
            QDomNode::~QDomNode(local_3f8);
          }
          QDomNode::~QDomNode(local_3c8);
        }
        QDomNode::operator=(local_3a8,local_f0);
      }
      QDomNode::~QDomNode(local_3a8);
      FUN_1007d6a70(&local_400,&DAT_1011bc8b8);
      QString::operator=(&local_c0,&local_400);
      if (*(int *)local_400.field0_0x0 != -1) {
        if (*(int *)local_400.field0_0x0 != 0) {
          LOCK();
          *(int *)local_400.field0_0x0 = *(int *)local_400.field0_0x0 + -1;
          local_79 = *(int *)local_400.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005c01a9;
        }
        QArrayData::deallocate((QArrayData *)local_400.field0_0x0,2,8);
      }
LAB_1005c01a9:
      FUN_1007d6a70(&local_408,param_3);
      QString::operator=(&local_c8,&local_408);
      if (*(int *)local_408.field0_0x0 != -1) {
        if (*(int *)local_408.field0_0x0 != 0) {
          LOCK();
          *(int *)local_408.field0_0x0 = *(int *)local_408.field0_0x0 + -1;
          local_79 = *(int *)local_408.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005c0205;
        }
        QArrayData::deallocate((QArrayData *)local_408.field0_0x0,2,8);
      }
LAB_1005c0205:
      FUN_1005bdbb0(local_b0,local_e8,&local_c0,&local_c8);
      iVar4 = FUN_1005b7ea0(local_b0,local_a0);
LAB_1005c023b:
      QDomNodeList::~QDomNodeList(local_100);
      lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
      QDomNode::~QDomNode((QDomNode *)local_f8);
      QDomNode::~QDomNode(local_f0);
      QDomNode::~QDomNode(local_e8);
      FUN_1005d5ff0(&local_e0,local_d8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_79 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005c02bf;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1005c02bf:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_79 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005c02f5;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1005c02f5:
      QDomDocument::~QDomDocument(local_b0);
    }
LAB_1005c0301:
    QFileInfo::~QFileInfo(local_a0);
    goto LAB_1005c030d;
  }
  FUN_1007d6a70(&local_98,param_3);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"The specified uid (%s) not found in shot",
                local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_79 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005be3cd;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1005be3cd:
  iVar4 = -0x7ffffffd;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_79 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005c030d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005c030d:
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

