
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b7cbd0(QString *param_1,QString *param_2)

{
  QString *pQVar1;
  int *piVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  bool *pbVar11;
  QTypedArrayData<unsigned_short> *pQVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  QTypedArrayData<unsigned_short> *pQVar16;
  QTypedArrayData<unsigned_short> *pQVar17;
  long lVar18;
  bool bVar19;
  uint uVar20;
  QArrayData *local_160;
  QDateTime local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  QDate local_100 [8];
  QDateTime local_f8;
  QArrayData *local_f0;
  QDateTime local_e8;
  QDateTime local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  uint local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *(undefined1 *)&param_1[1].field0_0x0 = 0;
  QString::fromUtf8_helper((char *)&local_48,0x1dba26e);
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7cc41;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100b7cc41:
  pQVar1 = param_1 + 2;
  FUN_100b7c6f0(pQVar1);
  FUN_100b90a60(&local_50,param_2);
  iVar9 = *(int *)(local_50 + 4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7cc8d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b7cc8d:
  if (iVar9 == 0) {
    FUN_100b90700(&local_58,param_2);
    QString::toLatin1();
    iVar5 = FUN_100b90e60(local_60 + *(long *)(local_60 + 0x10),pQVar1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7cd20;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100b7cd20:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7cd57;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100b7cd57:
    if (iVar5 != 0) {
      return 0;
    }
  }
  else {
    iVar5 = FUN_100b87ef0(param_1,param_2);
    if (iVar5 < 0) {
      return 0;
    }
  }
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("graceperiod",0xb);
  if (*(long *)(pQVar1->field0_0x0 + 0x10) == 0) {
LAB_100b7cdd7:
    lVar15 = 0;
  }
  else {
    lVar10 = *(long *)(pQVar1->field0_0x0 + 0x10);
    lVar18 = 0;
    do {
      while (lVar15 = lVar10, cVar4 = operator<((QString *)(lVar15 + 0x18),&local_68), cVar4 == '\0'
            ) {
        lVar10 = *(long *)(lVar15 + 8);
        lVar18 = lVar15;
        if (*(long *)(lVar15 + 8) == 0) goto LAB_100b7cdc6;
      }
      lVar10 = *(long *)(lVar15 + 0x10);
    } while (*(long *)(lVar15 + 0x10) != 0);
    lVar15 = lVar18;
    if (lVar18 == 0) goto LAB_100b7cdd7;
LAB_100b7cdc6:
    cVar4 = operator<(&local_68,(QString *)(lVar15 + 0x18));
    if (cVar4 != '\0') goto LAB_100b7cdd7;
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7ce0a;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100b7ce0a:
  if (lVar15 != 0) {
    return 0;
  }
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("keyserver_host",0xe);
  if (*(long *)(pQVar1->field0_0x0 + 0x10) == 0) {
LAB_100b7ce92:
    lVar15 = 0;
  }
  else {
    lVar10 = *(long *)(pQVar1->field0_0x0 + 0x10);
    lVar18 = 0;
    do {
      while (lVar15 = lVar10, cVar4 = operator<((QString *)(lVar15 + 0x18),&local_70), cVar4 == '\0'
            ) {
        lVar10 = *(long *)(lVar15 + 8);
        lVar18 = lVar15;
        if (*(long *)(lVar15 + 8) == 0) goto LAB_100b7ce81;
      }
      lVar10 = *(long *)(lVar15 + 0x10);
    } while (*(long *)(lVar15 + 0x10) != 0);
    lVar15 = lVar18;
    if (lVar18 == 0) goto LAB_100b7ce92;
LAB_100b7ce81:
    cVar4 = operator<(&local_70,(QString *)(lVar15 + 0x18));
    if (cVar4 != '\0') goto LAB_100b7ce92;
  }
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7cec4;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100b7cec4:
  if (lVar15 != 0) {
    return 0;
  }
  *(undefined1 *)&param_1[1].field0_0x0 = 1;
  if (iVar9 == 0) {
    QString::operator=(param_1,param_2);
  }
  else {
    QString::fromUtf8_helper((char *)&local_40,0x1e41978);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7cf41;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100b7cf41:
  FUN_100b7c510(&local_98,pQVar1);
  local_90 = local_98;
  if (*local_98 != -1) {
    if (*local_98 == 0) {
      QListData::detach((int)&local_90);
      iVar9 = local_90[2];
      if (iVar9 != local_90[3]) {
        local_98 = local_98 + (long)local_98[2] * 2 + 4;
        piVar14 = local_90 + (long)iVar9 * 2 + 4;
        lVar10 = (long)local_90[3] * 8 + (long)iVar9 * -8;
        do {
          piVar2 = *(int **)local_98;
          *(int **)piVar14 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar14 = piVar14 + 2;
          local_98 = local_98 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_98 = *local_98 + 1;
      local_31 = *local_98 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)local_90[2] * 2 + 4;
  local_80 = local_90 + (long)local_90[3] * 2 + 4;
  local_78 = 1;
  FUN_100039a80(&local_98);
  if (local_78 != 0) {
    do {
      if (local_88 == local_80) break;
      pQVar3 = *(QArrayData **)local_88;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      if (local_78 != 0) {
        local_78 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b7d070;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100b7d070:
      local_88 = local_88 + 2;
      uVar6 = local_78 ^ 1;
      bVar19 = local_78 != 1;
      local_78 = uVar6;
    } while (bVar19);
  }
  FUN_100039a80(&local_90);
  local_a0 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar7 = QString::toInt(pbVar11,0);
  uVar6 = 0xffffffff;
  if (3 < uVar7 - 0xb) {
    uVar6 = uVar7;
  }
  if (0xf < uVar7) {
    uVar6 = 0xffffffff;
  }
  *(uint *)&param_1[3].field0_0x0 = uVar6;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d121;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b7d121:
  local_a8 = (QArrayData *)QString::fromAscii_helper("product_id",10);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toInt(pbVar11,0);
  *(undefined4 *)((long)&param_1[3].field0_0x0 + 4) = uVar8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d191;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b7d191:
  local_b0 = (QArrayData *)QString::fromAscii_helper("key_number_value",0x10);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toUInt(pbVar11,0);
  *(undefined4 *)&param_1[6].field0_0x0 = uVar8;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d201;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b7d201:
  *(undefined4 *)((long)&param_1[5].field0_0x0 + 4) = 0;
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("internal_pub_key",0x10);
  pQVar12 = param_1[2].field0_0x0;
  if (1 < *(uint *)pQVar12) {
    FUN_1006f32b0(pQVar1);
    pQVar12 = pQVar1->field0_0x0;
  }
  if (*(QTypedArrayData<unsigned_short> **)(pQVar12 + 0x10) ==
      (QTypedArrayData<unsigned_short> *)0x0) {
LAB_100b7d295:
    pQVar12 = pQVar1->field0_0x0;
    pQVar16 = pQVar12 + 8;
  }
  else {
    pQVar12 = *(QTypedArrayData<unsigned_short> **)(pQVar12 + 0x10);
    pQVar17 = (QTypedArrayData<unsigned_short> *)0x0;
    do {
      while (pQVar16 = pQVar12, cVar4 = operator<((QString *)(pQVar16 + 0x18),&local_b8),
            cVar4 == '\0') {
        pQVar12 = *(QTypedArrayData<unsigned_short> **)(pQVar16 + 8);
        pQVar17 = pQVar16;
        if (*(QTypedArrayData<unsigned_short> **)(pQVar16 + 8) ==
            (QTypedArrayData<unsigned_short> *)0x0) goto LAB_100b7d281;
      }
      pQVar12 = *(QTypedArrayData<unsigned_short> **)(pQVar16 + 0x10);
    } while (*(QTypedArrayData<unsigned_short> **)(pQVar16 + 0x10) !=
             (QTypedArrayData<unsigned_short> *)0x0);
    pQVar16 = pQVar17;
    if (pQVar17 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_100b7d295;
LAB_100b7d281:
    cVar4 = operator<(&local_b8,(QString *)(pQVar16 + 0x18));
    if (cVar4 != '\0') goto LAB_100b7d295;
    pQVar12 = pQVar1->field0_0x0;
  }
  if (1 < *(uint *)pQVar12) {
    FUN_1006f32b0(pQVar1);
    pQVar12 = pQVar1->field0_0x0;
  }
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d2ef;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100b7d2ef:
  if (pQVar16 != pQVar12 + 8) {
    local_c0 = (QArrayData *)QString::fromAscii_helper("internal_pub_key",0x10);
    pbVar11 = (bool *)FUN_1006f3180(pQVar1);
    iVar9 = QString::toInt(pbVar11,0);
    *(uint *)((long)&param_1[5].field0_0x0 + 4) = (iVar9 != 1) + 1;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7d36f;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_100b7d36f:
  local_c8 = (QArrayData *)QString::fromAscii_helper("keynum_high",0xb);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  iVar9 = QString::toUInt(pbVar11,0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d3dd;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100b7d3dd:
  *(int *)&param_1[6].field0_0x0 = *(int *)&param_1[6].field0_0x0 + iVar9 * 0x80000;
  local_d0 = (QArrayData *)QString::fromAscii_helper("valid_unit",10);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toUInt(pbVar11,0);
  *(undefined4 *)&param_1[8].field0_0x0 = uVar8;
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d454;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b7d454:
  local_d8 = (QArrayData *)QString::fromAscii_helper("valid_period",0xc);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toUInt(pbVar11,0);
  *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = uVar8;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d4c4;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b7d4c4:
  QDateTime::QDateTime(&local_e0);
  if (*(int *)&param_1[8].field0_0x0 == 0) {
    QDate::QDate(local_100,0x799,5,9);
    QDateTime::QDateTime(&local_f8,local_100);
    QDateTime::operator=(&local_e0,&local_f8);
    QDateTime::~QDateTime(&local_f8);
  }
  else {
    local_f0 = (QArrayData *)QString::fromAscii_helper("expiration",10);
    uVar13 = FUN_1006f3180(pQVar1,&local_f0);
    QDateTime::fromString(&local_e8,uVar13,1);
    QDateTime::operator=(&local_e0,&local_e8);
    QDateTime::~QDateTime(&local_e8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7d5ba;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_100b7d5ba:
  local_108 = QDateTime::date();
  iVar9 = QDate::year();
  local_110 = QDateTime::date();
  iVar5 = QDate::month();
  local_118 = QDateTime::date();
  QDate::day();
  QDate::setDate((int)param_1 + 0x60,iVar9,iVar5);
  local_120 = (QArrayData *)QString::fromAscii_helper("platform_id",0xb);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toInt(pbVar11,0);
  *(undefined4 *)&param_1[4].field0_0x0 = uVar8;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d69c;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b7d69c:
  local_128 = (QArrayData *)QString::fromAscii_helper("language_id",0xb);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar6 = QString::toInt(pbVar11,0);
  *(uint *)((long)&param_1[4].field0_0x0 + 4) = uVar6;
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 == 0) {
LAB_100b7d6fd:
      QArrayData::deallocate(local_128,2,8);
    }
    else {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100b7d6fd;
    }
    uVar6 = *(uint *)((long)&param_1[4].field0_0x0 + 4);
  }
  if ((uVar6 | 2) == 0xb) {
    *(undefined1 *)((long)&param_1[0x10].field0_0x0 + 4) = 1;
  }
  else {
    *(undefined1 *)((long)&param_1[0x10].field0_0x0 + 4) = 0;
  }
  local_130 = (QArrayData *)QString::fromAscii_helper("distributor_id",0xe);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toInt(pbVar11,0);
  *(undefined4 *)&param_1[5].field0_0x0 = uVar8;
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d79a;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b7d79a:
  local_138 = (QArrayData *)QString::fromAscii_helper("product_flags",0xd);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  iVar9 = QString::toUInt(pbVar11,0);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d809;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100b7d809:
  local_140 = (QArrayData *)QString::fromAscii_helper("product_flags2",0xe);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  iVar5 = QString::toUInt(pbVar11,0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d877;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100b7d877:
  uVar6 = iVar5 * 0x40 + iVar9;
  *(uint *)((long)&param_1[6].field0_0x0 + 4) = uVar6;
  uVar7 = uVar6 >> 3 & _UNK_101db39f8;
  uVar20 = uVar6 >> 1 & _UNK_101db39fc;
  param_1[0xd].field0_0x0 =
       (QTypedArrayData<unsigned_short> *)(CONCAT44(uVar6 >> 4,uVar6) & _DAT_101db39f0);
  *(uint *)&param_1[0xe].field0_0x0 = uVar7;
  *(uint *)((long)&param_1[0xe].field0_0x0 + 4) = uVar20;
  *(uint *)&param_1[0xf].field0_0x0 = uVar6 >> 2 & 1;
  *(uint *)((long)&param_1[0xf].field0_0x0 + 4) = uVar6 >> 5 & 1;
  *(uint *)&param_1[0x10].field0_0x0 = uVar6 >> 6 & 1;
  cVar4 = FUN_100d80630(1);
  if (cVar4 == '\0') {
    local_148 = (QArrayData *)QString::fromAscii_helper("edition_id",10);
    pbVar11 = (bool *)FUN_1006f3180(pQVar1);
    uVar8 = QString::toUInt(pbVar11,0);
    *(undefined4 *)&param_1[7].field0_0x0 = uVar8;
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b7d966;
      }
      QArrayData::deallocate(local_148,2,8);
    }
  }
  else {
    *(undefined4 *)&param_1[7].field0_0x0 = 1;
  }
LAB_100b7d966:
  local_150 = (QArrayData *)QString::fromAscii_helper("type_id",7);
  pbVar11 = (bool *)FUN_1006f3180(pQVar1);
  uVar8 = QString::toUInt(pbVar11,0);
  *(undefined4 *)((long)&param_1[7].field0_0x0 + 4) = uVar8;
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7d9d6;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100b7d9d6:
  local_160 = (QArrayData *)QString::fromAscii_helper("start_date",10);
  uVar13 = FUN_1006f3180(pQVar1,&local_160);
  QDateTime::fromString(&local_158,uVar13,1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7da47;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100b7da47:
  QDateTime::date();
  iVar9 = QDate::year();
  QDateTime::date();
  iVar5 = QDate::month();
  QDateTime::date();
  QDate::day();
  QDate::setDate((int)param_1 + 0x58,iVar9,iVar5);
  *(undefined8 *)((long)&param_1[9].field0_0x0 + 4) = 0x1ffffffff;
  iVar9 = *(int *)((long)&param_1[3].field0_0x0 + 4);
  if ((iVar9 - 6U < 2) || (iVar9 == 1)) {
    *(undefined4 *)&param_1[10].field0_0x0 = 0;
    if (*(int *)&param_1[7].field0_0x0 == 1) {
      param_1[9].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x200000000004;
    }
    else {
      FUN_100b89670(param_1,0x10);
      *(undefined4 *)((long)&param_1[9].field0_0x0 + 4) = 0x10000;
    }
  }
  else if (iVar9 == 3) {
    if (*(int *)((long)&param_1[0xe].field0_0x0 + 4) == 0) {
      FUN_100b89670(param_1,8);
      *(undefined8 *)((long)&param_1[9].field0_0x0 + 4) = 0x2000;
    }
    else {
      FUN_100b89670(param_1,0x1000);
    }
  }
  else if ((*(int *)&param_1[0xd].field0_0x0 == 0) &&
          (*(int *)((long)&param_1[0xd].field0_0x0 + 4) == 0)) {
    FUN_100b89670(param_1,0x1000);
  }
  else {
    *(undefined4 *)&param_1[9].field0_0x0 = 0x1000;
  }
  FUN_100b89790(param_1);
  QDateTime::~QDateTime(&local_158);
  QDateTime::~QDateTime(&local_e0);
  return 1;
}

