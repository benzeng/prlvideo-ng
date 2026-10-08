
void FUN_100617790(long param_1,long *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  QVariant *pQVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  Data_conflict *pDVar17;
  long lVar18;
  bool bVar19;
  undefined1 local_630 [8];
  _func_void_Node_ptr *local_628;
  QArrayData *local_620;
  undefined1 local_618 [8];
  _func_void_Node_ptr *local_610;
  QArrayData *local_608;
  QArrayData *local_600;
  Data_conflict local_5f8;
  undefined4 local_5f0;
  QString local_5e8;
  QVariant local_5e0;
  Data_conflict local_5d0;
  undefined4 local_5c8;
  QString local_5c0;
  QMapNodeBase *local_5b8;
  QVariant local_5b0;
  QMapNodeBase *local_5a0;
  QArrayData *local_598;
  QVariant local_590;
  QArrayData *local_580;
  QArrayData *local_578;
  QArrayData *local_570;
  QString local_568;
  QVariant local_560;
  undefined4 local_54c;
  QArrayData *local_548;
  QArrayData *local_540;
  QArrayData *local_538;
  QVariant local_530;
  undefined4 local_51c;
  Data_conflict local_518;
  undefined4 local_510;
  QDateTime local_508;
  QArrayData *local_500;
  QString local_4f8;
  QDateTime local_4f0;
  QArrayData *local_4e8;
  QTime local_4e0 [8];
  undefined8 local_4d8;
  undefined4 local_4cc;
  undefined8 local_4c8;
  QDateTime local_4c0;
  QVariant local_4b8;
  undefined4 local_4a4;
  undefined8 local_4a0;
  undefined4 local_494;
  undefined8 local_490;
  QDateTime local_488;
  QVariant local_480;
  undefined4 local_46c;
  undefined8 local_468;
  QDateTime local_460;
  QVariant local_458;
  undefined4 local_444;
  QString local_440;
  QVariant local_438;
  undefined4 local_424;
  QArrayData *local_420;
  QString local_418;
  QVariant local_410;
  undefined4 local_3fc;
  QVariant local_3f8;
  undefined4 local_3e4;
  undefined1 local_3e0 [8];
  QVariant local_3d8;
  undefined4 local_3c4;
  QDateTime local_3c0;
  QVariant local_3b8;
  undefined4 local_3a4;
  QDateTime local_3a0;
  QVariant local_398;
  undefined4 local_384;
  undefined1 local_380 [8];
  QVariant local_378;
  undefined4 local_364;
  QVariant local_360;
  undefined4 local_34c;
  QVariant local_348;
  undefined4 local_334;
  QArrayData *local_330;
  QArrayData *local_328;
  QVariant local_320;
  undefined4 local_30c;
  QArrayData *local_308;
  undefined8 local_300;
  QVariant local_2f8;
  undefined4 local_2e4;
  QString local_2e0;
  QVariant local_2d8;
  undefined4 local_2c4;
  QString local_2c0;
  QVariant local_2b8;
  undefined4 local_2a4;
  QString local_2a0;
  QVariant local_298;
  undefined4 local_284;
  QString local_280;
  QVariant local_278;
  undefined4 local_264;
  QString local_260;
  QVariant local_258;
  undefined4 local_244;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QString local_220;
  QDateTime local_218;
  QVariant local_210;
  undefined4 local_1fc;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QVariant local_1d8;
  undefined4 local_1c4;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  long local_1a8;
  QArrayData *local_1a0;
  CVmEvent local_198 [224];
  QEvent local_b8 [32];
  Data_conflict local_98;
  undefined4 local_90;
  QVariant local_88;
  undefined4 local_78;
  undefined4 local_74;
  QArrayData *local_70;
  undefined1 local_68 [24];
  _func_void_Node_ptr *local_50;
  undefined1 local_48 [8];
  _func_void_Node_ptr *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  puVar2 = (undefined4 *)(param_1 + 0x30);
  lVar3 = param_1 + 0x20;
  FUN_10061c850(local_48,puVar2,lVar3);
  plVar4 = (long *)(param_1 + 0x28);
  if (plVar4 != param_2) {
    if (*plVar4 != 0) {
      _PrlHandle_Free();
    }
    lVar12 = *param_2;
    *plVar4 = lVar12;
    if (lVar12 != 0) {
      _PrlHandle_AddRef();
    }
  }
  *puVar2 = 0;
  FUN_100616850(&local_50);
  FUN_10061c780(lVar3);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617832;
    }
    QHashData::free_helper(local_50);
  }
LAB_100617832:
  local_70 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b5f7a0(local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617881;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100617881:
  local_74 = 0x80011000;
  local_78 = 0;
  pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_78);
  iVar7 = FUN_10061aab0(param_1);
  QVariant::QVariant(&local_88,iVar7);
  QVariant::operator=(pQVar11,&local_88);
  QVariant::~QVariant(&local_88);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if ((*(int *)((long)puVar5 + 0x14) != 0) && (*(uint *)(puVar5 + 4) != 0)) {
    for (puVar16 = *(undefined8 **)
                    (puVar5[1] +
                    ((ulong)*(uint *)((long)puVar5 + 0x24) % (ulong)*(uint *)(puVar5 + 4)) * 8);
        puVar16 != puVar5; puVar16 = (undefined8 *)*puVar16) {
      if ((*(uint *)(puVar16 + 1) == *(uint *)((long)puVar5 + 0x24)) &&
         (*(int *)((long)puVar16 + 0xc) == 0)) {
        if (puVar16 != puVar5) {
          QVariant::QVariant((QVariant *)&local_98,(QVariant *)(puVar16 + 2));
          goto LAB_10061792f;
        }
        break;
      }
    }
  }
  local_90 = 0x80000000;
  local_98.field7 = 0;
LAB_10061792f:
  iVar7 = QVariant::toInt((bool *)&local_98.field0);
  uVar14 = *(uint *)(param_1 + 0x30);
  if ((uVar14 & 2) == 0) {
    if (iVar7 == 0) {
      uVar14 = uVar14 | 2;
LAB_100617957:
      *(uint *)(param_1 + 0x30) = uVar14;
    }
  }
  else if (iVar7 != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    goto LAB_100617957;
  }
  QVariant::~QVariant((QVariant *)&local_98);
  local_1a8 = *param_2;
  uVar14 = *(uint *)(param_1 + 0x30);
  if ((uVar14 & 1) == 0) {
    if (local_1a8 != 0) {
      *(uint *)(param_1 + 0x30) = uVar14 | 1;
LAB_100617989:
      _PrlHandle_AddRef();
    }
  }
  else {
    if (local_1a8 != 0) goto LAB_100617989;
    *(uint *)(param_1 + 0x30) = uVar14 & 0xfffffffe;
  }
  SdkUtils::getParamAsString(&local_1a0,&local_1a8);
  CVmEvent::CVmEvent(local_198,(QTypedArrayData<unsigned_short> *)&local_1a0);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617a02;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100617a02:
  if (local_1a8 != 0) {
    _PrlHandle_Free();
  }
  local_1b0 = (QArrayData *)QString::fromAscii_helper("license_deferred_activation",0x1b);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617a77;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100617a77:
  if (lVar12 != 0) {
    CVmEventParameter::getParamValue();
    iVar7 = QString::toInt((bool *)&local_1b8,0);
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 8) == 0) {
      if (iVar7 != 0) {
        uVar14 = uVar14 | 8;
LAB_100617ab8:
        *(uint *)(param_1 + 0x30) = uVar14;
      }
    }
    else if (iVar7 == 0) {
      uVar14 = uVar14 & 0xfffffff7;
      goto LAB_100617ab8;
    }
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        local_31 = *(int *)local_1b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617af3;
      }
      QArrayData::deallocate(local_1b8,2,8);
    }
  }
LAB_100617af3:
  local_1c0 = (QArrayData *)QString::fromAscii_helper("license_signin_required",0x17);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617b57;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100617b57:
  if (lVar12 != 0) {
    local_1c4 = 0xf;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_1c4);
    CVmEventParameter::getParamValue();
    iVar7 = QString::toInt((bool *)&local_1e0,0);
    QVariant::QVariant(&local_1d8,0 < iVar7);
    QVariant::operator=(pQVar11,&local_1d8);
    QVariant::~QVariant(&local_1d8);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617c03;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
  }
LAB_100617c03:
  local_1e8 = (QArrayData *)QString::fromAscii_helper("license_is_upgradable",0x15);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617c67;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100617c67:
  if (lVar12 != 0) {
    CVmEventParameter::getParamValue();
    iVar7 = QString::toInt((bool *)&local_1f0,0);
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 0x800) == 0) {
      if (iVar7 != 0) {
        uVar14 = uVar14 | 0x800;
LAB_100617cae:
        *(uint *)(param_1 + 0x30) = uVar14;
      }
    }
    else if (iVar7 == 0) {
      uVar14 = uVar14 & 0xfffff7ff;
      goto LAB_100617cae;
    }
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617ce9;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
  }
LAB_100617ce9:
  local_1f8 = (QArrayData *)QString::fromAscii_helper("license_active_key_date",0x17);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617d4d;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100617d4d:
  if (lVar12 != 0) {
    local_1fc = 0x11;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_1fc);
    CVmEventParameter::getParamValue();
    local_228 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::fromString((QString *)&local_218,&local_220);
    QVariant::QVariant(&local_210,&local_218);
    QVariant::operator=(pQVar11,&local_210);
    QVariant::~QVariant(&local_210);
    QDateTime::~QDateTime(&local_218);
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617e23;
      }
      QArrayData::deallocate(local_228,2,8);
    }
LAB_100617e23:
    if (*(int *)local_220.field0_0x0 != -1) {
      if (*(int *)local_220.field0_0x0 != 0) {
        LOCK();
        *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
        local_31 = *(int *)local_220.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617e59;
      }
      QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
    }
  }
LAB_100617e59:
  local_230 = (QArrayData *)QString::fromAscii_helper("license_account_is_confirmed",0x1c);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617ebd;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100617ebd:
  if (lVar12 != 0) {
    CVmEventParameter::getParamValue();
    iVar7 = QString::toInt((bool *)&local_238,0);
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 0x20000) == 0) {
      if (0 < iVar7) {
        uVar14 = uVar14 | 0x20000;
LAB_100617f0b:
        *(uint *)(param_1 + 0x30) = uVar14;
      }
    }
    else if (iVar7 < 1) {
      uVar14 = uVar14 & 0xfffdffff;
      goto LAB_100617f0b;
    }
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_31 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100617f46;
      }
      QArrayData::deallocate(local_238,2,8);
    }
  }
LAB_100617f46:
  local_240 = (QArrayData *)QString::fromAscii_helper("license_account_email",0x15);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617faa;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_100617faa:
  if (lVar12 != 0) {
    local_244 = 0x12;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_244);
    CVmEventParameter::getParamValue();
    QVariant::QVariant(&local_258,&local_260);
    QVariant::operator=(pQVar11,&local_258);
    QVariant::~QVariant(&local_258);
    if (*(int *)local_260.field0_0x0 != -1) {
      if (*(int *)local_260.field0_0x0 != 0) {
        LOCK();
        *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
        local_31 = *(int *)local_260.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100618042;
      }
      QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
    }
  }
LAB_100618042:
  iVar7 = FUN_10061aab0(param_1);
  if ((iVar7 != -0x7ffef000) && (cVar6 = FUN_100616ea0(param_1,&local_74,local_68), cVar6 != '\0'))
  {
    lVar12 = FUN_100b5ffe0(local_68);
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 0x2000) == 0) {
      if (lVar12 != 0) {
        uVar14 = uVar14 | 0x2000;
LAB_100618098:
        *(uint *)(param_1 + 0x30) = uVar14;
      }
    }
    else if (lVar12 == 0) {
      uVar14 = uVar14 & 0xffffdfff;
      goto LAB_100618098;
    }
    lVar12 = FUN_100b5ffd0(local_68);
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 0x4000) == 0) {
      if (lVar12 != 0) {
        uVar14 = uVar14 | 0x4000;
LAB_1006180c8:
        *(uint *)(param_1 + 0x30) = uVar14;
      }
    }
    else if (lVar12 == 0) {
      uVar14 = uVar14 & 0xffffbfff;
      goto LAB_1006180c8;
    }
    local_264 = 1;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_264);
    FUN_10061ac60(&local_280,param_1);
    QVariant::QVariant(&local_278,&local_280);
    QVariant::operator=(pQVar11,&local_278);
    QVariant::~QVariant(&local_278);
    if (*(int *)local_280.field0_0x0 != -1) {
      if (*(int *)local_280.field0_0x0 != 0) {
        LOCK();
        *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
        local_31 = *(int *)local_280.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061815c;
      }
      QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
    }
LAB_10061815c:
    local_284 = 2;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_284);
    FUN_10061ae50(&local_2a0,param_1);
    QVariant::QVariant(&local_298,&local_2a0);
    QVariant::operator=(pQVar11,&local_298);
    QVariant::~QVariant(&local_298);
    if (*(int *)local_2a0.field0_0x0 != -1) {
      if (*(int *)local_2a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
        local_31 = *(int *)local_2a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006181eb;
      }
      QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
    }
LAB_1006181eb:
    local_2a4 = 3;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_2a4);
    FUN_10061b060(&local_2c0,param_1);
    QVariant::QVariant(&local_2b8,&local_2c0);
    QVariant::operator=(pQVar11,&local_2b8);
    QVariant::~QVariant(&local_2b8);
    if (*(int *)local_2c0.field0_0x0 != -1) {
      if (*(int *)local_2c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
        local_31 = *(int *)local_2c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061827a;
      }
      QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
    }
LAB_10061827a:
    local_2c4 = 4;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_2c4);
    local_2e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_38 = 0x80011000;
    FUN_100616a30(param_1,&local_38,&local_2e0);
    QVariant::QVariant(&local_2d8,&local_2e0);
    QVariant::operator=(pQVar11,&local_2d8);
    QVariant::~QVariant(&local_2d8);
    if (*(int *)local_2e0.field0_0x0 != -1) {
      if (*(int *)local_2e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
        local_31 = *(int *)local_2e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100618322;
      }
      QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
    }
LAB_100618322:
    local_2e4 = 6;
    pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_2e4);
    local_300 = FUN_10061b3c0(param_1,local_68);
    QVariant::QVariant(&local_2f8,(QDate *)&local_300);
    QVariant::operator=(pQVar11,&local_2f8);
    QVariant::~QVariant(&local_2f8);
    local_308 = (QArrayData *)QString::fromAscii_helper("license_edition",0xf);
    lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
    if (*(int *)local_308 != -1) {
      if (*(int *)local_308 != 0) {
        LOCK();
        *(int *)local_308 = *(int *)local_308 + -1;
        local_31 = *(int *)local_308 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006183e3;
      }
      QArrayData::deallocate(local_308,2,8);
    }
LAB_1006183e3:
    if (lVar12 != 0) {
      local_30c = 0x13;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_30c);
      CVmEventParameter::getParamValue();
      iVar7 = QString::toInt((bool *)&local_328,0);
      QVariant::QVariant(&local_320,iVar7);
      QVariant::operator=(pQVar11,&local_320);
      QVariant::~QVariant(&local_320);
      if (*(int *)local_328 != -1) {
        if (*(int *)local_328 != 0) {
          LOCK();
          *(int *)local_328 = *(int *)local_328 + -1;
          local_31 = *(int *)local_328 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100618489;
        }
        QArrayData::deallocate(local_328,2,8);
      }
LAB_100618489:
      CVmEventParameter::getParamValue();
      iVar7 = QString::toInt((bool *)&local_330,0);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x10000) == 0) {
        if (iVar7 == 3) {
          uVar14 = uVar14 | 0x10000;
LAB_1006184d0:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 != 3) {
        uVar14 = uVar14 & 0xfffeffff;
        goto LAB_1006184d0;
      }
      if (*(int *)local_330 != -1) {
        if (*(int *)local_330 != 0) {
          LOCK();
          *(int *)local_330 = *(int *)local_330 + -1;
          local_31 = *(int *)local_330 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061850b;
        }
        QArrayData::deallocate(local_330,2,8);
      }
    }
LAB_10061850b:
    uVar14 = *(uint *)(param_1 + 0x30);
    if ((uVar14 & 0x2000) != 0) {
      uVar13 = FUN_100b5ffe0(local_68);
      iVar7 = FUN_100b66f20(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x10) == 0) {
        if (iVar7 != 0) {
          uVar14 = uVar14 | 0x10;
LAB_100618544:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 == 0) {
        uVar14 = uVar14 & 0xffffffef;
        goto LAB_100618544;
      }
      local_334 = 7;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_334);
      uVar13 = FUN_100b5ffe0(local_68);
      uVar14 = FUN_100b67d10(uVar13);
      QVariant::QVariant(&local_348,uVar14);
      QVariant::operator=(pQVar11,&local_348);
      QVariant::~QVariant(&local_348);
      uVar13 = FUN_100b5ffe0(local_68);
      iVar7 = FUN_100b67c40(uVar13);
      if (iVar7 == 0) {
        uVar13 = FUN_100b5ffe0(local_68);
        iVar7 = FUN_100b66f20(uVar13);
        bVar19 = iVar7 == 0;
      }
      else {
        bVar19 = false;
      }
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x20) == 0) {
        if (bVar19) {
          uVar14 = uVar14 | 0x20;
LAB_1006185e7:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (!bVar19) {
        uVar14 = uVar14 & 0xffffffdf;
        goto LAB_1006185e7;
      }
      local_34c = 10;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_34c);
      uVar13 = FUN_100b5ffe0(local_68);
      uVar14 = FUN_100b67220(uVar13);
      QVariant::QVariant(&local_360,uVar14);
      QVariant::operator=(pQVar11,&local_360);
      QVariant::~QVariant(&local_360);
      uVar13 = FUN_100b5ffe0(local_68);
      iVar7 = FUN_100b67c40(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 4) == 0) {
        if (iVar7 != 0) {
          uVar14 = uVar14 | 4;
LAB_10061866d:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 == 0) {
        uVar14 = uVar14 & 0xfffffffb;
        goto LAB_10061866d;
      }
      uVar13 = FUN_100b5ffe0(local_68);
      iVar7 = FUN_100b670d0(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x40) == 0) {
        if (iVar7 == 0) {
          uVar14 = uVar14 | 0x40;
LAB_10061869d:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 != 0) {
        uVar14 = uVar14 & 0xffffffbf;
        goto LAB_10061869d;
      }
      local_364 = 5;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_364);
      uVar13 = FUN_100b5ffe0(local_68);
      FUN_100b74680(local_380,uVar13);
      if (DAT_1022743a0 == 0) {
        DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_378,DAT_1022743a0,local_380,0);
      QVariant::operator=(pQVar11,&local_378);
      QVariant::~QVariant(&local_378);
      FUN_1001e3400(local_380);
      local_384 = 8;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_384);
      uVar13 = FUN_100b5ffe0(local_68);
      FUN_100b67370(&local_3a0,uVar13);
      QVariant::QVariant(&local_398,&local_3a0);
      QVariant::operator=(pQVar11,&local_398);
      QVariant::~QVariant(&local_398);
      QDateTime::~QDateTime(&local_3a0);
      local_3a4 = 9;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_3a4);
      uVar13 = FUN_100b5ffe0(local_68);
      FUN_100b67470(&local_3c0,uVar13);
      QVariant::QVariant(&local_3b8,&local_3c0);
      QVariant::operator=(pQVar11,&local_3b8);
      QVariant::~QVariant(&local_3b8);
      QDateTime::~QDateTime(&local_3c0);
      uVar13 = FUN_100b5ffe0(local_68);
      iVar7 = FUN_100b67e60(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x80) == 0) {
        if (iVar7 != 0) {
          uVar14 = uVar14 | 0x80;
LAB_100618849:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 == 0) {
        uVar14 = uVar14 & 0xffffff7f;
        goto LAB_100618849;
      }
    }
    if ((uVar14 & 0x4000) != 0) {
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7fb80(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x80000) == 0) {
        if (iVar7 == 7) {
          uVar14 = uVar14 | 0x80000;
LAB_10061888d:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 != 7) {
        uVar14 = uVar14 & 0xfff7ffff;
        goto LAB_10061888d;
      }
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7fa60(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x20) == 0) {
        if (iVar7 != 0) {
          uVar14 = uVar14 | 0x20;
LAB_1006188bd:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 == 0) {
        uVar14 = uVar14 & 0xffffffdf;
        goto LAB_1006188bd;
      }
      if ((uVar14 & 4) == 0) {
        if ((uVar14 & 0x20) == 0) {
          uVar14 = uVar14 | 4;
LAB_1006188dc:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if ((uVar14 & 0x20) != 0) {
        uVar14 = uVar14 & 0xfffffffb;
        goto LAB_1006188dc;
      }
      local_3c4 = 5;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_3c4);
      uVar13 = FUN_100b5ffd0(local_68);
      FUN_100b899e0(local_3e0,uVar13,0);
      if (DAT_1022743a0 == 0) {
        DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_3d8,DAT_1022743a0,local_3e0,0);
      QVariant::operator=(pQVar11,&local_3d8);
      QVariant::~QVariant(&local_3d8);
      FUN_1001e3400(local_3e0);
      local_3e4 = 0xb;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_3e4);
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7ffa0(uVar13);
      QVariant::QVariant(&local_3f8,iVar7);
      QVariant::operator=(pQVar11,&local_3f8);
      QVariant::~QVariant(&local_3f8);
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7fd50(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x40) == 0) {
        if (iVar7 == 0) {
          uVar14 = uVar14 | 0x40;
LAB_1006189fe:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 != 0) {
        uVar14 = uVar14 & 0xffffffbf;
        goto LAB_1006189fe;
      }
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7fe40(uVar13);
      cVar6 = '\x01';
      if (iVar7 == 0) {
        uVar13 = FUN_100b5ffd0(local_68);
        cVar6 = FUN_100b7f610(uVar13);
      }
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x100) == 0) {
        if (cVar6 != '\0') {
          uVar14 = uVar14 | 0x100;
LAB_100618a4d:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (cVar6 == '\0') {
        uVar14 = uVar14 & 0xfffffeff;
        goto LAB_100618a4d;
      }
      uVar13 = FUN_100b5ffd0(local_68);
      iVar7 = FUN_100b7fa00(uVar13);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x80) == 0) {
        if (iVar7 != 0) {
          uVar14 = uVar14 | 0x80;
LAB_100618a83:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (iVar7 == 0) {
        uVar14 = uVar14 & 0xffffff7f;
        goto LAB_100618a83;
      }
      local_3fc = 0xc;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_3fc);
      uVar13 = FUN_100b5ffd0(local_68);
      FUN_100b8e9b0(&local_420,uVar13);
      QString::trimmed();
      QVariant::QVariant(&local_410,&local_418);
      QVariant::operator=(pQVar11,&local_410);
      QVariant::~QVariant(&local_410);
      if (*(int *)local_418.field0_0x0 != -1) {
        if (*(int *)local_418.field0_0x0 != 0) {
          LOCK();
          *(int *)local_418.field0_0x0 = *(int *)local_418.field0_0x0 + -1;
          local_31 = *(int *)local_418.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100618b33;
        }
        QArrayData::deallocate((QArrayData *)local_418.field0_0x0,2,8);
      }
LAB_100618b33:
      if (*(int *)local_420 != -1) {
        if (*(int *)local_420 != 0) {
          LOCK();
          *(int *)local_420 = *(int *)local_420 + -1;
          local_31 = *(int *)local_420 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100618b69;
        }
        QArrayData::deallocate(local_420,2,8);
      }
LAB_100618b69:
      local_424 = 0x10;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_424);
      uVar13 = FUN_100b5ffd0(local_68);
      FUN_100b858e0(&local_440,uVar13);
      QVariant::QVariant(&local_438,&local_440);
      QVariant::operator=(pQVar11,&local_438);
      QVariant::~QVariant(&local_438);
      if (*(int *)local_440.field0_0x0 != -1) {
        if (*(int *)local_440.field0_0x0 != 0) {
          LOCK();
          *(int *)local_440.field0_0x0 = *(int *)local_440.field0_0x0 + -1;
          local_31 = *(int *)local_440.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100618c01;
        }
        QArrayData::deallocate((QArrayData *)local_440.field0_0x0,2,8);
      }
LAB_100618c01:
      uVar13 = FUN_100b5ffd0(local_68);
      cVar6 = FUN_100b8f110(uVar13,1);
      uVar14 = *(uint *)(param_1 + 0x30);
      if ((uVar14 & 0x8000) == 0) {
        if (cVar6 != '\0') {
          uVar14 = uVar14 | 0x8000;
LAB_100618c37:
          *(uint *)(param_1 + 0x30) = uVar14;
        }
      }
      else if (cVar6 == '\0') {
        uVar14 = uVar14 & 0xffff7fff;
        goto LAB_100618c37;
      }
      local_444 = 8;
      pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_444);
      uVar13 = FUN_100b5ffd0(local_68);
      local_468 = FUN_100b80240(uVar13);
      QDateTime::QDateTime(&local_460,(QDate *)&local_468);
      QVariant::QVariant(&local_458,&local_460);
      QVariant::operator=(pQVar11,&local_458);
      QVariant::~QVariant(&local_458);
      QDateTime::~QDateTime(&local_460);
      uVar13 = FUN_100b5ffd0(local_68);
      cVar6 = FUN_100b8f110(uVar13,1);
      if (cVar6 != '\0') {
        uVar13 = FUN_100b5ffd0(local_68);
        iVar7 = FUN_100b7fa00(uVar13);
        if (iVar7 == 0) {
          local_4a4 = 9;
          pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_4a4);
          local_4cc = 6;
          FUN_10061c8f0(lVar3,&local_4cc);
          local_4d8 = QVariant::toDate();
          local_4c8 = QDate::addDays((longlong)&local_4d8);
          QTime::QTime(local_4e0,0x17,0x3b,0x3b,0);
          QDateTime::QDateTime(&local_4c0,&local_4c8,local_4e0,0);
          QVariant::QVariant(&local_4b8,&local_4c0);
          QVariant::operator=(pQVar11,&local_4b8);
          QVariant::~QVariant(&local_4b8);
          QDateTime::~QDateTime(&local_4c0);
        }
        else {
          local_46c = 9;
          pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_46c);
          local_494 = 6;
          FUN_10061c8f0(lVar3,&local_494);
          local_4a0 = QVariant::toDate();
          local_490 = QDate::addDays((longlong)&local_4a0);
          QDateTime::QDateTime(&local_488,(QDate *)&local_490);
          QVariant::QVariant(&local_480,&local_488);
          QVariant::operator=(pQVar11,&local_480);
          QVariant::~QVariant(&local_480);
          QDateTime::~QDateTime(&local_488);
        }
      }
      local_4e8 = (QArrayData *)QString::fromAscii_helper("license_offline_expiration_date",0x1f);
      lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
      if (*(int *)local_4e8 != -1) {
        if (*(int *)local_4e8 != 0) {
          LOCK();
          *(int *)local_4e8 = *(int *)local_4e8 + -1;
          local_31 = *(int *)local_4e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100618eda;
        }
        QArrayData::deallocate(local_4e8,2,8);
      }
LAB_100618eda:
      if (lVar12 != 0) {
        CVmEventParameter::getParamValue();
        local_500 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
        QDateTime::fromString((QString *)&local_4f0,&local_4f8);
        if (*(int *)local_500 != -1) {
          if (*(int *)local_500 != 0) {
            LOCK();
            *(int *)local_500 = *(int *)local_500 + -1;
            local_31 = *(int *)local_500 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100618f5a;
          }
          QArrayData::deallocate(local_500,2,8);
        }
LAB_100618f5a:
        if (*(int *)local_4f8.field0_0x0 != -1) {
          if (*(int *)local_4f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4f8.field0_0x0 = *(int *)local_4f8.field0_0x0 + -1;
            local_31 = *(int *)local_4f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100618f90;
          }
          QArrayData::deallocate((QArrayData *)local_4f8.field0_0x0,2,8);
        }
LAB_100618f90:
        QDateTime::currentDateTime();
        puVar5 = *(undefined8 **)(param_1 + 0x20);
        if ((*(int *)((long)puVar5 + 0x14) != 0) && (*(uint *)(puVar5 + 4) != 0)) {
          for (puVar16 = *(undefined8 **)
                          (puVar5[1] +
                          ((ulong)*(uint *)((long)puVar5 + 0x24) % (ulong)*(uint *)(puVar5 + 4)) * 8
                          ); puVar16 != puVar5; puVar16 = (undefined8 *)*puVar16) {
            if ((*(uint *)(puVar16 + 1) == *(uint *)((long)puVar5 + 0x24)) &&
               (*(int *)((long)puVar16 + 0xc) == 0)) {
              if (puVar16 != puVar5) {
                QVariant::QVariant((QVariant *)&local_518,(QVariant *)(puVar16 + 2));
                goto LAB_10061900f;
              }
              break;
            }
          }
        }
        local_510 = 0x80000000;
        local_518.field7 = 0;
LAB_10061900f:
        iVar7 = QVariant::toInt((bool *)&local_518.field0);
        iVar9 = 0;
        if (iVar7 != -0x7ffee8e9) {
          uVar14 = QDateTime::toTime_t();
          uVar8 = QDateTime::toTime_t();
          iVar9 = 0;
          if (uVar14 < uVar8) {
            iVar9 = QDateTime::daysTo(&local_508);
          }
        }
        QVariant::~QVariant((QVariant *)&local_518);
        local_51c = 0xd;
        pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_51c);
        QVariant::QVariant(&local_530,iVar9);
        QVariant::operator=(pQVar11,&local_530);
        QVariant::~QVariant(&local_530);
        QDateTime::~QDateTime(&local_508);
        QDateTime::~QDateTime(&local_4f0);
      }
      local_538 = (QArrayData *)QString::fromAscii_helper("license_is_confirmed",0x14);
      lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
      if (*(int *)local_538 != -1) {
        if (*(int *)local_538 != 0) {
          LOCK();
          *(int *)local_538 = *(int *)local_538 + -1;
          local_31 = *(int *)local_538 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061912c;
        }
        QArrayData::deallocate(local_538,2,8);
      }
LAB_10061912c:
      if (lVar12 != 0) {
        CVmEventParameter::getParamValue();
        iVar7 = QString::toInt((bool *)&local_540,0);
        uVar14 = *(uint *)(param_1 + 0x30);
        if ((uVar14 & 0x200) == 0) {
          if (iVar7 != 0) {
            uVar14 = uVar14 | 0x200;
LAB_100619173:
            *(uint *)(param_1 + 0x30) = uVar14;
          }
        }
        else if (iVar7 == 0) {
          uVar14 = uVar14 & 0xfffffdff;
          goto LAB_100619173;
        }
        if (*(int *)local_540 != -1) {
          if (*(int *)local_540 != 0) {
            LOCK();
            *(int *)local_540 = *(int *)local_540 + -1;
            local_31 = *(int *)local_540 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006191ae;
          }
          QArrayData::deallocate(local_540,2,8);
        }
      }
LAB_1006191ae:
      local_548 = (QArrayData *)QString::fromAscii_helper("license_activation_id",0x15);
      lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
      if (*(int *)local_548 != -1) {
        if (*(int *)local_548 != 0) {
          LOCK();
          *(int *)local_548 = *(int *)local_548 + -1;
          local_31 = *(int *)local_548 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100619212;
        }
        QArrayData::deallocate(local_548,2,8);
      }
LAB_100619212:
      if (lVar12 != 0) {
        local_54c = 0xe;
        pQVar11 = (QVariant *)FUN_10061c8f0(lVar3,&local_54c);
        CVmEventParameter::getParamValue();
        QVariant::QVariant(&local_560,&local_568);
        QVariant::operator=(pQVar11,&local_560);
        QVariant::~QVariant(&local_560);
        if (*(int *)local_568.field0_0x0 != -1) {
          if (*(int *)local_568.field0_0x0 != 0) {
            LOCK();
            *(int *)local_568.field0_0x0 = *(int *)local_568.field0_0x0 + -1;
            local_31 = *(int *)local_568.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006192aa;
          }
          QArrayData::deallocate((QArrayData *)local_568.field0_0x0,2,8);
        }
      }
LAB_1006192aa:
      local_570 = (QArrayData *)QString::fromAscii_helper("license_allow_to_skip_confirmation",0x22)
      ;
      lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
      if (*(int *)local_570 != -1) {
        if (*(int *)local_570 != 0) {
          LOCK();
          *(int *)local_570 = *(int *)local_570 + -1;
          local_31 = *(int *)local_570 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061930e;
        }
        QArrayData::deallocate(local_570,2,8);
      }
LAB_10061930e:
      if (lVar12 != 0) {
        CVmEventParameter::getParamValue();
        iVar7 = QString::toInt((bool *)&local_578,0);
        uVar14 = *(uint *)(param_1 + 0x30);
        if ((uVar14 & 0x400) == 0) {
          if (iVar7 == 0) {
            uVar14 = uVar14 | 0x400;
LAB_100619355:
            *(uint *)(param_1 + 0x30) = uVar14;
          }
        }
        else if (iVar7 != 0) {
          uVar14 = uVar14 & 0xfffffbff;
          goto LAB_100619355;
        }
        if (*(int *)local_578 != -1) {
          if (*(int *)local_578 != 0) {
            LOCK();
            *(int *)local_578 = *(int *)local_578 + -1;
            local_31 = *(int *)local_578 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100619390;
          }
          QArrayData::deallocate(local_578,2,8);
        }
      }
LAB_100619390:
      local_580 = (QArrayData *)QString::fromAscii_helper("license_web_options",0x13);
      lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_198);
      if (*(int *)local_580 != -1) {
        if (*(int *)local_580 != 0) {
          LOCK();
          *(int *)local_580 = *(int *)local_580 + -1;
          local_31 = *(int *)local_580 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006193f4;
        }
        QArrayData::deallocate(local_580,2,8);
      }
LAB_1006193f4:
      if (lVar12 != 0) {
        CVmEventParameter::getParamValue();
        FUN_100a08be0(&local_590,&local_598);
        if (*(int *)local_598 != -1) {
          if (*(int *)local_598 != 0) {
            LOCK();
            *(int *)local_598 = *(int *)local_598 + -1;
            local_31 = *(int *)local_598 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100619455;
          }
          QArrayData::deallocate(local_598,2,8);
        }
LAB_100619455:
        QVariant::toMap();
        local_5c0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)
             QString::fromAscii_helper("product_permissions_qp",0x16);
        local_5c8 = 0x80000000;
        local_5d0.field7 = 0;
        if (*(long *)(local_5b8 + 0x10) == 0) {
LAB_100619505:
          lVar15 = 0;
        }
        else {
          lVar12 = *(long *)(local_5b8 + 0x10);
          lVar18 = 0;
          do {
            while (lVar15 = lVar12, cVar6 = operator<((QString *)(lVar15 + 0x18),&local_5c0),
                  cVar6 == '\0') {
              lVar12 = *(long *)(lVar15 + 8);
              lVar18 = lVar15;
              if (*(long *)(lVar15 + 8) == 0) goto LAB_1006194f1;
            }
            lVar12 = *(long *)(lVar15 + 0x10);
          } while (*(long *)(lVar15 + 0x10) != 0);
          lVar15 = lVar18;
          if (lVar18 == 0) goto LAB_100619505;
LAB_1006194f1:
          cVar6 = operator<(&local_5c0,(QString *)(lVar15 + 0x18));
          if (cVar6 != '\0') goto LAB_100619505;
        }
        pDVar17 = &local_5d0;
        if (lVar15 != 0) {
          pDVar17 = (Data_conflict *)(lVar15 + 0x20);
        }
        QVariant::QVariant(&local_5b0,(QVariant *)pDVar17);
        QVariant::toMap();
        QVariant::~QVariant(&local_5b0);
        QVariant::~QVariant((QVariant *)&local_5d0);
        if (*(int *)local_5c0.field0_0x0 != -1) {
          if (*(int *)local_5c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5c0.field0_0x0 = *(int *)local_5c0.field0_0x0 + -1;
            local_31 = *(int *)local_5c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100619586;
          }
          QArrayData::deallocate((QArrayData *)local_5c0.field0_0x0,2,8);
        }
LAB_100619586:
        if (*(int *)local_5b8 != -1) {
          if (*(int *)local_5b8 != 0) {
            LOCK();
            *(int *)local_5b8 = *(int *)local_5b8 + -1;
            local_31 = *(int *)local_5b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006195d4;
          }
          if (*(long *)(local_5b8 + 0x10) != 0) {
            FUN_100037d60();
            QMapDataBase::freeTree(local_5b8,(int)*(undefined8 *)(local_5b8 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_5b8);
        }
LAB_1006195d4:
        local_5e8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("purchased_online",0x10);
        local_5f0 = 0x80000000;
        local_5f8.field7 = 0;
        if (*(long *)(local_5a0 + 0x10) == 0) {
LAB_100619665:
          lVar15 = 0;
        }
        else {
          lVar12 = *(long *)(local_5a0 + 0x10);
          lVar18 = 0;
          do {
            while (lVar15 = lVar12, cVar6 = operator<((QString *)(lVar15 + 0x18),&local_5e8),
                  cVar6 == '\0') {
              lVar12 = *(long *)(lVar15 + 8);
              lVar18 = lVar15;
              if (*(long *)(lVar15 + 8) == 0) goto LAB_100619651;
            }
            lVar12 = *(long *)(lVar15 + 0x10);
          } while (*(long *)(lVar15 + 0x10) != 0);
          lVar15 = lVar18;
          if (lVar18 == 0) goto LAB_100619665;
LAB_100619651:
          cVar6 = operator<(&local_5e8,(QString *)(lVar15 + 0x18));
          if (cVar6 != '\0') goto LAB_100619665;
        }
        pDVar17 = &local_5f8;
        if (lVar15 != 0) {
          pDVar17 = (Data_conflict *)(lVar15 + 0x20);
        }
        QVariant::QVariant(&local_5e0,(QVariant *)pDVar17);
        cVar6 = QVariant::toBool();
        uVar14 = *(uint *)(param_1 + 0x30);
        if ((uVar14 & 0x40000) == 0) {
          if (cVar6 != '\0') {
            uVar14 = uVar14 | 0x40000;
LAB_1006196b7:
            *(uint *)(param_1 + 0x30) = uVar14;
          }
        }
        else if (cVar6 == '\0') {
          uVar14 = uVar14 & 0xfffbffff;
          goto LAB_1006196b7;
        }
        QVariant::~QVariant(&local_5e0);
        QVariant::~QVariant((QVariant *)&local_5f8);
        if (*(int *)local_5e8.field0_0x0 != -1) {
          if (*(int *)local_5e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5e8.field0_0x0 = *(int *)local_5e8.field0_0x0 + -1;
            local_31 = *(int *)local_5e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100619711;
          }
          QArrayData::deallocate((QArrayData *)local_5e8.field0_0x0,2,8);
        }
LAB_100619711:
        if (*(int *)local_5a0 != -1) {
          if (*(int *)local_5a0 != 0) {
            LOCK();
            *(int *)local_5a0 = *(int *)local_5a0 + -1;
            local_31 = *(int *)local_5a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10061975f;
          }
          if (*(long *)(local_5a0 + 0x10) != 0) {
            FUN_100037d60();
            QMapDataBase::freeTree(local_5a0,(int)*(undefined8 *)(local_5a0 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_5a0);
        }
LAB_10061975f:
        QVariant::~QVariant(&local_590);
      }
    }
  }
  if (1 < DAT_10230ffd0) {
    FUN_100624f20(&local_608,param_1);
    QString::toLocal8Bit();
    FUN_100df99c0("[LICENSE]","prl_client_app",2,"License changed\n %s",
                  local_600 + *(long *)(local_600 + 0x10));
    if (*(int *)local_600 != -1) {
      if (*(int *)local_600 != 0) {
        LOCK();
        *(int *)local_600 = *(int *)local_600 + -1;
        local_31 = *(int *)local_600 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006197ff;
      }
      QArrayData::deallocate(local_600,1,8);
    }
LAB_1006197ff:
    if (*(int *)local_608 != -1) {
      if (*(int *)local_608 != 0) {
        LOCK();
        *(int *)local_608 = *(int *)local_608 + -1;
        local_31 = *(int *)local_608 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100619835;
      }
      QArrayData::deallocate(local_608,2,8);
    }
  }
LAB_100619835:
  uVar10 = FUN_10061aab0(param_1);
  uVar13 = FUN_100dddcf0(uVar10);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"License status %s",uVar13);
  FUN_10061c850(local_618,puVar2,lVar3);
  FUN_100845670(param_1,local_618,local_48);
  if (*(int *)(local_610 + 0x10) != -1) {
    if (*(int *)(local_610 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_610 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006198c2;
    }
    QHashData::free_helper(local_610);
  }
LAB_1006198c2:
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) goto LAB_10061998b;
  FUN_10015aab0(&local_620);
  FUN_10061c850(local_630,puVar2,lVar3);
  FUN_1008456c0(param_1,&local_620,local_630,local_48);
  if (*(int *)(local_628 + 0x10) != -1) {
    if (*(int *)(local_628 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_628 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100619955;
    }
    QHashData::free_helper(local_628);
  }
LAB_100619955:
  if (*(int *)local_620 != -1) {
    if (*(int *)local_620 != 0) {
      LOCK();
      *(int *)local_620 = *(int *)local_620 + -1;
      local_31 = *(int *)local_620 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061998b;
    }
    QArrayData::deallocate(local_620,2,8);
  }
LAB_10061998b:
  QEvent::~QEvent(local_b8);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_198);
  FUN_100b5ff80(local_68);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_198[0] = (CVmEvent)0x0;
    }
    QHashData::free_helper(local_40);
  }
  return;
}

