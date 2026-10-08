
undefined8 FUN_100216ce0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = FUN_10079c3d0();
  CAppliance::getApplianceId();
  lVar2 = FUN_10079cbf0(uVar1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100216d63;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100216d63:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_100794960();
  CAppliance::getApplianceId();
  FUN_1007964b0(&local_48,uVar3,&local_50);
  lVar4 = FUN_10015cb20(uVar1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100216dfd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100216dfd:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100216e2d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100216e2d:
  if (lVar4 == 0) {
    return 0x80000009;
  }
  if (lVar2 == 0) {
    uVar1 = FUN_10018c280(lVar4);
    local_70 = 3;
    local_68 = local_68 & 0xffffff00;
    uStack_6c = 0;
    uStack_64 = 0xffff;
    local_60 = 0;
    uStack_5c = uStack_5c & 0xffffff00;
    FUN_10031a440(uVar1,1);
    goto LAB_100216efe;
  }
  FUN_100188480(&local_58,lVar4);
  FUN_100356bd0(&local_58,lVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100216e8a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100216e8a:
  QWidget::close();
  FUN_100192d60(lVar4,0x800,0x26f,0,0);
LAB_100216efe:
  uVar3 = FUN_100794960();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  CAppliance::getApplianceId();
  FUN_1007958e0(uVar3,uVar1,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return 0;
}

