
void FUN_100415af0(void)

{
  undefined4 local_1a4;
  QVariant local_1a0;
  QArrayData *local_190;
  QArrayData *local_188;
  QVariant local_180;
  undefined4 local_16c;
  QVariant local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QVariant local_148;
  undefined4 local_134;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QVariant local_110;
  undefined4 local_fc;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  undefined4 local_c4;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  undefined4 local_8c;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  undefined4 local_54;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QVariant local_30;
  int *local_20;
  undefined1 local_11;
  
  local_20 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc8714);
  local_54 = 0xffffffff;
  QVariant::QVariant(&local_50,2,&local_54,0);
  FUN_10041e0f0(&local_38,&local_40,&local_50);
  FUN_10041e170(&local_20,&local_38);
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415b9b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100415b9b:
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415bd4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100415bd4:
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1df3618);
  local_8c = 0;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_88,DAT_102273fe8,&local_8c,0);
  FUN_10041e0f0(&local_70,&local_78,&local_88);
  FUN_10041e170(&local_20,&local_70);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415c90;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100415c90:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415cc9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100415cc9:
  QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,0x1df3622);
  local_c4 = 1;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_c0,DAT_102273fe8,&local_c4,0);
  FUN_10041e0f0(&local_a8,&local_b0,&local_c0);
  FUN_10041e170(&local_20,&local_a8);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_11 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415da0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100415da0:
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_11 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415de2;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100415de2:
  QMetaObject::tr((char *)&local_e8,PTR_staticMetaObject_1021e1520,0x1df3625);
  local_fc = 2;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_f8,DAT_102273fe8,&local_fc,0);
  FUN_10041e0f0(&local_e0,&local_e8,&local_f8);
  FUN_10041e170(&local_20,&local_e0);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_11 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415eb9;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100415eb9:
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_11 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415efb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100415efb:
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1df3629);
  local_134 = 3;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_130,DAT_102273fe8,&local_134,0);
  FUN_10041e0f0(&local_118,&local_120,&local_130);
  FUN_10041e170(&local_20,&local_118);
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_11 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100415fd2;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100415fd2:
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_11 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100416014;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100416014:
  QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,0x1df362e);
  local_16c = 4;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_168,DAT_102273fe8,&local_16c,0);
  FUN_10041e0f0(&local_150,&local_158,&local_168);
  FUN_10041e170(&local_20,&local_150);
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_11 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004160eb;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004160eb:
  QVariant::~QVariant(&local_168);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_11 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10041612d;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10041612d:
  QMetaObject::tr((char *)&local_190,PTR_staticMetaObject_1021e1520,0x1df363f);
  local_1a4 = 5;
  if (DAT_102273fe8 == 0) {
    DAT_102273fe8 = FUN_10041f860("PRL_VIRTUAL_NET_ADAPTER_PROFILE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_1a0,DAT_102273fe8,&local_1a4,0);
  FUN_10041e0f0(&local_188,&local_190,&local_1a0);
  FUN_10041e170(&local_20,&local_188);
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_11 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100416204;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100416204:
  QVariant::~QVariant(&local_1a0);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_11 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100416246;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100416246:
  FUN_1003fa820();
  if (*local_20 != -1) {
    if (*local_20 != 0) {
      LOCK();
      *local_20 = *local_20 + -1;
      UNLOCK();
      if (*local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    FUN_10041b480(&local_20,local_20);
  }
  return;
}

