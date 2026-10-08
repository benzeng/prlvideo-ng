
void FUN_100473120(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  CVmGenericNetworkAdapter local_528 [408];
  QArrayData *local_390;
  QString local_388;
  QVariant local_380;
  QArrayData *local_370;
  QString local_368;
  QVariant local_360;
  QArrayData *local_350;
  QString local_348;
  QVariant local_340;
  QArrayData *local_330;
  QString local_328;
  QVariant local_320;
  QArrayData *local_310;
  QString local_308;
  QVariant local_300;
  QArrayData *local_2f0;
  QString local_2e8;
  QVariant local_2e0;
  QArrayData *local_2d0;
  QString local_2c8;
  QVariant local_2c0;
  QArrayData *local_2b0;
  QString local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  QString local_288;
  QVariant local_280;
  CNetLinkRateLimit local_270 [224];
  QArrayData *local_190;
  QString local_188;
  QVariant local_180;
  Data *local_170;
  Data *local_168;
  Data *local_160;
  Data *local_158;
  int local_150;
  QArrayData *local_148;
  QString local_140;
  QVariant local_138;
  Data *local_128;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  int local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  int local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar5 = FUN_10044e580();
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    FUN_100459290(param_1);
    return;
  }
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_b8,param_1);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
  if (1 < *(int *)local_b8 + 1U) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_29 = *(int *)local_b8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_98,0x1df1f84);
  QString::append(&local_b0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004731dd;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004731dd:
  FUN_1003e1800(&local_a8,uVar6,&local_b0,0);
  QVariant::toUInt((bool *)&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473248;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100473248:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10047327e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10047327e:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_d8,param_1);
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d8;
  if (1 < *(int *)local_d8 + 1U) {
    LOCK();
    *(int *)local_d8 = *(int *)local_d8 + 1;
    local_29 = *(int *)local_d8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_90,0x1df30be);
  QString::append(&local_d0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473318;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100473318:
  FUN_1003e1800(&local_c8,uVar6,&local_d0,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473381;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100473381:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004733b7;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004733b7:
  uVar6 = FUN_10044e660(param_1);
  uVar2 = FUN_1003bfea0(uVar6);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x70);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x48);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
  uVar6 = FUN_10044e660(param_1);
  lVar5 = FUN_100458c00(param_1);
  uVar2 = FUN_1003bfee0(uVar6,*(undefined4 *)(lVar5 + 0x68));
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x40);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x68);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x78),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x48),0));
  uVar6 = FUN_10044e660(param_1);
  cVar3 = FUN_1003c0530(uVar6);
  if (cVar3 == '\0') {
    FUN_100475780(&local_100,*(undefined8 *)(param_1 + 0x68),1);
    local_f8 = local_100;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 == 0) {
        QListData::detach((int)&local_f8);
        lVar5 = (long)*(int *)(local_f8 + 8);
        if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_f8 + lVar5 * 8) &&
           (lVar7 = *(int *)(local_f8 + 0xc) - lVar5,
           lVar7 != 0 && lVar5 <= *(int *)(local_f8 + 0xc))) {
          _memcpy(local_f8 + lVar5 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                  lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_29 = *(int *)local_100 != 0;
        UNLOCK();
      }
    }
    local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
    local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
    local_e0 = 1;
    if (*(int *)local_100 == -1) {
LAB_10047394c:
      for (; local_f0 != local_e8; local_f0 = local_f0 + 8) {
        QWidget::hide();
        local_e0 = 1;
      }
    }
    else {
      if (*(int *)local_100 == 0) {
LAB_100473912:
        QListData::dispose(local_100);
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_29 = *(int *)local_100 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_100473912;
      }
      if (local_e0 != 0) goto LAB_10047394c;
    }
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10047476d;
      }
      QListData::dispose(local_f8);
    }
    goto LAB_10047476d;
  }
  FUN_100475780(&local_128,*(undefined8 *)(param_1 + 0x68),1);
  local_120 = local_128;
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 == 0) {
      QListData::detach((int)&local_120);
      lVar5 = (long)*(int *)(local_120 + 8);
      if ((local_128 + (long)*(int *)(local_128 + 8) * 8 != local_120 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_120 + 0xc) - lVar5,
         lVar7 != 0 && lVar5 <= *(int *)(local_120 + 0xc))) {
        _memcpy(local_120 + lVar5 * 8 + 0x10,local_128 + (long)*(int *)(local_128 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
    }
  }
  local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
  local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
  local_108 = 1;
  if (*(int *)local_128 == -1) {
LAB_10047367c:
    for (; local_118 != local_110; local_118 = local_118 + 8) {
      QWidget::show();
      local_108 = 1;
    }
  }
  else {
    if (*(int *)local_128 == 0) {
LAB_10047363e:
      QListData::dispose(local_128);
    }
    else {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_10047363e;
    }
    if (local_108 != 0) goto LAB_10047367c;
  }
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004736f7;
    }
    QListData::dispose(local_120);
  }
LAB_1004736f7:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_148,param_1);
  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_148;
  if (1 < *(int *)local_148 + 1U) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + 1;
    local_29 = *(int *)local_148 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_88,0x1df63c2);
  QString::append(&local_140);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473785;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100473785:
  FUN_1003e1800(&local_138,uVar6,&local_140,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_138);
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_29 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004737ee;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_1004737ee:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473824;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100473824:
  FUN_100475780(&local_170,*(undefined8 *)(param_1 + 0x68),0);
  local_168 = local_170;
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 == 0) {
      QListData::detach((int)&local_168);
      lVar5 = (long)*(int *)(local_168 + 8);
      if ((local_170 + (long)*(int *)(local_170 + 8) * 8 != local_168 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_168 + 0xc) - lVar5,
         lVar7 != 0 && lVar5 <= *(int *)(local_168 + 0xc))) {
        _memcpy(local_168 + lVar5 * 8 + 0x10,local_170 + (long)*(int *)(local_170 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
    }
  }
  local_160 = local_168 + (long)*(int *)(local_168 + 8) * 8 + 0x10;
  local_158 = local_168 + (long)*(int *)(local_168 + 0xc) * 8 + 0x10;
  local_150 = 1;
  if (*(int *)local_170 == -1) {
LAB_100473a42:
    if (local_160 != local_158) {
      do {
        QWidget::setEnabled(SUB81(*(undefined8 *)local_160,0));
        local_160 = local_160 + 8;
        local_150 = 1;
      } while (local_160 != local_158);
    }
  }
  else {
    if (*(int *)local_170 == 0) {
LAB_100473a34:
      QListData::dispose(local_170);
    }
    else {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_100473a34;
    }
    if (local_150 != 0) goto LAB_100473a42;
  }
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473abb;
    }
    QListData::dispose(local_168);
  }
LAB_100473abb:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_190,param_1);
  local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_190;
  if (1 < *(int *)local_190 + 1U) {
    LOCK();
    *(int *)local_190 = *(int *)local_190 + 1;
    local_29 = *(int *)local_190 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_80,0x1df278a);
  QString::append(&local_188);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473b49;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100473b49:
  FUN_1003e1800(&local_180,uVar6,&local_188,0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_29 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473bb1;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100473bb1:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_29 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473be7;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100473be7:
  if (cVar3 == '\0') {
    uVar6 = FUN_10044e560(param_1);
    FUN_100459010(&local_390,param_1);
    local_388.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_390;
    if (1 < *(int *)local_390 + 1U) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + 1;
      local_29 = *(int *)local_390 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1df2779);
    QString::append(&local_388);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10047467b;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10047467b:
    FUN_1003e1800(&local_380,uVar6,&local_388,0);
    iVar4 = QVariant::toInt((bool *)&local_380);
    QVariant::~QVariant(&local_380);
    if (*(int *)local_388.field0_0x0 != -1) {
      if (*(int *)local_388.field0_0x0 != 0) {
        LOCK();
        *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + -1;
        local_29 = *(int *)local_388.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004746e6;
      }
      QArrayData::deallocate((QArrayData *)local_388.field0_0x0,2,8);
    }
LAB_1004746e6:
    if (*(int *)local_390 != -1) {
      if (*(int *)local_390 != 0) {
        LOCK();
        *(int *)local_390 = *(int *)local_390 + -1;
        local_29 = *(int *)local_390 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10047471c;
      }
      QArrayData::deallocate(local_390,2,8);
    }
LAB_10047471c:
    if (-1 < iVar4) {
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_528);
      CVmProfileHelper::set_net_adapter_profile(iVar4,local_528);
      uVar6 = CVmGenericNetworkAdapter::getLinkRateLimit();
      FUN_100475910(param_1,uVar6);
      CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_528);
    }
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),0));
    goto LAB_10047476d;
  }
  CNetLinkRateLimit::CNetLinkRateLimit(local_270);
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_290,param_1);
  local_288.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_290;
  if (1 < *(int *)local_290 + 1U) {
    LOCK();
    *(int *)local_290 = *(int *)local_290 + 1;
    local_29 = *(int *)local_290 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x1df63d8);
  QString::append(&local_288);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473c89;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100473c89:
  FUN_1003e1800(&local_280,uVar6,&local_288,0);
  QVariant::toLongLong((bool *)&local_280);
  CNetLinkRateLimit::setTxBps((longlong)local_270);
  QVariant::~QVariant(&local_280);
  if (*(int *)local_288.field0_0x0 != -1) {
    if (*(int *)local_288.field0_0x0 != 0) {
      LOCK();
      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
      local_29 = *(int *)local_288.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473d00;
    }
    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
  }
LAB_100473d00:
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_29 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473d36;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_100473d36:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_2b0,param_1);
  local_2a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2b0;
  if (1 < *(int *)local_2b0 + 1U) {
    LOCK();
    *(int *)local_2b0 = *(int *)local_2b0 + 1;
    local_29 = *(int *)local_2b0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1df63ed);
  QString::append(&local_2a8);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473dc4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100473dc4:
  FUN_1003e1800(&local_2a0,uVar6,&local_2a8,0);
  QVariant::toUInt((bool *)&local_2a0);
  CNetLinkRateLimit::setGUITxScale((uint)local_270);
  QVariant::~QVariant(&local_2a0);
  if (*(int *)local_2a8.field0_0x0 != -1) {
    if (*(int *)local_2a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
      local_29 = *(int *)local_2a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473e3a;
    }
    QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
  }
LAB_100473e3a:
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_29 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473e70;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_100473e70:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_2d0,param_1);
  local_2c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2d0;
  if (1 < *(int *)local_2d0 + 1U) {
    LOCK();
    *(int *)local_2d0 = *(int *)local_2d0 + 1;
    local_29 = *(int *)local_2d0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1df6407);
  QString::append(&local_2c8);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473efe;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100473efe:
  FUN_1003e1800(&local_2c0,uVar6,&local_2c8,0);
  QVariant::toUInt((bool *)&local_2c0);
  CNetLinkRateLimit::setTxLossPpm((uint)local_270);
  QVariant::~QVariant(&local_2c0);
  if (*(int *)local_2c8.field0_0x0 != -1) {
    if (*(int *)local_2c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
      local_29 = *(int *)local_2c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473f74;
    }
    QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
  }
LAB_100473f74:
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_29 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100473faa;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_100473faa:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_2f0,param_1);
  local_2e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2f0;
  if (1 < *(int *)local_2f0 + 1U) {
    LOCK();
    *(int *)local_2f0 = *(int *)local_2f0 + 1;
    local_29 = *(int *)local_2f0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1df6420);
  QString::append(&local_2e8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474038;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100474038:
  FUN_1003e1800(&local_2e0,uVar6,&local_2e8,0);
  QVariant::toUInt((bool *)&local_2e0);
  CNetLinkRateLimit::setTxDelayMs((uint)local_270);
  QVariant::~QVariant(&local_2e0);
  if (*(int *)local_2e8.field0_0x0 != -1) {
    if (*(int *)local_2e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
      local_29 = *(int *)local_2e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004740ae;
    }
    QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
  }
LAB_1004740ae:
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_29 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004740e4;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1004740e4:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_310,param_1);
  local_308.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_310;
  if (1 < *(int *)local_310 + 1U) {
    LOCK();
    *(int *)local_310 = *(int *)local_310 + 1;
    local_29 = *(int *)local_310 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1df6439);
  QString::append(&local_308);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474172;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100474172:
  FUN_1003e1800(&local_300,uVar6,&local_308,0);
  QVariant::toLongLong((bool *)&local_300);
  CNetLinkRateLimit::setRxBps((longlong)local_270);
  QVariant::~QVariant(&local_300);
  if (*(int *)local_308.field0_0x0 != -1) {
    if (*(int *)local_308.field0_0x0 != 0) {
      LOCK();
      *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
      local_29 = *(int *)local_308.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004741e9;
    }
    QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
  }
LAB_1004741e9:
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_29 = *(int *)local_310 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10047421f;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_10047421f:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_330,param_1);
  local_328.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_330;
  if (1 < *(int *)local_330 + 1U) {
    LOCK();
    *(int *)local_330 = *(int *)local_330 + 1;
    local_29 = *(int *)local_330 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1df644e);
  QString::append(&local_328);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004742ad;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004742ad:
  FUN_1003e1800(&local_320,uVar6,&local_328,0);
  QVariant::toUInt((bool *)&local_320);
  CNetLinkRateLimit::setGUIRxScale((uint)local_270);
  QVariant::~QVariant(&local_320);
  if (*(int *)local_328.field0_0x0 != -1) {
    if (*(int *)local_328.field0_0x0 != 0) {
      LOCK();
      *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + -1;
      local_29 = *(int *)local_328.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474323;
    }
    QArrayData::deallocate((QArrayData *)local_328.field0_0x0,2,8);
  }
LAB_100474323:
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_29 = *(int *)local_330 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474359;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_100474359:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_350,param_1);
  local_348.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_350;
  if (1 < *(int *)local_350 + 1U) {
    LOCK();
    *(int *)local_350 = *(int *)local_350 + 1;
    local_29 = *(int *)local_350 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df6468);
  QString::append(&local_348);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004743e7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004743e7:
  FUN_1003e1800(&local_340,uVar6,&local_348,0);
  QVariant::toUInt((bool *)&local_340);
  CNetLinkRateLimit::setRxLossPpm((uint)local_270);
  QVariant::~QVariant(&local_340);
  if (*(int *)local_348.field0_0x0 != -1) {
    if (*(int *)local_348.field0_0x0 != 0) {
      LOCK();
      *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
      local_29 = *(int *)local_348.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10047445d;
    }
    QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
  }
LAB_10047445d:
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_29 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474493;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_100474493:
  uVar6 = FUN_10044e560(param_1);
  FUN_100459010(&local_370,param_1);
  local_368.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_370;
  if (1 < *(int *)local_370 + 1U) {
    LOCK();
    *(int *)local_370 = *(int *)local_370 + 1;
    local_29 = *(int *)local_370 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df6481);
  QString::append(&local_368);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474521;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100474521:
  FUN_1003e1800(&local_360,uVar6,&local_368,0);
  QVariant::toUInt((bool *)&local_360);
  CNetLinkRateLimit::setRxDelayMs((uint)local_270);
  QVariant::~QVariant(&local_360);
  if (*(int *)local_368.field0_0x0 != -1) {
    if (*(int *)local_368.field0_0x0 != 0) {
      LOCK();
      *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
      local_29 = *(int *)local_368.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100474597;
    }
    QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
  }
LAB_100474597:
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_29 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004745cd;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_1004745cd:
  FUN_100475910(param_1,local_270);
  CNetLinkRateLimit::~CNetLinkRateLimit(local_270);
LAB_10047476d:
  FUN_100459290(param_1);
  return;
}

