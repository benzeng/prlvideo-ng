
undefined8 * FUN_1006279c0(undefined8 *param_1,undefined4 param_2)

{
  QString QVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *pQVar8;
  int iVar9;
  char *pcVar10;
  QArrayData *local_180;
  QArrayData *local_178;
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QVariant local_138;
  undefined8 local_128;
  undefined8 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined4 local_e8 [2];
  QVariant local_e0;
  undefined8 local_d0;
  QDateTime local_c8;
  QVariant local_c0;
  QDateTime local_b0;
  QDateTime local_a8;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("source",6);
  FUN_100627880(&local_88,param_2);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_78 = local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
  }
  local_80 = pQVar5;
  FUN_1001c44c0(param_1,&local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627a6b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100627a6b:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627a9a;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100627a9a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627ac5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100627ac5:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627af4;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100627af4:
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar6);
  if (lVar7 == 0) {
    return param_1;
  }
  uVar6 = FUN_10016f500(lVar7);
  FUN_10061abe0(&local_98,uVar6,0);
  iVar3 = QVariant::toInt((bool *)&local_98);
  QVariant::~QVariant(&local_98);
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("valid",5);
  if (iVar3 < 0) {
    if (iVar3 < -0x7ffeefa8) {
      if (iVar3 != -0x7ffeefff) goto LAB_100627d87;
    }
    else if (iVar3 < -0x7ffeef8c) {
      if (iVar3 == -0x7ffeefa8) goto LAB_100627b9d;
      if (iVar3 != -0x7ffeef9b) goto LAB_100627d87;
    }
    else if ((iVar3 != -0x7ffeef8c) && (iVar3 != -0x7ffeef89)) goto LAB_100627d87;
    QString::fromUtf8_helper((char *)&local_70,0x1e08909);
    QString::operator=(&local_a0,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100627ddc;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
  else if (iVar3 == 0) {
LAB_100627b9d:
    cVar2 = FUN_10061b4d0(uVar6,0x8000);
    if ((cVar2 != '\0') && (cVar2 = FUN_10061b4d0(uVar6,0x20), cVar2 == '\0')) {
      QDateTime::currentDateTime();
      FUN_10061abe0(&local_c0,uVar6,9);
      QVariant::toDateTime();
      QVariant::~QVariant(&local_c0);
      FUN_10061abe0(&local_e0,uVar6,6);
      local_d0 = QVariant::toDate();
      local_e8[0] = QDateTime::time();
      QDateTime::QDateTime(&local_c8,&local_d0,local_e8,0);
      QVariant::~QVariant(&local_e0);
      cVar2 = QDateTime::operator<(&local_a8,&local_b0);
      if ((cVar2 == '\0') && (cVar2 = QDateTime::operator<(&local_a8,&local_c8), cVar2 != '\0')) {
        QString::fromUtf8_helper((char *)&local_60,0x1e0891f);
        QString::operator=(&local_a0,&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100627cea;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
LAB_100627cea:
      QDateTime::~QDateTime(&local_c8);
      QDateTime::~QDateTime(&local_b0);
      QDateTime::~QDateTime(&local_a8);
    }
  }
  else {
LAB_100627d87:
    QString::fromUtf8_helper((char *)&local_68,0x1e08911);
    QString::operator=(&local_a0,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100627ddc;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100627ddc:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("status",6);
  QVar1.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_f0 = (QArrayData *)local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  local_f8 = pQVar5;
  FUN_1001c44c0(param_1,&local_f8);
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_31 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627e65;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_100627e65:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 == 0) {
LAB_100627e82:
      QArrayData::deallocate(pQVar5,2,8);
    }
    else {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100627e82;
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100627ec3;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100627ec3:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("signed_in",9);
  FUN_10061abe0(&local_118,uVar6,0xf);
  cVar2 = QVariant::toBool();
  pcVar10 = "1";
  if (cVar2 != '\0') {
    pcVar10 = "0";
  }
  pQVar8 = (QArrayData *)QString::fromAscii_helper(pcVar10,1);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  local_108 = pQVar5;
  local_100 = pQVar8;
  FUN_1001c44c0(param_1,&local_108);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627f86;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100627f86:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627fb5;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100627fb5:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100627fe0;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100627fe0:
  QVariant::~QVariant(&local_118);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062801b;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10062801b:
  cVar2 = FUN_10061b4d0(uVar6,0x20);
  if (cVar2 == '\0') goto LAB_10062821a;
  if (iVar3 < -0x7ffeef8c) {
    if ((iVar3 != -0x7ffeefff) && (iVar3 != -0x7ffeef9b)) {
LAB_10062806e:
      local_120 = QDate::currentDate();
      FUN_10061abe0(&local_138,uVar6,6);
      local_128 = QVariant::toDate();
      iVar4 = QDate::daysTo((QDate *)&local_120);
      QVariant::~QVariant(&local_138);
      iVar9 = 0xe;
      if (iVar4 != 0) {
        iVar9 = 0xf - iVar4;
      }
      iVar4 = 1;
      if ((0 < iVar9) && (iVar4 = 0xf, iVar9 < 0x10)) {
        iVar4 = iVar9;
      }
      pQVar8 = (QArrayData *)QString::fromAscii_helper("day_of_trial",0xc);
      QString::number((int)&local_150,iVar4);
      pQVar5 = local_150;
      if (1 < *(int *)pQVar8 + 1U) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + 1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
      }
      local_140 = local_150;
      if (1 < *(int *)local_150 + 1U) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
      }
      local_148 = pQVar8;
      FUN_1001c44c0(param_1,&local_148);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100628186;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100628186:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006281b5;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_1006281b5:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006281eb;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1006281eb:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10062821a;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_10062821a:
      if (iVar3 < 0) {
        if (iVar3 < -0x7ffeefa8) {
          if (iVar3 != -0x7ffeefff) goto LAB_10062866d;
        }
        else if ((0x1f < iVar3 + 0x7ffeefa8U) ||
                ((0x90002001U >> (iVar3 + 0x7ffeefa8U & 0x1f) & 1) == 0)) goto LAB_10062866d;
      }
      else if (iVar3 != 0) goto LAB_10062866d;
    }
  }
  else if ((iVar3 != -0x7ffeef8c) && (iVar3 != -0x7ffeef89)) goto LAB_10062806e;
  local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("std",3);
  cVar2 = FUN_10061b4d0(uVar6,0x80);
  if (cVar2 == '\0') {
    cVar2 = FUN_10061b4d0(uVar6,0x10000);
    if (cVar2 != '\0') {
      QString::fromUtf8_helper((char *)&local_50,0x1e08944);
      QString::operator=(&local_158,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100628349;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_58,0x1e0893b);
    QString::operator=(&local_158,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100628349;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_100628349:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("edition",7);
  QVar1.field0_0x0 = local_158.field0_0x0;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_160 = (QArrayData *)local_158.field0_0x0;
  if (1 < *(int *)local_158.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + 1;
    local_31 = *(int *)local_158.field0_0x0 != 0;
    UNLOCK();
  }
  local_168 = pQVar5;
  FUN_1001c44c0(param_1,&local_168);
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_31 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006283d2;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1006283d2:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 == 0) {
LAB_1006283ef:
      QArrayData::deallocate(pQVar5,2,8);
    }
    else {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006283ef;
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100628430;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100628430:
  local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("perpetual",9)
  ;
  cVar2 = FUN_10061b4d0(uVar6,0x20);
  if (cVar2 == '\0') {
    cVar2 = FUN_10061b4d0(uVar6,0x8000);
    if (cVar2 != '\0') {
      QString::fromUtf8_helper((char *)&local_40,0x1e08960);
      QString::operator=(&local_170,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10062851a;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_48,0x1e0895a);
    QString::operator=(&local_170,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062851a;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10062851a:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("license",7);
  QVar1.field0_0x0 = local_170.field0_0x0;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_178 = (QArrayData *)local_170.field0_0x0;
  if (1 < *(int *)local_170.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
    local_31 = *(int *)local_170.field0_0x0 != 0;
    UNLOCK();
  }
  local_180 = pQVar5;
  FUN_1001c44c0(param_1,&local_180);
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_31 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006285a3;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1006285a3:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 == 0) {
LAB_1006285c0:
      QArrayData::deallocate(pQVar5,2,8);
    }
    else {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006285c0;
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100628601;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100628601:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100628637;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_100628637:
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062866d;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_10062866d:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return param_1;
}

