
undefined8 FUN_1002162d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100794960();
  CAppliance::getApplianceId();
  FUN_1007964b0(&local_38,uVar2,&local_40);
  lVar3 = FUN_10015cb20(uVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021637f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10021637f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002163af;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002163af:
  if (lVar3 == 0) {
    return 0x80000009;
  }
  uVar4 = FUN_10079c3d0();
  CAppliance::getApplianceId();
  lVar5 = FUN_10079cbf0(uVar4,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021642d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10021642d:
  if (lVar5 == 0) {
    return 0;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper("1onTaskOpenVmDesktopFinished()",0x1e);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002164b6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002164b6:
  FUN_100188480(&local_a0,lVar3);
  cVar1 = FUN_100356ac0(&local_a0,local_80);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021650d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10021650d:
  if (cVar1 == '\0') {
    QVariant::~QVariant(local_60);
    if (local_80[0] != (int *)0x0) {
      LOCK();
      *local_80[0] = *local_80[0] + -1;
      local_29 = *local_80[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
        operator_delete(local_80[0]);
      }
    }
    uVar4 = 0x80000009;
  }
  else {
    CAbstractTask::setWaitForSubTaskCompletion();
    QVariant::~QVariant(local_60);
    uVar4 = 0;
    if (local_80[0] != (int *)0x0) {
      LOCK();
      *local_80[0] = *local_80[0] + -1;
      local_29 = *local_80[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (uVar4 = 0, local_80[0] != (int *)0x0)) {
        operator_delete(local_80[0]);
      }
    }
  }
  return uVar4;
}

