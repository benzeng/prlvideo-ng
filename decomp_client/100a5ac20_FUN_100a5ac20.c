
void FUN_100a5ac20(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  undefined1 auVar3 [16];
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
  void *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15d0;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar3;
  local_38 = (void *)0x0;
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iCalendarType",0xd);
  local_40 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_40,3,FUN_100a52360);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5acc6;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5acc6:
  local_48 = (QArrayData *)QString::fromAscii_helper("iCalendarType",0xd);
  FUN_100a5d470(param_1,&local_48,&local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ad1b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a5ad1b:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sDecimal",8);
  local_50 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_50,3,FUN_100a528d0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ad87;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5ad87:
  local_58 = (QArrayData *)QString::fromAscii_helper("sDecimal",8);
  FUN_100a5d470(param_1,&local_58,&local_38);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5addc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a5addc:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sThousand",9);
  local_60 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_60,3,FUN_100a52a30);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ae48;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5ae48:
  local_68 = (QArrayData *)QString::fromAscii_helper("sThousand",9);
  FUN_100a5d470(param_1,&local_68,&local_38);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ae9d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a5ae9d:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iDigits",7);
  local_70 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_70,1,FUN_100a52bf0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5af09;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5af09:
  local_78 = (QArrayData *)QString::fromAscii_helper("iDigits",7);
  FUN_100a5d470(param_1,&local_78,&local_38);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5af5e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a5af5e:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iNegNumber",10);
  local_80 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_80,1,FUN_100a52db0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5afca;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5afca:
  local_88 = (QArrayData *)QString::fromAscii_helper("iNegNumber",10);
  FUN_100a5d470(param_1,&local_88,&local_38);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b01f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100a5b01f:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sNegativeSign",0xd);
  local_90 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_90,4,FUN_100a53730);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b091;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b091:
  local_98 = (QArrayData *)QString::fromAscii_helper("sNegativeSign",0xd);
  FUN_100a5d470(param_1,&local_98,&local_38);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b0f2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100a5b0f2:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sPositiveSign",0xd);
  local_a0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_a0,4,FUN_100a53ac0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b164;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b164:
  local_a8 = (QArrayData *)QString::fromAscii_helper("sPositiveSign",0xd);
  FUN_100a5d470(param_1,&local_a8,&local_38);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b1c5;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100a5b1c5:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sCurrency",9);
  local_b0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_b0,0xc,FUN_100a545d0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b237;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b237:
  local_b8 = (QArrayData *)QString::fromAscii_helper("sCurrency",9);
  FUN_100a5d470(param_1,&local_b8,&local_38);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b298;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100a5b298:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sMonDecimalSep",0xe);
  local_c0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_c0,3,FUN_100a54730);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b30a;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b30a:
  local_c8 = (QArrayData *)QString::fromAscii_helper("sMonDecimalSep",0xe);
  FUN_100a5d470(param_1,&local_c8,&local_38);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b36b;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100a5b36b:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sMonThousandSep",0xf);
  local_d0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_d0,3,FUN_100a54890);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b3dd;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b3dd:
  local_d8 = (QArrayData *)QString::fromAscii_helper("sMonThousandSep",0xf);
  FUN_100a5d470(param_1,&local_d8,&local_38);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b43e;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100a5b43e:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iCurrDigits",0xb);
  local_e0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_e0,1,FUN_100a54a40);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b4b0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b4b0:
  local_e8 = (QArrayData *)QString::fromAscii_helper("iCurrDigits",0xb);
  FUN_100a5d470(param_1,&local_e8,&local_38);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b511;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100a5b511:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iCurrency",9);
  local_f0 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_f0,1,FUN_100a54c00);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b583;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b583:
  local_f8 = (QArrayData *)QString::fromAscii_helper("iCurrency",9);
  FUN_100a5d470(param_1,&local_f8,&local_38);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b5e4;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100a5b5e4:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iNegCurr",8);
  local_100 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_100,2,FUN_100a558c0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b656;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b656:
  local_108 = (QArrayData *)QString::fromAscii_helper("iNegCurr",8);
  FUN_100a5d470(param_1,&local_108,&local_38);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b6b7;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100a5b6b7:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iLZero",6);
  local_110 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_110,1,FUN_100a53e50);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b729;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b729:
  local_118 = (QArrayData *)QString::fromAscii_helper("iLZero",6);
  FUN_100a5d470(param_1,&local_118,&local_38);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b78a;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100a5b78a:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sShortTime",10);
  local_120 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_120,0x4f,FUN_100a586d0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b7fc;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b7fc:
  local_128 = (QArrayData *)QString::fromAscii_helper("sShortTime",10);
  FUN_100a5d470(param_1,&local_128,&local_38);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b85d;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100a5b85d:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sTimeFormat",0xb);
  local_130 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_130,0x4f,FUN_100a586b0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b8cf;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b8cf:
  local_138 = (QArrayData *)QString::fromAscii_helper("sTimeFormat",0xb);
  FUN_100a5d470(param_1,&local_138,&local_38);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b930;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100a5b930:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("s1159",5);
  local_140 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_140,0xe,FUN_100a586f0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5b9a2;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5b9a2:
  local_148 = (QArrayData *)QString::fromAscii_helper("s1159",5);
  FUN_100a5d470(param_1,&local_148,&local_38);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ba03;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100a5ba03:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("s2359",5);
  local_150 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_150,0xe,FUN_100a58830);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5ba75;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5ba75:
  local_158 = (QArrayData *)QString::fromAscii_helper("s2359",5);
  FUN_100a5d470(param_1,&local_158,&local_38);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bad6;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100a5bad6:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sShortDate",10);
  local_160 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_160,0x4f,FUN_100a59c80);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bb48;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5bb48:
  local_168 = (QArrayData *)QString::fromAscii_helper("sShortDate",10);
  FUN_100a5d470(param_1,&local_168,&local_38);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bba9;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100a5bba9:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("sLongDate",9);
  local_170 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_170,0x4f,FUN_100a59ca0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bc1b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5bc1b:
  local_178 = (QArrayData *)QString::fromAscii_helper("sLongDate",9);
  FUN_100a5d470(param_1,&local_178,&local_38);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_29 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bc7c;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100a5bc7c:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iFirstDayOfWeek",0xf);
  local_180 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_180,1,FUN_100a59cc0);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bcee;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5bcee:
  local_188 = (QArrayData *)QString::fromAscii_helper("iFirstDayOfWeek",0xf);
  FUN_100a5d470(param_1,&local_188,&local_38);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_29 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bd4f;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100a5bd4f:
  pvVar1 = operator_new(0x20);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("iMeasure",8);
  local_190 = pQVar2;
  FUN_100a59fe0(pvVar1,&local_190,1,FUN_100a59e40);
  local_38 = pvVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5bdc1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a5bdc1:
  local_198 = (QArrayData *)QString::fromAscii_helper("iMeasure",8);
  FUN_100a5d470(param_1,&local_198,&local_38);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      UNLOCK();
      if (*(int *)local_198 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_198,2,8);
  }
  return;
}

