
void FUN_1006fbdf0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  long lVar5;
  QKeySequence *pQVar6;
  QKeySequence local_4c8 [8];
  Data *local_4c0;
  Data *local_4b8;
  undefined4 local_4b0;
  QArrayData *local_4a8;
  QKeySequence local_4a0 [8];
  Data *local_498;
  Data *local_490;
  undefined4 local_488;
  QArrayData *local_480;
  QKeySequence local_478 [8];
  Data *local_470;
  Data *local_468;
  undefined4 local_460;
  QArrayData *local_458;
  QKeySequence local_450 [8];
  Data *local_448;
  Data *local_440;
  undefined4 local_438;
  QArrayData *local_430;
  QKeySequence local_428 [8];
  Data *local_420;
  Data *local_418;
  undefined4 local_410;
  QArrayData *local_408;
  QKeySequence local_400 [8];
  Data *local_3f8;
  Data *local_3f0;
  undefined4 local_3e8;
  QArrayData *local_3e0;
  QKeySequence local_3d8 [8];
  Data *local_3d0;
  Data *local_3c8;
  undefined4 local_3c0;
  QArrayData *local_3b8;
  QKeySequence local_3b0 [8];
  Data *local_3a8;
  Data *local_3a0;
  undefined4 local_398;
  QArrayData *local_390;
  QKeySequence local_388 [8];
  Data *local_380;
  Data *local_378;
  undefined4 local_370;
  QArrayData *local_368;
  QKeySequence local_360 [8];
  Data *local_358;
  Data *local_350;
  undefined4 local_348;
  QArrayData *local_340;
  QKeySequence local_338 [8];
  Data *local_330;
  Data *local_328;
  undefined4 local_320;
  QArrayData *local_318;
  QKeySequence local_310 [8];
  Data *local_308;
  Data *local_300;
  undefined4 local_2f8;
  QArrayData *local_2f0;
  QKeySequence local_2e8 [8];
  Data *local_2e0;
  Data *local_2d8;
  undefined4 local_2d0;
  QArrayData *local_2c8;
  QKeySequence local_2c0 [8];
  Data *local_2b8;
  Data *local_2b0;
  undefined4 local_2a8;
  QArrayData *local_2a0;
  QKeySequence local_298 [8];
  Data *local_290;
  Data *local_288;
  undefined4 local_280;
  QArrayData *local_278;
  QKeySequence local_270 [8];
  Data *local_268;
  Data *local_260;
  undefined4 local_258;
  QArrayData *local_250;
  QKeySequence local_248 [8];
  Data *local_240;
  Data *local_238;
  undefined4 local_230;
  QArrayData *local_228;
  QKeySequence local_220 [8];
  Data *local_218;
  Data *local_210;
  undefined4 local_208;
  QArrayData *local_200;
  QKeySequence local_1f8 [8];
  Data *local_1f0;
  Data *local_1e8;
  undefined4 local_1e0;
  QArrayData *local_1d8;
  QKeySequence local_1d0 [8];
  Data *local_1c8;
  Data *local_1c0;
  undefined4 local_1b8;
  QArrayData *local_1b0;
  QKeySequence local_1a8 [8];
  Data *local_1a0;
  Data *local_198;
  undefined4 local_190;
  QArrayData *local_188;
  QKeySequence local_180 [8];
  Data *local_178;
  Data *local_170;
  undefined4 local_168;
  QArrayData *local_160;
  QKeySequence local_158 [8];
  Data *local_150;
  Data *local_148;
  undefined4 local_140;
  QArrayData *local_138;
  QKeySequence local_130 [8];
  QKeySequence local_128 [8];
  Data *local_120;
  Data *local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QKeySequence local_100 [8];
  Data *local_f8;
  Data *local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  QKeySequence local_d8 [8];
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QKeySequence local_b0 [8];
  Data *local_a8;
  Data *local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QKeySequence local_88 [8];
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QKeySequence local_60 [8];
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100707710();
  cVar4 = FUN_100124f70();
  if (cVar4 != '\0') {
    FUN_1006946e0(&local_40,0x26);
    lVar5 = FUN_100706960(param_1,&local_40);
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    QKeySequence::QKeySequence(local_60,0x14000043,0,0,0);
    FUN_100560a10(&local_58,local_60);
    FUN_100708220(&local_50,&local_58,2);
    FUN_100707070(lVar5,&local_50);
    *(undefined4 *)(lVar5 + 8) = local_48;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006fbeea;
      }
      iVar1 = *(int *)(local_50 + 0xc);
      if (iVar1 != *(int *)(local_50 + 8)) {
        lVar5 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
        pQVar6 = (QKeySequence *)(local_50 + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar6);
          pQVar6 = pQVar6 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(local_50);
    }
LAB_1006fbeea:
    QKeySequence::~QKeySequence(local_60);
    pDVar3 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006fbf5a;
      }
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pQVar6 = (QKeySequence *)(local_58 + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar6);
          pQVar6 = pQVar6 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_1006fbf5a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006fbf8a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1006fbf8a:
  FUN_1006946e0(&local_68,0x25);
  lVar5 = FUN_100706960(param_1,&local_68);
  puVar2 = PTR_shared_null_1021e15e8;
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  QKeySequence::QKeySequence(local_88,0x14000046,0,0,0);
  FUN_100560a10(&local_80,local_88);
  FUN_100708220(&local_78,&local_80,2);
  FUN_100707070(lVar5,&local_78);
  *(undefined4 *)(lVar5 + 8) = local_70;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc05a;
    }
    iVar1 = *(int *)(local_78 + 0xc);
    if (iVar1 != *(int *)(local_78 + 8)) {
      lVar5 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_78 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_1006fc05a:
  QKeySequence::~QKeySequence(local_88);
  pDVar3 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc0ca;
    }
    iVar1 = *(int *)(local_80 + 0xc);
    if (iVar1 != *(int *)(local_80 + 8)) {
      lVar5 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_80 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc0ca:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc0fa;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006fc0fa:
  FUN_1006946e0(&local_90,0x27);
  lVar5 = FUN_100706960(param_1,&local_90);
  local_a8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_b0,0x1400004d,0,0,0);
  FUN_100560a10(&local_a8,local_b0);
  FUN_100708220(&local_a0,&local_a8,2);
  FUN_100707070(lVar5,&local_a0);
  *(undefined4 *)(lVar5 + 8) = local_98;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc1ea;
    }
    iVar1 = *(int *)(local_a0 + 0xc);
    if (iVar1 != *(int *)(local_a0 + 8)) {
      lVar5 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_a0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_a0);
  }
LAB_1006fc1ea:
  QKeySequence::~QKeySequence(local_b0);
  pDVar3 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc25a;
    }
    iVar1 = *(int *)(local_a8 + 0xc);
    if (iVar1 != *(int *)(local_a8 + 8)) {
      lVar5 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_a8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc25a:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc290;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006fc290:
  FUN_1006946e0(&local_b8,0x5a);
  lVar5 = FUN_100706960(param_1,&local_b8);
  local_d0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_d8,0x18000000,0,0,0);
  FUN_100560a10(&local_d0,local_d8);
  FUN_100708220(&local_c8,&local_d0,10);
  FUN_100707070(lVar5,&local_c8);
  *(undefined4 *)(lVar5 + 8) = local_c0;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc37a;
    }
    iVar1 = *(int *)(local_c8 + 0xc);
    if (iVar1 != *(int *)(local_c8 + 8)) {
      lVar5 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_c8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_c8);
  }
LAB_1006fc37a:
  QKeySequence::~QKeySequence(local_d8);
  pDVar3 = local_d0;
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc3ea;
    }
    iVar1 = *(int *)(local_d0 + 0xc);
    if (iVar1 != *(int *)(local_d0 + 8)) {
      lVar5 = (long)*(int *)(local_d0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_d0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc3ea:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc420;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1006fc420:
  FUN_1006946e0(&local_e0,0x14);
  lVar5 = FUN_100706960(param_1,&local_e0);
  local_f8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_100,0x41);
  FUN_100560a10(&local_f8,local_100);
  FUN_100708220(&local_f0,&local_f8,0);
  FUN_100707070(lVar5,&local_f0);
  *(undefined4 *)(lVar5 + 8) = local_e8;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc50a;
    }
    iVar1 = *(int *)(local_f0 + 0xc);
    if (iVar1 != *(int *)(local_f0 + 8)) {
      lVar5 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_f0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_f0);
  }
LAB_1006fc50a:
  QKeySequence::~QKeySequence(local_100);
  pDVar3 = local_f8;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc57a;
    }
    iVar1 = *(int *)(local_f8 + 0xc);
    if (iVar1 != *(int *)(local_f8 + 8)) {
      lVar5 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_f8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc57a:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc5b0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1006fc5b0:
  FUN_1006946e0(&local_108,0x5b);
  lVar5 = FUN_100706960(param_1,&local_108);
  local_120 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_128,0x4000027,0,0,0);
  FUN_100560a10(&local_120,local_128);
  QKeySequence::QKeySequence(local_130,0x40000a7,0,0,0);
  FUN_100560a10(&local_120,local_130);
  FUN_100708220(&local_118,&local_120,2);
  FUN_100707070(lVar5,&local_118);
  *(undefined4 *)(lVar5 + 8) = local_110;
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc6ca;
    }
    iVar1 = *(int *)(local_118 + 0xc);
    if (iVar1 != *(int *)(local_118 + 8)) {
      lVar5 = (long)*(int *)(local_118 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_118 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_118);
  }
LAB_1006fc6ca:
  QKeySequence::~QKeySequence(local_130);
  QKeySequence::~QKeySequence(local_128);
  pDVar3 = local_120;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc74a;
    }
    iVar1 = *(int *)(local_120 + 0xc);
    if (iVar1 != *(int *)(local_120 + 8)) {
      lVar5 = (long)*(int *)(local_120 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_120 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc74a:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc780;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006fc780:
  FUN_1006946e0(&local_138,0x5c);
  lVar5 = FUN_100706960(param_1,&local_138);
  local_150 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_158,0x4000048,0,0,0);
  FUN_100560a10(&local_150,local_158);
  FUN_100708220(&local_148,&local_150,2);
  FUN_100707070(lVar5,&local_148);
  *(undefined4 *)(lVar5 + 8) = local_140;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc86a;
    }
    iVar1 = *(int *)(local_148 + 0xc);
    if (iVar1 != *(int *)(local_148 + 8)) {
      lVar5 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_148 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_148);
  }
LAB_1006fc86a:
  QKeySequence::~QKeySequence(local_158);
  pDVar3 = local_150;
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc8da;
    }
    iVar1 = *(int *)(local_150 + 0xc);
    if (iVar1 != *(int *)(local_150 + 8)) {
      lVar5 = (long)*(int *)(local_150 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_150 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fc8da:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc910;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1006fc910:
  FUN_1006946e0(&local_160,0x5d);
  lVar5 = FUN_100706960(param_1,&local_160);
  local_178 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_180,0xc000048,0,0,0);
  FUN_100560a10(&local_178,local_180);
  FUN_100708220(&local_170,&local_178,2);
  FUN_100707070(lVar5,&local_170);
  *(undefined4 *)(lVar5 + 8) = local_168;
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fc9fa;
    }
    iVar1 = *(int *)(local_170 + 0xc);
    if (iVar1 != *(int *)(local_170 + 8)) {
      lVar5 = (long)*(int *)(local_170 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_170 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_170);
  }
LAB_1006fc9fa:
  QKeySequence::~QKeySequence(local_180);
  pDVar3 = local_178;
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fca6a;
    }
    iVar1 = *(int *)(local_178 + 0xc);
    if (iVar1 != *(int *)(local_178 + 8)) {
      lVar5 = (long)*(int *)(local_178 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_178 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fca6a:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcaa0;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1006fcaa0:
  FUN_1006946e0(&local_188,0x58);
  lVar5 = FUN_100706960(param_1,&local_188);
  local_1a0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_1a8,0x400004d,0,0,0);
  FUN_100560a10(&local_1a0,local_1a8);
  FUN_100708220(&local_198,&local_1a0,0);
  FUN_100707070(lVar5,&local_198);
  *(undefined4 *)(lVar5 + 8) = local_190;
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcb8a;
    }
    iVar1 = *(int *)(local_198 + 0xc);
    if (iVar1 != *(int *)(local_198 + 8)) {
      lVar5 = (long)*(int *)(local_198 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_198 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_198);
  }
LAB_1006fcb8a:
  QKeySequence::~QKeySequence(local_1a8);
  pDVar3 = local_1a0;
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcbfa;
    }
    iVar1 = *(int *)(local_1a0 + 0xc);
    if (iVar1 != *(int *)(local_1a0 + 8)) {
      lVar5 = (long)*(int *)(local_1a0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_1a0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fcbfa:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcc30;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1006fcc30:
  FUN_1006946e0(&local_1b0,0x90);
  lVar5 = FUN_100706960(param_1,&local_1b0);
  local_1c8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_1d0,0x13000001,0,0,0);
  FUN_100560a10(&local_1c8,local_1d0);
  FUN_100708220(&local_1c0,&local_1c8,2);
  FUN_100707070(lVar5,&local_1c0);
  *(undefined4 *)(lVar5 + 8) = local_1b8;
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcd1a;
    }
    iVar1 = *(int *)(local_1c0 + 0xc);
    if (iVar1 != *(int *)(local_1c0 + 8)) {
      lVar5 = (long)*(int *)(local_1c0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_1c0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_1c0);
  }
LAB_1006fcd1a:
  QKeySequence::~QKeySequence(local_1d0);
  pDVar3 = local_1c8;
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcd8a;
    }
    iVar1 = *(int *)(local_1c8 + 0xc);
    if (iVar1 != *(int *)(local_1c8 + 8)) {
      lVar5 = (long)*(int *)(local_1c8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_1c8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fcd8a:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcdc0;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1006fcdc0:
  FUN_1006946e0(&local_1d8,0x91);
  lVar5 = FUN_100706960(param_1,&local_1d8);
  local_1f0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_1f8,0x11000001,0,0,0);
  FUN_100560a10(&local_1f0,local_1f8);
  FUN_100708220(&local_1e8,&local_1f0,2);
  FUN_100707070(lVar5,&local_1e8);
  *(undefined4 *)(lVar5 + 8) = local_1e0;
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fceaa;
    }
    iVar1 = *(int *)(local_1e8 + 0xc);
    if (iVar1 != *(int *)(local_1e8 + 8)) {
      lVar5 = (long)*(int *)(local_1e8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_1e8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_1e8);
  }
LAB_1006fceaa:
  QKeySequence::~QKeySequence(local_1f8);
  pDVar3 = local_1f0;
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcf1a;
    }
    iVar1 = *(int *)(local_1f0 + 0xc);
    if (iVar1 != *(int *)(local_1f0 + 8)) {
      lVar5 = (long)*(int *)(local_1f0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_1f0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fcf1a:
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fcf50;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1006fcf50:
  FUN_1006946e0(&local_200,0x13);
  lVar5 = FUN_100706960(param_1,&local_200);
  local_218 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_220,0x400002c,0,0,0);
  FUN_100560a10(&local_218,local_220);
  FUN_100708220(&local_210,&local_218,2);
  FUN_100707070(lVar5,&local_210);
  *(undefined4 *)(lVar5 + 8) = local_208;
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd03a;
    }
    iVar1 = *(int *)(local_210 + 0xc);
    if (iVar1 != *(int *)(local_210 + 8)) {
      lVar5 = (long)*(int *)(local_210 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_210 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_210);
  }
LAB_1006fd03a:
  QKeySequence::~QKeySequence(local_220);
  pDVar3 = local_218;
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd0aa;
    }
    iVar1 = *(int *)(local_218 + 0xc);
    if (iVar1 != *(int *)(local_218 + 8)) {
      lVar5 = (long)*(int *)(local_218 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_218 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd0aa:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd0e0;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1006fd0e0:
  FUN_1006946e0(&local_228,0x24);
  lVar5 = FUN_100706960(param_1,&local_228);
  local_240 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_248,4);
  FUN_100560a10(&local_240,local_248);
  FUN_100708220(&local_238,&local_240,0);
  FUN_100707070(lVar5,&local_238);
  *(undefined4 *)(lVar5 + 8) = local_230;
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd1ca;
    }
    iVar1 = *(int *)(local_238 + 0xc);
    if (iVar1 != *(int *)(local_238 + 8)) {
      lVar5 = (long)*(int *)(local_238 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_238 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_238);
  }
LAB_1006fd1ca:
  QKeySequence::~QKeySequence(local_248);
  pDVar3 = local_240;
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd23a;
    }
    iVar1 = *(int *)(local_240 + 0xc);
    if (iVar1 != *(int *)(local_240 + 8)) {
      lVar5 = (long)*(int *)(local_240 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_240 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd23a:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd270;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1006fd270:
  FUN_1006946e0(&local_250,0x15);
  lVar5 = FUN_100706960(param_1,&local_250);
  local_268 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_270,6);
  FUN_100560a10(&local_268,local_270);
  FUN_100708220(&local_260,&local_268,0);
  FUN_100707070(lVar5,&local_260);
  *(undefined4 *)(lVar5 + 8) = local_258;
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd35a;
    }
    iVar1 = *(int *)(local_260 + 0xc);
    if (iVar1 != *(int *)(local_260 + 8)) {
      lVar5 = (long)*(int *)(local_260 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_260 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_260);
  }
LAB_1006fd35a:
  QKeySequence::~QKeySequence(local_270);
  pDVar3 = local_268;
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd3ca;
    }
    iVar1 = *(int *)(local_268 + 0xc);
    if (iVar1 != *(int *)(local_268 + 8)) {
      lVar5 = (long)*(int *)(local_268 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_268 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd3ca:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd400;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1006fd400:
  FUN_1006946e0(&local_278,0x16);
  lVar5 = FUN_100706960(param_1,&local_278);
  local_290 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_298,3);
  FUN_100560a10(&local_290,local_298);
  FUN_100708220(&local_288,&local_290,0);
  FUN_100707070(lVar5,&local_288);
  *(undefined4 *)(lVar5 + 8) = local_280;
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd4ea;
    }
    iVar1 = *(int *)(local_288 + 0xc);
    if (iVar1 != *(int *)(local_288 + 8)) {
      lVar5 = (long)*(int *)(local_288 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_288 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_288);
  }
LAB_1006fd4ea:
  QKeySequence::~QKeySequence(local_298);
  pDVar3 = local_290;
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd55a;
    }
    iVar1 = *(int *)(local_290 + 0xc);
    if (iVar1 != *(int *)(local_290 + 8)) {
      lVar5 = (long)*(int *)(local_290 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_290 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd55a:
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd590;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1006fd590:
  FUN_1006946e0(&local_2a0,0x67);
  lVar5 = FUN_100706960(param_1,&local_2a0);
  local_2b8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_2c0,0x6000050,0,0,0);
  FUN_100560a10(&local_2b8,local_2c0);
  FUN_100708220(&local_2b0,&local_2b8,0);
  FUN_100707070(lVar5,&local_2b0);
  *(undefined4 *)(lVar5 + 8) = local_2a8;
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd67a;
    }
    iVar1 = *(int *)(local_2b0 + 0xc);
    if (iVar1 != *(int *)(local_2b0 + 8)) {
      lVar5 = (long)*(int *)(local_2b0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_2b0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_2b0);
  }
LAB_1006fd67a:
  QKeySequence::~QKeySequence(local_2c0);
  pDVar3 = local_2b8;
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd6ea;
    }
    iVar1 = *(int *)(local_2b8 + 0xc);
    if (iVar1 != *(int *)(local_2b8 + 8)) {
      lVar5 = (long)*(int *)(local_2b8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_2b8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd6ea:
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd720;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_1006fd720:
  FUN_1006946e0(&local_2c8,0x68);
  lVar5 = FUN_100706960(param_1,&local_2c8);
  local_2e0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_2e8,0xb);
  FUN_100560a10(&local_2e0,local_2e8);
  FUN_100708220(&local_2d8,&local_2e0,0);
  FUN_100707070(lVar5,&local_2d8);
  *(undefined4 *)(lVar5 + 8) = local_2d0;
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd80a;
    }
    iVar1 = *(int *)(local_2d8 + 0xc);
    if (iVar1 != *(int *)(local_2d8 + 8)) {
      lVar5 = (long)*(int *)(local_2d8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_2d8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_2d8);
  }
LAB_1006fd80a:
  QKeySequence::~QKeySequence(local_2e8);
  pDVar3 = local_2e0;
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd87a;
    }
    iVar1 = *(int *)(local_2e0 + 0xc);
    if (iVar1 != *(int *)(local_2e0 + 8)) {
      lVar5 = (long)*(int *)(local_2e0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_2e0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fd87a:
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd8b0;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1006fd8b0:
  FUN_1006946e0(&local_2f0,0x69);
  lVar5 = FUN_100706960(param_1,&local_2f0);
  local_308 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_310,8);
  FUN_100560a10(&local_308,local_310);
  FUN_100708220(&local_300,&local_308,0);
  FUN_100707070(lVar5,&local_300);
  *(undefined4 *)(lVar5 + 8) = local_2f8;
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd99a;
    }
    iVar1 = *(int *)(local_300 + 0xc);
    if (iVar1 != *(int *)(local_300 + 8)) {
      lVar5 = (long)*(int *)(local_300 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_300 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_300);
  }
LAB_1006fd99a:
  QKeySequence::~QKeySequence(local_310);
  pDVar3 = local_308;
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fda0a;
    }
    iVar1 = *(int *)(local_308 + 0xc);
    if (iVar1 != *(int *)(local_308 + 8)) {
      lVar5 = (long)*(int *)(local_308 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_308 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fda0a:
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fda40;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1006fda40:
  FUN_1006946e0(&local_318,0x6a);
  lVar5 = FUN_100706960(param_1,&local_318);
  local_330 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_338,9);
  FUN_100560a10(&local_330,local_338);
  FUN_100708220(&local_328,&local_330,0);
  FUN_100707070(lVar5,&local_328);
  *(undefined4 *)(lVar5 + 8) = local_320;
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_31 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdb2a;
    }
    iVar1 = *(int *)(local_328 + 0xc);
    if (iVar1 != *(int *)(local_328 + 8)) {
      lVar5 = (long)*(int *)(local_328 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_328 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_328);
  }
LAB_1006fdb2a:
  QKeySequence::~QKeySequence(local_338);
  pDVar3 = local_330;
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_31 = *(int *)local_330 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdb9a;
    }
    iVar1 = *(int *)(local_330 + 0xc);
    if (iVar1 != *(int *)(local_330 + 8)) {
      lVar5 = (long)*(int *)(local_330 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_330 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fdb9a:
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdbd0;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1006fdbd0:
  FUN_1006946e0(&local_340,0x6b);
  lVar5 = FUN_100706960(param_1,&local_340);
  local_358 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_360,10);
  FUN_100560a10(&local_358,local_360);
  FUN_100708220(&local_350,&local_358,0);
  FUN_100707070(lVar5,&local_350);
  *(undefined4 *)(lVar5 + 8) = local_348;
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdcba;
    }
    iVar1 = *(int *)(local_350 + 0xc);
    if (iVar1 != *(int *)(local_350 + 8)) {
      lVar5 = (long)*(int *)(local_350 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_350 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_350);
  }
LAB_1006fdcba:
  QKeySequence::~QKeySequence(local_360);
  pDVar3 = local_358;
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_31 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdd2a;
    }
    iVar1 = *(int *)(local_358 + 0xc);
    if (iVar1 != *(int *)(local_358 + 8)) {
      lVar5 = (long)*(int *)(local_358 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_358 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fdd2a:
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_31 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdd60;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_1006fdd60:
  FUN_1006946e0(&local_368,0x6c);
  lVar5 = FUN_100706960(param_1,&local_368);
  local_380 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_388,0x1a);
  FUN_100560a10(&local_380,local_388);
  FUN_100708220(&local_378,&local_380,0);
  FUN_100707070(lVar5,&local_378);
  *(undefined4 *)(lVar5 + 8) = local_370;
  if (*(int *)local_378 != -1) {
    if (*(int *)local_378 != 0) {
      LOCK();
      *(int *)local_378 = *(int *)local_378 + -1;
      local_31 = *(int *)local_378 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fde4a;
    }
    iVar1 = *(int *)(local_378 + 0xc);
    if (iVar1 != *(int *)(local_378 + 8)) {
      lVar5 = (long)*(int *)(local_378 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_378 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_378);
  }
LAB_1006fde4a:
  QKeySequence::~QKeySequence(local_388);
  pDVar3 = local_380;
  if (*(int *)local_380 != -1) {
    if (*(int *)local_380 != 0) {
      LOCK();
      *(int *)local_380 = *(int *)local_380 + -1;
      local_31 = *(int *)local_380 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdeba;
    }
    iVar1 = *(int *)(local_380 + 0xc);
    if (iVar1 != *(int *)(local_380 + 8)) {
      lVar5 = (long)*(int *)(local_380 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_380 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fdeba:
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_31 = *(int *)local_368 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdef0;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_1006fdef0:
  FUN_1006946e0(&local_390,0x6e);
  lVar5 = FUN_100706960(param_1,&local_390);
  local_3a8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_3b0,0x14000020,0,0,0);
  FUN_100560a10(&local_3a8,local_3b0);
  FUN_100708220(&local_3a0,&local_3a8,0);
  FUN_100707070(lVar5,&local_3a0);
  *(undefined4 *)(lVar5 + 8) = local_398;
  if (*(int *)local_3a0 != -1) {
    if (*(int *)local_3a0 != 0) {
      LOCK();
      *(int *)local_3a0 = *(int *)local_3a0 + -1;
      local_31 = *(int *)local_3a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fdfda;
    }
    iVar1 = *(int *)(local_3a0 + 0xc);
    if (iVar1 != *(int *)(local_3a0 + 8)) {
      lVar5 = (long)*(int *)(local_3a0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3a0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_3a0);
  }
LAB_1006fdfda:
  QKeySequence::~QKeySequence(local_3b0);
  pDVar3 = local_3a8;
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      local_31 = *(int *)local_3a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe04a;
    }
    iVar1 = *(int *)(local_3a8 + 0xc);
    if (iVar1 != *(int *)(local_3a8 + 8)) {
      lVar5 = (long)*(int *)(local_3a8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3a8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe04a:
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe080;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_1006fe080:
  FUN_1006946e0(&local_3b8,0x77);
  lVar5 = FUN_100706960(param_1,&local_3b8);
  local_3d0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_3d8,0x14000030,0,0,0);
  FUN_100560a10(&local_3d0,local_3d8);
  FUN_100708220(&local_3c8,&local_3d0,2);
  FUN_100707070(lVar5,&local_3c8);
  *(undefined4 *)(lVar5 + 8) = local_3c0;
  if (*(int *)local_3c8 != -1) {
    if (*(int *)local_3c8 != 0) {
      LOCK();
      *(int *)local_3c8 = *(int *)local_3c8 + -1;
      local_31 = *(int *)local_3c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe16a;
    }
    iVar1 = *(int *)(local_3c8 + 0xc);
    if (iVar1 != *(int *)(local_3c8 + 8)) {
      lVar5 = (long)*(int *)(local_3c8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3c8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_3c8);
  }
LAB_1006fe16a:
  QKeySequence::~QKeySequence(local_3d8);
  pDVar3 = local_3d0;
  if (*(int *)local_3d0 != -1) {
    if (*(int *)local_3d0 != 0) {
      LOCK();
      *(int *)local_3d0 = *(int *)local_3d0 + -1;
      local_31 = *(int *)local_3d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe1da;
    }
    iVar1 = *(int *)(local_3d0 + 0xc);
    if (iVar1 != *(int *)(local_3d0 + 8)) {
      lVar5 = (long)*(int *)(local_3d0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3d0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe1da:
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_31 = *(int *)local_3b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe210;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_1006fe210:
  FUN_1006946e0(&local_3e0,0x71);
  lVar5 = FUN_100706960(param_1,&local_3e0);
  local_3f8 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_400,0x14000031,0,0,0);
  FUN_100560a10(&local_3f8,local_400);
  FUN_100708220(&local_3f0,&local_3f8,2);
  FUN_100707070(lVar5,&local_3f0);
  *(undefined4 *)(lVar5 + 8) = local_3e8;
  if (*(int *)local_3f0 != -1) {
    if (*(int *)local_3f0 != 0) {
      LOCK();
      *(int *)local_3f0 = *(int *)local_3f0 + -1;
      local_31 = *(int *)local_3f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe2fa;
    }
    iVar1 = *(int *)(local_3f0 + 0xc);
    if (iVar1 != *(int *)(local_3f0 + 8)) {
      lVar5 = (long)*(int *)(local_3f0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3f0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_3f0);
  }
LAB_1006fe2fa:
  QKeySequence::~QKeySequence(local_400);
  pDVar3 = local_3f8;
  if (*(int *)local_3f8 != -1) {
    if (*(int *)local_3f8 != 0) {
      LOCK();
      *(int *)local_3f8 = *(int *)local_3f8 + -1;
      local_31 = *(int *)local_3f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe36a;
    }
    iVar1 = *(int *)(local_3f8 + 0xc);
    if (iVar1 != *(int *)(local_3f8 + 8)) {
      lVar5 = (long)*(int *)(local_3f8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_3f8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe36a:
  if (*(int *)local_3e0 != -1) {
    if (*(int *)local_3e0 != 0) {
      LOCK();
      *(int *)local_3e0 = *(int *)local_3e0 + -1;
      local_31 = *(int *)local_3e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe3a0;
    }
    QArrayData::deallocate(local_3e0,2,8);
  }
LAB_1006fe3a0:
  FUN_1006946e0(&local_408,0x72);
  lVar5 = FUN_100706960(param_1,&local_408);
  local_420 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_428,0x14000032,0,0,0);
  FUN_100560a10(&local_420,local_428);
  FUN_100708220(&local_418,&local_420,2);
  FUN_100707070(lVar5,&local_418);
  *(undefined4 *)(lVar5 + 8) = local_410;
  if (*(int *)local_418 != -1) {
    if (*(int *)local_418 != 0) {
      LOCK();
      *(int *)local_418 = *(int *)local_418 + -1;
      local_31 = *(int *)local_418 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe48a;
    }
    iVar1 = *(int *)(local_418 + 0xc);
    if (iVar1 != *(int *)(local_418 + 8)) {
      lVar5 = (long)*(int *)(local_418 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_418 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_418);
  }
LAB_1006fe48a:
  QKeySequence::~QKeySequence(local_428);
  pDVar3 = local_420;
  if (*(int *)local_420 != -1) {
    if (*(int *)local_420 != 0) {
      LOCK();
      *(int *)local_420 = *(int *)local_420 + -1;
      local_31 = *(int *)local_420 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe4fa;
    }
    iVar1 = *(int *)(local_420 + 0xc);
    if (iVar1 != *(int *)(local_420 + 8)) {
      lVar5 = (long)*(int *)(local_420 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_420 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe4fa:
  if (*(int *)local_408 != -1) {
    if (*(int *)local_408 != 0) {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + -1;
      local_31 = *(int *)local_408 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe530;
    }
    QArrayData::deallocate(local_408,2,8);
  }
LAB_1006fe530:
  FUN_1006946e0(&local_430,0x73);
  lVar5 = FUN_100706960(param_1,&local_430);
  local_448 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_450,0x14000033,0,0,0);
  FUN_100560a10(&local_448,local_450);
  FUN_100708220(&local_440,&local_448,2);
  FUN_100707070(lVar5,&local_440);
  *(undefined4 *)(lVar5 + 8) = local_438;
  if (*(int *)local_440 != -1) {
    if (*(int *)local_440 != 0) {
      LOCK();
      *(int *)local_440 = *(int *)local_440 + -1;
      local_31 = *(int *)local_440 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe61a;
    }
    iVar1 = *(int *)(local_440 + 0xc);
    if (iVar1 != *(int *)(local_440 + 8)) {
      lVar5 = (long)*(int *)(local_440 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_440 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_440);
  }
LAB_1006fe61a:
  QKeySequence::~QKeySequence(local_450);
  pDVar3 = local_448;
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_31 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe68a;
    }
    iVar1 = *(int *)(local_448 + 0xc);
    if (iVar1 != *(int *)(local_448 + 8)) {
      lVar5 = (long)*(int *)(local_448 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_448 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe68a:
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 != 0) {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + -1;
      local_31 = *(int *)local_430 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe6c0;
    }
    QArrayData::deallocate(local_430,2,8);
  }
LAB_1006fe6c0:
  FUN_1006946e0(&local_458,0x74);
  lVar5 = FUN_100706960(param_1,&local_458);
  local_470 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_478,0x14000034,0,0,0);
  FUN_100560a10(&local_470,local_478);
  FUN_100708220(&local_468,&local_470,2);
  FUN_100707070(lVar5,&local_468);
  *(undefined4 *)(lVar5 + 8) = local_460;
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_31 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe7aa;
    }
    iVar1 = *(int *)(local_468 + 0xc);
    if (iVar1 != *(int *)(local_468 + 8)) {
      lVar5 = (long)*(int *)(local_468 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_468 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_468);
  }
LAB_1006fe7aa:
  QKeySequence::~QKeySequence(local_478);
  pDVar3 = local_470;
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_31 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe81a;
    }
    iVar1 = *(int *)(local_470 + 0xc);
    if (iVar1 != *(int *)(local_470 + 8)) {
      lVar5 = (long)*(int *)(local_470 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_470 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe81a:
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_31 = *(int *)local_458 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe850;
    }
    QArrayData::deallocate(local_458,2,8);
  }
LAB_1006fe850:
  FUN_1006946e0(&local_480,0x75);
  lVar5 = FUN_100706960(param_1,&local_480);
  local_498 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_4a0,0x14000035,0,0,0);
  FUN_100560a10(&local_498,local_4a0);
  FUN_100708220(&local_490,&local_498,2);
  FUN_100707070(lVar5,&local_490);
  *(undefined4 *)(lVar5 + 8) = local_488;
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe93a;
    }
    iVar1 = *(int *)(local_490 + 0xc);
    if (iVar1 != *(int *)(local_490 + 8)) {
      lVar5 = (long)*(int *)(local_490 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_490 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_490);
  }
LAB_1006fe93a:
  QKeySequence::~QKeySequence(local_4a0);
  pDVar3 = local_498;
  if (*(int *)local_498 != -1) {
    if (*(int *)local_498 != 0) {
      LOCK();
      *(int *)local_498 = *(int *)local_498 + -1;
      local_31 = *(int *)local_498 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe9aa;
    }
    iVar1 = *(int *)(local_498 + 0xc);
    if (iVar1 != *(int *)(local_498 + 8)) {
      lVar5 = (long)*(int *)(local_498 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_498 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006fe9aa:
  if (*(int *)local_480 != -1) {
    if (*(int *)local_480 != 0) {
      LOCK();
      *(int *)local_480 = *(int *)local_480 + -1;
      local_31 = *(int *)local_480 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fe9e0;
    }
    QArrayData::deallocate(local_480,2,8);
  }
LAB_1006fe9e0:
  FUN_1006946e0(&local_4a8,0x76);
  lVar5 = FUN_100706960(param_1,&local_4a8);
  local_4c0 = (Data *)puVar2;
  QKeySequence::QKeySequence(local_4c8,0x14000036,0,0,0);
  FUN_100560a10(&local_4c0,local_4c8);
  FUN_100708220(&local_4b8,&local_4c0,2);
  FUN_100707070(lVar5,&local_4b8);
  *(undefined4 *)(lVar5 + 8) = local_4b0;
  if (*(int *)local_4b8 != -1) {
    if (*(int *)local_4b8 != 0) {
      LOCK();
      *(int *)local_4b8 = *(int *)local_4b8 + -1;
      local_31 = *(int *)local_4b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006feaca;
    }
    iVar1 = *(int *)(local_4b8 + 0xc);
    if (iVar1 != *(int *)(local_4b8 + 8)) {
      lVar5 = (long)*(int *)(local_4b8 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_4b8 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_4b8);
  }
LAB_1006feaca:
  QKeySequence::~QKeySequence(local_4c8);
  pDVar3 = local_4c0;
  if (*(int *)local_4c0 != -1) {
    if (*(int *)local_4c0 != 0) {
      LOCK();
      *(int *)local_4c0 = *(int *)local_4c0 + -1;
      local_31 = *(int *)local_4c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006feb3a;
    }
    iVar1 = *(int *)(local_4c0 + 0xc);
    if (iVar1 != *(int *)(local_4c0 + 8)) {
      lVar5 = (long)*(int *)(local_4c0 + 8) * 8 + (long)iVar1 * -8;
      pQVar6 = (QKeySequence *)(local_4c0 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006feb3a:
  if (*(int *)local_4a8 != -1) {
    if (*(int *)local_4a8 != 0) {
      LOCK();
      *(int *)local_4a8 = *(int *)local_4a8 + -1;
      UNLOCK();
      if (*(int *)local_4a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_4a8,2,8);
  }
  return;
}

