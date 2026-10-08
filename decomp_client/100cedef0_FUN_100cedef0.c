
undefined8 FUN_100cedef0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  QArrayData *pQVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  long lVar7;
  undefined1 auVar8 [16];
  QTypedArrayData<unsigned_short> *pQStack_1b0;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString QStack_b0;
  QString local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar5 = (QArrayData *)QString::fromAscii_helper("isolation",9);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar5;
  local_68 = (QArrayData *)QString::fromAscii_helper("tools.hgfs.disable",0x12);
  pcVar1 = *(code **)*param_2;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_60 = pQVar5;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  local_70 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  (*pcVar1)(&local_58,param_2,&local_60,&local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cedfcb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cedfcb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cedffb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cedffb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee02b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cee02b:
  local_78 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  iVar3 = QString::compare(&local_58,&local_78,0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee081;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cee081:
  *(bool *)(param_1 + 0x28) = iVar3 == 0;
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("sharedFolder",0xc);
  QString::operator=(&local_48,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee0e0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100cee0e0:
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("maxNum",6);
  QString::operator=(&local_50,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee132;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100cee132:
  pcVar1 = *(code **)(*param_2 + 0x10);
  local_90 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_98 = (QArrayData *)local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  iVar3 = (*pcVar1)(param_2,&local_90,&local_98,10,0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee1c5;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100cee1c5:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cee1fb;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100cee1fb:
  *(int *)(param_1 + 0x2c) = iVar3;
  puVar2 = PTR_shared_null_1021e1288;
  if (0 < iVar3) {
    lVar7 = 0;
    auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar8._0_8_ = PTR_shared_null_1021e1288;
    auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    pQVar6 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    do {
      pQStack_1b0 = auVar8._8_8_;
      local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      QStack_b0.field0_0x0 = pQStack_1b0;
      local_a8.field0_0x0 = pQVar6;
      local_c8 = (QArrayData *)QString::fromAscii_helper("sharedFolder%1",0xe);
      QString::arg(&local_c0,&local_c8,lVar7,0,10,0x20);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cee2c9;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100cee2c9:
      local_d0.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("shareTags",9);
      QString::operator=(&local_50,&local_d0);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cee327;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_100cee327:
      pcVar1 = *(code **)*param_2;
      local_e0 = local_c0;
      if (1 < *(int *)local_c0 + 1U) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
      }
      local_e8 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_f0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_d8,param_2,&local_e0,&local_e8,&local_f0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cee3d5;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cee3d5:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cee40b;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cee40b:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cee441;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100cee441:
      if (*(int *)(local_d8 + 4) == 0) {
        local_f8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("enabled",7);
        QString::operator=(&local_50,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee4b0;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_100cee4b0:
        pcVar1 = *(code **)*param_2;
        local_108 = local_c0;
        if (1 < *(int *)local_c0 + 1U) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + 1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
        }
        local_110 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_118 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
        (*pcVar1)(&local_100,param_2,&local_108,&local_110,&local_118);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee561;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100cee561:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee597;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100cee597:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee5cd;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100cee5cd:
        local_120 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
        iVar4 = QString::compare(&local_100,&local_120,0);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee633;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_100cee633:
        local_9f = iVar4 == 0;
        local_128.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("writeAccess",0xb);
        QString::operator=(&local_50,&local_128);
        if (*(int *)local_128.field0_0x0 != -1) {
          if (*(int *)local_128.field0_0x0 != 0) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
            local_31 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee69b;
          }
          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
        }
LAB_100cee69b:
        local_a0 = 1;
        pcVar1 = *(code **)*param_2;
        local_138 = local_c0;
        if (1 < *(int *)local_c0 + 1U) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + 1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
        }
        local_140 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_148 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
        (*pcVar1)(&local_130,param_2,&local_138,&local_140,&local_148);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee753;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_100cee753:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee789;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_100cee789:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee7bf;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100cee7bf:
        local_150 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
        iVar4 = QString::compare(&local_130,&local_150,0);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee82b;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_100cee82b:
        local_a0 = iVar4 != 0;
        local_158.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("guestName",9);
        QString::operator=(&local_50,&local_158);
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_31 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee892;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_100cee892:
        pcVar1 = *(code **)*param_2;
        local_168 = local_c0;
        if (1 < *(int *)local_c0 + 1U) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + 1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
        }
        local_170 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_178 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_160,param_2,&local_168,&local_170,&local_178);
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            local_31 = *(int *)local_178 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee93c;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_100cee93c:
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee972;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_100cee972:
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cee9a8;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_100cee9a8:
        QString::operator=(&local_b8,&local_160);
        local_180.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hostPath",8);
        QString::operator=(&local_50,&local_180);
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_31 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceea1c;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
LAB_100ceea1c:
        pcVar1 = *(code **)*param_2;
        local_190 = local_c0;
        if (1 < *(int *)local_c0 + 1U) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + 1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
        }
        local_198 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_1a0 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_188,param_2,&local_190,&local_198,&local_1a0);
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_31 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceeac6;
          }
          QArrayData::deallocate(local_1a0,2,8);
        }
LAB_100ceeac6:
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_31 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceeafc;
          }
          QArrayData::deallocate(local_198,2,8);
        }
LAB_100ceeafc:
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceeb32;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_100ceeb32:
        QString::operator=(&QStack_b0,&local_188);
        QString::fromUtf8_helper((char *)&local_40,0x1e41978);
        QString::operator=(&local_a8,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceeb95;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100ceeb95:
        FUN_100d057b0(param_1 + 0x30,&local_b8);
        if (*(int *)local_188.field0_0x0 != -1) {
          if (*(int *)local_188.field0_0x0 != 0) {
            LOCK();
            *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
            local_31 = *(int *)local_188.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceebde;
          }
          QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
        }
LAB_100ceebde:
        if (*(int *)local_160.field0_0x0 != -1) {
          if (*(int *)local_160.field0_0x0 != 0) {
            LOCK();
            *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
            local_31 = *(int *)local_160.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceec14;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
LAB_100ceec14:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceec4a;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_100ceec4a:
        pQVar6 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceec90;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
LAB_100ceec90:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceecc6;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100ceecc6:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceecfc;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100ceecfc:
      FUN_100d05f40(&local_b8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ceed44;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100ceed44:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ceed74;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100ceed74:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0x8000000;
}

