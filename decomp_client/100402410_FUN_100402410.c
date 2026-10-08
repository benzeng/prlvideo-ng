
void FUN_100402410(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  undefined8 local_d0;
  QVariant local_c8;
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
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_28 = (int *)PTR_shared_null_1021e15e8;
  uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1001754c0(uVar3,4);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1df341b);
    local_98 = 0;
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
        if ((bool)local_19) goto LAB_1004025fe;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1004025fe:
    QVariant::~QVariant(&local_90);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_19 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10040263a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1df3412);
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
        if ((bool)local_19) goto LAB_1004024f1;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004024f1:
    QVariant::~QVariant(&local_58);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10040263a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10040263a:
  QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,0x1dca061);
  local_d0 = 1;
  QVariant::QVariant(&local_c8,4,&local_d0,0);
  FUN_10041e0f0(&local_b0,&local_b8,&local_c8);
  FUN_10041e170(&local_28,&local_b0);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004026ed;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004026ed:
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040272f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10040272f:
  QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,0x1df3429);
  local_108 = 2;
  QVariant::QVariant(&local_100,4,&local_108,0);
  FUN_10041e0f0(&local_e8,&local_f0,&local_100);
  FUN_10041e170(&local_28,&local_e8);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_19 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004027e2;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004027e2:
  QVariant::~QVariant(&local_100);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_19 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100402824;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100402824:
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

