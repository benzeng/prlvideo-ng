
void FUN_100405ef0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined8 local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  undefined8 local_98;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined8 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  int *local_28;
  undefined1 local_19;
  
  local_28 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Never_10226ed98);
  local_60 = 0;
  QVariant::QVariant(&local_58,4,&local_60,0);
  FUN_10041e0f0(&local_40,&local_48,&local_58);
  FUN_10041e170(&local_28,&local_40);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100405fa4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100405fa4:
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100405fdd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100405fdd:
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_When_window_opens_10226eda0);
  local_98 = 4;
  QVariant::QVariant(&local_90,4,&local_98,0);
  FUN_10041e0f0(&local_78,&local_80,&local_90);
  FUN_10041e170(&local_28,&local_78);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040607e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10040607e:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004060ba;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004060ba:
  QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_When__1_starts_10226eda8);
  FUN_1001c72e0(&local_c8);
  QString::arg(&local_b8,&local_c0,&local_c8,0,0x20);
  local_e0 = 3;
  QVariant::QVariant(&local_d8,4,&local_e0,0);
  FUN_10041e0f0(&local_b0,&local_b8,&local_d8);
  FUN_10041e170(&local_28,&local_b0);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040619e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10040619e:
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004061e0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004061e0:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100406216;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100406216:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_19 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040624c;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10040624c:
  lVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    goto LAB_100406490;
  }
  uVar3 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1003be980(uVar3);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_When_Mac_starts_10226edb0);
    local_118 = 1;
    QVariant::QVariant(&local_110,4,&local_118,0);
    FUN_10041e0f0(&local_f8,&local_100,&local_110);
    FUN_10041e170(&local_28,&local_f8);
    QVariant::~QVariant(&local_f0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_19 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10040632d;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_10040632d:
    QVariant::~QVariant(&local_110);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_19 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10040636f;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_10040636f:
    QMetaObject::tr((char *)&local_138,PTR_staticMetaObject_1021e1520,0x1df34a6);
    local_150 = 5;
    QVariant::QVariant(&local_148,4,&local_150,0);
    FUN_10041e0f0(&local_130,&local_138,&local_148);
    FUN_10041e170(&local_28,&local_130);
    QVariant::~QVariant(&local_128);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_19 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100406422;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100406422:
    QVariant::~QVariant(&local_148);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_19 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100406464;
      }
      QArrayData::deallocate(local_138,2,8);
    }
  }
LAB_100406464:
  FUN_1003fa820();
LAB_100406490:
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

