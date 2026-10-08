
void FUN_1007b9e90(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  int *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b0 [16];
  QArrayData *local_a0;
  int *local_98;
  undefined8 uStack_90;
  int *local_88;
  int *local_80;
  undefined4 local_78;
  undefined1 local_74;
  long local_70;
  int *local_68;
  undefined8 uStack_60;
  int *local_58;
  int *local_50;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  undefined1 local_31;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206a40);
  if (lVar3 == 0) {
    return;
  }
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uVar4 = FUN_10018f4e0(lVar5);
  local_68 = *(int **)(lVar3 + 0x18);
  uStack_60 = *(undefined8 *)(lVar3 + 0x20);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + 1;
    local_31 = *local_68 != 0;
    UNLOCK();
  }
  local_58 = *(int **)(lVar3 + 0x28);
  if (1 < *local_58 + 1U) {
    LOCK();
    *local_58 = *local_58 + 1;
    local_31 = *local_58 != 0;
    UNLOCK();
  }
  local_50 = *(int **)(lVar3 + 0x30);
  if (1 < *local_50 + 1U) {
    LOCK();
    *local_50 = *local_50 + 1;
    local_31 = *local_50 != 0;
    UNLOCK();
  }
  local_44 = *(undefined1 *)(lVar3 + 0x3c);
  local_48 = *(undefined4 *)(lVar3 + 0x38);
  FUN_100036740(&local_40);
  uVar1 = QVariant::toUInt(*(bool **)(local_40 + 0x10 + (long)*(int *)(local_40 + 8) * 8));
  local_98 = *(int **)(lVar3 + 0x18);
  uStack_90 = *(undefined8 *)(lVar3 + 0x20);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + 1;
    local_31 = *local_98 != 0;
    UNLOCK();
  }
  local_88 = *(int **)(lVar3 + 0x28);
  if (1 < *local_88 + 1U) {
    LOCK();
    *local_88 = *local_88 + 1;
    local_31 = *local_88 != 0;
    UNLOCK();
  }
  local_80 = *(int **)(lVar3 + 0x30);
  if (1 < *local_80 + 1U) {
    LOCK();
    *local_80 = *local_80 + 1;
    local_31 = *local_80 != 0;
    UNLOCK();
  }
  local_74 = *(undefined1 *)(lVar3 + 0x3c);
  local_78 = *(undefined4 *)(lVar3 + 0x38);
  FUN_100036740(&local_70,lVar3 + 0x40);
  uVar2 = QVariant::toUInt(*(bool **)(local_70 + 0x18 + (long)*(int *)(local_70 + 8) * 8));
  lVar6 = FUN_1007c65b0(uVar4,uVar1,uVar2);
  FUN_100291b30(&local_98);
  FUN_100291b30(&local_68);
  if (lVar6 == 0) {
    return;
  }
  if (param_2 < 0) {
    FUN_1007c4730(lVar6,lVar5);
    return;
  }
  local_d8 = *(int **)(lVar3 + 0x18);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x20);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + 1;
    local_31 = *local_d8 != 0;
    UNLOCK();
  }
  local_c8 = *(int **)(lVar3 + 0x28);
  if (1 < *local_c8 + 1U) {
    LOCK();
    *local_c8 = *local_c8 + 1;
    local_31 = *local_c8 != 0;
    UNLOCK();
  }
  local_c0 = *(int **)(lVar3 + 0x30);
  if (1 < *local_c0 + 1U) {
    LOCK();
    *local_c0 = *local_c0 + 1;
    local_31 = *local_c0 != 0;
    UNLOCK();
  }
  local_b4 = *(undefined1 *)(lVar3 + 0x3c);
  local_b8 = *(undefined4 *)(lVar3 + 0x38);
  FUN_100036740(local_b0,lVar3 + 0x40);
  QVariant::toString();
  lVar3 = FUN_1007ba3d0(lVar6,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ba12f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007ba12f:
  FUN_100291b30(&local_d8);
  if (lVar3 != 0) {
    FUN_1007b93c0(param_1,lVar3,lVar6);
  }
  return;
}

