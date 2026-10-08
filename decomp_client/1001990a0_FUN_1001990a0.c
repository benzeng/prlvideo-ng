
undefined8 FUN_1001990a0(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  Data_conflict local_e0;
  undefined4 local_d8;
  long local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  long local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  long local_88;
  Data_conflict local_80;
  undefined4 local_78;
  long local_70;
  Data_conflict local_68;
  undefined4 local_60;
  long local_58;
  Data_conflict local_50;
  undefined4 local_48;
  long local_40;
  undefined1 local_31;
  
  uVar2 = 0;
  if (0x40e < param_2) {
    if (param_2 != 0x40f) {
      return 0;
    }
    uVar2 = FUN_1001996e0(param_1);
    return uVar2;
  }
  switch(param_2) {
  case 0x3ea:
    FUN_10018c250(&local_40,param_1);
    uVar2 = _PrlVm_Stop(local_40,0);
    local_48 = 0x80000000;
    local_50.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3ea,&local_50);
    QVariant::~QVariant((QVariant *)&local_50);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x3ee:
    FUN_10018c250(&local_d0,param_1);
    uVar2 = _PrlVm_Reset(local_d0);
    local_d8 = 0x80000000;
    local_e0.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3ee,&local_e0);
    QVariant::~QVariant((QVariant *)&local_e0);
    if (local_d0 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x3ef:
    FUN_10018c250(&local_58,param_1);
    uVar2 = _PrlVm_Pause(local_58,0);
    local_60 = 0x80000000;
    local_68.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3ef,&local_68);
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x3f0:
    FUN_10018c250(&local_70,param_1);
    uVar2 = _PrlVm_Suspend(local_70);
    local_78 = 0x80000000;
    local_80.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3f0,&local_80);
    QVariant::~QVariant((QVariant *)&local_80);
    if (local_70 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x3f3:
    FUN_10018c250(&local_88,param_1);
    lVar1 = local_88;
    QString::toUtf8();
    if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f)
      ;
    }
    pQVar3 = local_90 + *(long *)(local_90 + 0x10);
    QString::toUtf8();
    if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f)
      ;
    }
    uVar2 = _PrlVm_CreateSnapshot(lVar1,pQVar3,local_98 + *(long *)(local_98 + 0x10));
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3f3,&local_a8);
    QVariant::~QVariant((QVariant *)&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001993b0;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1001993b0:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001993e6;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1001993e6:
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x3f4:
    FUN_10018c250(&local_b0,param_1);
    lVar1 = local_b0;
    QString::toUtf8();
    if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f)
      ;
    }
    uVar2 = _PrlVm_SwitchToSnapshot(lVar1,local_b8 + *(long *)(local_b8 + 0x10));
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    uVar2 = FUN_100191960(param_1,uVar2,0x3f4,&local_c8);
    QVariant::~QVariant((QVariant *)&local_c8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001994d2;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_1001994d2:
    if (local_b0 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar2;
}

