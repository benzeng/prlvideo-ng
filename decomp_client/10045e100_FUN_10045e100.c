
void FUN_10045e100(QObject *param_1,QObject *param_2)

{
  QObject *pQVar1;
  undefined *puVar2;
  QTimer *this;
  undefined1 auVar3 [16];
  QBrush local_190 [8];
  QString local_188 [2];
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QBrush local_148 [8];
  QBrush local_140 [8];
  QString local_138 [2];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QBrush local_f8 [8];
  QBrush local_f0 [8];
  QString local_e8 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QBrush local_a8 [8];
  QBrush local_a0 [8];
  QString local_98 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QBrush local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f2870;
  *(QObject **)(param_1 + 0x10) = param_2;
  puVar2 = PTR_shared_null_1021e15e8;
  pQVar1 = param_1 + 0x18;
  auVar3._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar3._0_8_ = PTR_shared_null_1021e15e8;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar3;
  *(undefined **)(param_1 + 0x28) = puVar2;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x30) = this;
  FUN_1007868d0(&local_80,4);
  QMetaObject::tr((char *)&local_88,"",0x1df5b7d);
  local_50 = (QArrayData *)QString::fromLatin1_helper("#6f9ed4",7);
  QColor::setNamedColor(local_98);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e1ee;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10045e1ee:
  QBrush::QBrush(local_a0);
  FUN_100465e00(&local_78,&local_80,&local_88,local_98,local_a0);
  FUN_100461110(pQVar1,&local_78);
  QBrush::~QBrush(local_58);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e25e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10045e25e:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e28e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10045e28e:
  QBrush::~QBrush(local_a0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e2ca;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10045e2ca:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e2fa;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10045e2fa:
  FUN_1007868d0(&local_d0,3);
  QMetaObject::tr((char *)&local_d8,"",0x1df5b8d);
  local_48 = (QArrayData *)QString::fromLatin1_helper("#8ad265",7);
  QColor::setNamedColor(local_e8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e382;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10045e382:
  QBrush::QBrush(local_f0);
  FUN_100465e00(&local_c8,&local_d0,&local_d8,local_e8,local_f0);
  FUN_100461110(pQVar1,&local_c8);
  QBrush::~QBrush(local_a8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e407;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10045e407:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e43d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10045e43d:
  QBrush::~QBrush(local_f0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e47f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10045e47f:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e4b5;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10045e4b5:
  FUN_1007868d0(&local_120,1);
  QMetaObject::tr((char *)&local_128,"",0x1df5b97);
  local_40 = (QArrayData *)QString::fromLatin1_helper("#a25fa5",7);
  QColor::setNamedColor(local_138);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e53d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10045e53d:
  QBrush::QBrush(local_140);
  FUN_100465e00(&local_118,&local_120,&local_128,local_138,local_140);
  FUN_100461110(pQVar1,&local_118);
  QBrush::~QBrush(local_f8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e5c2;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10045e5c2:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e5f8;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10045e5f8:
  QBrush::~QBrush(local_140);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e63a;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10045e63a:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e670;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10045e670:
  FUN_1007868d0(&local_170,2);
  QMetaObject::tr((char *)&local_178,"",0x1df5ba5);
  local_38 = (QArrayData *)QString::fromLatin1_helper("#e7d744",7);
  QColor::setNamedColor(local_188);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e6f8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10045e6f8:
  QBrush::QBrush(local_190);
  FUN_100465e00(&local_168,&local_170,&local_178,local_188,local_190);
  FUN_100461110(pQVar1,&local_168);
  QBrush::~QBrush(local_148);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_29 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e77d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10045e77d:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e7b3;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10045e7b3:
  QBrush::~QBrush(local_190);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_29 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10045e7f5;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10045e7f5:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      UNLOCK();
      if (*(int *)local_170 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_170,2,8);
  }
  return;
}

