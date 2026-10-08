
void FUN_100416af0(void)

{
  QArrayData *pQVar1;
  undefined4 local_284;
  QVariant local_280;
  QArrayData *local_270;
  QArrayData *local_268;
  QVariant local_260;
  undefined4 local_24c;
  QVariant local_248;
  QArrayData *local_238;
  QArrayData *local_230;
  QVariant local_228;
  undefined4 local_214;
  QVariant local_210;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QVariant local_1f0;
  undefined4 local_1dc;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QVariant local_1b8;
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
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  undefined4 local_cc;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  undefined4 local_94;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined4 local_5c;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  int *local_28;
  undefined1 local_19;
  
  local_28 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1df3645);
  local_5c = 8;
  QVariant::QVariant(&local_58,2,&local_5c,0);
  FUN_10041e0f0(&local_40,&local_48,&local_58);
  FUN_10041e170(&local_28,&local_40);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416b9d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100416b9d:
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416bd6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100416bd6:
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1df364e);
  local_94 = 9;
  QVariant::QVariant(&local_90,2,&local_94,0);
  FUN_10041e0f0(&local_78,&local_80,&local_90);
  FUN_10041e170(&local_28,&local_78);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416c73;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100416c73:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416caf;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100416caf:
  QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,0x1df3657);
  local_cc = 0;
  QVariant::QVariant(&local_c8,2,&local_cc,0);
  FUN_10041e0f0(&local_b0,&local_b8,&local_c8);
  FUN_10041e170(&local_28,&local_b0);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416d61;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100416d61:
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416da3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100416da3:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Separator",9);
  local_f8 = 0x80000000;
  local_100.field7 = 0;
  local_f0 = pQVar1;
  FUN_10041e0f0(&local_e8,&local_f0,&local_100);
  FUN_10041e170(&local_28,&local_e8);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_19 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416e3f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100416e3f:
  QVariant::~QVariant((QVariant *)&local_100);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416e76;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100416e76:
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1df3661);
  local_134 = 1;
  QVariant::QVariant(&local_130,2,&local_134,0);
  FUN_10041e0f0(&local_118,&local_120,&local_130);
  FUN_10041e170(&local_28,&local_118);
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_19 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416f28;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100416f28:
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_19 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100416f6a;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100416f6a:
  QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,0x1df3668);
  local_16c = 2;
  QVariant::QVariant(&local_168,2,&local_16c,0);
  FUN_10041e0f0(&local_150,&local_158,&local_168);
  FUN_10041e170(&local_28,&local_150);
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_19 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041701c;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10041701c:
  QVariant::~QVariant(&local_168);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_19 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041705e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10041705e:
  QMetaObject::tr((char *)&local_190,PTR_staticMetaObject_1021e1520,0x1df3670);
  local_1a4 = 3;
  QVariant::QVariant(&local_1a0,2,&local_1a4,0);
  FUN_10041e0f0(&local_188,&local_190,&local_1a0);
  FUN_10041e170(&local_28,&local_188);
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_19 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100417110;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100417110:
  QVariant::~QVariant(&local_1a0);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_19 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100417152;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100417152:
  QMetaObject::tr((char *)&local_1c8,PTR_staticMetaObject_1021e1520,0x1df367a);
  local_1dc = 4;
  QVariant::QVariant(&local_1d8,2,&local_1dc,0);
  FUN_10041e0f0(&local_1c0,&local_1c8,&local_1d8);
  FUN_10041e170(&local_28,&local_1c0);
  QVariant::~QVariant(&local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_19 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100417204;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100417204:
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_19 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100417246;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100417246:
  QMetaObject::tr((char *)&local_200,PTR_staticMetaObject_1021e1520,0x1df3683);
  local_214 = 5;
  QVariant::QVariant(&local_210,2,&local_214,0);
  FUN_10041e0f0(&local_1f8,&local_200,&local_210);
  FUN_10041e170(&local_28,&local_1f8);
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_19 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004172f8;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1004172f8:
  QVariant::~QVariant(&local_210);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_19 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041733a;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10041733a:
  QMetaObject::tr((char *)&local_238,PTR_staticMetaObject_1021e1520,0x1df368a);
  local_24c = 6;
  QVariant::QVariant(&local_248,2,&local_24c,0);
  FUN_10041e0f0(&local_230,&local_238,&local_248);
  FUN_10041e170(&local_28,&local_230);
  QVariant::~QVariant(&local_228);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_19 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004173ec;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1004173ec:
  QVariant::~QVariant(&local_248);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_19 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041742e;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_10041742e:
  QMetaObject::tr((char *)&local_270,PTR_staticMetaObject_1021e1520,0x1df3693);
  local_284 = 7;
  QVariant::QVariant(&local_280,2,&local_284,0);
  FUN_10041e0f0(&local_268,&local_270,&local_280);
  FUN_10041e170(&local_28,&local_268);
  QVariant::~QVariant(&local_260);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_19 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004174e0;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1004174e0:
  QVariant::~QVariant(&local_280);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_19 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100417522;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100417522:
  FUN_1003fa820();
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      if (*local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_10041b480(&local_28,local_28);
  }
  return;
}

