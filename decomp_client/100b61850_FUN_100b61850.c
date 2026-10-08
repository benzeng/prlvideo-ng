
undefined8 FUN_100b61850(long param_1,QString *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  QString *pQVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool *pbVar10;
  size_t sVar11;
  long lVar12;
  QArrayData *pQVar13;
  bool bVar14;
  QArrayData *local_318;
  QString local_310;
  QArrayData *local_308;
  QString local_300;
  QArrayData *local_2f8;
  QString local_2f0;
  QArrayData *local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QString local_2d0;
  QArrayData *local_2c8;
  QString local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QString local_298;
  QArrayData *local_290;
  QDateTime local_288;
  QString local_280;
  QArrayData *local_278;
  QString local_270;
  QArrayData *local_268;
  QString local_260;
  QArrayData *local_258;
  QString local_250;
  QArrayData *local_248;
  QString local_240;
  QArrayData *local_238;
  QString local_230;
  QArrayData *local_228;
  QString local_220;
  QArrayData *local_218;
  QString local_210;
  QArrayData *local_208;
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QArrayData *local_1e8;
  QString local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QDateTime local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QDateTime local_b0;
  QString local_a8;
  QDateTime local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return 0;
  }
  if (*(int *)(*param_3 + 4) == 0) {
    return 0;
  }
  FUN_100b60fd0(param_1);
  *(undefined1 *)(param_1 + 0x10) = 1;
  QString::operator=((QString *)(param_1 + 8),param_2);
  QString::trimmed();
  *(bool *)(param_1 + 0x125) = 0x22 < *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b618f2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b618f2:
  lVar2 = *param_3;
  if ((*(long *)(lVar2 + 0x10) != 0) && (lVar6 = *(long *)(lVar2 + 0x20), lVar6 != lVar2 + 8)) {
    do {
      FUN_1006f3070(param_1 + 0x18,lVar6 + 0x18,lVar6 + 0x20);
      lVar6 = QMapNodeBase::nextNode();
    } while (lVar6 != *param_3 + 8);
  }
  lVar2 = *param_4;
  if ((*(long *)(lVar2 + 0x10) != 0) && (lVar6 = *(long *)(lVar2 + 0x20), lVar6 != lVar2 + 8)) {
    do {
      FUN_1006f3070(param_1 + 0x20,lVar6 + 0x18,lVar6 + 0x20);
      lVar6 = QMapNodeBase::nextNode();
    } while (lVar6 != *param_4 + 8);
  }
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("owner_name",10);
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar2 == 0) {
LAB_100b61a07:
    lVar12 = 0;
  }
  else {
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_50), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b619f6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b61a07;
LAB_100b619f6:
    cVar3 = operator<(&local_50,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b61a07;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b61a39;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100b61a39:
  plVar1 = (long *)(param_1 + 0x18);
  if (lVar12 != 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("owner_name",10);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_58);
    QString::operator=((QString *)(param_1 + 0x30),pQVar7);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61a9f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100b61a9f:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("version",7);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b61b17:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_60), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b61b06;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b61b17;
LAB_100b61b06:
    cVar3 = operator<(&local_60,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b61b17;
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b61b49;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100b61b49:
  if (lVar12 != 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("version",7);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_68);
    QString::operator=((QString *)(param_1 + 0x38),pQVar7);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61bab;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100b61bab:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("owner_id",8);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b61c27:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_70), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b61c16;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b61c27;
LAB_100b61c16:
    cVar3 = operator<(&local_70,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b61c27;
  }
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b61c59;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100b61c59:
  if (lVar12 != 0) {
    local_78 = (QArrayData *)QString::fromAscii_helper("owner_id",8);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_78);
    QString::operator=((QString *)(param_1 + 0x40),pQVar7);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61cbb;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100b61cbb:
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("expiration",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b61d37:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_80), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b61d26;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b61d37;
LAB_100b61d26:
    cVar3 = operator<(&local_80,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b61d37;
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b61d69;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100b61d69:
  if (lVar12 != 0) {
    local_90 = (QArrayData *)QString::fromAscii_helper("expiration",10);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_90);
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar8;
    if (1 < *(int *)local_88.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61de7;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100b61de7:
    local_98.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("unlimited",9);
    cVar3 = operator==(&local_88,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61e47;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100b61e47:
    if (cVar3 == '\0') {
      QDateTime::fromString(&local_a0,&local_88,1);
      QDateTime::operator=((QDateTime *)(param_1 + 0x50),&local_a0);
      QDateTime::~QDateTime(&local_a0);
      QDateTime::setTimeSpec((QDateTime *)(param_1 + 0x50),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b61ec3;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_100b61ec3:
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("start_date",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b61f4a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_a8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b61f36;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b61f4a;
LAB_100b61f36:
    cVar3 = operator<(&local_a8,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b61f4a;
  }
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b61f82;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100b61f82:
  if (lVar12 != 0) {
    local_b8 = (QArrayData *)QString::fromAscii_helper("start_date",10);
    uVar9 = FUN_1006f3180(plVar1,&local_b8);
    QDateTime::fromString(&local_b0,uVar9,1);
    QDateTime::operator=((QDateTime *)(param_1 + 0x58),&local_b0);
    QDateTime::~QDateTime(&local_b0);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6201b;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100b6201b:
    QDateTime::setTimeSpec((QDateTime *)(param_1 + 0x58),1);
  }
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hwid",4);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b620aa:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_c0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62096;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b620aa;
LAB_100b62096:
    cVar3 = operator<(&local_c0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b620aa;
  }
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b620e2;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b620e2:
  if (lVar12 != 0) {
    local_c8 = (QArrayData *)QString::fromAscii_helper("hwid",4);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_c8);
    QString::operator=((QString *)(param_1 + 0x60),pQVar7);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62150;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100b62150:
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 2;
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serial",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b621da:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_d0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b621c6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b621da;
LAB_100b621c6:
    cVar3 = operator<(&local_d0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b621da;
  }
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62212;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100b62212:
  if (lVar12 != 0) {
    local_d8 = (QArrayData *)QString::fromAscii_helper("serial",6);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_d8);
    QString::operator=((QString *)(param_1 + 0x68),pQVar7);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62280;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
LAB_100b62280:
  local_e0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("issue_date",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6230a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_e0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b622f6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6230a;
LAB_100b622f6:
    cVar3 = operator<(&local_e0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6230a;
  }
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62342;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100b62342:
  if (lVar12 != 0) {
    local_f0 = (QArrayData *)QString::fromAscii_helper("issue_date",10);
    uVar9 = FUN_1006f3180(plVar1,&local_f0);
    QDateTime::fromString(&local_e8,uVar9,1);
    QDateTime::operator=((QDateTime *)(param_1 + 0x70),&local_e8);
    QDateTime::~QDateTime(&local_e8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b623db;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100b623db:
    QDateTime::setTimeSpec((QDateTime *)(param_1 + 0x70),1);
  }
  local_f8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("graceperiod",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6246a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_f8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62456;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6246a;
LAB_100b62456:
    cVar3 = operator<(&local_f8,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6246a;
  }
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b624a2;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100b624a2:
  if (lVar12 != 0) {
    local_100 = (QArrayData *)QString::fromAscii_helper("graceperiod",0xb);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62517;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100b62517:
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  }
  local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cpu_total",9)
  ;
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6259a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_108), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62586;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6259a;
LAB_100b62586:
    cVar3 = operator<(&local_108,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6259a;
  }
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b625d2;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100b625d2:
  if (lVar12 != 0) {
    local_110 = (QArrayData *)QString::fromAscii_helper("cpu_total",9);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    iVar5 = QString::toUInt(pbVar10,0);
    *(int *)(param_1 + 0x7c) = iVar5;
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 == 0) {
LAB_100b6263c:
        QArrayData::deallocate(local_110,2,8);
      }
      else {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100b6263c;
      }
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x7c) = 0xffff;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  }
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ct_total",8);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b626ea:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_118), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b626d6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b626ea;
LAB_100b626d6:
    cVar3 = operator<(&local_118,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b626ea;
  }
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62722;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100b62722:
  if (lVar12 != 0) {
    local_128 = (QArrayData *)QString::fromAscii_helper("ct_total",8);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_128);
    local_120 = (QArrayData *)*puVar8;
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
    }
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b627a3;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100b627a3:
    local_130 = (QArrayData *)QString::fromAscii_helper("unlimited",9);
    iVar5 = QString::indexOf(&local_120,&local_130,0,1);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6280d;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100b6280d:
    if (iVar5 < 0) {
      uVar4 = QString::toUInt((bool *)&local_120,0);
      *(undefined4 *)(param_1 + 0x80) = uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0xffff;
    }
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6286e;
      }
      QArrayData::deallocate(local_120,2,8);
    }
  }
LAB_100b6286e:
  local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("nr_mem",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b628ea:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_138), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b628d6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b628ea;
LAB_100b628d6:
    cVar3 = operator<(&local_138,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b628ea;
  }
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62922;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_100b62922:
  if (lVar12 != 0) {
    local_148 = (QArrayData *)QString::fromAscii_helper("nr_mem",6);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_148);
    local_140 = (QArrayData *)*puVar8;
    if (1 < *(int *)local_140 + 1U) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + 1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
    }
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b629a3;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100b629a3:
    local_150 = (QArrayData *)QString::fromAscii_helper("unlimited",9);
    iVar5 = QString::indexOf(&local_140,&local_150,0,1);
    bVar14 = true;
    if (iVar5 < 0) {
      iVar5 = QString::toUInt((bool *)&local_140,0);
      bVar14 = iVar5 == -1;
    }
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62a2a;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100b62a2a:
    if (bVar14) {
      *(undefined4 *)(param_1 + 0x84) = 0xffff;
    }
    else {
      iVar5 = QString::toUInt((bool *)&local_140,0);
      *(int *)(param_1 + 0x84) = iVar5 << 10;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 4;
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62a93;
      }
      QArrayData::deallocate(local_140,2,8);
    }
  }
LAB_100b62a93:
  local_158.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vtd_allowed",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b62b1a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_158), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62b06;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b62b1a;
LAB_100b62b06:
    cVar3 = operator<(&local_158,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b62b1a;
  }
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62b52;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_100b62b52:
  if (lVar12 != 0) {
    local_160 = (QArrayData *)QString::fromAscii_helper("vtd_allowed",0xb);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    iVar5 = QString::toUInt(pbVar10,0);
    *(uint *)(param_1 + 0x88) = (uint)(iVar5 == 1);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62bd7;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_100b62bd7:
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 8;
  }
  local_168.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("max_vzmc_users",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b62c5a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_168), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62c46;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b62c5a;
LAB_100b62c46:
    cVar3 = operator<(&local_168,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b62c5a;
  }
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_31 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62c92;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_100b62c92:
  if (lVar12 != 0) {
    local_178 = (QArrayData *)QString::fromAscii_helper("max_vzmc_users",0xe);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_178);
    local_170 = (QArrayData *)*puVar8;
    if (1 < *(int *)local_170 + 1U) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
    }
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62d13;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100b62d13:
    local_180 = (QArrayData *)QString::fromAscii_helper("unlimited",9);
    iVar5 = QString::indexOf(&local_170,&local_180,0,1);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62d7d;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_100b62d7d:
    if (iVar5 < 0) {
      uVar9 = QString::toULongLong((bool *)&local_170,0);
      *(undefined8 *)(param_1 + 0x90) = uVar9;
    }
    else {
      *(undefined8 *)(param_1 + 0x90) = 0xffff;
    }
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62dde;
      }
      QArrayData::deallocate(local_170,2,8);
    }
  }
LAB_100b62dde:
  local_188.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("max_vzcc_users",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b62e5a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_188), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b62e46;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b62e5a;
LAB_100b62e46:
    cVar3 = operator<(&local_188,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b62e5a;
  }
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b62e92;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100b62e92:
  if (lVar12 != 0) {
    local_198 = (QArrayData *)QString::fromAscii_helper("max_vzcc_users",0xe);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_198);
    local_190 = (QArrayData *)*puVar8;
    if (1 < *(int *)local_190 + 1U) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + 1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
    }
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62f13;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_100b62f13:
    local_1a0 = (QArrayData *)QString::fromAscii_helper("unlimited",9);
    iVar5 = QString::indexOf(&local_190,&local_1a0,0,1);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62f7d;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_100b62f7d:
    if (iVar5 < 0) {
      uVar9 = QString::toULongLong((bool *)&local_190,0);
      *(undefined8 *)(param_1 + 0x98) = uVar9;
    }
    else {
      *(undefined8 *)(param_1 + 0x98) = 0xffff;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x40;
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b62fe3;
      }
      QArrayData::deallocate(local_190,2,8);
    }
  }
LAB_100b62fe3:
  local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("product",7);
  if (*(long *)(*plVar1 + 0x10) != 0) {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_1a8), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b6305a;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 != 0) {
LAB_100b6305a:
      cVar3 = operator<(&local_1a8,(QString *)(lVar12 + 0x18));
      if (cVar3 == '\0') {
        puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_1a8);
        local_1b0 = (QArrayData *)*puVar8;
        if (1 < *(int *)local_1b0 + 1U) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + 1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
        }
        QString::toLatin1();
        if ((1 < *(uint *)local_1b8) || (*(long *)(local_1b8 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_1b8,*(uint *)(local_1b8 + 4) + 1,*(uint *)(local_1b8 + 8) >> 0x1f);
        }
        pQVar13 = local_1b8 + *(long *)(local_1b8 + 0x10);
        QString::toLatin1();
        if ((1 < *(uint *)local_1c0) || (*(long *)(local_1c0 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_1c0,*(uint *)(local_1c0 + 4) + 1,*(uint *)(local_1c0 + 8) >> 0x1f);
        }
        sVar11 = _strlen((char *)(local_1c0 + *(long *)(local_1c0 + 0x10)));
        FUN_100b9f470(param_1 + 0xa0,pQVar13,sVar11 & 0xffffffff);
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_31 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b6317e;
          }
          QArrayData::deallocate(local_1c0,1,8);
        }
LAB_100b6317e:
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_31 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b631b4;
          }
          QArrayData::deallocate(local_1b8,1,8);
        }
LAB_100b631b4:
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b631ea;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
      }
    }
  }
LAB_100b631ea:
  QString::fromUtf8_helper((char *)&local_40,0x1e0e458);
  QString::operator=(&local_1a8,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6323f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b6323f:
  if (*(long *)(*plVar1 + 0x10) != 0) {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_1a8), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b6329a;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 != 0) {
LAB_100b6329a:
      cVar3 = operator<(&local_1a8,(QString *)(lVar12 + 0x18));
      if (cVar3 == '\0') {
        puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_1a8);
        local_1c8 = (QArrayData *)*puVar8;
        if (1 < *(int *)local_1c8 + 1U) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + 1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
        }
        QString::toLatin1();
        if ((1 < *(uint *)local_1d0) || (*(long *)(local_1d0 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_1d0,*(uint *)(local_1d0 + 4) + 1,*(uint *)(local_1d0 + 8) >> 0x1f);
        }
        pQVar13 = local_1d0 + *(long *)(local_1d0 + 0x10);
        QString::toLatin1();
        if ((1 < *(uint *)local_1d8) || (*(long *)(local_1d8 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_1d8,*(uint *)(local_1d8 + 4) + 1,*(uint *)(local_1d8 + 8) >> 0x1f);
        }
        sVar11 = _strlen((char *)(local_1d8 + *(long *)(local_1d8 + 0x10)));
        FUN_100b9f360(param_1 + 0xa4,pQVar13,sVar11 & 0xffffffff);
        if (*(int *)local_1d8 != -1) {
          if (*(int *)local_1d8 != 0) {
            LOCK();
            *(int *)local_1d8 = *(int *)local_1d8 + -1;
            local_31 = *(int *)local_1d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b633be;
          }
          QArrayData::deallocate(local_1d8,1,8);
        }
LAB_100b633be:
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b633f4;
          }
          QArrayData::deallocate(local_1d0,1,8);
        }
LAB_100b633f4:
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b6342a;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
      }
    }
  }
LAB_100b6342a:
  local_1e0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("architecture",0xc);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b634aa:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_1e0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63496;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b634aa;
LAB_100b63496:
    cVar3 = operator<(&local_1e0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b634aa;
  }
  if (*(int *)local_1e0.field0_0x0 != -1) {
    if (*(int *)local_1e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
      local_31 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b634e2;
    }
    QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
  }
LAB_100b634e2:
  if (lVar12 != 0) {
    local_1e8 = (QArrayData *)QString::fromAscii_helper("architecture",0xc);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_1e8);
    QString::operator=((QString *)(param_1 + 0xa8),pQVar7);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63553;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
  }
LAB_100b63553:
  local_1f0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vzpp_allowed",0xc);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b635da:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_1f0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b635c6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b635da;
LAB_100b635c6:
    cVar3 = operator<(&local_1f0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b635da;
  }
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_31 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63612;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_100b63612:
  if (lVar12 != 0) {
    local_1f8 = (QArrayData *)QString::fromAscii_helper("vzpp_allowed",0xc);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6368a;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
  }
LAB_100b6368a:
  local_200.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("backup_mgmt_allowed",0x13);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6370a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_200), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b636f6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6370a;
LAB_100b636f6:
    cVar3 = operator<(&local_200,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6370a;
  }
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_31 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63742;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_100b63742:
  if (lVar12 != 0) {
    local_208 = (QArrayData *)QString::fromAscii_helper("backup_mgmt_allowed",0x13);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b637ba;
      }
      QArrayData::deallocate(local_208,2,8);
    }
  }
LAB_100b637ba:
  local_210.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("workflow_mgmt_allowed",0x15);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6383a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_210), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63826;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6383a;
LAB_100b63826:
    cVar3 = operator<(&local_210,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6383a;
  }
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_31 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63872;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_100b63872:
  if (lVar12 != 0) {
    local_218 = (QArrayData *)QString::fromAscii_helper("workflow_mgmt_allowed",0x15);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xb8) = uVar4;
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b638ea;
      }
      QArrayData::deallocate(local_218,2,8);
    }
  }
LAB_100b638ea:
  local_220.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("rku_allowed",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6396a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_220), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63956;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6396a;
LAB_100b63956:
    cVar3 = operator<(&local_220,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6396a;
  }
  if (*(int *)local_220.field0_0x0 != -1) {
    if (*(int *)local_220.field0_0x0 != 0) {
      LOCK();
      *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
      local_31 = *(int *)local_220.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b639a2;
    }
    QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
  }
LAB_100b639a2:
  if (lVar12 != 0) {
    local_228 = (QArrayData *)QString::fromAscii_helper("rku_allowed",0xb);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63a1a;
      }
      QArrayData::deallocate(local_228,2,8);
    }
LAB_100b63a1a:
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x10;
  }
  local_230.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ha_allowed",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b63a9a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_230), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63a86;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b63a9a;
LAB_100b63a86:
    cVar3 = operator<(&local_230,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b63a9a;
  }
  if (*(int *)local_230.field0_0x0 != -1) {
    if (*(int *)local_230.field0_0x0 != 0) {
      LOCK();
      *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
      local_31 = *(int *)local_230.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63ad2;
    }
    QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
  }
LAB_100b63ad2:
  if (lVar12 != 0) {
    local_238 = (QArrayData *)QString::fromAscii_helper("ha_allowed",10);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xdc) = uVar4;
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_31 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63b4a;
      }
      QArrayData::deallocate(local_238,2,8);
    }
LAB_100b63b4a:
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x20;
  }
  local_240.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b63bca:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_240), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63bb6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b63bca;
LAB_100b63bb6:
    cVar3 = operator<(&local_240,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b63bca;
  }
  if (*(int *)local_240.field0_0x0 != -1) {
    if (*(int *)local_240.field0_0x0 != 0) {
      LOCK();
      *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
      local_31 = *(int *)local_240.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63c02;
    }
    QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
  }
LAB_100b63c02:
  if (lVar12 != 0) {
    local_248 = (QArrayData *)QString::fromAscii_helper("key_number",10);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_248);
    QString::operator=((QString *)(param_1 + 0xc0),pQVar7);
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63c73;
      }
      QArrayData::deallocate(local_248,2,8);
    }
  }
LAB_100b63c73:
  local_250.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number_value",0x10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b63cfa:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_250), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63ce6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b63cfa;
LAB_100b63ce6:
    cVar3 = operator<(&local_250,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b63cfa;
  }
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_31 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63d32;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
  }
LAB_100b63d32:
  if (lVar12 != 0) {
    local_258 = (QArrayData *)QString::fromAscii_helper("key_number_value",0x10);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar9 = QString::toULongLong(pbVar10,0);
    *(undefined8 *)(param_1 + 200) = uVar9;
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63daa;
      }
      QArrayData::deallocate(local_258,2,8);
    }
  }
LAB_100b63daa:
  local_260.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number_version",0x12);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b63e2a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_260), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63e16;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b63e2a;
LAB_100b63e16:
    cVar3 = operator<(&local_260,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b63e2a;
  }
  if (*(int *)local_260.field0_0x0 != -1) {
    if (*(int *)local_260.field0_0x0 != 0) {
      LOCK();
      *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
      local_31 = *(int *)local_260.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63e62;
    }
    QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
  }
LAB_100b63e62:
  if (lVar12 != 0) {
    local_268 = (QArrayData *)QString::fromAscii_helper("key_number_version",0x12);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    if (*(int *)local_268 != -1) {
      if (*(int *)local_268 != 0) {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + -1;
        local_31 = *(int *)local_268 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b63eda;
      }
      QArrayData::deallocate(local_268,2,8);
    }
  }
LAB_100b63eda:
  local_270.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vzagent_allowed",0xf);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b63f5a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_270), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b63f46;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b63f5a;
LAB_100b63f46:
    cVar3 = operator<(&local_270,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b63f5a;
  }
  if (*(int *)local_270.field0_0x0 != -1) {
    if (*(int *)local_270.field0_0x0 != 0) {
      LOCK();
      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
      local_31 = *(int *)local_270.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b63f92;
    }
    QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
  }
LAB_100b63f92:
  if (lVar12 != 0) {
    local_278 = (QArrayData *)QString::fromAscii_helper("vzagent_allowed",0xf);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    if (*(int *)local_278 != -1) {
      if (*(int *)local_278 != 0) {
        LOCK();
        *(int *)local_278 = *(int *)local_278 + -1;
        local_31 = *(int *)local_278 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6400a;
      }
      QArrayData::deallocate(local_278,2,8);
    }
  }
LAB_100b6400a:
  local_280.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("license_update_date",0x13);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6408a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_280), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b64076;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6408a;
LAB_100b64076:
    cVar3 = operator<(&local_280,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6408a;
  }
  if (*(int *)local_280.field0_0x0 != -1) {
    if (*(int *)local_280.field0_0x0 != 0) {
      LOCK();
      *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
      local_31 = *(int *)local_280.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b640c2;
    }
    QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
  }
LAB_100b640c2:
  if (lVar12 != 0) {
    local_290 = (QArrayData *)QString::fromAscii_helper("license_update_date",0x13);
    uVar9 = FUN_1006f3180(plVar1,&local_290);
    QDateTime::fromString(&local_288,uVar9,1);
    QDateTime::operator=((QDateTime *)(param_1 + 0xe0),&local_288);
    QDateTime::~QDateTime(&local_288);
    if (*(int *)local_290 != -1) {
      if (*(int *)local_290 != 0) {
        LOCK();
        *(int *)local_290 = *(int *)local_290 + -1;
        local_31 = *(int *)local_290 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6415e;
      }
      QArrayData::deallocate(local_290,2,8);
    }
LAB_100b6415e:
    QDateTime::setTimeSpec((QDateTime *)(param_1 + 0xe0),1);
  }
  local_298.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("nr_vms",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b641ea:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_298), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b641d6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b641ea;
LAB_100b641d6:
    cVar3 = operator<(&local_298,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b641ea;
  }
  if (*(int *)local_298.field0_0x0 != -1) {
    if (*(int *)local_298.field0_0x0 != 0) {
      LOCK();
      *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
      local_31 = *(int *)local_298.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b64222;
    }
    QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
  }
LAB_100b64222:
  if (lVar12 != 0) {
    local_2a8 = (QArrayData *)QString::fromAscii_helper("nr_vms",6);
    puVar8 = (undefined8 *)FUN_1006f3180(plVar1,&local_2a8);
    local_2a0 = (QArrayData *)*puVar8;
    if (1 < *(int *)local_2a0 + 1U) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + 1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
    }
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b642a3;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
LAB_100b642a3:
    local_2b0 = (QArrayData *)QString::fromAscii_helper("unlimited",9);
    iVar5 = QString::indexOf(&local_2a0,&local_2b0,0,1);
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6430d;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_100b6430d:
    if (iVar5 < 0) {
      local_2b8 = (QArrayData *)QString::fromAscii_helper("combined",8);
      iVar5 = QString::indexOf(&local_2a0,&local_2b8,0,1);
      if (*(int *)local_2b8 != -1) {
        if (*(int *)local_2b8 != 0) {
          LOCK();
          *(int *)local_2b8 = *(int *)local_2b8 + -1;
          local_31 = *(int *)local_2b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b6438b;
        }
        QArrayData::deallocate(local_2b8,2,8);
      }
LAB_100b6438b:
      if (iVar5 < 0) {
        uVar4 = QString::toUInt((bool *)&local_2a0,0);
        *(undefined4 *)(param_1 + 0xe8) = uVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x80);
        *(undefined1 *)(param_1 + 0xec) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 0xffff;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x10;
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b643fc;
      }
      QArrayData::deallocate(local_2a0,2,8);
    }
  }
LAB_100b643fc:
  local_2c0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("update_password",0xf);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6447a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_2c0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b64466;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6447a;
LAB_100b64466:
    cVar3 = operator<(&local_2c0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6447a;
  }
  if (*(int *)local_2c0.field0_0x0 != -1) {
    if (*(int *)local_2c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
      local_31 = *(int *)local_2c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b644b2;
    }
    QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
  }
LAB_100b644b2:
  if (lVar12 != 0) {
    local_2c8 = (QArrayData *)QString::fromAscii_helper("update_password",0xf);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_2c8);
    QString::operator=((QString *)(param_1 + 0xf0),pQVar7);
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_31 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b64523;
      }
      QArrayData::deallocate(local_2c8,2,8);
    }
  }
LAB_100b64523:
  local_2d0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("keyserver_host",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b645aa:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_2d0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b64596;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b645aa;
LAB_100b64596:
    cVar3 = operator<(&local_2d0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b645aa;
  }
  if (*(int *)local_2d0.field0_0x0 != -1) {
    if (*(int *)local_2d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
      local_31 = *(int *)local_2d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b645e2;
    }
    QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
  }
LAB_100b645e2:
  if (lVar12 != 0) {
    local_2d8 = (QArrayData *)QString::fromAscii_helper("keyserver_host",0xe);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_2d8);
    QString::operator=((QString *)(param_1 + 0xf8),pQVar7);
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        local_31 = *(int *)local_2d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b64653;
      }
      QArrayData::deallocate(local_2d8,2,8);
    }
  }
LAB_100b64653:
  local_2e0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("disable_reporting",0x11);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b646da:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_2e0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b646c6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b646da;
LAB_100b646c6:
    cVar3 = operator<(&local_2e0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b646da;
  }
  if (*(int *)local_2e0.field0_0x0 != -1) {
    if (*(int *)local_2e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
      local_31 = *(int *)local_2e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b64712;
    }
    QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
  }
LAB_100b64712:
  if (lVar12 != 0) {
    local_2e8 = (QArrayData *)QString::fromAscii_helper("disable_reporting",0x11);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    if (*(int *)local_2e8 != -1) {
      if (*(int *)local_2e8 != 0) {
        LOCK();
        *(int *)local_2e8 = *(int *)local_2e8 + -1;
        local_31 = *(int *)local_2e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6478a;
      }
      QArrayData::deallocate(local_2e8,2,8);
    }
  }
LAB_100b6478a:
  local_2f0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_version",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6480a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_2f0), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b647f6;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6480a;
LAB_100b647f6:
    cVar3 = operator<(&local_2f0,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6480a;
  }
  if (*(int *)local_2f0.field0_0x0 != -1) {
    if (*(int *)local_2f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2f0.field0_0x0 = *(int *)local_2f0.field0_0x0 + -1;
      local_31 = *(int *)local_2f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b64842;
    }
    QArrayData::deallocate((QArrayData *)local_2f0.field0_0x0,2,8);
  }
LAB_100b64842:
  if (lVar12 != 0) {
    local_2f8 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_2f8);
    QString::operator=((QString *)(param_1 + 0x108),pQVar7);
    if (*(int *)local_2f8 != -1) {
      if (*(int *)local_2f8 != 0) {
        LOCK();
        *(int *)local_2f8 = *(int *)local_2f8 + -1;
        local_31 = *(int *)local_2f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b648b3;
      }
      QArrayData::deallocate(local_2f8,2,8);
    }
  }
LAB_100b648b3:
  local_300.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("volume_license",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6493a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_300), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b64926;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b6493a;
LAB_100b64926:
    cVar3 = operator<(&local_300,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6493a;
  }
  if (*(int *)local_300.field0_0x0 != -1) {
    if (*(int *)local_300.field0_0x0 != 0) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
      local_31 = *(int *)local_300.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b64972;
    }
    QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
  }
LAB_100b64972:
  if (lVar12 != 0) {
    local_308 = (QArrayData *)QString::fromAscii_helper("volume_license",0xe);
    pbVar10 = (bool *)FUN_1006f3180(plVar1);
    uVar4 = QString::toUInt(pbVar10,0);
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    if (*(int *)local_308 != -1) {
      if (*(int *)local_308 != 0) {
        LOCK();
        *(int *)local_308 = *(int *)local_308 + -1;
        local_31 = *(int *)local_308 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b649ea;
      }
      QArrayData::deallocate(local_308,2,8);
    }
LAB_100b649ea:
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  local_310.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("status",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b64a6a:
    lVar12 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar6 = 0;
    do {
      while (lVar12 = lVar2, cVar3 = operator<((QString *)(lVar12 + 0x18),&local_310), cVar3 == '\0'
            ) {
        lVar2 = *(long *)(lVar12 + 8);
        lVar6 = lVar12;
        if (*(long *)(lVar12 + 8) == 0) goto LAB_100b64a56;
      }
      lVar2 = *(long *)(lVar12 + 0x10);
    } while (*(long *)(lVar12 + 0x10) != 0);
    lVar12 = lVar6;
    if (lVar6 == 0) goto LAB_100b64a6a;
LAB_100b64a56:
    cVar3 = operator<(&local_310,(QString *)(lVar12 + 0x18));
    if (cVar3 != '\0') goto LAB_100b64a6a;
  }
  if (*(int *)local_310.field0_0x0 != -1) {
    if (*(int *)local_310.field0_0x0 != 0) {
      LOCK();
      *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
      local_31 = *(int *)local_310.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b64aa2;
    }
    QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
  }
LAB_100b64aa2:
  if (lVar12 != 0) {
    local_318 = (QArrayData *)QString::fromAscii_helper("status",6);
    pQVar7 = (QString *)FUN_1006f3180(plVar1,&local_318);
    QString::operator=((QString *)(param_1 + 0x118),pQVar7);
    if (*(int *)local_318 != -1) {
      if (*(int *)local_318 != 0) {
        LOCK();
        *(int *)local_318 = *(int *)local_318 + -1;
        local_31 = *(int *)local_318 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b64b16;
      }
      QArrayData::deallocate(local_318,2,8);
    }
  }
LAB_100b64b16:
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_1a8.field0_0x0 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
  return 1;
}

