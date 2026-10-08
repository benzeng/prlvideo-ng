
QString * FUN_100670470(QString *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
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
  
  puVar3 = PTR_shared_null_1021e1288;
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (1 < *(int *)PTR_shared_null_1021e1288 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_31 = *(int *)puVar3 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_b8,0x1e0c98e);
  QString::append(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100670514;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100670514:
  if ((*(int *)(*param_2 + 4) == 0) && (*(int *)(*param_3 + 4) == 0)) {
    local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
    if (1 < *(int *)puVar3 + 1U) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + 1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_b0,0x1e0c9be);
    QString::append(&local_f0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100671188;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100671188:
    local_e8.field0_0x0 = local_f0.field0_0x0;
    if (1 < *(int *)local_f0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
      local_31 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_a8,0x1e0c9c3);
    QString::append(&local_e8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100671208;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100671208:
    local_e0.field0_0x0 = local_e8.field0_0x0;
    if (1 < *(int *)local_e8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_e0);
    local_d8.field0_0x0 = local_e0.field0_0x0;
    if (1 < *(int *)local_e0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_a0,0x1e0c9e6);
    QString::append(&local_d8);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006712b6;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1006712b6:
    local_d0.field0_0x0 = local_d8.field0_0x0;
    if (1 < *(int *)local_d8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_98,0x1e0c9ec);
    QString::append(&local_d0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100671336;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100671336:
    bVar2 = true;
    bVar1 = false;
  }
  else {
    local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
    if (1 < *(int *)puVar3 + 1U) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + 1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_90,0x1e0c9be);
    QString::append(&local_150);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006705a8;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1006705a8:
    local_148.field0_0x0 = local_150.field0_0x0;
    if (1 < *(int *)local_150.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + 1;
      local_31 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_88,0x1e0c9f2);
    QString::append(&local_148);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067061c;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10067061c:
    local_160 = (QArrayData *)
                QString::fromAscii_helper
                          ("<span style=\"font-weight:100; font-size:24pt; color:rgb( 255, 255, 255 );\">%1</span>"
                           ,0x54);
    QString::arg(&local_158,&local_160,param_2,0,0x20);
    local_140.field0_0x0 = local_148.field0_0x0;
    if (1 < *(int *)local_148.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + 1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_140);
    local_138.field0_0x0 = local_140.field0_0x0;
    if (1 < *(int *)local_140.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
      local_31 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_80,0x1e0c9e6);
    QString::append(&local_138);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006706fe;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1006706fe:
    local_130.field0_0x0 = local_138.field0_0x0;
    if (1 < *(int *)local_138.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + 1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_78,0x1e0ca4c);
    QString::append(&local_130);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670772;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100670772:
    local_170 = (QArrayData *)
                QString::fromAscii_helper
                          ("<span style=\"font-weight:100; font-size:24pt; color:rgb( 255, 255, 255 );\">%1</span>"
                           ,0x54);
    QString::arg(&local_168,&local_170,param_3,0,0x20);
    local_128.field0_0x0 = local_130.field0_0x0;
    if (1 < *(int *)local_130.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_128);
    local_120.field0_0x0 = local_128.field0_0x0;
    if (1 < *(int *)local_128.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_70,0x1e0c9e6);
    QString::append(&local_120);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670854;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100670854:
    local_118.field0_0x0 = local_120.field0_0x0;
    if (1 < *(int *)local_120.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_68,0x1e0c9ec);
    QString::append(&local_118);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006708c8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1006708c8:
    local_110.field0_0x0 = local_118.field0_0x0;
    if (1 < *(int *)local_118.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_60,0x1e0c9be);
    QString::append(&local_110);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067093c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10067093c:
    local_108.field0_0x0 = local_110.field0_0x0;
    if (1 < *(int *)local_110.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_58,0x1e0ca6c);
    QString::append(&local_108);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006709b0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1006709b0:
    local_100.field0_0x0 = local_108.field0_0x0;
    if (1 < *(int *)local_108.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_100);
    local_f8.field0_0x0 = local_100.field0_0x0;
    if (1 < *(int *)local_100.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1e0c9e6);
    QString::append(&local_f8);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670a52;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100670a52:
    local_d0.field0_0x0 = local_f8.field0_0x0;
    if (1 < *(int *)local_f8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e0c9ec);
    QString::append(&local_d0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670ac6;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100670ac6:
    bVar1 = true;
    bVar2 = false;
  }
  local_c0.field0_0x0 = local_c8.field0_0x0;
  if (1 < *(int *)local_c8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
    local_31 = *(int *)local_c8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_c0);
  param_1->field0_0x0 = local_c0.field0_0x0;
  if (1 < *(int *)local_c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
    local_31 = *(int *)local_c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e0ca9b);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100670b69;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100670b69:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100670b9f;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100670b9f:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100670bd5;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100670bd5:
  if (bVar1) {
    if (*(int *)local_f8.field0_0x0 != -1) {
      if (*(int *)local_f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
        local_31 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670c13;
      }
      QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
    }
LAB_100670c13:
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670c49;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_100670c49:
    if (*(int *)local_108.field0_0x0 != -1) {
      if (*(int *)local_108.field0_0x0 != 0) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
        local_31 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670c7f;
      }
      QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
    }
LAB_100670c7f:
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670cb5;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_100670cb5:
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670ceb;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_100670ceb:
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670d21;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_100670d21:
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670d57;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
LAB_100670d57:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670d8d;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100670d8d:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670dc3;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100670dc3:
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_31 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670df9;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
LAB_100670df9:
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670e2f;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_100670e2f:
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_31 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670e65;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
LAB_100670e65:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670e9b;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100670e9b:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670ed1;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_100670ed1:
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_31 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670f07;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
LAB_100670f07:
    if (*(int *)local_150.field0_0x0 != -1) {
      if (*(int *)local_150.field0_0x0 != 0) {
        LOCK();
        *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
        local_31 = *(int *)local_150.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670f3d;
      }
      QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
    }
LAB_100670f3d:
    puVar3 = PTR_shared_null_1021e1288;
    if (*(int *)PTR_shared_null_1021e1288 != -1) {
      if (*(int *)PTR_shared_null_1021e1288 != 0) {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670f7a;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_100670f7a:
  puVar3 = PTR_shared_null_1021e1288;
  if (bVar2) {
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670fc0;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100670fc0:
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_31 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100670ff6;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_100670ff6:
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067102c;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_10067102c:
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100671062;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
LAB_100671062:
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100671091;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_100671091:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006710c7;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1006710c7:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

