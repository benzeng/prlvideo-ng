
void FUN_100413300(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_158;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QVariant local_130;
  undefined8 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  undefined8 local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QVariant local_c0;
  undefined8 local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
  undefined8 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  int *local_40;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_38 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_30,uVar2,&local_38,0);
  iVar1 = QVariant::toUInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041338a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10041338a:
  local_40 = (int *)PTR_shared_null_1021e15e8;
  if ((iVar1 < 0x809) || (iVar1 != 0x8ff && 0xf < iVar1 - 0x801U)) {
    QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,0x1ded98a);
    local_120 = 0;
    QVariant::QVariant(&local_118,4,&local_120,0);
    FUN_10041e0f0(&local_100,&local_108,&local_118);
    FUN_10041e170(&local_40,&local_100);
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_19 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100413730;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100413730:
    QVariant::~QVariant(&local_118);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_19 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100413772;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100413772:
    QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_1021e1520,0x1ded987);
    local_158 = 1;
    QVariant::QVariant(&local_150,4,&local_158,0);
    FUN_10041e0f0(&local_138,&local_140,&local_150);
    FUN_10041e170(&local_40,&local_138);
    QVariant::~QVariant(&local_130);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_19 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100413825;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100413825:
    QVariant::~QVariant(&local_150);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_19 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100413867;
      }
      QArrayData::deallocate(local_140,2,8);
    }
    goto LAB_100413867;
  }
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1dc69f8);
  local_78 = 0;
  QVariant::QVariant(&local_70,4,&local_78,0);
  FUN_10041e0f0(&local_58,&local_60,&local_70);
  FUN_10041e170(&local_40,&local_58);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100413450;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100413450:
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100413489;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100413489:
  QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1df35cc);
  local_b0 = 2;
  QVariant::QVariant(&local_a8,4,&local_b0,0);
  FUN_10041e0f0(&local_90,&local_98,&local_a8);
  FUN_10041e170(&local_40,&local_90);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100413539;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100413539:
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041357b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10041357b:
  QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,0x1df35d6);
  local_e8 = 1;
  QVariant::QVariant(&local_e0,4,&local_e8,0);
  FUN_10041e0f0(&local_c8,&local_d0,&local_e0);
  FUN_10041e170(&local_40,&local_c8);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10041362e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10041362e:
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100413867;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100413867:
  FUN_1003fa820();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_10041b480(&local_40,local_40);
  }
  return;
}

