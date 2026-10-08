
int * FUN_100371ce0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   int param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  size_t sVar5;
  int iVar6;
  undefined1 local_140 [32];
  ulong local_120;
  int local_118;
  QString local_110 [2];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  QString local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [48];
  QArrayData *local_90;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  param_1[3] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined **)(param_1 + 0xc) = PTR_shared_null_1021e1288;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  puVar3 = PTR_s_Console__1__2__3__1022738a0;
  iVar6 = -1;
  if (PTR_s_Console__1__2__3__1022738a0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_Console__1__2__3__1022738a0);
    iVar6 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  QString::arg(&local_68,&local_70,param_3,0,0x20);
  QString::arg(&local_60,&local_68,param_4,0,10,0x20);
  QString::number((int)&local_78,param_5);
  QString::arg(&local_58,&local_60,&local_78,0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100371e49;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100371e49:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100371e79;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100371e79:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100371ea9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100371ea9:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100371ed9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100371ed9:
  if (param_6 != (undefined1 *)0x0) {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1def0ab);
    QString::append(&local_80);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100371f54;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100371f54:
    uVar4 = QSettings::contains(local_50);
    *param_6 = uVar4;
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100371f93;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
  }
LAB_100371f93:
  FUN_100371aa0(local_c0,param_2,param_5);
  FUN_100372500(&local_100);
  param_1[10] = local_d8;
  *(undefined8 *)(param_1 + 8) = local_e0;
  *(undefined8 *)(param_1 + 6) = local_e8;
  *(undefined8 *)(param_1 + 4) = local_f0;
  *(undefined8 *)(param_1 + 2) = local_f8;
  *(undefined8 *)param_1 = local_100;
  QString::operator=((QString *)(param_1 + 0xc),&local_d0);
  *(undefined8 *)(param_1 + 0xe) = local_c8;
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100372058;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100372058:
  if (param_5 == 4) {
    FUN_100371ce0(local_140,param_2,param_3,param_4,1,0);
    if ((local_120 & 2) == 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1[2] = (int)uVar2 + ((int)local_140._0_8_ - (int)uVar1);
      *param_1 = (int)local_140._0_8_;
      param_1[3] = (int)((ulong)uVar2 >> 0x20) +
                   (SUB84(local_140._0_8_,4) - (int)((ulong)uVar1 >> 0x20));
      param_1[1] = SUB84(local_140._0_8_,4);
      uVar1 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      param_1[6] = (int)uVar2 + ((int)local_140._16_8_ - (int)uVar1);
      param_1[4] = (int)local_140._16_8_;
      param_1[7] = (int)((ulong)uVar2 >> 0x20) +
                   (SUB84(local_140._16_8_,4) - (int)((ulong)uVar1 >> 0x20));
      param_1[5] = SUB84(local_140._16_8_,4);
    }
    else {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1[2] = (int)uVar2 - (int)uVar1;
      *param_1 = 0;
      param_1[3] = (int)((ulong)uVar2 >> 0x20) - (int)((ulong)uVar1 >> 0x20);
      param_1[1] = 0;
    }
    param_1[9] = (int)(local_120 >> 0x20);
    param_1[10] = local_118;
    QString::operator=((QString *)(param_1 + 0xc),local_110);
    if (*(int *)local_110[0].field0_0x0 != -1) {
      if (*(int *)local_110[0].field0_0x0 != 0) {
        LOCK();
        *(int *)local_110[0].field0_0x0 = *(int *)local_110[0].field0_0x0 + -1;
        local_31 = *(int *)local_110[0].field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10037218e;
      }
      QArrayData::deallocate((QArrayData *)local_110[0].field0_0x0,2,8);
    }
  }
LAB_10037218e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003721c4;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003721c4:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003721f4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003721f4:
  QSettings::~QSettings((QSettings *)local_50);
  return param_1;
}

