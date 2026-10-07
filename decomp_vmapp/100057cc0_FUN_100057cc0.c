
void FUN_100057cc0(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  QString QVar7;
  undefined8 in_stack_00000008;
  QString *in_stack_00000020;
  int in_stack_00000030;
  QArrayData *local_8e0;
  QString local_8d8;
  QString local_8d0;
  QString local_8c8;
  undefined1 local_8c0 [8];
  int local_8b8;
  long local_8b4;
  undefined8 local_8a4;
  undefined4 local_89c;
  undefined2 local_898 [1024];
  undefined4 local_98;
  int local_94;
  undefined1 local_29;
  
  iVar3 = (int)((ulong)in_stack_00000008 >> 0x20);
  iVar1 = iVar3;
  local_8b4 = param_1;
  if (((int)in_stack_00000008 == 9) || (iVar1 = local_8b8, (int)in_stack_00000008 != 5))
  goto LAB_100057f7a;
  local_8c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_8b8 = iVar3;
  if (in_stack_00000030 == 5) {
    QString::operator=(&local_8c8,in_stack_00000020);
  }
  else if (in_stack_00000030 == 0) {
    QString::operator=(&local_8c8,in_stack_00000020);
    uVar2 = QDir::separator();
    local_8d0.field0_0x0 = local_8c8.field0_0x0;
    if (1 < *(uint *)local_8c8.field0_0x0 + 1) {
      LOCK();
      *(uint *)local_8c8.field0_0x0 = *(uint *)local_8c8.field0_0x0 + 1;
      local_29 = *(uint *)local_8c8.field0_0x0 != 0;
      UNLOCK();
    }
    uVar6 = *(uint *)(local_8c8.field0_0x0 + 4);
    if ((1 < *(uint *)local_8c8.field0_0x0) ||
       ((*(uint *)(local_8c8.field0_0x0 + 8) & 0x7fffffff) < uVar6 + 2)) {
      QString::reallocData((uint)&local_8d0,SUB41(uVar6 + 2,0));
      uVar6 = *(uint *)(local_8d0.field0_0x0 + 4);
    }
    *(uint *)(local_8d0.field0_0x0 + 4) = uVar6 + 1;
    *(undefined2 *)
     (local_8d0.field0_0x0 + (long)(int)uVar6 * 2 + *(long *)(local_8d0.field0_0x0 + 0x10)) = uVar2;
    *(undefined2 *)
     (local_8d0.field0_0x0 +
     (long)(int)*(uint *)(local_8d0.field0_0x0 + 4) * 2 + *(long *)(local_8d0.field0_0x0 + 0x10)) =
         0;
    QString::operator=((QString *)(param_1 + 0x18),&local_8d0);
    if (*(int *)local_8d0.field0_0x0 != -1) {
      if (*(int *)local_8d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_8d0.field0_0x0 = *(int *)local_8d0.field0_0x0 + -1;
        local_29 = *(int *)local_8d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100057e24;
      }
      QArrayData::deallocate((QArrayData *)local_8d0.field0_0x0,2,8);
    }
LAB_100057e24:
    local_8e0 = (QArrayData *)local_8c8.field0_0x0;
    if (1 < *(uint *)local_8c8.field0_0x0 + 1) {
      LOCK();
      *(uint *)local_8c8.field0_0x0 = *(uint *)local_8c8.field0_0x0 + 1;
      local_29 = *(uint *)local_8c8.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_10005b110(&local_8d8,&local_8e0);
    QString::operator=(&local_8c8,&local_8d8);
    if (*(int *)local_8d8.field0_0x0 != -1) {
      if (*(int *)local_8d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_8d8.field0_0x0 = *(int *)local_8d8.field0_0x0 + -1;
        local_29 = *(int *)local_8d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100057e9f;
      }
      QArrayData::deallocate((QArrayData *)local_8d8.field0_0x0,2,8);
    }
LAB_100057e9f:
    if (*(int *)local_8e0 != -1) {
      if (*(int *)local_8e0 != 0) {
        LOCK();
        *(int *)local_8e0 = *(int *)local_8e0 + -1;
        local_29 = *(int *)local_8e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100057ed5;
      }
      QArrayData::deallocate(local_8e0,2,8);
    }
  }
LAB_100057ed5:
  if (local_8b8 == 0) {
    local_8a4 = 0;
    local_89c = 0;
    local_98 = 0;
    local_94 = in_stack_00000030;
    pvVar4 = (void *)QString::utf16();
    QVar7.field0_0x0 = local_8c8.field0_0x0;
    _memcpy(local_898,pvVar4,(long)(int)*(uint *)(local_8c8.field0_0x0 + 4) * 2 + 2);
  }
  else {
    local_898[0] = 0;
    QVar7.field0_0x0 = local_8c8.field0_0x0;
  }
  iVar1 = local_8b8;
  if (*(uint *)QVar7.field0_0x0 != 0xffffffff) {
    if (*(uint *)QVar7.field0_0x0 != 0) {
      LOCK();
      *(uint *)QVar7.field0_0x0 = *(uint *)QVar7.field0_0x0 - 1;
      local_29 = *(uint *)QVar7.field0_0x0 != 0;
      UNLOCK();
      QVar7.field0_0x0 = local_8c8.field0_0x0;
      if ((bool)local_29) goto LAB_100057f7a;
    }
    QArrayData::deallocate((QArrayData *)QVar7.field0_0x0,2,8);
    iVar1 = local_8b8;
  }
LAB_100057f7a:
  local_8b8 = iVar1;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar5 = FUN_1002a6120(*(long *)(param_1 + 0x68),1,1);
    FUN_1002a5a50(uVar5,0,local_8c0,0x894);
    FUN_1004c07d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x68),0);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_10005aca0(&stack0x00000008);
  return;
}

