
undefined8 FUN_1003ea690(long param_1,undefined8 param_2)

{
  size_t sVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 uVar18;
  long lVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  long local_190;
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
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pvVar11 = (void *)FUN_1003f7b20(param_2);
  if (pvVar11 == (void *)0x0) {
    return 0xfffffff0;
  }
  QString::fromUtf8_helper((char *)&local_48,0xb40648);
  QString::normalized(&local_40,&local_48,1,0);
  QString::fromUtf8_helper((char *)&local_58,0xb4064d);
  QString::normalized(&local_50,&local_58,1,0);
  iVar9 = FUN_1003f7d50(pvVar11,&local_40,&local_50,0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea75c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003ea75c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea78c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003ea78c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea7bc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003ea7bc:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea7ec;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003ea7ec:
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar18 = 0xffffffff;
    goto LAB_1003eb810;
  }
  QString::fromUtf8_helper((char *)&local_68,0xb40648);
  QString::normalized(&local_60,&local_68,1,0);
  QString::fromUtf8_helper((char *)&local_78,0xb40658);
  QString::normalized(&local_70,&local_78,1,0);
  iVar10 = FUN_1003f7d50(pvVar11,&local_60,&local_70,10);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea897;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003ea897:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea8c7;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003ea8c7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea8f7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003ea8f7:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ea92e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003ea92e:
  sVar1 = (long)iVar9 * 0xb + 4;
  pvVar12 = _malloc(sVar1);
  *(void **)(param_1 + 0x10) = pvVar12;
  if (pvVar12 == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0xfffffff0;
    return 0xfffffff0;
  }
  ___bzero(pvVar12,sVar1);
  uVar21 = (int)((long)iVar9 * 0xb) + 2U & 0xffff;
  puVar4 = *(undefined2 **)(param_1 + 0x10);
  *puVar4 = CONCAT11((char)uVar21,(char)(uVar21 >> 8));
  *(undefined1 *)(puVar4 + 1) = 1;
  *(char *)((long)puVar4 + 3) = (char)iVar10;
  *(int *)(param_1 + 0x18) = iVar9;
  uVar21 = 0;
  if (0 < iVar9) {
    lVar23 = 0;
    local_190 = 0;
    bVar17 = 0;
    do {
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      QString::fromUtf8_helper((char *)&local_98,0xb40661);
      QString::normalized(&local_90,&local_98,1,0);
      QString::arg(&local_88,&local_90,local_190,0,10,0x20);
      QString::operator=(&local_80,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaa47;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1003eaa47:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaa7d;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1003eaa7d:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaab3;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1003eaab3:
      local_a0 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_b0,0xb4066a);
      QString::normalized(&local_a8,&local_b0,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_a0,&local_a8,10,1);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 4 + lVar23) = uVar5;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eab62;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1003eab62:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eab98;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1003eab98:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eabce;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1003eabce:
      local_b8 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_c8,0xb40672);
      QString::normalized(&local_c0,&local_c8,1,0);
      bVar6 = FUN_1003f7d50(pvVar11,&local_b8,&local_c0,0x10,4);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eac76;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1003eac76:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eacac;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1003eacac:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eace2;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1003eace2:
      local_d0 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_e0,0xb40678);
      QString::normalized(&local_d8,&local_e0,1,0);
      bVar7 = FUN_1003f7d50(pvVar11,&local_d0,&local_d8,0x10,4);
      *(byte *)(*(long *)(param_1 + 0x10) + 5 + lVar23) =
           *(byte *)(*(long *)(param_1 + 0x10) + 5 + lVar23) & 0xf0 | bVar7 & 0xf;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ead9c;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1003ead9c:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eadd2;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1003eadd2:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eae08;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1003eae08:
      local_e8 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_f8,0xb40680);
      QString::normalized(&local_f0,&local_f8,1,0);
      cVar8 = FUN_1003f7d50(pvVar11,&local_e8,&local_f0,0x10,4);
      *(byte *)(*(long *)(param_1 + 0x10) + 5 + lVar23) =
           *(byte *)(*(long *)(param_1 + 0x10) + 5 + lVar23) & 0xf | cVar8 << 4;
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaec3;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1003eaec3:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaef9;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1003eaef9:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eaf2f;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1003eaf2f:
      local_100 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_110,0xb40684);
      QString::normalized(&local_108,&local_110,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_100,&local_108,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 8 + lVar23) = uVar5;
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eafdd;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1003eafdd:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb013;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1003eb013:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb049;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1003eb049:
      local_118 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_128,0xb40689);
      QString::normalized(&local_120,&local_128,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_118,&local_120,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 9 + lVar23) = uVar5;
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb0f7;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1003eb0f7:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb12d;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1003eb12d:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb163;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1003eb163:
      local_130 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_140,0xb4068e);
      QString::normalized(&local_138,&local_140,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_130,&local_138,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 10 + lVar23) = uVar5;
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb211;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1003eb211:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb247;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1003eb247:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb27d;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1003eb27d:
      local_148 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_158,0xb40695);
      QString::normalized(&local_150,&local_158,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_148,&local_150,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xc + lVar23) = uVar5;
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb32b;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1003eb32b:
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb361;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_1003eb361:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb397;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1003eb397:
      local_160 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_170,0xb4069a);
      QString::normalized(&local_168,&local_170,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_160,&local_168,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xd + lVar23) = uVar5;
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb445;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_1003eb445:
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb47b;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_1003eb47b:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb4b1;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1003eb4b1:
      local_178 = (QArrayData *)local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_188,0xb4069f);
      QString::normalized(&local_180,&local_188,1,0);
      uVar5 = FUN_1003f7d50(pvVar11,&local_178,&local_180,10,4);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xe + lVar23) = uVar5;
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb55f;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_1003eb55f:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb595;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1003eb595:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb5cb;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1003eb5cb:
      *(byte *)(*(long *)(param_1 + 0x10) + 7 + lVar23) = bVar6;
      bVar17 = bVar17 + ((bVar6 & 0xfc) < 100);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eb619;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1003eb619:
      local_190 = local_190 + 1;
      lVar23 = lVar23 + 0xb;
    } while (local_190 < *(int *)(param_1 + 0x18));
    uVar21 = (uint)bVar17;
    lVar23 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        lVar19 = *(long *)(param_1 + 0x10);
        lVar22 = lVar23 * 0xb;
        pbVar2 = (byte *)(lVar19 + 4 + lVar22);
        cVar8 = *(char *)(lVar19 + 7 + lVar22);
        if (cVar8 == -0x5e) {
          *(uint *)(param_1 + 0x12 + (ulong)*pbVar2 * 0x12) =
               (*(byte *)(lVar19 + 0xe + lVar22) - 0x96) +
               (uint)*(byte *)(lVar19 + 0xd + lVar22) * 0x4b +
               (uint)*(byte *)(lVar19 + 0xc + lVar22) * 0x1194;
        }
        else {
          if (cVar8 != -0x5f) {
            if (cVar8 != -0x60) goto LAB_1003eb791;
            cVar8 = *(char *)(lVar19 + 0xc + lVar22);
            uVar16 = (ulong)*pbVar2;
            *(char *)(param_1 + 0x1e + uVar16 * 0x12) = cVar8;
            *(undefined4 *)(param_1 + 0xe + uVar16 * 0x12) = 0;
            lVar19 = *(long *)(param_1 + 0x10);
            pcVar20 = (char *)(lVar19 + 7);
            uVar16 = 0;
            do {
              uVar13 = uVar16;
              if (((*pcVar20 == cVar8) ||
                  (uVar13 = uVar16 + 1 & 0xff, *(char *)(lVar19 + 7 + uVar13 * 0xb) == cVar8)) ||
                 (uVar13 = uVar16 + 2 & 0xff, *(char *)(lVar19 + 7 + uVar13 * 0xb) == cVar8)) {
                lVar14 = uVar13 * 0xb;
                *(uint *)(param_1 + 0xe + (ulong)*(byte *)(lVar19 + 4 + lVar22) * 0x12) =
                     (*(byte *)(lVar19 + 0xe + lVar14) - 0x96) +
                     (uint)*(byte *)(lVar19 + 0xd + lVar14) * 0x4b +
                     (uint)*(byte *)(lVar19 + 0xc + lVar14) * 0x1194;
                lVar19 = *(long *)(param_1 + 0x10);
                break;
              }
              uVar16 = uVar16 + 3;
              pcVar20 = pcVar20 + 0x21;
            } while (((uint)uVar16 & 0xff) < 99);
          }
          *(undefined1 *)(param_1 + 0x1f + (ulong)*(byte *)(lVar19 + 4 + lVar22) * 0x12) =
               *(undefined1 *)(lVar19 + 0xc + lVar22);
        }
LAB_1003eb791:
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(param_1 + 0x18));
    }
  }
  if (0 < iVar10) {
    piVar15 = (int *)(param_1 + 0x32);
    iVar9 = 0;
    do {
      uVar3 = *(uint *)((long)piVar15 + -0xe);
      if (*(uint *)((long)piVar15 + -0x12) <= uVar3) {
        *(uint *)((long)piVar15 + -10) = uVar3 - *(uint *)((long)piVar15 + -0x12);
        if (iVar10 + -1 == iVar9) {
          *(undefined4 *)((long)piVar15 + -6) = 0;
        }
        else {
          *(uint *)((long)piVar15 + -6) = (*piVar15 + -0x96) - uVar3;
        }
      }
      piVar15 = (int *)((long)piVar15 + 0x12);
      bVar24 = iVar9 != iVar10 + -1;
      iVar9 = iVar9 + 1;
    } while (bVar24);
  }
  *(uint *)(param_1 + 0x1c) = uVar21;
  uVar18 = 0;
LAB_1003eb810:
  FUN_1003ecf00(pvVar11);
  operator_delete(pvVar11);
  return uVar18;
}

