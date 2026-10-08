
void FUN_100406b40(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_1c0;
  QVariant local_1b8;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QVariant local_198;
  undefined8 local_188;
  QVariant local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  QVariant local_160;
  undefined8 local_150;
  QVariant local_148;
  QArrayData *local_138;
  QArrayData *local_130;
  QVariant local_128;
  undefined8 local_118;
  QVariant local_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
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
  long local_38;
  undefined1 local_29;
  
  lVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  plVar6 = (long *)FUN_1001766b0(uVar5);
  local_38 = *plVar6;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  local_40 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Same_as_last_time_10226ed60);
  local_78 = 0;
  QVariant::QVariant(&local_70,4,&local_78,0);
  FUN_10041e0f0(&local_58,&local_60,&local_70);
  FUN_10041e170(&local_40,&local_58);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100406c2c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100406c2c:
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100406c65;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100406c65:
  QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,(int)PTR_s_Window_10226ed68);
  local_b0 = 1;
  QVariant::QVariant(&local_a8,4,&local_b0,0);
  FUN_10041e0f0(&local_90,&local_98,&local_a8);
  FUN_10041e170(&local_40,&local_90);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100406d18;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100406d18:
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100406d5a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100406d5a:
  cVar1 = FUN_100124f70();
  if (cVar1 != '\0') {
    uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_c8 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
    FUN_1003e1800(&local_c0,uVar5,&local_c8);
    uVar2 = QVariant::toUInt((bool *)&local_c0);
    uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_e0 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
    FUN_1003e1800(&local_d8,uVar5,&local_e0);
    uVar3 = QVariant::toUInt((bool *)&local_d8);
    cVar1 = FUN_100110a10(uVar2,uVar3);
    QVariant::~QVariant(&local_d8);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100406e4c;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100406e4c:
    QVariant::~QVariant(&local_c0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100406e8e;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100406e8e:
    if (cVar1 != '\0') {
      QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Coherence_10226ed78);
      local_118 = 3;
      QVariant::QVariant(&local_110,4,&local_118,0);
      FUN_10041e0f0(&local_f8,&local_100,&local_110);
      FUN_10041e170(&local_40,&local_f8);
      QVariant::~QVariant(&local_f0);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_29 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100406f4c;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100406f4c:
      QVariant::~QVariant(&local_110);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_29 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100406f8e;
        }
        QArrayData::deallocate(local_100,2,8);
      }
    }
  }
LAB_100406f8e:
  cVar1 = FUN_100615c20(&local_38,0x16,0);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_138,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Full_screen_10226ed70);
    local_150 = 2;
    QVariant::QVariant(&local_148,4,&local_150,0);
    FUN_10041e0f0(&local_130,&local_138,&local_148);
    FUN_10041e170(&local_40,&local_130);
    QVariant::~QVariant(&local_128);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_29 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10040705c;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_10040705c:
    QVariant::~QVariant(&local_148);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10040709e;
      }
      QArrayData::deallocate(local_138,2,8);
    }
  }
LAB_10040709e:
  QMetaObject::tr((char *)&local_170,PTR_staticMetaObject_1021e1520,(int)PTR_s_Modality_10226ed80);
  local_188 = 4;
  QVariant::QVariant(&local_180,4,&local_188,0);
  FUN_10041e0f0(&local_168,&local_170,&local_180);
  FUN_10041e170(&local_40,&local_168);
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100407154;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100407154:
  QVariant::~QVariant(&local_180);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100407196;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100407196:
  uVar5 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1003be980(uVar5);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_1a8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Headless_10226ed88)
    ;
    local_1c0 = 5;
    QVariant::QVariant(&local_1b8,4,&local_1c0,0);
    FUN_10041e0f0(&local_1a0,&local_1a8,&local_1b8);
    FUN_10041e170(&local_40,&local_1a0);
    QVariant::~QVariant(&local_198);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_29 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100407265;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_100407265:
    QVariant::~QVariant(&local_1b8);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_29 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004072a7;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
  }
LAB_1004072a7:
  FUN_1003fa820();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_29 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004072dd;
    }
    FUN_10041b480(&local_40,local_40);
  }
LAB_1004072dd:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return;
}

