
undefined8 * FUN_100021350(undefined8 *param_1)

{
  undefined *puVar1;
  QVariant local_110 [16];
  QVariant local_100 [16];
  undefined *local_f0;
  QArrayData *local_e8;
  QVariant local_e0 [16];
  QVariant local_d0 [16];
  undefined *local_c0;
  QArrayData *local_b8;
  QVariant local_b0 [16];
  QVariant local_a0 [16];
  undefined *local_90;
  QArrayData *local_88;
  QVariant local_80 [16];
  QVariant local_70 [16];
  undefined *local_60;
  QArrayData *local_58;
  QVariant local_50 [16];
  QVariant local_40 [16];
  undefined *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  *param_1 = PTR_shared_null_100ba20d8;
  local_28 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AutoStart",0x1a);
  puVar1 = PTR_shared_null_100ba2188;
  local_30 = PTR_shared_null_100ba2188;
  QVariant::QVariant(local_40,0);
  FUN_1000225a0(&local_30,local_40);
  QVariant::QVariant(local_50,5);
  FUN_1000225a0(&local_30,local_50);
  FUN_100022340(param_1,&local_28,&local_30);
  QVariant::~QVariant(local_50);
  QVariant::~QVariant(local_40);
  FUN_100022290(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100021419;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100021419:
  local_58 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.WindowMode",0x1b);
  local_60 = puVar1;
  QVariant::QVariant(local_70,0);
  FUN_1000225a0(&local_60);
  QVariant::QVariant(local_80,0);
  FUN_1000225a0(&local_60,local_80);
  FUN_100022340(param_1,&local_58,&local_60);
  QVariant::~QVariant(local_80);
  QVariant::~QVariant(local_70);
  FUN_100022290(&local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000214bd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000214bd:
  local_88 = (QArrayData *)QString::fromAscii_helper("Settings.Runtime.ActionOnStop",0x1d);
  local_90 = puVar1;
  QVariant::QVariant(local_a0,1);
  FUN_1000225a0(&local_90,local_a0);
  QVariant::QVariant(local_b0,1);
  FUN_1000225a0(&local_90,local_b0);
  FUN_100022340(param_1,&local_88,&local_90);
  QVariant::~QVariant(local_b0);
  QVariant::~QVariant(local_a0);
  FUN_100022290(&local_90);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100021588;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100021588:
  local_b8 = (QArrayData *)QString::fromAscii_helper("Settings.Shutdown.AutoStop",0x1a);
  local_c0 = puVar1;
  QVariant::QVariant(local_d0,1);
  FUN_1000225a0(&local_c0,local_d0);
  QVariant::QVariant(local_e0,1);
  FUN_1000225a0(&local_c0,local_e0);
  FUN_100022340(param_1,&local_b8,&local_c0);
  QVariant::~QVariant(local_e0);
  QVariant::~QVariant(local_d0);
  FUN_100022290(&local_c0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10002165f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10002165f:
  local_e8 = (QArrayData *)QString::fromAscii_helper("Settings.Shutdown.OnVmWindowClose",0x21);
  local_f0 = puVar1;
  QVariant::QVariant(local_100,1);
  FUN_1000225a0(&local_f0,local_100);
  QVariant::QVariant(local_110,5);
  FUN_1000225a0(&local_f0,local_110);
  FUN_100022340(param_1,&local_e8,&local_f0);
  QVariant::~QVariant(local_110);
  QVariant::~QVariant(local_100);
  FUN_100022290(&local_f0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return param_1;
}

