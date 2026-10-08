
void FUN_10005c440(void)

{
  char cVar1;
  int iVar2;
  QArrayData *local_180;
  undefined4 local_174;
  QArrayData *local_170;
  undefined4 local_164;
  QArrayData *local_160;
  undefined4 local_154;
  QArrayData *local_150;
  undefined4 local_144;
  QArrayData *local_140;
  undefined4 local_134;
  QArrayData *local_130;
  undefined4 local_124;
  QArrayData *local_120;
  undefined4 local_114;
  QArrayData *local_110;
  undefined4 local_104;
  QArrayData *local_100;
  undefined4 local_f4;
  QArrayData *local_f0;
  undefined4 local_e4;
  QArrayData *local_e0;
  undefined4 local_d4;
  QArrayData *local_d0;
  undefined4 local_c4;
  QArrayData *local_c0;
  undefined4 local_b4;
  QArrayData *local_b0;
  undefined4 local_a4;
  QArrayData *local_a0;
  undefined4 local_94;
  QArrayData *local_90;
  undefined4 local_84;
  QArrayData *local_80;
  undefined4 local_74;
  QArrayData *local_70;
  undefined4 local_64;
  QArrayData *local_60;
  undefined4 local_54;
  QArrayData *local_50;
  undefined4 local_44;
  QArrayData *local_40;
  undefined4 local_34;
  QArrayData *local_30;
  undefined4 local_24;
  QArrayData *local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  if ((DAT_102311de0 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102311de0), iVar2 != 0)) {
    DAT_102311dd8 = PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10005e190,&DAT_102311dd8,0x100000000);
    ___cxa_guard_release(&DAT_102311de0);
  }
  if (*(int *)(DAT_102311dd8 + 0x14) != 0) {
    return;
  }
  local_18 = 1;
  QMetaObject::tr((char *)&local_20,PTR_staticMetaObject_1021e1520,0x1db80e3);
  FUN_10005e1d0(&DAT_102311dd8,&local_18,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c517;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10005c517:
  local_24 = 2;
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1db80fc);
  FUN_10005e1d0(&DAT_102311dd8,&local_24,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c583;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10005c583:
  local_34 = 3;
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1db8116);
  FUN_10005e1d0(&DAT_102311dd8,&local_34,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c5ef;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005c5ef:
  local_44 = 5;
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1db8130);
  FUN_10005e1d0(&DAT_102311dd8,&local_44,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c65b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10005c65b:
  local_54 = 6;
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1db814e);
  FUN_10005e1d0(&DAT_102311dd8,&local_54,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c6c7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10005c6c7:
  local_64 = 7;
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1db816a);
  FUN_10005e1d0(&DAT_102311dd8,&local_64,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c733;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10005c733:
  local_74 = 9;
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1db8185);
  FUN_10005e1d0(&DAT_102311dd8,&local_74,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_11 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c79f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10005c79f:
  cVar1 = FUN_100124f70();
  if (cVar1 != '\0') {
    local_84 = 10;
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,0x1db81a0);
    FUN_10005e1d0(&DAT_102311dd8,&local_84,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_11 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005c81d;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10005c81d:
  local_94 = 0xb;
  QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,0x1db81b9);
  FUN_10005e1d0(&DAT_102311dd8,&local_94,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_11 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c898;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10005c898:
  local_a4 = 0xc;
  QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,0x1db81d1);
  FUN_10005e1d0(&DAT_102311dd8,&local_a4,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_11 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005c913;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10005c913:
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    local_b4 = 0xd;
    QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,0x1db81f1);
    FUN_10005e1d0(&DAT_102311dd8,&local_b4,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_11 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005c99c;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_10005c99c:
  local_c4 = 0xe;
  QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,0x1db8215);
  FUN_10005e1d0(&DAT_102311dd8,&local_c4,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_11 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ca17;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10005ca17:
  local_d4 = 0xf;
  QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,0x1db8233);
  FUN_10005e1d0(&DAT_102311dd8,&local_d4,&local_e0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_11 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ca92;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10005ca92:
  local_e4 = 0x10;
  QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,0x1db8250);
  FUN_10005e1d0(&DAT_102311dd8,&local_e4,&local_f0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_11 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cb0d;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10005cb0d:
  local_f4 = 0x11;
  QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,0x1db8267);
  FUN_10005e1d0(&DAT_102311dd8,&local_f4,&local_100);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_11 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cb88;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10005cb88:
  local_104 = 0x12;
  QMetaObject::tr((char *)&local_110,PTR_staticMetaObject_1021e1520,0x1db8284);
  FUN_10005e1d0(&DAT_102311dd8,&local_104,&local_110);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_11 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cc03;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10005cc03:
  local_114 = 0x13;
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1db829e);
  FUN_10005e1d0(&DAT_102311dd8,&local_114,&local_120);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_11 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cc7e;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10005cc7e:
  local_124 = 0x14;
  QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,0x1db82b6);
  FUN_10005e1d0(&DAT_102311dd8,&local_124,&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_11 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ccf9;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10005ccf9:
  local_134 = 0x15;
  QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_1021e1520,0x1db82ce);
  FUN_10005e1d0(&DAT_102311dd8,&local_134,&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_11 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cd74;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10005cd74:
  local_144 = 0x16;
  QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,0x1db82ec);
  FUN_10005e1d0(&DAT_102311dd8,&local_144,&local_150);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_11 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005cdef;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10005cdef:
  local_154 = 0x17;
  QMetaObject::tr((char *)&local_160,PTR_staticMetaObject_1021e1520,0x1db8300);
  FUN_10005e1d0(&DAT_102311dd8,&local_154,&local_160);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_11 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ce6a;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10005ce6a:
  cVar1 = FUN_100124f70();
  if (cVar1 != '\0') {
    local_164 = 0x18;
    QMetaObject::tr((char *)&local_170,PTR_staticMetaObject_1021e1520,0x1db8316);
    FUN_10005e1d0(&DAT_102311dd8,&local_164,&local_170);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_11 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005ceee;
      }
      QArrayData::deallocate(local_170,2,8);
    }
  }
LAB_10005ceee:
  local_174 = 0x19;
  QMetaObject::tr((char *)&local_180,PTR_staticMetaObject_1021e1520,0x1db832a);
  FUN_10005e1d0(&DAT_102311dd8,&local_174,&local_180);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      UNLOCK();
      if (*(int *)local_180 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_180,2,8);
  }
  return;
}

