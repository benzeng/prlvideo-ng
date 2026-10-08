
undefined8 FUN_100197bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = 0;
  iVar2 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 0x40),6,&local_38);
  uVar3 = 0;
  if (iVar2 != 0) goto LAB_100197da4;
  local_48 = (QArrayData *)QString::fromAscii_helper("Hdd",3);
  FUN_10019a4f0(&local_40,param_2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100197c81;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100197c81:
  lVar1 = local_38;
  QString::toUtf8();
  iVar2 = _PrlVmDev_FromString(lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100197cd5;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100197cd5:
  lVar1 = local_38;
  uVar3 = 0;
  if (iVar2 == 0) {
    QString::toUtf8();
    iVar2 = _PrlVmDevHd_SetPassword(lVar1,local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100197d33;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100197d33:
    uVar3 = 0;
    if (iVar2 == 0) {
      uVar3 = _PrlVmDevHd_CheckPassword(local_38,0);
      local_60 = 0x80000000;
      local_68.field7 = 0;
      uVar3 = FUN_100191960(param_1,uVar3,0x85e,&local_68);
      QVariant::~QVariant((QVariant *)&local_68);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100197da4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100197da4:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

