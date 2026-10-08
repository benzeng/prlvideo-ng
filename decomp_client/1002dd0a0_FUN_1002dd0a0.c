
undefined8 * FUN_1002dd0a0(undefined8 *param_1,long param_2)

{
  QString *pQVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  QMapNodeBase *pQVar12;
  ulong *puVar13;
  QMapNodeBase *pQVar14;
  QMapNodeBase *pQVar15;
  long *plVar16;
  QString *pQVar17;
  uint *puVar18;
  long lVar19;
  bool bVar20;
  QMapNodeBase *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QString local_348;
  QVariant local_340;
  undefined8 local_330;
  undefined8 local_328;
  QString local_320;
  QArrayData *local_318;
  QString local_310;
  QString local_308;
  QVariant local_300;
  QArrayData *local_2f0;
  QString local_2e8;
  QString local_2e0;
  QVariant local_2d8;
  QArrayData *local_2c8;
  QString local_2c0;
  QString local_2b8;
  QVariant local_2b0;
  QArrayData *local_2a0;
  QString local_298;
  QString local_290;
  QArrayData *local_288;
  QString local_280;
  QString local_278;
  QVariant local_270;
  int *local_260;
  QString local_258;
  QString local_250;
  QString local_248;
  QFileInfo local_240 [8];
  QDateTime local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QString local_210;
  Data *local_208;
  Data *local_200;
  Data *local_1f8;
  Data *local_1f0;
  int local_1e8;
  QDateTime local_1e0;
  QMapNodeBase *local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QString local_178;
  QLocale local_170 [8];
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QVariant local_140;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  undefined1 local_e8 [8];
  QString QStack_e0;
  QVariant local_d8;
  QVariant local_c8;
  QVariant local_b8;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar9 = FUN_100152280();
  lVar10 = FUN_1001554a0(uVar9);
  if (lVar10 == 0) {
    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                  "(!)Error: can\'t get server instance to fill query list.");
    return param_1;
  }
  iVar8 = *(int *)(*(long *)(param_2 + 0x18) + 8);
  uVar9 = FUN_10016f500(lVar10);
  cVar3 = FUN_10061b4d0(uVar9,0x20);
  if (cVar3 == '\0') {
    bVar20 = false;
  }
  else {
    FUN_10061abe0(&local_88,uVar9,0);
    iVar6 = QVariant::toInt((bool *)&local_88);
    bVar20 = true;
    if (iVar6 != 0) {
      FUN_10061abe0(&local_98,uVar9,0);
      iVar6 = QVariant::toInt((bool *)&local_98);
      bVar20 = true;
      if (iVar6 != -0x7ffeefa8) {
        FUN_10061abe0(&local_a8,uVar9,0);
        iVar6 = QVariant::toInt((bool *)&local_a8);
        bVar20 = true;
        if (iVar6 != -0x7ffeefff) {
          FUN_10061abe0(&local_b8,uVar9,0);
          iVar6 = QVariant::toInt((bool *)&local_b8);
          bVar20 = true;
          if (iVar6 != -0x7ffeef8c) {
            FUN_10061abe0(&local_c8,uVar9,0);
            iVar6 = QVariant::toInt((bool *)&local_c8);
            bVar20 = true;
            if (iVar6 != -0x7ffeef89) {
              FUN_10061abe0(&local_d8,uVar9,0);
              iVar6 = QVariant::toInt((bool *)&local_d8);
              bVar20 = iVar6 == -0x7ffeef9b;
              QVariant::~QVariant(&local_d8);
            }
            QVariant::~QVariant(&local_c8);
          }
          QVariant::~QVariant(&local_b8);
        }
        QVariant::~QVariant(&local_a8);
      }
      QVariant::~QVariant(&local_98);
    }
    QVariant::~QVariant(&local_88);
  }
  bVar4 = FUN_10061b500(uVar9,0x6010);
  if ((iVar8 != 0x65) || (!bVar20)) {
    bVar5 = FUN_10061b500(uVar9,2);
    bVar4 = bVar4 | bVar5;
  }
  if (bVar4 != 0) {
    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Error(!): wrong license.");
    return param_1;
  }
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_e8 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_f0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ProductIdentifier",0x11);
  QString::operator=((QString *)local_e8,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_31 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd33d;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1002dd33d:
  local_100 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_f8,&local_100,1,0,10,0x20);
  pQVar1 = (QString *)(local_e8 + 8);
  QString::operator=(pQVar1,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd3c7;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1002dd3c7:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd3fd;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1002dd3fd:
  FUN_1001c44c0(param_1,local_e8);
  local_108.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ProductVersion",0xe);
  QString::operator=((QString *)local_e8,&local_108);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd46d;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_1002dd46d:
  local_118 = (QArrayData *)QString::fromAscii_helper("%1",2);
  local_120 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
  QString::arg(&local_110,&local_118,&local_120,0,0x20);
  QString::operator=(pQVar1,&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd504;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1002dd504:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd53a;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1002dd53a:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd570;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1002dd570:
  FUN_1001c44c0(param_1,local_e8);
  local_128.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ProductLocale",0xd);
  QString::operator=((QString *)local_e8,&local_128);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd5e0;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_1002dd5e0:
  FUN_10061abe0(&local_140,uVar9,0xb);
  uVar7 = QVariant::toInt((bool *)&local_140);
  EnumUtils::enumToString(&local_130,uVar7);
  QVariant::~QVariant(&local_140);
  local_150 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(int *)(local_130 + 4) == 0) {
    local_158 = (QArrayData *)QString::fromAscii_helper("en_US",5);
  }
  else {
    local_158 = local_130;
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_148,&local_150,&local_158,0,0x20);
  QString::operator=(pQVar1,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd6da;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1002dd6da:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd710;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1002dd710:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd746;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1002dd746:
  FUN_1001c44c0(param_1,local_e8);
  local_160.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SystemLocale",0xc);
  QString::operator=((QString *)local_e8,&local_160);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd7b6;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_1002dd7b6:
  QLocale::QLocale(local_170);
  QLocale::name();
  QLocale::~QLocale(local_170);
  local_180 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(int *)(local_168 + 4) == 0) {
    local_188 = (QArrayData *)QString::fromAscii_helper("en_US",5);
  }
  else {
    local_188 = local_168;
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_178,&local_180,&local_188,0,0x20);
  QString::operator=(pQVar1,&local_178);
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_31 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd89f;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_1002dd89f:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd8d5;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1002dd8d5:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd90b;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1002dd90b:
  FUN_1001c44c0(param_1,local_e8);
  local_190.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ProductDistributor",0x12);
  QString::operator=((QString *)local_e8,&local_190);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd97b;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_1002dd97b:
  local_1a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_198,&local_1a0,0,0,10,0x20);
  QString::operator=(pQVar1,&local_198);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_31 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dd9fb;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_1002dd9fb:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dda31;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1002dda31:
  local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("0.0.0",5);
  MacUtils::osxVersion();
  QString::operator=(&local_1a8,&local_1b0);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_31 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dda9e;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_1002dda9e:
  local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("OsType",6);
  QString::operator=((QString *)local_e8,&local_1b8);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_31 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ddaff;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_1002ddaff:
  local_1c8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_1c0,&local_1c8,0,0,10,0x20);
  QString::operator=(pQVar1,&local_1c0);
  if (*(int *)local_1c0.field0_0x0 != -1) {
    if (*(int *)local_1c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
      local_31 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ddb7f;
    }
    QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
  }
LAB_1002ddb7f:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ddbb5;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1002ddbb5:
  FUN_1001c44c0(param_1,local_e8);
  local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("OsVersion",9)
  ;
  QString::operator=((QString *)local_e8,&local_1d0);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ddc25;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_1002ddc25:
  QString::operator=(pQVar1,&local_1a8);
  FUN_1001c44c0(param_1,local_e8);
  local_1d8 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  QDateTime::currentDateTime();
  uVar11 = FUN_100152280();
  FUN_100154b10(&local_208,uVar11);
  local_200 = local_208;
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 == 0) {
      QListData::detach((int)&local_200);
      lVar10 = (long)*(int *)(local_200 + 8);
      if ((local_208 + (long)*(int *)(local_208 + 8) * 8 != local_200 + lVar10 * 8) &&
         (lVar19 = *(int *)(local_200 + 0xc) - lVar10,
         lVar19 != 0 && lVar10 <= *(int *)(local_200 + 0xc))) {
        _memcpy(local_200 + lVar10 * 8 + 0x10,local_208 + (long)*(int *)(local_208 + 8) * 8 + 0x10,
                lVar19 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + 1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
    }
  }
  local_1f8 = local_200 + (long)*(int *)(local_200 + 8) * 8 + 0x10;
  local_1f0 = local_200 + (long)*(int *)(local_200 + 0xc) * 8 + 0x10;
  local_1e8 = 1;
  if (*(int *)local_208 == -1) {
LAB_1002ddd4c:
    local_370 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    if (local_1f8 != local_1f0) {
      do {
        uVar11 = *(undefined8 *)local_1f8;
        iVar6 = FUN_10018f890(uVar11);
        QString::number((uint)&local_210,iVar6);
        iVar6 = FUN_10018f890(uVar11);
        if (((iVar6 == 0x80c) || (iVar6 = FUN_10018f890(uVar11), iVar6 == 0x80e)) ||
           (iVar6 = FUN_10018f890(uVar11), iVar6 == 0x80f)) {
          FUN_10018d830(&local_218,uVar11);
          local_220 = (QArrayData *)QString::fromAscii_helper("Developer Preview",0x11);
          iVar6 = QString::indexOf(&local_218,&local_220,0,0);
          if (*(int *)local_220 != -1) {
            if (*(int *)local_220 != 0) {
              LOCK();
              *(int *)local_220 = *(int *)local_220 + -1;
              local_31 = *(int *)local_220 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dde56;
            }
            QArrayData::deallocate(local_220,2,8);
          }
LAB_1002dde56:
          if (iVar6 == -1) {
            local_228 = (QArrayData *)QString::fromAscii_helper("Consumer Preview",0x10);
            iVar6 = QString::indexOf(&local_218,&local_228,0,0);
            if (*(int *)local_228 != -1) {
              if (*(int *)local_228 != 0) {
                LOCK();
                *(int *)local_228 = *(int *)local_228 + -1;
                local_31 = *(int *)local_228 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002ddf27;
              }
              QArrayData::deallocate(local_228,2,8);
            }
LAB_1002ddf27:
            if (iVar6 == -1) {
              local_230 = (QArrayData *)QString::fromAscii_helper("Release Preview",0xf);
              iVar6 = QString::indexOf(&local_218,&local_230,0,0);
              if (*(int *)local_230 != -1) {
                if (*(int *)local_230 != 0) {
                  LOCK();
                  *(int *)local_230 = *(int *)local_230 + -1;
                  local_31 = *(int *)local_230 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002ddff5;
                }
                QArrayData::deallocate(local_230,2,8);
              }
LAB_1002ddff5:
              if (iVar6 != -1) {
                QString::fromUtf8_helper((char *)&local_68,0x1e1d1bc);
                QString::append(&local_210);
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_31 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002de050;
                  }
                  QArrayData::deallocate(local_68,2,8);
                }
              }
            }
            else {
              QString::fromUtf8_helper((char *)&local_70,0x1de575c);
              QString::append(&local_210);
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002de050;
                }
                QArrayData::deallocate(local_70,2,8);
              }
            }
          }
          else {
            QString::fromUtf8_helper((char *)&local_78,0x1de5749);
            QString::append(&local_210);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002de050;
              }
              QArrayData::deallocate(local_78,2,8);
            }
          }
LAB_1002de050:
          if (*(int *)local_218 != -1) {
            if (*(int *)local_218 != 0) {
              LOCK();
              *(int *)local_218 = *(int *)local_218 + -1;
              local_31 = *(int *)local_218 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002de086;
            }
            QArrayData::deallocate(local_218,2,8);
          }
        }
LAB_1002de086:
        iVar6 = FUN_10018a9d0(uVar11);
        if (iVar6 == 0x30000004) {
LAB_1002de0ac:
          if (1 < *(uint *)local_370) {
            FUN_1002e90b0(&local_1d8);
            local_370 = local_1d8;
          }
          pQVar12 = *(QMapNodeBase **)(local_370 + 0x10);
          if (*(QMapNodeBase **)(local_370 + 0x10) == (QMapNodeBase *)0x0) {
            bVar4 = 1;
            pQVar15 = local_370 + 8;
          }
          else {
            do {
              pQVar15 = pQVar12;
              bVar4 = QDateTime::operator<((QDateTime *)(pQVar15 + 0x18),&local_1e0);
              pQVar14 = pQVar15 + 8;
              if (bVar4 != 0) {
                pQVar14 = pQVar15 + 0x10;
              }
              pQVar12 = *(QMapNodeBase **)pQVar14;
            } while (*(QMapNodeBase **)pQVar14 != (QMapNodeBase *)0x0);
            bVar4 = bVar4 ^ 1;
          }
          FUN_1002e9010(local_370,&local_1e0,&local_210,pQVar15,bVar4);
        }
        else {
          uVar7 = FUN_10018a9d0(uVar11);
          cVar3 = FUN_10011c010(uVar7);
          if (cVar3 != '\0') goto LAB_1002de0ac;
          FUN_10018d980(&local_248,uVar11);
          QFileInfo::QFileInfo(local_240,&local_248);
          QFileInfo::lastModified();
          if (1 < *(uint *)local_370) {
            FUN_1002e90b0(&local_1d8);
            local_370 = local_1d8;
          }
          pQVar12 = *(QMapNodeBase **)(local_370 + 0x10);
          if (*(QMapNodeBase **)(local_370 + 0x10) == (QMapNodeBase *)0x0) {
            bVar4 = 1;
            pQVar15 = local_370 + 8;
          }
          else {
            do {
              pQVar15 = pQVar12;
              bVar4 = QDateTime::operator<((QDateTime *)(pQVar15 + 0x18),&local_238);
              pQVar14 = pQVar15 + 8;
              if (bVar4 != 0) {
                pQVar14 = pQVar15 + 0x10;
              }
              pQVar12 = *(QMapNodeBase **)pQVar14;
            } while (*(QMapNodeBase **)pQVar14 != (QMapNodeBase *)0x0);
            bVar4 = bVar4 ^ 1;
          }
          FUN_1002e9010(local_370,&local_238,&local_210,pQVar15,bVar4);
          QDateTime::~QDateTime(&local_238);
          QFileInfo::~QFileInfo(local_240);
          if (*(int *)local_248.field0_0x0 != -1) {
            if (*(int *)local_248.field0_0x0 != 0) {
              LOCK();
              *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
              local_31 = *(int *)local_248.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002de136;
            }
            QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
          }
        }
LAB_1002de136:
        if (*(int *)local_210.field0_0x0 != -1) {
          if (*(int *)local_210.field0_0x0 != 0) {
            LOCK();
            *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
            local_31 = *(int *)local_210.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002de16c;
          }
          QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
        }
LAB_1002de16c:
        local_1f8 = local_1f8 + 8;
        local_1e8 = 1;
      } while (local_1f8 != local_1f0);
    }
  }
  else {
    if (*(int *)local_208 == 0) {
LAB_1002ddd3a:
      QListData::dispose(local_208);
    }
    else {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1002ddd3a;
    }
    if (local_1e8 != 0) goto LAB_1002ddd4c;
    local_370 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  }
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de311;
    }
    QListData::dispose(local_200);
  }
LAB_1002de311:
  local_250.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)local_370 == 0) {
    pQVar12 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(local_370 + 0x10) != 0) {
      puVar13 = (ulong *)FUN_1002e9150(*(long *)(local_370 + 0x10),pQVar12);
      *(ulong **)(pQVar12 + 0x10) = puVar13;
      *puVar13 = *puVar13 & 3 | (ulong)(pQVar12 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    pQVar12 = local_370;
    if (*(int *)local_370 != -1) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + 1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
    }
  }
  pQVar15 = pQVar12 + 8;
  while( true ) {
    pQVar14 = pQVar12 + 8;
    if (*(long *)(pQVar12 + 0x10) != 0) {
      pQVar14 = *(QMapNodeBase **)(pQVar12 + 0x20);
    }
    if (pQVar15 == pQVar14) break;
    pQVar15 = (QMapNodeBase *)QMapNodeBase::previousNode();
    if (*(int *)(local_250.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_60,0x1eecb5c);
      QString::append(&local_250);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de42d;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
LAB_1002de42d:
    QString::append(&local_250);
  }
  local_258.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vm",2);
  pQVar1 = (QString *)(local_e8 + 8);
  QString::operator=((QString *)local_e8,&local_258);
  if (*(int *)local_258.field0_0x0 != -1) {
    if (*(int *)local_258.field0_0x0 != 0) {
      LOCK();
      *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
      local_31 = *(int *)local_258.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de4bf;
    }
    QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
  }
LAB_1002de4bf:
  QString::operator=(pQVar1,&local_250);
  FUN_1001c44c0(param_1,local_e8);
  FUN_10061abe0(&local_270,uVar9,5);
  FUN_10024fb10(&local_260,&local_270);
  FUN_10024f800(param_1,&local_260);
  if (*local_260 != -1) {
    if (*local_260 != 0) {
      LOCK();
      *local_260 = *local_260 + -1;
      local_31 = *local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de54a;
    }
    FUN_1001c45d0(&local_260);
  }
LAB_1002de54a:
  QVariant::~QVariant(&local_270);
  if (*(char *)(param_2 + 0x28) != '\0') {
    plVar16 = *(long **)(param_2 + 0x18);
    if (*(int *)(*plVar16 + 4) != 0) {
      local_278.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("PromoId",7);
      QString::operator=((QString *)local_e8,&local_278);
      if (*(int *)local_278.field0_0x0 != -1) {
        if (*(int *)local_278.field0_0x0 != 0) {
          LOCK();
          *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
          local_31 = *(int *)local_278.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de5d3;
        }
        QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
      }
LAB_1002de5d3:
      local_288 = (QArrayData *)QString::fromAscii_helper("%1",2);
      QString::arg(&local_280,&local_288,*(undefined8 *)(param_2 + 0x18),0,0x20);
      QString::operator=(pQVar1,&local_280);
      if (*(int *)local_280.field0_0x0 != -1) {
        if (*(int *)local_280.field0_0x0 != 0) {
          LOCK();
          *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
          local_31 = *(int *)local_280.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de64f;
        }
        QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
      }
LAB_1002de64f:
      if (*(int *)local_288 != -1) {
        if (*(int *)local_288 != 0) {
          LOCK();
          *(int *)local_288 = *(int *)local_288 + -1;
          local_31 = *(int *)local_288 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de685;
        }
        QArrayData::deallocate(local_288,2,8);
      }
LAB_1002de685:
      FUN_1001c44c0(param_1);
      plVar16 = *(long **)(param_2 + 0x18);
    }
    if ((int)plVar16[1] != 0) {
      local_290.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("PromoType",9);
      QString::operator=((QString *)local_e8,&local_290);
      if (*(int *)local_290.field0_0x0 != -1) {
        if (*(int *)local_290.field0_0x0 != 0) {
          LOCK();
          *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
          local_31 = *(int *)local_290.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de703;
        }
        QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
      }
LAB_1002de703:
      local_2a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
      QString::arg(&local_298,&local_2a0,(long)*(int *)(*(long *)(param_2 + 0x18) + 8),0,10,0x20);
      QString::operator=(pQVar1,&local_298);
      if (*(int *)local_298.field0_0x0 != -1) {
        if (*(int *)local_298.field0_0x0 != 0) {
          LOCK();
          *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
          local_31 = *(int *)local_298.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de789;
        }
        QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
      }
LAB_1002de789:
      if (*(int *)local_2a0 != -1) {
        if (*(int *)local_2a0 != 0) {
          LOCK();
          *(int *)local_2a0 = *(int *)local_2a0 + -1;
          local_31 = *(int *)local_2a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002de7bf;
        }
        QArrayData::deallocate(local_2a0,2,8);
      }
LAB_1002de7bf:
      FUN_1001c44c0(param_1);
    }
  }
  QSettings::QSettings((QSettings *)&local_2b0,(QObject *)0x0);
  FUN_10077f090(&local_2c8,iVar8);
  local_2c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2c8;
  if (1 < *(int *)local_2c8 + 1U) {
    LOCK();
    *(int *)local_2c8 = *(int *)local_2c8 + 1;
    local_31 = *(int *)local_2c8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
  QString::append(&local_2c0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de865;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002de865:
  local_2b8.field0_0x0 = local_2c0.field0_0x0;
  if (1 < *(int *)local_2c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + 1;
    local_31 = *(int *)local_2c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1de5778);
  QString::append(&local_2b8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de8d9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002de8d9:
  cVar3 = QSettings::contains((QString *)&local_2b0);
  if (*(int *)local_2b8.field0_0x0 != -1) {
    if (*(int *)local_2b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
      local_31 = *(int *)local_2b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de925;
    }
    QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
  }
LAB_1002de925:
  if (*(int *)local_2c0.field0_0x0 != -1) {
    if (*(int *)local_2c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
      local_31 = *(int *)local_2c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de95b;
    }
    QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
  }
LAB_1002de95b:
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002de991;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1002de991:
  if (cVar3 != '\0') {
    FUN_10077f090(&local_2f0,iVar8);
    local_2e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2f0;
    if (1 < *(int *)local_2f0 + 1U) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + 1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_2e8);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dea20;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002dea20:
    local_2e0.field0_0x0 = local_2e8.field0_0x0;
    if (1 < *(int *)local_2e8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + 1;
      local_31 = *(int *)local_2e8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1de5778);
    QString::append(&local_2e0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dea94;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002dea94:
    QVariant::QVariant(&local_300,0);
    QSettings::value((QString *)&local_2d8,&local_2b0);
    iVar8 = QVariant::toInt((bool *)&local_2d8);
    QVariant::~QVariant(&local_2d8);
    QVariant::~QVariant(&local_300);
    if (*(int *)local_2e0.field0_0x0 != -1) {
      if (*(int *)local_2e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
        local_31 = *(int *)local_2e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002deb22;
      }
      QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
    }
LAB_1002deb22:
    if (*(int *)local_2e8.field0_0x0 != -1) {
      if (*(int *)local_2e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
        local_31 = *(int *)local_2e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002deb58;
      }
      QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
    }
LAB_1002deb58:
    if (*(int *)local_2f0 != -1) {
      if (*(int *)local_2f0 != 0) {
        LOCK();
        *(int *)local_2f0 = *(int *)local_2f0 + -1;
        local_31 = *(int *)local_2f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002deb8e;
      }
      QArrayData::deallocate(local_2f0,2,8);
    }
LAB_1002deb8e:
    local_308.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("TestPromo",9);
    QString::operator=((QString *)local_e8,&local_308);
    if (*(int *)local_308.field0_0x0 != -1) {
      if (*(int *)local_308.field0_0x0 != 0) {
        LOCK();
        *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
        local_31 = *(int *)local_308.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002debef;
      }
      QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
    }
LAB_1002debef:
    local_318 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_310,&local_318,(long)iVar8,0,10,0x20);
    QString::operator=(pQVar1,&local_310);
    if (*(int *)local_310.field0_0x0 != -1) {
      if (*(int *)local_310.field0_0x0 != 0) {
        LOCK();
        *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
        local_31 = *(int *)local_310.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dec73;
      }
      QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
    }
LAB_1002dec73:
    if (*(int *)local_318 != -1) {
      if (*(int *)local_318 != 0) {
        LOCK();
        *(int *)local_318 = *(int *)local_318 + -1;
        local_31 = *(int *)local_318 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002decac;
      }
      QArrayData::deallocate(local_318,2,8);
    }
LAB_1002decac:
    FUN_1001c44c0(param_1);
  }
  lVar10 = *(long *)(param_2 + 0x18);
  if (*(int *)(lVar10 + 8) == 0x65) {
    cVar3 = FUN_10061b500(uVar9,0x20);
    if (cVar3 != '\0') {
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                    "Error(!): Requested Trial Promo for non Trial key");
    }
    local_320.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("day_of_trial",0xc);
    QString::operator=((QString *)local_e8,&local_320);
    if (*(int *)local_320.field0_0x0 != -1) {
      if (*(int *)local_320.field0_0x0 != 0) {
        LOCK();
        *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
        local_31 = *(int *)local_320.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002ded5e;
      }
      QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
    }
LAB_1002ded5e:
    local_328 = QDate::currentDate();
    FUN_10061abe0(&local_340,uVar9,6);
    local_330 = QVariant::toDate();
    iVar6 = QDate::daysTo((QDate *)&local_328);
    QVariant::~QVariant(&local_340);
    iVar8 = 0xe;
    if (iVar6 != 0) {
      iVar8 = 0xf - iVar6;
    }
    iVar6 = 1;
    if ((0 < iVar8) && (iVar6 = 0xf, iVar8 < 0x10)) {
      iVar6 = iVar8;
    }
    local_350 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_348,&local_350,(long)iVar6,0,10,0x20);
    QString::operator=(pQVar1,&local_348);
    if (*(int *)local_348.field0_0x0 != -1) {
      if (*(int *)local_348.field0_0x0 != 0) {
        LOCK();
        *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
        local_31 = *(int *)local_348.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dee62;
      }
      QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
    }
LAB_1002dee62:
    if (*(int *)local_350 != -1) {
      if (*(int *)local_350 != 0) {
        LOCK();
        *(int *)local_350 = *(int *)local_350 + -1;
        local_31 = *(int *)local_350 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dee98;
      }
      QArrayData::deallocate(local_350,2,8);
    }
LAB_1002dee98:
    FUN_1001c44c0(param_1,local_e8);
    pQVar17 = (QString *)FUN_10002c250(*(long *)(param_2 + 0x18) + 0x68,local_e8);
    QString::operator=(pQVar17,pQVar1);
    lVar10 = *(long *)(param_2 + 0x18);
  }
  puVar18 = *(uint **)(lVar10 + 0x48);
  if ((int)puVar18[2] < (int)puVar18[3]) {
    lVar19 = 0;
    do {
      if (1 < *puVar18) {
        FUN_1001c4bd0((undefined8 *)(lVar10 + 0x48),puVar18[1]);
        puVar18 = *(uint **)(lVar10 + 0x48);
      }
      pQVar1 = *(QString **)(puVar18 + ((int)puVar18[2] + lVar19) * 2 + 4);
      puVar18 = (uint *)*param_1;
      if ((int)puVar18[2] < (int)puVar18[3]) {
        lVar10 = 0;
        do {
          if (1 < *puVar18) {
            FUN_1001c4bd0(param_1,puVar18[1]);
            puVar18 = (uint *)*param_1;
          }
          pQVar17 = *(QString **)(puVar18 + ((int)puVar18[2] + lVar10) * 2 + 4);
          cVar3 = operator==(pQVar17,pQVar1);
          if (cVar3 != '\0') {
            QString::toUtf8();
            lVar10 = *(long *)(local_358 + 0x10);
            QString::toUtf8();
            lVar2 = *(long *)(local_360 + 0x10);
            QString::toUtf8();
            FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                          "Replace query item \"%s\" from \"%s\" to \"%s\"",local_358 + lVar10,
                          local_360 + lVar2,local_368 + *(long *)(local_368 + 0x10));
            if (*(int *)local_368 != -1) {
              if (*(int *)local_368 != 0) {
                LOCK();
                *(int *)local_368 = *(int *)local_368 + -1;
                local_31 = *(int *)local_368 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002df03a;
              }
              QArrayData::deallocate(local_368,1,8);
            }
LAB_1002df03a:
            if (*(int *)local_360 != -1) {
              if (*(int *)local_360 != 0) {
                LOCK();
                *(int *)local_360 = *(int *)local_360 + -1;
                local_31 = *(int *)local_360 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002df07e;
              }
              QArrayData::deallocate(local_360,1,8);
            }
LAB_1002df07e:
            if (*(int *)local_358 != -1) {
              if (*(int *)local_358 != 0) {
                LOCK();
                *(int *)local_358 = *(int *)local_358 + -1;
                local_31 = *(int *)local_358 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002df0b4;
              }
              QArrayData::deallocate(local_358,1,8);
            }
LAB_1002df0b4:
            QString::operator=(pQVar17 + 1,pQVar1 + 1);
            goto LAB_1002df0bf;
          }
          lVar10 = lVar10 + 1;
          puVar18 = (uint *)*param_1;
        } while (lVar10 < (long)(int)puVar18[3] - (long)(int)puVar18[2]);
      }
      FUN_1001c44c0(param_1,pQVar1);
LAB_1002df0bf:
      lVar19 = lVar19 + 1;
      lVar10 = *(long *)(param_2 + 0x18);
      puVar18 = *(uint **)(lVar10 + 0x48);
    } while (lVar19 < (long)(int)puVar18[3] - (long)(int)puVar18[2]);
  }
  QSettings::~QSettings((QSettings *)&local_2b0);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df14c;
    }
    if (*(long *)(pQVar12 + 0x10) != 0) {
      FUN_1002e5740();
      QMapDataBase::freeTree(pQVar12,(int)*(undefined8 *)(pQVar12 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar12);
  }
LAB_1002df14c:
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_31 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df182;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
  }
LAB_1002df182:
  QDateTime::~QDateTime(&local_1e0);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df1ce;
    }
    if (*(long *)(local_370 + 0x10) != 0) {
      FUN_1002e5740();
      QMapDataBase::freeTree(local_370,(int)*(undefined8 *)(local_370 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_370);
  }
LAB_1002df1ce:
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df204;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
LAB_1002df204:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df23a;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1002df23a:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df270;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1002df270:
  if (*(int *)QStack_e0.field0_0x0 != -1) {
    if (*(int *)QStack_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_e0.field0_0x0 = *(int *)QStack_e0.field0_0x0 + -1;
      local_31 = *(int *)QStack_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002df2a6;
    }
    QArrayData::deallocate((QArrayData *)QStack_e0.field0_0x0,2,8);
  }
LAB_1002df2a6:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_e8,2,8);
  }
  return param_1;
}

