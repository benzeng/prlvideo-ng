
QString * FUN_100b859f0(QString *param_1,long param_2)

{
  uint uVar1;
  QArrayData *pQVar2;
  bool *pbVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  QString local_1a8;
  QArrayData *local_1a0;
  QString local_198;
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
  
  local_180 = (QArrayData *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_178,0x1ed94df);
  QString::append(param_1);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85a79;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100b85a79:
  QString::fromUtf8_helper((char *)&local_170,0x1ed94f7);
  QString::append(param_1);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85ad6;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100b85ad6:
  QString::fromUtf8_helper((char *)&local_168,0x1ed9502);
  QString::append(param_1);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85b33;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100b85b33:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x18)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x18) < 0x10) {
    pcVar8 = (&PTR_s_PRL_VERSION_ANY_10223f8f0)[*(int *)(param_2 + 0x18)];
  }
  else {
    pcVar8 = "unknown";
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_160,0x1ed9540);
  QString::append(param_1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85bf2;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100b85bf2:
  QString::fromUtf8_helper((char *)&local_158,0x1ed954d);
  QString::append(param_1);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85c4f;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100b85c4f:
  QString::sprintf((char *)&local_180,"%u",(ulong)*(uint *)(param_2 + 0x38));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_150,0x1ed9558);
  QString::append(param_1);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85cd0;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100b85cd0:
  QString::fromUtf8_helper((char *)&local_148,0x1ed9564);
  QString::append(param_1);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85d2d;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100b85d2d:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x1c)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x1c) < 8) {
    pcVar8 = (&PTR_s_PRL_PRODUCT_ANY_10223f990)[*(int *)(param_2 + 0x1c)];
  }
  else {
    pcVar8 = "unknown";
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_140,0x1ed9570);
  QString::append(param_1);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85dec;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100b85dec:
  QString::fromUtf8_helper((char *)&local_138,0x1ed957d);
  QString::append(param_1);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85e49;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100b85e49:
  QString::sprintf((char *)&local_180,"%u",(ulong)*(uint *)(param_2 + 0x30));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_130,0x1ed958b);
  QString::append(param_1);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85eca;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b85eca:
  QString::fromUtf8_helper((char *)&local_128,0x1ed959a);
  QString::append(param_1);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85f27;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b85f27:
  FUN_100b857e0(&local_188,param_2);
  QString::append(param_1);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85f7b;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100b85f7b:
  QString::fromUtf8_helper((char *)&local_120,0x1ed95aa);
  QString::append(param_1);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b85fd8;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b85fd8:
  QString::fromUtf8_helper((char *)&local_118,0x1ed95bb);
  QString::append(param_1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86035;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b86035:
  FUN_100b858e0(&local_190,param_2);
  QString::append(param_1);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86089;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100b86089:
  QString::fromUtf8_helper((char *)&local_110,0x1ed95c5);
  QString::append(param_1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b860e6;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b860e6:
  QString::fromUtf8_helper((char *)&local_108,0x1ed95d0);
  QString::append(param_1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86143;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b86143:
  local_1a0 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
  QDate::toString(&local_198);
  QString::append(param_1);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_31 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b861b7;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_100b861b7:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b861ed;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100b861ed:
  QString::fromUtf8_helper((char *)&local_100,0x1ed95da);
  QString::append(param_1);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8624a;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b8624a:
  QString::fromUtf8_helper((char *)&local_f8,0x1ed95e5);
  QString::append(param_1);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b862a7;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100b862a7:
  if (*(int *)(param_2 + 0x40) == 0) {
    QString::fromUtf8_helper((char *)&local_f0,0x1dc545a);
    QString::append(param_1);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b863bf;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
  else {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy",10);
    QDate::toString(&local_1a8);
    QString::append(param_1);
    if (*(int *)local_1a8.field0_0x0 != -1) {
      if (*(int *)local_1a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
        local_31 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b86326;
      }
      QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
    }
LAB_100b86326:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b863bf;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_100b863bf:
  QString::fromUtf8_helper((char *)&local_e8,0x1ed95f3);
  QString::append(param_1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8641c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b8641c:
  QString::fromUtf8_helper((char *)&local_e0,0x1ed9602);
  QString::append(param_1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86479;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100b86479:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x20)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x20) < 7) {
    pcVar8 = (&PTR_s_PRL_PLATFORM_ANY_10223f9d0)[*(int *)(param_2 + 0x20)];
  }
  else {
    pcVar8 = "unknown";
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_d8,0x1ed960f);
  QString::append(param_1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86538;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b86538:
  QString::fromUtf8_helper((char *)&local_d0,0x1ed961d);
  QString::append(param_1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86595;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b86595:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x24)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x24) < 0x17) {
    pcVar8 = (&PTR_s_PRL_LANG_ANY_10223fa10)[*(int *)(param_2 + 0x24)];
  }
  else {
    pcVar8 = "unknown";
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_c8,0x1ed962a);
  QString::append(param_1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86654;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100b86654:
  QString::fromUtf8_helper((char *)&local_c0,0x1ed9638);
  QString::append(param_1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b866b1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100b866b1:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x28)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x28) < 4) {
    pcVar8 = (&PTR_s_PRL_DISTR_PARALLELS_10223fad0)[*(int *)(param_2 + 0x28)];
  }
  else {
    pcVar8 = "unknown";
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_b8,0x1ed9648);
  QString::append(param_1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86770;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b86770:
  QString::fromUtf8_helper((char *)&local_b0,0x1ed9659);
  QString::append(param_1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b867cd;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b867cd:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  pbVar3 = (bool *)FUN_1006f3180(param_2 + 0x10);
  uVar1 = QString::toUInt(pbVar3,0);
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)uVar1);
  QString::append(param_1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8685e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b8685e:
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%u</Decoded>\n",(ulong)*(uint *)(param_2 + 0x48)
                  );
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_a8,0x1ed9680);
  QString::append(param_1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b868df;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b868df:
  QString::fromUtf8_helper((char *)&local_a0,0x1ed968f);
  QString::append(param_1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8693c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b8693c:
  QString::sprintf((char *)&local_180,"%u",(ulong)*(uint *)(param_2 + 0x4c));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_98,0x1ed969f);
  QString::append(param_1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b869bd;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b869bd:
  QString::fromUtf8_helper((char *)&local_90,0x1ed96b0);
  QString::append(param_1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86a1a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b86a1a:
  pcVar8 = "YES";
  iVar7 = 0x1de0fa1;
  if (*(int *)(param_2 + 0x50) != 0) {
    iVar7 = 0x1de0f9d;
  }
  QString::fromUtf8_helper((char *)&local_88,iVar7);
  QString::append(param_1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86a82;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b86a82:
  QString::fromUtf8_helper((char *)&local_80,0x1ed96c1);
  QString::append(param_1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86ad3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b86ad3:
  QString::fromUtf8_helper((char *)&local_78,0x1ed96d3);
  QString::append(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86b24;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b86b24:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x3c)
                  );
  QString::append(param_1);
  pcVar4 = "PRL_LIC_TYPE_BOX";
  pcVar6 = "unknown";
  if (*(int *)(param_2 + 0x3c) != 1) {
    pcVar4 = "unknown";
  }
  pcVar5 = "PRL_LIC_TYPE_ELECTRONIC";
  if (*(int *)(param_2 + 0x3c) != 0) {
    pcVar5 = pcVar4;
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar5);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_70,0x1ed96e4);
  QString::append(param_1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86bdf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b86bdf:
  QString::fromUtf8_helper((char *)&local_68,0x1ed96f6);
  QString::append(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86c30;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b86c30:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>%u</Numeric>\n",(ulong)*(uint *)(param_2 + 0x2c)
                  );
  QString::append(param_1);
  if ((ulong)(long)*(int *)(param_2 + 0x2c) < 3) {
    pcVar6 = (&PTR_s_PRL_PUBSTATUS_UNKNOWN_10223f970)[*(int *)(param_2 + 0x2c)];
  }
  QString::sprintf((char *)&local_180,"\t\t<Decoded>%s</Decoded>\n",pcVar6);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_60,0x1ed9707);
  QString::append(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86cdd;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b86cdd:
  QString::fromUtf8_helper((char *)&local_58,0x1ed9719);
  QString::append(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86d2e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b86d2e:
  QString::sprintf((char *)&local_180,"\t\t<Numeric>0x%X</Numeric>\n",
                   (ulong)*(uint *)(param_2 + 0x34));
  QString::append(param_1);
  if (*(int *)(param_2 + 0x68) == 0) {
    pcVar8 = "NO";
  }
  QString::sprintf((char *)&local_180,"\t\t<Trial>%s</Trial>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x74) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<Full>%s</Full>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x78) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<NFR>%s</NFR>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x70) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<Upgrade>%s</Upgrade>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x6c) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<Beta>%s</Beta>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x7c) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<Volume>%s</Volume>\n",pcVar8);
  QString::append(param_1);
  if (*(int *)(param_2 + 0x80) == 0) {
    pcVar8 = "NO";
  }
  else {
    pcVar8 = "YES";
  }
  QString::sprintf((char *)&local_180,"\t\t<Protected>%s</Protected>\n",pcVar8);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_50,0x1ed97d7);
  QString::append(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86f1d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b86f1d:
  QString::fromUtf8_helper((char *)&local_48,0x1ed97e2);
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86f6e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b86f6e:
  QString::fromUtf8_helper((char *)&local_40,0x1ed97ee);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b86fbf;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b86fbf:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      UNLOCK();
      if (*(int *)local_180 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_180,2,8);
  }
  return param_1;
}

