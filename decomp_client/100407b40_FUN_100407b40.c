
void FUN_100407b40(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_148;
  QVariant local_140;
  QArrayData *local_130;
  QArrayData *local_128;
  QVariant local_120;
  undefined8 local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  undefined8 local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  undefined8 local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QVariant local_78;
  undefined8 local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  int *local_30;
  long local_28;
  undefined1 local_19;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  plVar4 = (long *)FUN_1001766b0(uVar3);
  local_28 = *plVar4;
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  local_30 = (int *)PTR_shared_null_1021e15e8;
  cVar1 = FUN_100615c20(&local_28,0xd,0);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s_Suspend_10226edc8);
    local_68 = 1;
    QVariant::QVariant(&local_60,4,&local_68,0);
    FUN_10041e0f0(&local_48,&local_50,&local_60);
    FUN_10041e170(&local_30,&local_48);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100407c40;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100407c40:
    QVariant::~QVariant(&local_60);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100407c79;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100407c79:
  QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,(int)PTR_s_Shut_Down_10226edd0);
  local_a0 = 4;
  QVariant::QVariant(&local_98,4,&local_a0,0);
  FUN_10041e0f0(&local_80,&local_88,&local_98);
  FUN_10041e170(&local_30,&local_80);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100407d1a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100407d1a:
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100407d56;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100407d56:
  QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Force_to_stop_10226edd8);
  local_d8 = 0;
  QVariant::QVariant(&local_d0,4,&local_d8,0);
  FUN_10041e0f0(&local_b8,&local_c0,&local_d0);
  FUN_10041e170(&local_30,&local_b8);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100407e0c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100407e0c:
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_19 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100407e4e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100407e4e:
  uVar3 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1003be980(uVar3);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Keep_running_in_background_10226ede8);
    local_110 = 5;
    QVariant::QVariant(&local_108,4,&local_110,0);
    FUN_10041e0f0(&local_f0,&local_f8,&local_108);
    FUN_10041e170(&local_30,&local_f0);
    QVariant::~QVariant(&local_e8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_19 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100407f1d;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100407f1d:
    QVariant::~QVariant(&local_108);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_19 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100407f5f;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
LAB_100407f5f:
  QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Ask_me_what_to_do_10226ede0);
  local_148 = 2;
  QVariant::QVariant(&local_140,4,&local_148,0);
  FUN_10041e0f0(&local_128,&local_130,&local_140);
  FUN_10041e170(&local_30,&local_128);
  QVariant::~QVariant(&local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_19 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100408015;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100408015:
  QVariant::~QVariant(&local_140);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100408057;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100408057:
  FUN_1003fa820();
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_19 = *local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040808d;
    }
    FUN_10041b480(&local_30,local_30);
  }
LAB_10040808d:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

