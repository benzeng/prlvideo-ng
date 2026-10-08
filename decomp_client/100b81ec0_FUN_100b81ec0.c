
QString * FUN_100b81ec0(QString *param_1,long param_2,char param_3)

{
  uint uVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  bool *pbVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  QString local_2a0;
  QArrayData *local_298;
  QString local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
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
  undefined1 local_31;
  
  local_278 = (QArrayData *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar1 = FUN_100b7e260(param_2);
  QString::fromUtf8_helper((char *)&local_270,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81f56;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100b81f56:
  uVar2 = FUN_100de83f0(uVar1);
  QString::sprintf((char *)&local_278,"Code = %s (0x%X)",uVar2,(ulong)uVar1);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_268,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b81fe2;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100b81fe2:
  QString::fromUtf8_helper((char *)&local_260,0x1ed82ee);
  QString::append(param_1);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8203f;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100b8203f:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x18) < 0x10) {
      pcVar5 = (&PTR_s_PRL_VERSION_ANY_10223f8f0)[*(int *)(param_2 + 0x18)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_258,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b820c0;
      }
      QArrayData::deallocate(local_258,2,8);
    }
  }
LAB_100b820c0:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x18));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_250,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82141;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100b82141:
  QString::fromUtf8_helper((char *)&local_248,0x1ed9382);
  QString::append(param_1);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8219e;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_100b8219e:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x38) < 4) {
      pcVar5 = (&PTR_s_PRL_EDITION_ANY_10223faf0)[*(int *)(param_2 + 0x38)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_240,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_31 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8221f;
      }
      QArrayData::deallocate(local_240,2,8);
    }
  }
LAB_100b8221f:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x38));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_238,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b822a0;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100b822a0:
  QString::fromUtf8_helper((char *)&local_230,0x1ed843d);
  QString::append(param_1);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b822fd;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100b822fd:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x1c) < 8) {
      pcVar5 = (&PTR_s_PRL_PRODUCT_ANY_10223f990)[*(int *)(param_2 + 0x1c)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_228,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8237e;
      }
      QArrayData::deallocate(local_228,2,8);
    }
  }
LAB_100b8237e:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x1c));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_220,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_31 = *(int *)local_220 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b823ff;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_100b823ff:
  QString::fromUtf8_helper((char *)&local_218,0x1ed938d);
  QString::append(param_1);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8245c;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_100b8245c:
  QString::sprintf((char *)&local_278,"%u",(ulong)*(uint *)(param_2 + 0x30));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_210,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b824dd;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100b824dd:
  QString::fromUtf8_helper((char *)&local_208,0x1ed939f);
  QString::append(param_1);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8253a;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100b8253a:
  FUN_100b857e0(&local_280,param_2);
  QString::append(param_1);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8258e;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_100b8258e:
  QString::fromUtf8_helper((char *)&local_200,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b825eb;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100b825eb:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_1f8,0x1ed93af);
    QString::append(param_1);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82651;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
LAB_100b82651:
    FUN_100b858e0(&local_288,param_2);
    QString::append(param_1);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b826a5;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_100b826a5:
    QString::fromUtf8_helper((char *)&local_1f0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82702;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
  }
LAB_100b82702:
  QString::fromUtf8_helper((char *)&local_1e8,0x1ed833f);
  QString::append(param_1);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8275f;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100b8275f:
  local_298 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
  QDate::toString(&local_290);
  QString::append(param_1);
  if (*(int *)local_290.field0_0x0 != -1) {
    if (*(int *)local_290.field0_0x0 != 0) {
      LOCK();
      *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
      local_31 = *(int *)local_290.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b827d3;
    }
    QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
  }
LAB_100b827d3:
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82809;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_100b82809:
  QString::fromUtf8_helper((char *)&local_1e0,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82866;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100b82866:
  QString::fromUtf8_helper((char *)&local_1d8,0x1ed93b9);
  QString::append(param_1);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b828c3;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100b828c3:
  QString::sprintf((char *)&local_278,"%u",(ulong)*(uint *)(param_2 + 0x40));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_1d0,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82944;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100b82944:
  QString::fromUtf8_helper((char *)&local_1c8,0x1ed93c9);
  QString::append(param_1);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b829a1;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100b829a1:
  QString::sprintf((char *)&local_278,"%u",(ulong)*(uint *)(param_2 + 0x44));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_1c0,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82a22;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100b82a22:
  QString::fromUtf8_helper((char *)&local_1b8,0x1ed8358);
  QString::append(param_1);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82a7f;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100b82a7f:
  if (*(int *)(param_2 + 0x40) == 0) {
    QString::fromUtf8_helper((char *)&local_1b0,0x1dc545a);
    QString::append(param_1);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82b97;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
  }
  else {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
    QDate::toString(&local_2a0);
    QString::append(param_1);
    if (*(int *)local_2a0.field0_0x0 != -1) {
      if (*(int *)local_2a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
        local_31 = *(int *)local_2a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82afe;
      }
      QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
    }
LAB_100b82afe:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82b97;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
LAB_100b82b97:
  QString::fromUtf8_helper((char *)&local_1a8,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82bf4;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100b82bf4:
  QString::fromUtf8_helper((char *)&local_1a0,0x1ed8431);
  QString::append(param_1);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82c51;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100b82c51:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x20) < 7) {
      pcVar5 = (&PTR_s_PRL_PLATFORM_ANY_10223f9d0)[*(int *)(param_2 + 0x20)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_198,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82cd2;
      }
      QArrayData::deallocate(local_198,2,8);
    }
  }
LAB_100b82cd2:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x20));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_190,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82d53;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100b82d53:
  QString::fromUtf8_helper((char *)&local_188,0x1ed93db);
  QString::append(param_1);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82db0;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100b82db0:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x24) < 0x17) {
      pcVar5 = (&PTR_s_PRL_LANG_ANY_10223fa10)[*(int *)(param_2 + 0x24)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_180,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82e31;
      }
      QArrayData::deallocate(local_180,2,8);
    }
  }
LAB_100b82e31:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x24));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_178,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82eb2;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100b82eb2:
  QString::fromUtf8_helper((char *)&local_170,0x1ed93e7);
  QString::append(param_1);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b82f0f;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100b82f0f:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x28) < 4) {
      pcVar5 = (&PTR_s_PRL_DISTR_PARALLELS_10223fad0)[*(int *)(param_2 + 0x28)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_168,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b82f90;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_100b82f90:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x28));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_160,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83011;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100b83011:
  QString::fromUtf8_helper((char *)&local_158,0x1ed93f6);
  QString::append(param_1);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8306e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100b8306e:
  QString::sprintf((char *)&local_278,"%u",(ulong)*(uint *)(param_2 + 0x48));
  QString::append(param_1);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  pbVar4 = (bool *)FUN_1006f3180(param_2 + 0x10);
  uVar1 = QString::toUInt(pbVar4,0);
  QString::sprintf((char *)&local_278," (%u)",(ulong)uVar1);
  QString::append(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83123;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100b83123:
  QString::fromUtf8_helper((char *)&local_150,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83180;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100b83180:
  QString::fromUtf8_helper((char *)&local_148,0x1ed940c);
  QString::append(param_1);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b831dd;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100b831dd:
  QString::sprintf((char *)&local_278,"%u",(ulong)*(uint *)(param_2 + 0x4c));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_140,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8325e;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100b8325e:
  QString::fromUtf8_helper((char *)&local_138,0x1ed941c);
  QString::append(param_1);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b832bb;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100b832bb:
  iVar7 = 0x1de0f9d;
  iVar8 = 0x1f1f14c;
  if (*(int *)(param_2 + 0x50) == 0) {
    iVar7 = 0x1f1f14c;
  }
  QString::fromUtf8_helper((char *)&local_130,iVar7);
  QString::append(param_1);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8332c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b8332c:
  QString::fromUtf8_helper((char *)&local_128,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83389;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b83389:
  QString::fromUtf8_helper((char *)&local_120,0x1ed942e);
  QString::append(param_1);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b833e6;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b833e6:
  if (param_3 != '\0') {
    pcVar5 = "unknown";
    if (*(int *)(param_2 + 0x3c) == 1) {
      pcVar5 = "PRL_LIC_TYPE_BOX";
    }
    pcVar6 = "PRL_LIC_TYPE_ELECTRONIC";
    if (*(int *)(param_2 + 0x3c) != 0) {
      pcVar6 = pcVar5;
    }
    _strlen(pcVar6);
    QString::fromUtf8_helper((char *)&local_118,(int)pcVar6);
    QString::append(param_1);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b83473;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_100b83473:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x3c));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_110,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b834f4;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b834f4:
  QString::fromUtf8_helper((char *)&local_108,0x1ed9436);
  QString::append(param_1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83551;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b83551:
  if (param_3 != '\0') {
    if ((ulong)(long)*(int *)(param_2 + 0x2c) < 3) {
      pcVar5 = (&PTR_s_PRL_PUBSTATUS_UNKNOWN_10223f970)[*(int *)(param_2 + 0x2c)];
    }
    else {
      pcVar5 = "unknown";
    }
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_100,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b835d2;
      }
      QArrayData::deallocate(local_100,2,8);
    }
  }
LAB_100b835d2:
  QString::sprintf((char *)&local_278," (%u)",(ulong)*(uint *)(param_2 + 0x2c));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_f8,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83653;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100b83653:
  QString::fromUtf8_helper((char *)&local_f0,0x1ed9447);
  QString::append(param_1);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b836b0;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100b836b0:
  QString::sprintf((char *)&local_278,"%u (0x%X)",(ulong)*(uint *)(param_2 + 0x34),
                   (ulong)*(uint *)(param_2 + 0x34));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_e8,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83733;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b83733:
  QString::fromUtf8_helper((char *)&local_e0,0x1ed9450);
  QString::append(param_1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83790;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100b83790:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",1);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x68) != 0) {
    iVar8 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_d8,iVar8);
  QString::append(param_1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8381c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b8381c:
  QString::fromUtf8_helper((char *)&local_d0,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83879;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b83879:
  if (param_3 == '\0') goto LAB_100b83fd5;
  QString::fromUtf8_helper((char *)&local_c8,0x1ed946d);
  QString::append(param_1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b838df;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100b838df:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",2);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x74) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_c0,iVar7);
  QString::append(param_1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83971;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100b83971:
  QString::fromUtf8_helper((char *)&local_b8,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b839ce;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b839ce:
  QString::fromUtf8_helper((char *)&local_b0,0x1ed9480);
  QString::append(param_1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83a2b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b83a2b:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",4);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x78) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_a8,iVar7);
  QString::append(param_1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83abd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b83abd:
  QString::fromUtf8_helper((char *)&local_a0,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83b1a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b83b1a:
  QString::fromUtf8_helper((char *)&local_98,0x1ed9493);
  QString::append(param_1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83b77;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b83b77:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_90,iVar7);
  QString::append(param_1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83c09;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b83c09:
  QString::fromUtf8_helper((char *)&local_88,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83c5a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b83c5a:
  QString::fromUtf8_helper((char *)&local_80,0x1ed94a6);
  QString::append(param_1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83cab;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b83cab:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",0x10);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x6c) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_78,iVar7);
  QString::append(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83d31;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b83d31:
  QString::fromUtf8_helper((char *)&local_70,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83d82;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b83d82:
  QString::fromUtf8_helper((char *)&local_68,0x1ed94b9);
  QString::append(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83dd3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b83dd3:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",0x20);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x7c) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_60,iVar7);
  QString::append(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83e59;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b83e59:
  QString::fromUtf8_helper((char *)&local_58,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83eaa;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b83eaa:
  QString::fromUtf8_helper((char *)&local_50,0x1ed94cc);
  QString::append(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83efb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b83efb:
  QString::sprintf((char *)&local_278," /%.2Xh/ ",0x40);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x80) == 0) {
    iVar7 = 0x1f1f14c;
  }
  else {
    iVar7 = 0x1ded61e;
  }
  QString::fromUtf8_helper((char *)&local_48,iVar7);
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83f84;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b83f84:
  QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b83fd5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b83fd5:
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      UNLOCK();
      if (*(int *)local_278 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_278,2,8);
  }
  return param_1;
}

