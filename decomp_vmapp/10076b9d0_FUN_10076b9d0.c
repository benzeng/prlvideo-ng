
undefined8 FUN_10076b9d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
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
  int local_38 [5];
  undefined1 local_21;
  
  local_e8 = (QArrayData *)
             QString::fromAscii_helper
                       ("%1%2%3%4   %5%6%7%8%9%10%11%12%13%14%15%16%17%18%19%20%21%22\n",0x3d);
  QString::number((int)&local_f0,*(int *)(*param_2 + 0x28));
  QString::arg(&local_e0,&local_e8,&local_f0,0xfffffff6,0x20);
  lVar1 = *param_2;
  sVar7 = _strlen((char *)(lVar1 + 0xf3));
  local_f8 = (QArrayData *)QString::fromAscii_helper((char *)(lVar1 + 0xf3),(int)sVar7);
  QString::arg(&local_d8,&local_e0,&local_f8,0xffffffee,0x20);
  FUN_10076d510(&local_100,param_2);
  QString::arg(&local_d0,&local_d8,&local_100,0xfffffff8,0x20);
  FUN_10076d5a0(&local_108,param_2);
  QString::arg(&local_c8,&local_d0,&local_108,0xe,0x20);
  FUN_10076f230(&local_110);
  QString::arg(&local_c0,&local_c8,&local_110,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    if (((int)param_2[0xe] < 0) &&
       (cVar4 = FUN_10076f0c0(param_2,*(undefined4 *)((long)param_2 + 100)), cVar4 != '\0')) {
      local_118 = (QArrayData *)param_2[0xf];
      if (1 < *(int *)local_118 + 1U) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + 1;
        local_21 = *(int *)local_118 != 0;
        UNLOCK();
      }
    }
    else {
      FUN_10076f2d0(&local_118);
    }
  }
  else {
    local_118 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_b8,&local_c0,&local_118,0xfffffff4,0x20);
  QString::number((uint)&local_120,*(int *)(*param_2 + 0x1a4));
  QString::arg(&local_b0,&local_b8,&local_120,0xfffffff6,0x20);
  puVar8 = (undefined8 *)_getpwuid(*(undefined4 *)(*param_2 + 0x1a4));
  if (puVar8 == (undefined8 *)0x0) {
    local_128 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_21 = *(int *)local_128 != 0;
      UNLOCK();
    }
  }
  else {
    pcVar2 = (char *)*puVar8;
    iVar6 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar7 = _strlen(pcVar2);
      iVar6 = (int)sVar7;
    }
    local_128 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
  }
  QString::arg(&local_a8,&local_b0,&local_128,0xffffffee,0x20);
  if (param_2[0x10] == 0) {
    local_130 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
    }
  }
  else {
    pcVar3 = *(code **)(param_2[0x10] + 8);
    if (pcVar3 == (code *)0x0) {
      local_130 = (QArrayData *)param_2[0xf];
      if (1 < *(int *)local_130 + 1U) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + 1;
        local_21 = *(int *)local_130 != 0;
        UNLOCK();
      }
    }
    else {
      bVar5 = (*pcVar3)(*(undefined4 *)(*param_2 + 0x28),0,0);
      QString::number((int)&local_130,(uint)bVar5);
    }
  }
  QString::arg(&local_a0,&local_a8,&local_130,0xfffffff6,0x20);
  QString::number((int)&local_138,*(int *)(*param_2 + 0x234));
  QString::arg(&local_98,&local_a0,&local_138,0xfffffff6,0x20);
  QString::number((int)&local_140,*(int *)(*param_2 + 0x230));
  QString::arg(&local_90,&local_98,&local_140,0xfffffff6,0x20);
  iVar6 = _proc_pidinfo(*(int *)(*param_2 + 0x28),0xc,0,local_38,0x10);
  if (iVar6 < 1) {
    local_148 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_148 + 1U) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
    }
  }
  else {
    QString::number((uint)&local_148,local_38[0]);
  }
  QString::arg(&local_88,&local_90,&local_148,0xfffffff6,0x20);
  FUN_10076e280(&local_150,param_2);
  QString::arg(&local_80,&local_88,&local_150,0xfffffff4,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_158,*(int *)((long)param_2 + 0x44));
  }
  else {
    local_158 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_158 + 1U) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + 1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_78,&local_80,&local_158,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_160,*(int *)((long)param_2 + 0x4c));
  }
  else {
    local_160 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_160 + 1U) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + 1;
      local_21 = *(int *)local_160 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_70,&local_78,&local_160,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_168,(int)param_2[10]);
  }
  else {
    local_168 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_21 = *(int *)local_168 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_68,&local_70,&local_168,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_170,*(int *)((long)param_2 + 0x54));
  }
  else {
    local_170 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_170 + 1U) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_21 = *(int *)local_170 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_60,&local_68,&local_170,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_178,*(int *)((long)param_2 + 0x5c));
  }
  else {
    local_178 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_178 + 1U) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      local_21 = *(int *)local_178 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_58,&local_60,&local_178,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_180,(int)param_2[0xb]);
  }
  else {
    local_180 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_180 + 1U) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + 1;
      local_21 = *(int *)local_180 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_50,&local_58,&local_180,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_188,(int)param_2[0xc]);
  }
  else {
    local_188 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_188 + 1U) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + 1;
      local_21 = *(int *)local_188 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_48,&local_50,&local_188,0xfffffff6,0x20);
  if ((char)param_2[1] == '\0') {
    QString::number((int)&local_190,(int)param_2[9]);
  }
  else {
    local_190 = (QArrayData *)param_2[0xf];
    if (1 < *(int *)local_190 + 1U) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + 1;
      local_21 = *(int *)local_190 != 0;
      UNLOCK();
    }
  }
  QString::arg(&local_40,&local_48,&local_190,0xfffffff6,0x20);
  FUN_10076e740(&local_198,param_2);
  QString::arg(param_1,&local_40,&local_198,0,0x20);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_21 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c14c;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10076c14c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c17c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10076c17c:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_21 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c1b2;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10076c1b2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c1e2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10076c1e2:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_21 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c218;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10076c218:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c248;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10076c248:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_21 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c27e;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10076c27e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c2ae;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10076c2ae:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_21 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c2e4;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10076c2e4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c314;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10076c314:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_21 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c34a;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10076c34a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c37a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10076c37a:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_21 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c3b0;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10076c3b0:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c3e0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10076c3e0:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_21 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c416;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10076c416:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c446;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10076c446:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c47c;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10076c47c:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c4ac;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10076c4ac:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c4e2;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10076c4e2:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c512;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10076c512:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c548;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10076c548:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c57e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10076c57e:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_21 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c5b4;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10076c5b4:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c5ea;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10076c5ea:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c620;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10076c620:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c656;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10076c656:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c68c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10076c68c:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c6c2;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10076c6c2:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_21 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c6f8;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10076c6f8:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c72e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10076c72e:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_21 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c764;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10076c764:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c79a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10076c79a:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c7d0;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10076c7d0:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c806;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10076c806:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_21 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c83c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10076c83c:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c872;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10076c872:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c8a8;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10076c8a8:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c8de;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10076c8de:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c914;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10076c914:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c94a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10076c94a:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c980;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10076c980:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_21 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c9b6;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10076c9b6:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076c9ec;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10076c9ec:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return param_1;
}

