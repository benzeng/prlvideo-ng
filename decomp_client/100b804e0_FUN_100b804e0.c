
void FUN_100b804e0(long param_1,QString param_2,char param_3)

{
  size_t sVar1;
  QString QVar2;
  undefined8 *puVar3;
  QArrayData *pQVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x18) < 0x10) {
      pcVar5 = (&PTR_s_PRL_VERSION_ANY_10223f8f0)[*(int *)(param_1 + 0x18)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_68,(int)pcVar5);
    QString::operator=(&local_70,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80580;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100b80580:
  QString::number((int)&local_78,*(int *)(param_1 + 0x18));
  QString::operator=(&local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b805cf;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100b805cf:
  local_80 = (QArrayData *)local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  CDispLicenseParsedKey::setVersion(param_2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80624;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b80624:
  if ((ulong)(long)*(int *)(param_1 + 0x2c) < 3) {
    pcVar5 = (&PTR_s_PRL_PUBSTATUS_UNKNOWN_10223f970)[*(int *)(param_1 + 0x2c)];
  }
  else {
    pcVar5 = "unknown";
  }
  sVar1 = _strlen(pcVar5);
  local_88 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar1);
  CDispLicenseParsedKey::setPublicStatus(param_2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80694;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b80694:
  QString::number((uint)&local_90,*(int *)(param_1 + 0x38));
  CDispLicenseParsedKey::setEdition(param_2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b806ee;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b806ee:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x1c) < 8) {
      pcVar5 = (&PTR_s_PRL_PRODUCT_ANY_10223f990)[*(int *)(param_1 + 0x1c)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_60,(int)pcVar5);
    QString::operator=(&local_70,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80769;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_100b80769:
  QString::number((int)&local_98,*(int *)(param_1 + 0x1c));
  QString::operator=(&local_70,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b807c4;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100b807c4:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x1c) < 8) {
      pcVar5 = (&PTR_s_PRL_PRODUCT_ANY_10223f990)[*(int *)(param_1 + 0x1c)];
    }
    else {
      pcVar5 = "unknown";
    }
    sVar1 = _strlen(pcVar5);
    local_a0 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar1);
    CDispLicenseParsedKey::setProduct(param_2);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8084a;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100b8084a:
  QString::number((uint)&local_a8,*(int *)(param_1 + 0x30));
  CDispLicenseParsedKey::setIdentity(param_2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b808a4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b808a4:
  QVar2.field0_0x0 = operator_new(0xb0);
  Validity::Validity((Validity *)QVar2.field0_0x0);
  QString::number((uint)&local_b0,*(int *)(param_1 + 0x40));
  Validity::setUnit(QVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80913;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b80913:
  if (*(int *)(param_1 + 0x40) == 0) {
    QString::fromUtf8_helper((char *)&local_58,0x1dc545a);
    QString::append(&local_70);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80a1d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
  else {
    local_c0 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
    QDate::toString(&local_b8);
    QString::append(&local_70);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80993;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100b80993:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80a1d;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_100b80a1d:
  local_d8 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
  QDate::toString(&local_d0);
  local_c8.field0_0x0 = local_d0.field0_0x0;
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_c8);
  Validity::setIssued(QVar2);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80ac0;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100b80ac0:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80af6;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100b80af6:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80b2c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b80b2c:
  QString::number((uint)&local_e0,*(int *)(param_1 + 0x44));
  Validity::setPeriod(QVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80b86;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100b80b86:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x20) < 7) {
      pcVar5 = (&PTR_s_PRL_PLATFORM_ANY_10223f9d0)[*(int *)(param_1 + 0x20)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_50,(int)pcVar5);
    QString::operator=(&local_70,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80c01;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100b80c01:
  QString::number((int)&local_e8,*(int *)(param_1 + 0x20));
  QString::operator=(&local_70,&local_e8);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80c5c;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100b80c5c:
  CDispLicenseParsedKey::setValidity((Validity *)param_2.field0_0x0);
  local_f0 = (QArrayData *)local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  CDispLicenseParsedKey::setPlatform(param_2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80cc8;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100b80cc8:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x24) < 0x17) {
      pcVar5 = (&PTR_s_PRL_LANG_ANY_10223fa10)[*(int *)(param_1 + 0x24)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
    QString::operator=(&local_70,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80d43;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100b80d43:
  QString::number((int)&local_f8,*(int *)(param_1 + 0x24));
  QString::operator=(&local_70,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80d9e;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100b80d9e:
  local_100 = (QArrayData *)local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  CDispLicenseParsedKey::setLanguage(param_2);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80dff;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b80dff:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_1 + 0x28) < 4) {
      pcVar5 = (&PTR_s_PRL_DISTR_PARALLELS_10223fad0)[*(int *)(param_1 + 0x28)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_40,(int)pcVar5);
    QString::operator=(&local_70,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b80e7a;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100b80e7a:
  QString::number((int)&local_108,*(int *)(param_1 + 0x28));
  QString::operator=(&local_70,&local_108);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80ed5;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100b80ed5:
  local_110 = (QArrayData *)local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  CDispLicenseParsedKey::setDistributor(param_2);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80f36;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b80f36:
  QString::number((uint)&local_118,*(int *)(param_1 + 0x48));
  CDispLicenseParsedKey::setCpuLimit(param_2);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80f90;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b80f90:
  QString::number((uint)&local_120,*(int *)(param_1 + 0x4c));
  CDispLicenseParsedKey::setMemLimit(param_2);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b80fea;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b80fea:
  QString::number((uint)&local_128,*(int *)(param_1 + 0x3c));
  CDispLicenseParsedKey::setType(param_2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81044;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b81044:
  QVar2.field0_0x0 = operator_new(0xd8);
  CLicFlags::CLicFlags((CLicFlags *)QVar2.field0_0x0);
  puVar3 = (undefined8 *)
           QString::sprintf((char *)&local_70,"%u (0x%X)",(ulong)*(uint *)(param_1 + 0x34),
                            (ulong)*(uint *)(param_1 + 0x34));
  pQVar4 = (QArrayData *)*puVar3;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  CLicFlags::setValue(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b810d1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b810d1:
  bVar7 = *(int *)(param_1 + 0x68) != 0;
  pcVar5 = "NO";
  pcVar6 = "NO";
  if (bVar7) {
    pcVar6 = "YES";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar6,bVar7 | 2);
  CLicFlags::setTrial(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81145;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b81145:
  bVar7 = *(int *)(param_1 + 0x50) != 0;
  pcVar6 = "NO";
  if (bVar7) {
    pcVar6 = "YES";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar6,bVar7 | 2);
  CLicFlags::setVTd(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b811ab;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b811ab:
  bVar7 = *(int *)(param_1 + 0x7c) != 0;
  if (bVar7) {
    pcVar5 = "YES";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar5,bVar7 | 2);
  CLicFlags::setVolume(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81211;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b81211:
  if (param_3 == '\0') goto LAB_100b813c5;
  bVar7 = *(int *)(param_1 + 0x74) == 0;
  pcVar6 = "OFF";
  pcVar5 = "OFF";
  if (!bVar7) {
    pcVar5 = "ON";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar5,bVar7 | 2);
  CLicFlags::setFull(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81293;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b81293:
  bVar7 = *(int *)(param_1 + 0x78) == 0;
  pcVar5 = "OFF";
  if (!bVar7) {
    pcVar5 = "ON";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar5,bVar7 | 2);
  CLicFlags::setNFR(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b812f9;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b812f9:
  bVar7 = *(int *)(param_1 + 0x6c) == 0;
  pcVar5 = "OFF";
  if (!bVar7) {
    pcVar5 = "ON";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar5,bVar7 | 2);
  CLicFlags::setBeta(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8135f;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b8135f:
  bVar7 = *(int *)(param_1 + 0x70) == 0;
  if (!bVar7) {
    pcVar6 = "ON";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar6,bVar7 | 2);
  CLicFlags::setUpgrade(QVar2);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b813c5;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b813c5:
  CDispLicenseParsedKey::setFlags((CLicFlags *)param_2.field0_0x0);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return;
}

