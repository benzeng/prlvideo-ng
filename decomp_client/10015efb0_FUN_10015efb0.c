
undefined8
FUN_10015efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if ((param_5 & 0x2000) != 0) {
    FUN_10018c250(&local_40);
    lVar2 = local_40;
    QString::toUtf8();
    pQVar5 = local_48 + *(long *)(local_48 + 0x10);
    QString::toUtf8();
    pQVar4 = local_50;
    lVar1 = *(long *)(local_50 + 0x10);
    QString::toUtf8();
    uVar3 = _PrlVm_LinkedClone(lVar2,pQVar5,pQVar4 + lVar1,local_58 + *(long *)(local_58 + 0x10),
                               param_5);
    FUN_100188480(&local_60,param_2);
    uVar3 = FUN_10015c580(param_1,uVar3,0x7e9,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015f1f3;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10015f1f3:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015f223;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10015f223:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015f253;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10015f253:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015f287;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_10015f287;
  }
  FUN_10018c250(&local_68);
  lVar1 = local_68;
  QString::toUtf8();
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  pQVar4 = local_70 + *(long *)(local_70 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  uVar3 = _PrlVm_CloneEx(lVar1,pQVar4,local_78 + *(long *)(local_78 + 0x10),param_5);
  FUN_100188480(&local_80,param_2);
  uVar3 = FUN_10015c580(param_1,uVar3,0x7e9,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015f0c0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10015f0c0:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015f0f0;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10015f0f0:
  local_40 = local_68;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015f287;
    }
    QArrayData::deallocate(local_70,1,8);
    local_40 = local_68;
  }
LAB_10015f287:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

