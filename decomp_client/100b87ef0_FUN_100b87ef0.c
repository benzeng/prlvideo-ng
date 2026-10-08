
bool FUN_100b87ef0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QString *pQVar5;
  bool *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QString local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  undefined4 local_50;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_50 = 0;
  local_38 = lVar9;
  iVar1 = FUN_100b8dd80(param_2,local_48);
  bVar10 = false;
  if (iVar1 == 0) goto LAB_100b88cef;
  param_1 = param_1 + 0x10;
  local_58 = (QArrayData *)QString::fromAscii_helper("key_number_value",0x10);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_58);
  iVar1 = FUN_100bbf040(local_48,&local_50,0x13);
  QString::number((uint)&local_60,iVar1);
  QString::operator=(pQVar5,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_49 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b87fbd;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100b87fbd:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b87fed;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b87fed:
  local_68 = (QArrayData *)QString::fromAscii_helper("product_id",10);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_68);
  iVar1 = FUN_100bbf040(local_48,&local_50,4);
  QString::number((uint)&local_70,iVar1);
  QString::operator=(pQVar5,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_49 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8806f;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100b8806f:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8809f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b8809f:
  local_78 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_78);
  iVar1 = FUN_100bbf040(local_48,&local_50,4);
  QString::number((uint)&local_80,iVar1);
  QString::operator=(pQVar5,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_49 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88121;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100b88121:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88151;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b88151:
  local_88 = (QArrayData *)QString::fromAscii_helper("edition_id",10);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_88);
  iVar1 = FUN_100bbf040(local_48,&local_50,3);
  QString::number((uint)&local_90,iVar1);
  QString::operator=(pQVar5,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_49 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b881df;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100b881df:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8820f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b8820f:
  local_98 = (QArrayData *)QString::fromAscii_helper("start_date",10);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_98);
  iVar1 = FUN_100bbf040(local_48,&local_50,0xc);
  QString::number((uint)&local_a0,iVar1);
  QString::operator=(pQVar5,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_49 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b882a3;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100b882a3:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b882d9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b882d9:
  local_a8 = (QArrayData *)QString::fromAscii_helper("valid_unit",10);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_a8);
  iVar1 = FUN_100bbf040(local_48,&local_50,2);
  QString::number((uint)&local_b0,iVar1);
  QString::operator=(pQVar5,&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_49 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8836d;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100b8836d:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_49 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b883a3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b883a3:
  local_b8 = (QArrayData *)QString::fromAscii_helper("valid_period",0xc);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_b8);
  iVar1 = FUN_100bbf040(local_48,&local_50,5);
  QString::number((uint)&local_c0,iVar1);
  QString::operator=(pQVar5,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_49 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88437;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b88437:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_49 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8846d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b8846d:
  local_c8 = (QArrayData *)QString::fromAscii_helper("platform_id",0xb);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_c8);
  iVar1 = FUN_100bbf040(local_48,&local_50,4);
  QString::number((uint)&local_d0,iVar1);
  QString::operator=(pQVar5,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_49 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88501;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100b88501:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_49 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88537;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100b88537:
  local_d8 = (QArrayData *)QString::fromAscii_helper("language_id",0xb);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_d8);
  iVar1 = FUN_100bbf040(local_48,&local_50,5);
  QString::number((uint)&local_e0,iVar1);
  QString::operator=(pQVar5,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_49 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b885cb;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100b885cb:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_49 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88601;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b88601:
  local_e8 = (QArrayData *)QString::fromAscii_helper("distributor_id",0xe);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_e8);
  iVar1 = FUN_100bbf040(local_48,&local_50,7);
  QString::number((uint)&local_f0,iVar1);
  QString::operator=(pQVar5,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_49 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88695;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100b88695:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_49 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b886cb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b886cb:
  local_f8 = (QArrayData *)QString::fromAscii_helper("type_id",7);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_f8);
  iVar1 = FUN_100bbf040(local_48,&local_50,1);
  QString::number((uint)&local_100,iVar1);
  QString::operator=(pQVar5,&local_100);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_49 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8875f;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100b8875f:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_49 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88795;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100b88795:
  local_108 = (QArrayData *)QString::fromAscii_helper("product_flags",0xd);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_108);
  iVar1 = FUN_100bbf040(local_48,&local_50,6);
  QString::number((uint)&local_110,iVar1);
  QString::operator=(pQVar5,&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_49 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88829;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100b88829:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_49 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8885f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b8885f:
  local_118 = (QArrayData *)QString::fromAscii_helper("keynum_high",0xb);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_118);
  iVar1 = FUN_100bbf040(local_48,&local_50,8);
  QString::number((uint)&local_120,iVar1);
  QString::operator=(pQVar5,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_49 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b888f3;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100b888f3:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_49 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88929;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b88929:
  local_128 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_128);
  iVar1 = FUN_100bbf040(local_48,&local_50,2);
  QString::number((uint)&local_130,iVar1);
  QString::operator=(pQVar5,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_49 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b889bd;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100b889bd:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_49 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b889f3;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b889f3:
  local_138 = (QArrayData *)QString::fromAscii_helper("product_flags2",0xe);
  pQVar5 = (QString *)FUN_1006f3180(param_1,&local_138);
  iVar1 = FUN_100bbf040(local_48,&local_50,1);
  QString::number((uint)&local_140,iVar1);
  QString::operator=(pQVar5,&local_140);
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_49 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88a87;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_100b88a87:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_49 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88abd;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100b88abd:
  local_148 = (QArrayData *)QString::fromAscii_helper("start_date",10);
  pbVar6 = (bool *)FUN_1006f3180(param_1);
  uVar2 = QString::toUInt(pbVar6,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_49 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88b2c;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100b88b2c:
  local_150 = (QArrayData *)QString::fromAscii_helper("valid_unit",10);
  pbVar6 = (bool *)FUN_1006f3180(param_1);
  uVar3 = QString::toUInt(pbVar6,0);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_49 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88b9b;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100b88b9b:
  local_158 = (QArrayData *)QString::fromAscii_helper("valid_period",0xc);
  pbVar6 = (bool *)FUN_1006f3180(param_1);
  uVar4 = QString::toUInt(pbVar6,0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_49 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88c0a;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100b88c0a:
  local_160 = (QArrayData *)QString::fromAscii_helper("start_date",10);
  uVar7 = FUN_1006f3180(param_1,&local_160);
  local_168 = (QArrayData *)QString::fromAscii_helper("expiration",10);
  uVar8 = FUN_1006f3180(param_1,&local_168);
  iVar1 = FUN_100b924e0(uVar7,uVar8,uVar2,uVar3,uVar4);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_49 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88ca7;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100b88ca7:
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_49 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b88ce7;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100b88ce7:
  bVar10 = iVar1 != 0;
LAB_100b88cef:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar10;
}

