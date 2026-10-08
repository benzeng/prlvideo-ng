
undefined4 FUN_1003a0360(long param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool bVar8;
  QString local_1c8;
  QLocale local_1c0 [8];
  QString local_1b8;
  QString local_1b0;
  QLocale local_1a8 [8];
  QString local_1a0;
  QString local_198;
  QLocale local_190 [8];
  QString local_188;
  QString local_180;
  QLocale local_178 [8];
  QString local_170;
  QString local_168;
  QLocale local_160 [8];
  QString local_158;
  QString local_150;
  QLocale local_148 [8];
  QString local_140;
  QString local_138;
  QLocale local_130 [8];
  QString local_128;
  QString local_120;
  QLocale local_118 [8];
  QString local_110;
  QString local_108;
  QLocale local_100 [8];
  QString local_f8;
  QString local_f0;
  QLocale local_e8 [8];
  QString local_e0;
  QString local_d8;
  QLocale local_d0 [8];
  QString local_c8;
  QString local_c0;
  QLocale local_b8 [8];
  QString local_b0;
  QString local_a8;
  QLocale local_a0 [8];
  QString local_98;
  QString local_90;
  QLocale local_88 [8];
  QString local_80;
  QString local_78;
  QLocale local_70 [8];
  QString local_68;
  QString local_60;
  QLocale local_58 [8];
  QString local_50;
  QString local_48;
  QLocale local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
  if (iVar3 != 1) {
    iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (iVar3 != 2) {
      iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
      if (iVar3 != 4) {
        iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
        if (iVar3 != 5) {
          iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
          if (iVar3 == 6) {
            return 0x212;
          }
          iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2);
          if (iVar3 == 7) {
            return 0x212;
          }
          QLocale::QLocale(local_1c0);
          QLocale::name();
          local_1c8.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
          cVar1 = operator==(&local_1b8,&local_1c8);
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_29 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003a1135;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
LAB_1003a1135:
          if (*(int *)local_1b8.field0_0x0 != -1) {
            if (*(int *)local_1b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
              local_29 = *(int *)local_1b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003a116b;
            }
            QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
          }
LAB_1003a116b:
          QLocale::~QLocale(local_1c0);
          if (cVar1 == '\0') {
            return 0x2a8;
          }
          lVar5 = FUN_1003b0a60(param_1 + 0x20);
          if (lVar5 == 0) {
            return 0x2b2;
          }
          uVar6 = FUN_1003b0a60(param_1 + 0x20);
          uVar6 = FUN_10016f500(uVar6);
          cVar1 = FUN_10061b4d0(uVar6,0x80);
          bVar8 = cVar1 == '\0';
          uVar4 = 0x2da;
          uVar7 = 0x2b2;
          goto LAB_1003a1074;
        }
        QLocale::QLocale(local_178);
        QLocale::name();
        local_180.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5);
        cVar1 = operator==(&local_170,&local_180);
        cVar2 = '\x01';
        if (cVar1 == '\0') {
          QLocale::QLocale(local_190);
          QLocale::name();
          local_198.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("es_ES",5);
          cVar2 = operator==(&local_188,&local_198);
          if (*(int *)local_198.field0_0x0 != -1) {
            if (*(int *)local_198.field0_0x0 != 0) {
              LOCK();
              *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
              local_29 = *(int *)local_198.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003a0edb;
            }
            QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
          }
LAB_1003a0edb:
          if (*(int *)local_188.field0_0x0 != -1) {
            if (*(int *)local_188.field0_0x0 != 0) {
              LOCK();
              *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
              local_29 = *(int *)local_188.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003a0f11;
            }
            QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
          }
LAB_1003a0f11:
          QLocale::~QLocale(local_190);
        }
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_29 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a0f53;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
LAB_1003a0f53:
        if (*(int *)local_170.field0_0x0 != -1) {
          if (*(int *)local_170.field0_0x0 != 0) {
            LOCK();
            *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
            local_29 = *(int *)local_170.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a0f89;
          }
          QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
        }
LAB_1003a0f89:
        QLocale::~QLocale(local_178);
        if (cVar2 != '\0') {
          return 0x244;
        }
        QLocale::QLocale(local_1a8);
        QLocale::name();
        local_1b0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
        cVar1 = operator==(&local_1a0,&local_1b0);
        if (*(int *)local_1b0.field0_0x0 != -1) {
          if (*(int *)local_1b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
            local_29 = *(int *)local_1b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a1025;
          }
          QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
        }
LAB_1003a1025:
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_29 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a105b;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
LAB_1003a105b:
        QLocale::~QLocale(local_1a8);
        bVar8 = cVar1 == '\0';
        uVar4 = 0x23a;
        uVar7 = 0x230;
        goto LAB_1003a1074;
      }
      QLocale::QLocale(local_130);
      QLocale::name();
      local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5)
      ;
      cVar1 = operator==(&local_128,&local_138);
      cVar2 = '\x01';
      if (cVar1 == '\0') {
        QLocale::QLocale(local_148);
        QLocale::name();
        local_150.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("es_ES",5);
        cVar2 = operator==(&local_140,&local_150);
        if (*(int *)local_150.field0_0x0 != -1) {
          if (*(int *)local_150.field0_0x0 != 0) {
            LOCK();
            *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
            local_29 = *(int *)local_150.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a0c51;
          }
          QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
        }
LAB_1003a0c51:
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_29 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003a0c87;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_1003a0c87:
        QLocale::~QLocale(local_148);
      }
      if (*(int *)local_138.field0_0x0 != -1) {
        if (*(int *)local_138.field0_0x0 != 0) {
          LOCK();
          *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
          local_29 = *(int *)local_138.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0cc9;
        }
        QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
      }
LAB_1003a0cc9:
      if (*(int *)local_128.field0_0x0 != -1) {
        if (*(int *)local_128.field0_0x0 != 0) {
          LOCK();
          *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
          local_29 = *(int *)local_128.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0cff;
        }
        QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
      }
LAB_1003a0cff:
      QLocale::~QLocale(local_130);
      if (cVar2 != '\0') {
        return 0x2b2;
      }
      QLocale::QLocale(local_160);
      QLocale::name();
      local_168.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5)
      ;
      cVar1 = operator==(&local_158,&local_168);
      if (*(int *)local_168.field0_0x0 != -1) {
        if (*(int *)local_168.field0_0x0 != 0) {
          LOCK();
          *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
          local_29 = *(int *)local_168.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0d9b;
        }
        QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
      }
LAB_1003a0d9b:
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_29 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0dd1;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1003a0dd1:
      QLocale::~QLocale(local_160);
      bVar8 = cVar1 == '\0';
      uVar4 = 0x2a8;
      uVar7 = 0x29e;
      goto LAB_1003a1074;
    }
    QLocale::QLocale(local_88);
    QLocale::name();
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("es_ES",5);
    cVar1 = operator==(&local_80,&local_90);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      QLocale::QLocale(local_a0);
      QLocale::name();
      local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pl_PL",5);
      cVar2 = operator==(&local_98,&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_29 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0691;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1003a0691:
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_29 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a06c7;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1003a06c7:
      QLocale::~QLocale(local_a0);
    }
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_29 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a0709;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1003a0709:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a0739;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1003a0739:
    QLocale::~QLocale(local_88);
    if (cVar2 != '\0') {
      return 0x2c6;
    }
    QLocale::QLocale(local_b8);
    QLocale::name();
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5);
    cVar1 = operator==(&local_b0,&local_c0);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      QLocale::QLocale(local_d0);
      QLocale::name();
      local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
      cVar2 = operator==(&local_c8,&local_d8);
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_29 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0828;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_1003a0828:
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_29 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a085e;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1003a085e:
      QLocale::~QLocale(local_d0);
    }
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a08a0;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1003a08a0:
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_29 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a08d6;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1003a08d6:
    QLocale::~QLocale(local_b8);
    if (cVar2 != '\0') {
      return 0x2d0;
    }
    QLocale::QLocale(local_e8);
    QLocale::name();
    local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("it_IT",5);
    cVar1 = operator==(&local_e0,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_29 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a0973;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
LAB_1003a0973:
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_29 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a09a9;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_1003a09a9:
    QLocale::~QLocale(local_e8);
    if (cVar1 != '\0') {
      return 0x302;
    }
    QLocale::QLocale(local_100);
    QLocale::name();
    local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pt_PT",5);
    cVar1 = operator==(&local_f8,&local_108);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      QLocale::QLocale(local_118);
      QLocale::name();
      local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pt_BR",5)
      ;
      cVar2 = operator==(&local_110,&local_120);
      if (*(int *)local_120.field0_0x0 != -1) {
        if (*(int *)local_120.field0_0x0 != 0) {
          LOCK();
          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
          local_29 = *(int *)local_120.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0a99;
        }
        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
      }
LAB_1003a0a99:
      if (*(int *)local_110.field0_0x0 != -1) {
        if (*(int *)local_110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
          local_29 = *(int *)local_110.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003a0acf;
        }
        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
      }
LAB_1003a0acf:
      QLocale::~QLocale(local_118);
    }
    if (*(int *)local_108.field0_0x0 != -1) {
      if (*(int *)local_108.field0_0x0 != 0) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
        local_29 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a0b11;
      }
      QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
    }
LAB_1003a0b11:
    if (*(int *)local_f8.field0_0x0 != -1) {
      if (*(int *)local_f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
        local_29 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003a0b47;
      }
      QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
    }
LAB_1003a0b47:
    QLocale::~QLocale(local_100);
    bVar8 = cVar2 == '\0';
    uVar4 = 0x2e4;
    uVar7 = 0x2b2;
    goto LAB_1003a1074;
  }
  QLocale::QLocale(local_40);
  QLocale::name();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ja_JP",5);
  cVar1 = operator==(&local_38,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a03fa;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003a03fa:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a042a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1003a042a:
  QLocale::~QLocale(local_40);
  if (cVar1 != '\0') {
    return 0x250;
  }
  QLocale::QLocale(local_58);
  QLocale::name();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
  cVar1 = operator==(&local_50,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a04af;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003a04af:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a04df;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003a04df:
  QLocale::~QLocale(local_58);
  if (cVar1 != '\0') {
    return 0x278;
  }
  QLocale::QLocale(local_70);
  QLocale::name();
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5);
  cVar1 = operator==(&local_68,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a0563;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1003a0563:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a0593;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003a0593:
  QLocale::~QLocale(local_70);
  bVar8 = cVar1 == '\0';
  uVar4 = 600;
  uVar7 = 0x230;
LAB_1003a1074:
  if (!bVar8) {
    uVar7 = uVar4;
  }
  return uVar7;
}

