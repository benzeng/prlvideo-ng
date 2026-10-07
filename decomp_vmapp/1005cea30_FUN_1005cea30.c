
int FUN_1005cea30(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QDomNode local_3b0 [8];
  QArrayData *local_3a8;
  QString local_3a0;
  QDomNode local_398 [8];
  QArrayData *local_390;
  QString local_388;
  QDomNode local_380 [8];
  QArrayData *local_378;
  QString local_370;
  QDomNode local_368 [8];
  QArrayData *local_360;
  QString local_358;
  QDomNode local_350 [8];
  QArrayData *local_348;
  QString local_340;
  QDomNode local_338 [8];
  QArrayData *local_330;
  QString local_328;
  QDomNode local_320 [8];
  QArrayData *local_318;
  QString local_310;
  QDomNode local_308 [8];
  QArrayData *local_300;
  QString local_2f8;
  QDomNode local_2f0 [8];
  QString local_2e8;
  QDomNode local_2e0 [8];
  QArrayData *local_2d8;
  QString local_2d0;
  QString local_2c8;
  QDomNode local_2c0 [8];
  QArrayData *local_2b8;
  QString local_2b0;
  QDomNode local_2a8 [8];
  QArrayData *local_2a0;
  QString local_298;
  QDomNode local_290 [8];
  QString local_288;
  QDomNode local_280 [8];
  QArrayData *local_278;
  QString local_270;
  QArrayData *local_268;
  QString local_260;
  QDomNode local_258 [8];
  QString local_250;
  QDomNode local_248 [8];
  QArrayData *local_240;
  QString local_238;
  QArrayData *local_230;
  QString local_228;
  QDomNode local_220 [8];
  QString local_218;
  QDomNode local_210 [8];
  QArrayData *local_208;
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QDomNode local_1e8 [8];
  QString local_1e0;
  QDomNode local_1d8 [8];
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QDomNode local_1b0 [8];
  QString local_1a8;
  QDomNode local_1a0 [8];
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QDomNode local_178 [8];
  QString local_170;
  QDomNode local_168 [8];
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QString local_148;
  QDomNode local_140 [8];
  QString local_138;
  QDomNode local_130 [8];
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QString local_110;
  QDomNode local_108 [8];
  QArrayData *local_100;
  QString local_f8;
  QDomNode local_f0 [8];
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  long local_b8;
  QString local_b0;
  QDomNode local_a8 [8];
  QDomNode local_a0 [8];
  QDomNode local_98 [8];
  QDomNode local_90 [8];
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_69;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  QDomElement::QDomElement((QDomElement *)&local_88);
  QDomNode::QDomNode(local_90);
  QDomNode::QDomNode(local_98);
  QDomNode::QDomNode(local_a0);
  QDomNode::QDomNode(local_a8);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_c8 = &local_c8;
  local_b8 = 0;
  local_c0 = local_c8;
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((ulong)(uint)param_3[6] == 0) {
    iVar7 = -0x7ffdefef;
    FUN_1008e3970("","vdisk",0,"Block size is zero");
  }
  else if (*(int *)(*param_2 + 4) == 0) {
    iVar7 = -0x7ffdefef;
    FUN_1008e3970("","vdisk",0,"Parameters invalid: file name is empty");
  }
  else {
    if (*(ulong *)(param_3 + 4) % (ulong)(uint)param_3[6] != 0) {
      for (puVar3 = *(undefined4 **)(param_3 + 0xc); puVar3 != param_3 + 10;
          puVar3 = *(undefined4 **)(puVar3 + 2)) {
        if ((7 < (uint)puVar3[4]) || ((0xf2U >> (puVar3[4] & 0x1f) & 1) == 0)) {
          iVar7 = -0x7ffdefef;
          FUN_1008e3970("","vdisk",0,"Parameters invalid: [%llu %u]",*(ulong *)(param_3 + 4));
          goto LAB_1005d05aa;
        }
      }
    }
    cVar6 = FUN_1007ea210(param_3 + 0x11);
    if ((cVar6 == '\0') && (*(int *)(*(long *)(param_3 + 0x16) + 4) == 0)) {
      iVar7 = -0x7ffdefef;
      FUN_1008e3970("","vdisk",0,"Encryption engine set without key. Weird.");
    }
    else {
      iVar7 = FUN_1005bcf00(param_1,param_2);
      if (iVar7 < 0) {
        FUN_1008e3970("","vdisk",0,"CreateDescriptor preparations failed! 0x%x",iVar7);
      }
      else {
        *param_4 = param_3[1];
        param_4[1] = param_3[2];
        param_4[2] = *param_3;
        *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_3 + 4);
        param_4[6] = param_3[0x10];
        param_4[7] = param_3[7];
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_3 + 8);
        local_d8 = (QArrayData *)QString::fromAscii_helper("Parallels_disk_image",0x14);
        QDomDocument::createElement(&local_d0);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_d0);
        QDomNode::~QDomNode((QDomNode *)&local_d0);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_69 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cec54;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1005cec54:
        local_e0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Version",7);
        local_e8 = (QArrayData *)QString::fromAscii_helper("1.0",3);
        QDomElement::setAttribute(&local_88,&local_e0);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_69 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cecd1;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1005cecd1:
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_69 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005ced07;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_1005ced07:
        QDomNode::appendChild(local_f0);
        QDomNode::operator=(local_98,local_f0);
        QDomNode::~QDomNode(local_f0);
        local_100 = (QArrayData *)QString::fromAscii_helper("Disk_Parameters",0xf);
        QDomDocument::createElement(&local_f8);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_f8);
        QDomNode::~QDomNode((QDomNode *)&local_f8);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_69 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cedb9;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1005cedb9:
        QDomNode::appendChild(local_108);
        QDomNode::operator=(local_90,local_108);
        QDomNode::~QDomNode(local_108);
        local_118 = (QArrayData *)QString::fromAscii_helper("Disk_size",9);
        QDomDocument::createElement(&local_110);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_110);
        QDomNode::~QDomNode((QDomNode *)&local_110);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_69 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cee6f;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1005cee6f:
        local_128 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_120,&local_128,*(undefined8 *)(param_3 + 4),0,10,0x20);
        QString::operator=(&local_b0,&local_120);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_69 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005ceef5;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_1005ceef5:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_69 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cef2b;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1005cef2b:
        QDomDocument::createTextNode(&local_138);
        QDomNode::appendChild(local_130);
        QDomNode::~QDomNode(local_130);
        QDomNode::~QDomNode((QDomNode *)&local_138);
        QDomNode::appendChild(local_140);
        QDomNode::~QDomNode(local_140);
        local_150 = (QArrayData *)QString::fromAscii_helper("Cylinders",9);
        QDomDocument::createElement(&local_148);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_148);
        QDomNode::~QDomNode((QDomNode *)&local_148);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_69 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf013;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_1005cf013:
        local_160 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_158,&local_160,param_3[1],0,10,0x20);
        QString::operator=(&local_b0,&local_158);
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_69 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf099;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_1005cf099:
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_69 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf0cf;
          }
          QArrayData::deallocate(local_160,2,8);
        }
LAB_1005cf0cf:
        QDomDocument::createTextNode(&local_170);
        QDomNode::appendChild(local_168);
        QDomNode::~QDomNode(local_168);
        QDomNode::~QDomNode((QDomNode *)&local_170);
        QDomNode::appendChild(local_178);
        QDomNode::~QDomNode(local_178);
        local_188 = (QArrayData *)QString::fromAscii_helper("PhysicalSectorSize",0x12);
        QDomDocument::createElement(&local_180);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_180);
        QDomNode::~QDomNode((QDomNode *)&local_180);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_69 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf1b7;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_1005cf1b7:
        local_198 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_190,&local_198,param_4[7],0,10,0x20);
        QString::operator=(&local_b0,&local_190);
        if (*(int *)local_190.field0_0x0 != -1) {
          if (*(int *)local_190.field0_0x0 != 0) {
            LOCK();
            *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
            local_69 = *(int *)local_190.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf243;
          }
          QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
        }
LAB_1005cf243:
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_69 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf279;
          }
          QArrayData::deallocate(local_198,2,8);
        }
LAB_1005cf279:
        QDomDocument::createTextNode(&local_1a8);
        QDomNode::appendChild(local_1a0);
        QDomNode::~QDomNode(local_1a0);
        QDomNode::~QDomNode((QDomNode *)&local_1a8);
        QDomNode::appendChild(local_1b0);
        QDomNode::~QDomNode(local_1b0);
        local_1c0 = (QArrayData *)QString::fromAscii_helper("LogicSectorSize",0xf);
        QDomDocument::createElement(&local_1b8);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_1b8);
        QDomNode::~QDomNode((QDomNode *)&local_1b8);
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_69 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf361;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_1005cf361:
        local_1d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_1c8,&local_1d0,*(undefined8 *)(param_4 + 8),0,10,0x20);
        QString::operator=(&local_b0,&local_1c8);
        if (*(int *)local_1c8.field0_0x0 != -1) {
          if (*(int *)local_1c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
            local_69 = *(int *)local_1c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf3ee;
          }
          QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
        }
LAB_1005cf3ee:
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_69 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf424;
          }
          QArrayData::deallocate(local_1d0,2,8);
        }
LAB_1005cf424:
        QDomDocument::createTextNode(&local_1e0);
        QDomNode::appendChild(local_1d8);
        QDomNode::~QDomNode(local_1d8);
        QDomNode::~QDomNode((QDomNode *)&local_1e0);
        QDomNode::appendChild(local_1e8);
        QDomNode::~QDomNode(local_1e8);
        local_1f8 = (QArrayData *)QString::fromAscii_helper("Heads",5);
        QDomDocument::createElement(&local_1f0);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_1f0);
        QDomNode::~QDomNode((QDomNode *)&local_1f0);
        if (*(int *)local_1f8 != -1) {
          if (*(int *)local_1f8 != 0) {
            LOCK();
            *(int *)local_1f8 = *(int *)local_1f8 + -1;
            local_69 = *(int *)local_1f8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf50c;
          }
          QArrayData::deallocate(local_1f8,2,8);
        }
LAB_1005cf50c:
        local_208 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_200,&local_208,*param_3,0,10,0x20);
        QString::operator=(&local_b0,&local_200);
        if (*(int *)local_200.field0_0x0 != -1) {
          if (*(int *)local_200.field0_0x0 != 0) {
            LOCK();
            *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
            local_69 = *(int *)local_200.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf591;
          }
          QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
        }
LAB_1005cf591:
        if (*(int *)local_208 != -1) {
          if (*(int *)local_208 != 0) {
            LOCK();
            *(int *)local_208 = *(int *)local_208 + -1;
            local_69 = *(int *)local_208 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf5c7;
          }
          QArrayData::deallocate(local_208,2,8);
        }
LAB_1005cf5c7:
        QDomDocument::createTextNode(&local_218);
        QDomNode::appendChild(local_210);
        QDomNode::~QDomNode(local_210);
        QDomNode::~QDomNode((QDomNode *)&local_218);
        QDomNode::appendChild(local_220);
        QDomNode::~QDomNode(local_220);
        local_230 = (QArrayData *)QString::fromAscii_helper("Sectors",7);
        QDomDocument::createElement(&local_228);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_228);
        QDomNode::~QDomNode((QDomNode *)&local_228);
        if (*(int *)local_230 != -1) {
          if (*(int *)local_230 != 0) {
            LOCK();
            *(int *)local_230 = *(int *)local_230 + -1;
            local_69 = *(int *)local_230 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf6af;
          }
          QArrayData::deallocate(local_230,2,8);
        }
LAB_1005cf6af:
        local_240 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_238,&local_240,param_3[2],0,10,0x20);
        QString::operator=(&local_b0,&local_238);
        if (*(int *)local_238.field0_0x0 != -1) {
          if (*(int *)local_238.field0_0x0 != 0) {
            LOCK();
            *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
            local_69 = *(int *)local_238.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf735;
          }
          QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
        }
LAB_1005cf735:
        if (*(int *)local_240 != -1) {
          if (*(int *)local_240 != 0) {
            LOCK();
            *(int *)local_240 = *(int *)local_240 + -1;
            local_69 = *(int *)local_240 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf76b;
          }
          QArrayData::deallocate(local_240,2,8);
        }
LAB_1005cf76b:
        QDomDocument::createTextNode(&local_250);
        QDomNode::appendChild(local_248);
        QDomNode::~QDomNode(local_248);
        QDomNode::~QDomNode((QDomNode *)&local_250);
        QDomNode::appendChild(local_258);
        QDomNode::~QDomNode(local_258);
        local_268 = (QArrayData *)QString::fromAscii_helper("Padding",7);
        QDomDocument::createElement(&local_260);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_260);
        QDomNode::~QDomNode((QDomNode *)&local_260);
        if (*(int *)local_268 != -1) {
          if (*(int *)local_268 != 0) {
            LOCK();
            *(int *)local_268 = *(int *)local_268 + -1;
            local_69 = *(int *)local_268 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf853;
          }
          QArrayData::deallocate(local_268,2,8);
        }
LAB_1005cf853:
        local_278 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_270,&local_278,param_3[0x10],0,10,0x20);
        QString::operator=(&local_b0,&local_270);
        if (*(int *)local_270.field0_0x0 != -1) {
          if (*(int *)local_270.field0_0x0 != 0) {
            LOCK();
            *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
            local_69 = *(int *)local_270.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf8d9;
          }
          QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
        }
LAB_1005cf8d9:
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_69 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cf90f;
          }
          QArrayData::deallocate(local_278,2,8);
        }
LAB_1005cf90f:
        QDomDocument::createTextNode(&local_288);
        QDomNode::appendChild(local_280);
        QDomNode::~QDomNode(local_280);
        QDomNode::~QDomNode((QDomNode *)&local_288);
        QDomNode::appendChild(local_290);
        QDomNode::~QDomNode(local_290);
        FUN_1005c1f30(param_1,local_90,param_3 + 0x11);
        cVar6 = FUN_1007ea210(param_3 + 0x18);
        if (cVar6 == '\0') {
          local_48 = *(undefined8 *)(param_3 + 0x18);
          local_40 = *(undefined8 *)(param_3 + 0x1a);
        }
        else {
          FUN_1007d6bd0(&local_48);
        }
        *(undefined8 *)(param_4 + 0x10) = local_40;
        *(undefined8 *)(param_4 + 0xe) = local_48;
        local_2a0 = (QArrayData *)QString::fromAscii_helper("UID",3);
        QDomDocument::createElement(&local_298);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_298);
        QDomNode::~QDomNode((QDomNode *)&local_298);
        if (*(int *)local_2a0 != -1) {
          if (*(int *)local_2a0 != 0) {
            LOCK();
            *(int *)local_2a0 = *(int *)local_2a0 + -1;
            local_69 = *(int *)local_2a0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfaf3;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
LAB_1005cfaf3:
        FUN_1007d6a70(&local_2b8,param_4 + 0xe);
        QDomDocument::createTextNode(&local_2b0);
        QDomNode::appendChild(local_2a8);
        QDomNode::~QDomNode(local_2a8);
        QDomNode::~QDomNode((QDomNode *)&local_2b0);
        if (*(int *)local_2b8 != -1) {
          if (*(int *)local_2b8 != 0) {
            LOCK();
            *(int *)local_2b8 = *(int *)local_2b8 + -1;
            local_69 = *(int *)local_2b8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfb7d;
          }
          QArrayData::deallocate(local_2b8,2,8);
        }
LAB_1005cfb7d:
        QDomNode::appendChild(local_2c0);
        QDomNode::~QDomNode(local_2c0);
        FUN_10059ee60(&local_2c8,param_2,param_3);
        QString::operator=((QString *)(param_4 + 0x12),&local_2c8);
        if (*(int *)local_2c8.field0_0x0 != -1) {
          if (*(int *)local_2c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
            local_69 = *(int *)local_2c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfc06;
          }
          QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
        }
LAB_1005cfc06:
        local_2d8 = (QArrayData *)QString::fromAscii_helper("Name",4);
        QDomDocument::createElement(&local_2d0);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_2d0);
        QDomNode::~QDomNode((QDomNode *)&local_2d0);
        if (*(int *)local_2d8 != -1) {
          if (*(int *)local_2d8 != 0) {
            LOCK();
            *(int *)local_2d8 = *(int *)local_2d8 + -1;
            local_69 = *(int *)local_2d8 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfc86;
          }
          QArrayData::deallocate(local_2d8,2,8);
        }
LAB_1005cfc86:
        QDomDocument::createTextNode(&local_2e8);
        QDomNode::appendChild(local_2e0);
        QDomNode::~QDomNode(local_2e0);
        QDomNode::~QDomNode((QDomNode *)&local_2e8);
        QDomNode::appendChild(local_2f0);
        QDomNode::~QDomNode(local_2f0);
        local_300 = (QArrayData *)QString::fromAscii_helper("Miscellaneous",0xd);
        QDomDocument::createElement(&local_2f8);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_2f8);
        QDomNode::~QDomNode((QDomNode *)&local_2f8);
        if (*(int *)local_300 != -1) {
          if (*(int *)local_300 != 0) {
            LOCK();
            *(int *)local_300 = *(int *)local_300 + -1;
            local_69 = *(int *)local_300 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfd6a;
          }
          QArrayData::deallocate(local_300,2,8);
        }
LAB_1005cfd6a:
        QDomNode::appendChild(local_308);
        QDomNode::operator=((QDomNode *)(param_1 + 5),local_308);
        QDomNode::~QDomNode(local_308);
        local_318 = (QArrayData *)QString::fromAscii_helper("StorageData",0xb);
        QDomDocument::createElement(&local_310);
        QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_310);
        QDomNode::~QDomNode((QDomNode *)&local_310);
        if (*(int *)local_318 != -1) {
          if (*(int *)local_318 != 0) {
            LOCK();
            *(int *)local_318 = *(int *)local_318 + -1;
            local_69 = *(int *)local_318 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005cfe1d;
          }
          QArrayData::deallocate(local_318,2,8);
        }
LAB_1005cfe1d:
        QDomNode::appendChild(local_320);
        QDomNode::operator=(local_a8,local_320);
        QDomNode::~QDomNode(local_320);
        if (&local_c8 != (undefined8 *****)(param_3 + 10)) {
          FUN_1005d6fb0(&local_c8,*(undefined8 *)(param_3 + 0xc),param_3 + 10,0);
        }
        if (local_b8 == 0) {
          iVar7 = -0x7ffdefe0;
          FUN_1008e3970("","vdisk",0,"Invalid parameter: Storages is equal to NULL");
        }
        else {
          uVar2 = param_3[6];
          if (param_3[0x10] != 0) {
            uVar1 = param_3[0x10] + -1 + uVar2;
            local_c8[4] = (undefined8 ****)((long)local_c8[4] + (ulong)(uVar1 - uVar1 % uVar2));
          }
          iVar7 = (**(code **)(*param_1 + 0x140))
                            (param_1,*(undefined8 *)(param_3 + 4),uVar2,&local_c8,param_4 + 0x14);
          if (-1 < iVar7) {
            local_330 = (QArrayData *)QString::fromAscii_helper("Snapshots",9);
            QDomDocument::createElement(&local_328);
            QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_328);
            QDomNode::~QDomNode((QDomNode *)&local_328);
            if (*(int *)local_330 != -1) {
              if (*(int *)local_330 != 0) {
                LOCK();
                *(int *)local_330 = *(int *)local_330 + -1;
                local_69 = *(int *)local_330 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005cff5a;
              }
              QArrayData::deallocate(local_330,2,8);
            }
LAB_1005cff5a:
            QDomNode::appendChild(local_338);
            QDomNode::operator=((QDomNode *)(param_1 + 7),local_338);
            QDomNode::~QDomNode(local_338);
            local_348 = (QArrayData *)QString::fromAscii_helper("Shot",4);
            QDomDocument::createElement(&local_340);
            QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_340);
            QDomNode::~QDomNode((QDomNode *)&local_340);
            if (*(int *)local_348 != -1) {
              if (*(int *)local_348 != 0) {
                LOCK();
                *(int *)local_348 = *(int *)local_348 + -1;
                local_69 = *(int *)local_348 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d0010;
              }
              QArrayData::deallocate(local_348,2,8);
            }
LAB_1005d0010:
            QDomNode::appendChild(local_350);
            QDomNode::operator=(local_90,local_350);
            QDomNode::~QDomNode(local_350);
            local_360 = (QArrayData *)QString::fromAscii_helper("GUID",4);
            QDomDocument::createElement(&local_358);
            QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_358);
            QDomNode::~QDomNode((QDomNode *)&local_358);
            if (*(int *)local_360 != -1) {
              if (*(int *)local_360 != 0) {
                LOCK();
                *(int *)local_360 = *(int *)local_360 + -1;
                local_69 = *(int *)local_360 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d00c2;
              }
              QArrayData::deallocate(local_360,2,8);
            }
LAB_1005d00c2:
            FUN_1007d6a70(&local_378,&DAT_1011bc8b8);
            QDomDocument::createTextNode(&local_370);
            QDomNode::appendChild(local_368);
            QDomNode::~QDomNode(local_368);
            QDomNode::~QDomNode((QDomNode *)&local_370);
            if (*(int *)local_378 != -1) {
              if (*(int *)local_378 != 0) {
                LOCK();
                *(int *)local_378 = *(int *)local_378 + -1;
                local_69 = *(int *)local_378 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d0150;
              }
              QArrayData::deallocate(local_378,2,8);
            }
LAB_1005d0150:
            QDomNode::appendChild(local_380);
            QDomNode::~QDomNode(local_380);
            local_390 = (QArrayData *)QString::fromAscii_helper("ParentGUID",10);
            QDomDocument::createElement(&local_388);
            QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)&local_388);
            QDomNode::~QDomNode((QDomNode *)&local_388);
            if (*(int *)local_390 != -1) {
              if (*(int *)local_390 != 0) {
                LOCK();
                *(int *)local_390 = *(int *)local_390 + -1;
                local_69 = *(int *)local_390 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d01f3;
              }
              QArrayData::deallocate(local_390,2,8);
            }
LAB_1005d01f3:
            FUN_1007d6870(local_58);
            FUN_1007d6a70(&local_3a8,local_58);
            QDomDocument::createTextNode(&local_3a0);
            QDomNode::appendChild(local_398);
            QDomNode::~QDomNode(local_398);
            QDomNode::~QDomNode((QDomNode *)&local_3a0);
            if (*(int *)local_3a8 != -1) {
              if (*(int *)local_3a8 != 0) {
                LOCK();
                *(int *)local_3a8 = *(int *)local_3a8 + -1;
                local_69 = *(int *)local_3a8 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d0287;
              }
              QArrayData::deallocate(local_3a8,2,8);
            }
LAB_1005d0287:
            QDomElement::operator=((QDomElement *)(param_1 + 6),(QDomElement *)&local_88);
            QDomNode::appendChild(local_3b0);
            QDomNode::~QDomNode(local_3b0);
            FUN_1007d6a70(&local_3b8,&DAT_1011bc8b8);
            FUN_1007d6870(local_68);
            FUN_1007d6a70(&local_3c0,local_68);
            pQVar5 = local_3b8;
            pQVar4 = local_3c0;
            if (1 < *(int *)local_3b8 + 1U) {
              LOCK();
              *(int *)local_3b8 = *(int *)local_3b8 + 1;
              local_69 = *(int *)local_3b8 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_3c0 + 1U) {
              LOCK();
              *(int *)local_3c0 = *(int *)local_3c0 + 1;
              local_69 = *(int *)local_3c0 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_3b8 + 1U) {
              LOCK();
              *(int *)local_3b8 = *(int *)local_3b8 + 1;
              local_69 = *(int *)local_3b8 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_3c0 + 1U) {
              LOCK();
              *(int *)local_3c0 = *(int *)local_3c0 + 1;
              local_69 = *(int *)local_3c0 != 0;
              UNLOCK();
            }
            local_80 = local_3b8;
            if (1 < *(int *)local_3b8 + 1U) {
              LOCK();
              *(int *)local_3b8 = *(int *)local_3b8 + 1;
              local_69 = *(int *)local_3b8 != 0;
              UNLOCK();
            }
            local_78 = local_3c0;
            if (1 < *(int *)local_3c0 + 1U) {
              LOCK();
              *(int *)local_3c0 = *(int *)local_3c0 + 1;
              local_69 = *(int *)local_3c0 != 0;
              UNLOCK();
            }
            FUN_1005d6500(param_1 + 0xe,&local_80);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_69 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d03a2;
              }
              QArrayData::deallocate(local_78,2,8);
            }
LAB_1005d03a2:
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_69 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d03d2;
              }
              QArrayData::deallocate(local_80,2,8);
            }
LAB_1005d03d2:
            if (*(int *)pQVar4 != -1) {
              if (*(int *)pQVar4 != 0) {
                LOCK();
                *(int *)pQVar4 = *(int *)pQVar4 + -1;
                local_69 = *(int *)pQVar4 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d03fd;
              }
              QArrayData::deallocate(pQVar4,2,8);
            }
LAB_1005d03fd:
            if (*(int *)pQVar5 != -1) {
              if (*(int *)pQVar5 != 0) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                local_69 = *(int *)pQVar5 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d042a;
              }
              QArrayData::deallocate(pQVar5,2,8);
            }
LAB_1005d042a:
            if (*(int *)pQVar4 != -1) {
              if (*(int *)pQVar4 != 0) {
                LOCK();
                *(int *)pQVar4 = *(int *)pQVar4 + -1;
                local_69 = *(int *)pQVar4 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d0455;
              }
              QArrayData::deallocate(pQVar4,2,8);
            }
LAB_1005d0455:
            if (*(int *)pQVar5 != -1) {
              if (*(int *)pQVar5 != 0) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                local_69 = *(int *)pQVar5 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d0482;
              }
              QArrayData::deallocate(pQVar5,2,8);
            }
LAB_1005d0482:
            if (*(int *)local_3c0 != -1) {
              if (*(int *)local_3c0 != 0) {
                LOCK();
                *(int *)local_3c0 = *(int *)local_3c0 + -1;
                local_69 = *(int *)local_3c0 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d04b8;
              }
              QArrayData::deallocate(local_3c0,2,8);
            }
LAB_1005d04b8:
            if (*(int *)local_3b8 != -1) {
              if (*(int *)local_3b8 != 0) {
                LOCK();
                *(int *)local_3b8 = *(int *)local_3b8 + -1;
                local_69 = *(int *)local_3b8 != 0;
                UNLOCK();
                if ((bool)local_69) goto LAB_1005d04ee;
              }
              QArrayData::deallocate(local_3b8,2,8);
            }
LAB_1005d04ee:
            *(undefined2 *)(param_1 + 0xd) = 0x101;
            FUN_1005c2a20();
            FUN_1005b8840();
            plVar9 = (long *)0x0;
            if (param_1[1] != 0) {
              plVar9 = *(long **)(param_1[1] + 0x10);
            }
            iVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,param_1 + 0xc);
            iVar7 = 0;
            if (-1 < iVar8) goto LAB_1005d05aa;
            FUN_1008e3970("","vdisk",0,"Couldn\'t lock disk: 0x%x",iVar8);
            iVar7 = iVar8;
          }
        }
        (**(code **)(*param_1 + 0x28))(param_1);
      }
    }
  }
LAB_1005d05aa:
  FUN_100098f20(&local_c8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_69 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005d05ec;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1005d05ec:
  QDomNode::~QDomNode(local_a8);
  QDomNode::~QDomNode(local_a0);
  QDomNode::~QDomNode(local_98);
  QDomNode::~QDomNode(local_90);
  QDomNode::~QDomNode((QDomNode *)&local_88);
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

