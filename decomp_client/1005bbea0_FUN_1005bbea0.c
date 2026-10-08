
void FUN_1005bbea0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_208;
  QArrayData *local_200;
  QString local_1f8;
  QString local_1f0;
  QString local_1e8;
  QString local_1e0;
  QString local_1d8;
  QString local_1d0;
  QString local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  undefined1 local_1a8 [8];
  QString local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QArrayData *local_178;
  QString local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  undefined1 local_120 [8];
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  undefined1 local_78 [8];
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_1005b69c0(&local_c8,param_1);
  cVar1 = FUN_10073dd70(&local_c8);
  if (cVar1 == '\0') goto LAB_1005bc5e8;
  FUN_10073e290(&local_d0,&local_c8);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = QString::compare_helper
                    (local_d0 + *(long *)(local_d0 + 0x10),*(undefined4 *)(local_d0 + 4),"x64",
                     0xffffffff,1);
  if ((iVar2 == 0) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    iVar2 = QString::compare_helper
                      (local_d0 + *(long *)(local_d0 + 0x10),*(undefined4 *)(local_d0 + 4),"x64",
                       0xffffffff,1);
    if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x3c) & 1) != 0)) {
      QString::fromUtf8_helper((char *)&local_40,0x1de3658);
      QString::operator=(&local_d8,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bc018;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_48,0x1de53c4);
    QString::operator=(&local_d8,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bc018;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1005bc018:
  if (*(int *)(local_d8.field0_0x0 + 4) == 0) {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,
                    "Current purchased arch (%s) matches selected one (%d). Skip purchase info update"
                    ,local_e0 + *(long *)(local_e0 + 0x10),*(undefined4 *)(param_1 + 0x3c));
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bc57c;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
    }
  }
  else {
    local_e8 = (QArrayData *)local_c8.field0_0x0;
    if (1 < *(int *)local_c8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
    }
    local_f0 = (QArrayData *)local_70.field0_0x0;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    QString::replace(&local_e8,&local_d0,&local_d8,1);
    local_178 = (QArrayData *)QString::fromAscii_helper("store",5);
    uVar3 = FUN_10073fe80(&local_178);
    FUN_100743a40(&local_170,uVar3,&local_e8,&local_f0);
    QString::operator=(&local_c8,&local_170);
    QString::operator=(&local_c0,&local_168);
    QString::operator=(&local_b8,&local_160);
    QString::operator=(&local_b0,&local_158);
    QString::operator=(&local_a8,&local_150);
    QString::operator=(&local_a0,&local_148);
    QString::operator=(&local_98,&local_140);
    QString::operator=(&local_90,&local_138);
    QString::operator=(&local_88,&local_130);
    QString::operator=(&local_80,&local_128);
    FUN_100283c40(local_78,local_120);
    QString::operator=(&local_70,&local_118);
    QString::operator=(&local_68,&local_110);
    QString::operator=(&local_60,&local_108);
    QString::operator=(&local_58,&local_100);
    QString::operator=(&local_50,&local_f8);
    FUN_100252c80(&local_118);
    FUN_100252e70(&local_170);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bc236;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_1005bc236:
    cVar1 = FUN_10073dd70(&local_c8);
    if (cVar1 == '\0') {
      local_200 = (QArrayData *)QString::fromAscii_helper("Web Store",9);
      uVar3 = FUN_10073fe80(&local_200);
      FUN_100743a40(&local_1f8,uVar3,&local_e8,&local_f0);
      QString::operator=(&local_c8,&local_1f8);
      QString::operator=(&local_c0,&local_1f0);
      QString::operator=(&local_b8,&local_1e8);
      QString::operator=(&local_b0,&local_1e0);
      QString::operator=(&local_a8,&local_1d8);
      QString::operator=(&local_a0,&local_1d0);
      QString::operator=(&local_98,&local_1c8);
      QString::operator=(&local_90,&local_1c0);
      QString::operator=(&local_88,&local_1b8);
      QString::operator=(&local_80,&local_1b0);
      FUN_100283c40(local_78,local_1a8);
      QString::operator=(&local_70,&local_1a0);
      QString::operator=(&local_68,&local_198);
      QString::operator=(&local_60,&local_190);
      QString::operator=(&local_58,&local_188);
      QString::operator=(&local_50,&local_180);
      FUN_100252c80(&local_1a0);
      FUN_100252e70(&local_1f8);
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bc3ed;
        }
        QArrayData::deallocate(local_200,2,8);
      }
    }
LAB_1005bc3ed:
    cVar1 = FUN_10073dd70(&local_c8);
    if (cVar1 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Purchase info for info for %s is invalid!",
                    local_208 + *(long *)(local_208 + 0x10));
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bc46f;
        }
        QArrayData::deallocate(local_208,1,8);
      }
    }
LAB_1005bc46f:
    FUN_1005b9a00(param_1,&local_c8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bc4b4;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1005bc4b4:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bc57c;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_1005bc57c:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bc5b2;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1005bc5b2:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bc5e8;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005bc5e8:
  FUN_100252c80(&local_70);
  FUN_100252e70(&local_c8);
  return;
}

