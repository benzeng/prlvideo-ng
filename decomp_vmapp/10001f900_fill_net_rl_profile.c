
/* CVmProfileHelper::fill_net_rl_profile(_PRL_VIRTUAL_NET_ADAPTER_PROFILE, CNetLinkRateLimit&) */

void CVmProfileHelper::fill_net_rl_profile(uint param_1,long *param_2)

{
  QArrayData *pQVar1;
  code *pcVar2;
  undefined *puVar3;
  QMapNodeBase *pQVar4;
  QMapNodeBase *pQVar5;
  QVariant local_3e8 [16];
  QArrayData *local_3d8;
  QVariant local_3d0 [16];
  QVariant local_3c0 [16];
  QVariant local_3b0 [16];
  QVariant local_3a0 [16];
  QVariant local_390 [16];
  QVariant local_380 [16];
  QVariant local_370 [16];
  undefined *local_360;
  QArrayData *local_358;
  QVariant local_350 [16];
  QVariant local_340 [16];
  QVariant local_330 [16];
  QVariant local_320 [16];
  QVariant local_310 [16];
  QVariant local_300 [16];
  undefined *local_2f0;
  QArrayData *local_2e8;
  QVariant local_2e0 [16];
  QVariant local_2d0 [16];
  QVariant local_2c0 [16];
  QVariant local_2b0 [16];
  QVariant local_2a0 [16];
  QVariant local_290 [16];
  undefined *local_280;
  QArrayData *local_278;
  QVariant local_270 [16];
  QVariant local_260 [16];
  QVariant local_250 [16];
  QVariant local_240 [16];
  QVariant local_230 [16];
  QVariant local_220 [16];
  undefined *local_210;
  QArrayData *local_208;
  QVariant local_200 [16];
  QVariant local_1f0 [16];
  QVariant local_1e0 [16];
  QVariant local_1d0 [16];
  QVariant local_1c0 [16];
  QVariant local_1b0 [16];
  undefined *local_1a0;
  QArrayData *local_198;
  QVariant local_190 [16];
  QVariant local_180 [16];
  QVariant local_170 [16];
  QVariant local_160 [16];
  QVariant local_150 [16];
  QVariant local_140 [16];
  undefined *local_130;
  QArrayData *local_128;
  QVariant local_120 [16];
  QVariant local_110 [16];
  QVariant local_100 [16];
  QVariant local_f0 [16];
  QVariant local_e0 [16];
  QVariant local_d0 [16];
  undefined *local_c0;
  QArrayData *local_b8;
  QVariant local_b0 [16];
  QVariant local_a0 [16];
  QVariant local_90 [16];
  QVariant local_80 [16];
  QVariant local_70 [16];
  QVariant local_60 [16];
  undefined *local_50;
  QArrayData *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  pQVar5 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  local_40 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  if (5 < param_1) {
    CNetLinkRateLimit::setEnable(SUB81(param_2,0));
    goto LAB_100020723;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("RxBps",5);
  puVar3 = PTR_shared_null_100ba2188;
  local_50 = PTR_shared_null_100ba2188;
  QVariant::QVariant(local_60,0);
  FUN_1000225a0(&local_50,local_60);
  QVariant::QVariant(local_70,0xc3000);
  FUN_1000225a0(&local_50,local_70);
  QVariant::QVariant(local_80,0x200000);
  FUN_1000225a0(&local_50,local_80);
  QVariant::QVariant(local_90,0x3c000);
  FUN_1000225a0(&local_50,local_90);
  QVariant::QVariant(local_a0,0x100000);
  FUN_1000225a0(&local_50,local_a0);
  QVariant::QVariant(local_b0,0x2800000);
  FUN_1000225a0(&local_50,local_b0);
  FUN_100022340(&local_40,&local_48,&local_50);
  QVariant::~QVariant(local_b0);
  QVariant::~QVariant(local_a0);
  QVariant::~QVariant(local_90);
  QVariant::~QVariant(local_80);
  QVariant::~QVariant(local_70);
  QVariant::~QVariant(local_60);
  FUN_100022290(&local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001fa9b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10001fa9b:
  local_b8 = (QArrayData *)QString::fromAscii_helper("GUIRxScale",10);
  local_c0 = puVar3;
  QVariant::QVariant(local_d0,0);
  FUN_1000225a0(&local_c0,local_d0);
  QVariant::QVariant(local_e0,1);
  FUN_1000225a0(&local_c0,local_e0);
  QVariant::QVariant(local_f0,2);
  FUN_1000225a0(&local_c0,local_f0);
  QVariant::QVariant(local_100,1);
  FUN_1000225a0(&local_c0,local_100);
  QVariant::QVariant(local_110,2);
  FUN_1000225a0(&local_c0,local_110);
  QVariant::QVariant(local_120,2);
  FUN_1000225a0(&local_c0,local_120);
  FUN_100022340(&local_40,&local_b8,&local_c0);
  QVariant::~QVariant(local_120);
  QVariant::~QVariant(local_110);
  QVariant::~QVariant(local_100);
  QVariant::~QVariant(local_f0);
  QVariant::~QVariant(local_e0);
  QVariant::~QVariant(local_d0);
  FUN_100022290(&local_c0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001fc30;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10001fc30:
  local_128 = (QArrayData *)QString::fromAscii_helper("RxLossPpm",9);
  local_130 = puVar3;
  QVariant::QVariant(local_140,1000000);
  FUN_1000225a0(&local_130);
  QVariant::QVariant(local_150,0);
  FUN_1000225a0(&local_130);
  QVariant::QVariant(local_160,0);
  FUN_1000225a0(&local_130);
  QVariant::QVariant(local_170,0);
  FUN_1000225a0(&local_130,local_170);
  QVariant::QVariant(local_180,100000);
  FUN_1000225a0(&local_130);
  QVariant::QVariant(local_190,0);
  FUN_1000225a0(&local_130,local_190);
  FUN_100022340(&local_40,&local_128,&local_130);
  QVariant::~QVariant(local_190);
  QVariant::~QVariant(local_180);
  QVariant::~QVariant(local_170);
  QVariant::~QVariant(local_160);
  QVariant::~QVariant(local_150);
  QVariant::~QVariant(local_140);
  FUN_100022290(&local_130);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001fdbc;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10001fdbc:
  local_198 = (QArrayData *)QString::fromAscii_helper("RxDelayMs",9);
  local_1a0 = puVar3;
  QVariant::QVariant(local_1b0,0);
  FUN_1000225a0(&local_1a0,local_1b0);
  QVariant::QVariant(local_1c0,100);
  FUN_1000225a0(&local_1a0,local_1c0);
  QVariant::QVariant(local_1d0,5);
  FUN_1000225a0(&local_1a0,local_1d0);
  QVariant::QVariant(local_1e0,400);
  FUN_1000225a0(&local_1a0,local_1e0);
  QVariant::QVariant(local_1f0,500);
  FUN_1000225a0(&local_1a0,local_1f0);
  QVariant::QVariant(local_200,1);
  FUN_1000225a0(&local_1a0,local_200);
  FUN_100022340(&local_40,&local_198,&local_1a0);
  QVariant::~QVariant(local_200);
  QVariant::~QVariant(local_1f0);
  QVariant::~QVariant(local_1e0);
  QVariant::~QVariant(local_1d0);
  QVariant::~QVariant(local_1c0);
  QVariant::~QVariant(local_1b0);
  FUN_100022290(&local_1a0);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001ff51;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10001ff51:
  local_208 = (QArrayData *)QString::fromAscii_helper("TxBps",5);
  local_210 = puVar3;
  QVariant::QVariant(local_220,0);
  FUN_1000225a0(&local_210,local_220);
  QVariant::QVariant(local_230,0x52800);
  FUN_1000225a0(&local_210,local_230);
  QVariant::QVariant(local_240,0x40000);
  FUN_1000225a0(&local_210,local_240);
  QVariant::QVariant(local_250,0x32000);
  FUN_1000225a0(&local_210,local_250);
  QVariant::QVariant(local_260,0x100000);
  FUN_1000225a0(&local_210,local_260);
  QVariant::QVariant(local_270,0x2100000);
  FUN_1000225a0(&local_210,local_270);
  FUN_100022340(&local_40,&local_208,&local_210);
  QVariant::~QVariant(local_270);
  QVariant::~QVariant(local_260);
  QVariant::~QVariant(local_250);
  QVariant::~QVariant(local_240);
  QVariant::~QVariant(local_230);
  QVariant::~QVariant(local_220);
  FUN_100022290(&local_210);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000200e6;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1000200e6:
  local_278 = (QArrayData *)QString::fromAscii_helper("GUITxScale",10);
  local_280 = puVar3;
  QVariant::QVariant(local_290,0);
  FUN_1000225a0(&local_280,local_290);
  QVariant::QVariant(local_2a0,1);
  FUN_1000225a0(&local_280,local_2a0);
  QVariant::QVariant(local_2b0,1);
  FUN_1000225a0(&local_280,local_2b0);
  QVariant::QVariant(local_2c0,1);
  FUN_1000225a0(&local_280,local_2c0);
  QVariant::QVariant(local_2d0,2);
  FUN_1000225a0(&local_280,local_2d0);
  QVariant::QVariant(local_2e0,2);
  FUN_1000225a0(&local_280,local_2e0);
  FUN_100022340(&local_40,&local_278,&local_280);
  QVariant::~QVariant(local_2e0);
  QVariant::~QVariant(local_2d0);
  QVariant::~QVariant(local_2c0);
  QVariant::~QVariant(local_2b0);
  QVariant::~QVariant(local_2a0);
  QVariant::~QVariant(local_290);
  FUN_100022290(&local_280);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002027b;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10002027b:
  local_2e8 = (QArrayData *)QString::fromAscii_helper("TxLossPpm",9);
  local_2f0 = puVar3;
  QVariant::QVariant(local_300,1000000);
  FUN_1000225a0(&local_2f0);
  QVariant::QVariant(local_310,0);
  FUN_1000225a0(&local_2f0);
  QVariant::QVariant(local_320,0);
  FUN_1000225a0(&local_2f0);
  QVariant::QVariant(local_330,0);
  FUN_1000225a0(&local_2f0,local_330);
  QVariant::QVariant(local_340,100000);
  FUN_1000225a0(&local_2f0);
  QVariant::QVariant(local_350,0);
  FUN_1000225a0(&local_2f0,local_350);
  FUN_100022340(&local_40,&local_2e8,&local_2f0);
  QVariant::~QVariant(local_350);
  QVariant::~QVariant(local_340);
  QVariant::~QVariant(local_330);
  QVariant::~QVariant(local_320);
  QVariant::~QVariant(local_310);
  QVariant::~QVariant(local_300);
  FUN_100022290(&local_2f0);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100020407;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_100020407:
  local_358 = (QArrayData *)QString::fromAscii_helper("TxDelayMs",9);
  local_360 = puVar3;
  QVariant::QVariant(local_370,0);
  FUN_1000225a0(&local_360,local_370);
  QVariant::QVariant(local_380,100);
  FUN_1000225a0(&local_360,local_380);
  QVariant::QVariant(local_390,5);
  FUN_1000225a0(&local_360,local_390);
  QVariant::QVariant(local_3a0,0x1b8);
  FUN_1000225a0(&local_360,local_3a0);
  QVariant::QVariant(local_3b0,500);
  FUN_1000225a0(&local_360,local_3b0);
  QVariant::QVariant(local_3c0,1);
  FUN_1000225a0(&local_360,local_3c0);
  FUN_100022340(&local_40,&local_358,&local_360);
  QVariant::~QVariant(local_3c0);
  QVariant::~QVariant(local_3b0);
  QVariant::~QVariant(local_3a0);
  QVariant::~QVariant(local_390);
  QVariant::~QVariant(local_380);
  QVariant::~QVariant(local_370);
  FUN_100022290(&local_360);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_31 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002059c;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_10002059c:
  if (1 < *(uint *)local_40) {
    FUN_100022a90(&local_40);
  }
  if (*(long *)(local_40 + 0x10) == 0) {
    pQVar4 = local_40 + 8;
  }
  else {
    pQVar4 = *(QMapNodeBase **)(local_40 + 0x20);
  }
  pQVar5 = local_40;
  while( true ) {
    if (1 < *(uint *)pQVar5) {
      FUN_100022a90(&local_40);
      pQVar5 = local_40;
    }
    if (pQVar4 == pQVar5 + 8) break;
    pQVar1 = *(QArrayData **)(pQVar4 + 0x18);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QVariant::QVariant(local_3d0,
                       *(QVariant **)
                        (*(long *)(pQVar4 + 0x20) + 0x10 +
                        ((long)*(int *)(*(long *)(pQVar4 + 0x20) + 8) + (long)(int)param_1) * 8));
    pcVar2 = *(code **)(*param_2 + 0x78);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_3d8 = pQVar1;
    QVariant::QVariant(local_3e8,local_3d0);
    (*pcVar2)(param_2,&local_3d8,local_3e8,0);
    QVariant::~QVariant(local_3e8);
    if (*(int *)local_3d8 != -1) {
      if (*(int *)local_3d8 != 0) {
        LOCK();
        *(int *)local_3d8 = *(int *)local_3d8 + -1;
        local_31 = *(int *)local_3d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000206cb;
      }
      QArrayData::deallocate(local_3d8,2,8);
    }
LAB_1000206cb:
    QVariant::~QVariant(local_3d0);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000205e0;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1000205e0:
    pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
LAB_100020723:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100022940();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
  return;
}

